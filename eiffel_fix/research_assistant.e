class RESEARCH_ASSISTANT
inherit
	STUDENT rename addr as student_addr      -- field student_addr inherit the dorm semantics
		redefine get_student_addr, set_student_addr
	end
	FACULTY rename addr as faculty_addr      -- field faculty_addr inherit the lab  semantics
		redefine get_faculty_addr, set_faculty_addr
	end
	-- then select, NOTE: not need by SmartEiffel, but needed by GOBO and ISE compiler
	PERSON  select addr end

create {ANY}
   make

feature {ANY}
   get_student_addr():STRING is  do Result := student_addr end  -- override and read the renamed field!
   get_faculty_addr():STRING is  do Result := faculty_addr end  -- override and read the renamed field!
   set_student_addr(a:STRING) is do student_addr := a end   -- override and write to the renamed field!
   set_faculty_addr(a:STRING) is do faculty_addr := a end   -- override and write to the renamed field!

   print_ra() is  -- print out all 3 addresses
     do
       io.put_string(name +" has 3 addresses: <"+ addr +", "+ student_addr +", "+ faculty_addr + ">%N")
     end

   make is
     do
       name := "ResAssis"
       addr := "home"            -- the home semantics
       set_student_addr("dorm")  -- the dorm semantics
       set_faculty_addr("lab")   -- the lab  semantics
     end
end
