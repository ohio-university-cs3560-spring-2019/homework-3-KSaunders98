str = STDIN.read

#preserves case of characters, including replaced characters
str = str.gsub(/\b[fF]\S+/) {
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
str = str.gsub(/(\S+)[sS][hH]\b/) {
	|m|
	first = ""
	if m[m.length - 2] == "s" then
		first = "t"
	else
		first = "T"
	end
	second = ""
	if m[m.length - 1] == "h" then
		second = "i"
	else
		second = "I"
	end
	m[0, m.length - 2] + first + second
}
str = str.gsub(/(\S+)s[hH]\b/, '\1t')
str = str.gsub(/(\S+)S[Hh]\b/, '\1T')
str = str.gsub(/(?<=\w)i(?=\w)/, 'o')
str = str.gsub(/(?<=\w)I(?=\w)/, 'O')

puts str
