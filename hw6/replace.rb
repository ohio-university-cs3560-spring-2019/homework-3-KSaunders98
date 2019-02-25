str = STDIN.read

#preserves case of characters, including replaced characters
str = str.gsub(/\b[fF]\w+/) {
	|m|
	first = ""
	if m[0] == "f" then
		first = "g"
	else
		first = "G"
	end
	second = ""
	if m[1] == m[1].upcase then
		second = "H"
	else
		second = "h"
	end
	first + second + m[1, m.length - 1]
}
str = str.gsub(/\B[sS][hH]\b/) {
	|m|
	first = ""
	if m[0] == "s" then
		first = "t"
	else
		first = "T"
	end
	second = ""
	if m[1] == "h" then
		second = "i"
	else
		second = "I"
	end
	first + second
}
str = str.gsub(/\Bi\B/, 'o')
str = str.gsub(/\BI\B/, 'O')

puts str
