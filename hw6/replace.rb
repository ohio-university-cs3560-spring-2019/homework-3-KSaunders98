str = STDIN.read

str = str.gsub(/\bF\S+/) {
	|m|
	if m[1] == m[1].upcase then
		"GH" + m[1, m.length - 1]
	else
		"Gh" + m[1, m.length - 1]
	end
}
str = str.gsub(/(\S+)s[hH]\b/, '\1t')
str = str.gsub(/(\S+)S[Hh]\b/, '\1T')
str = str.gsub(/(\S+)i(\S+)/, '\1o\2')
str = str.gsub(/(\S+)I(\S+)/, '\1O\2')

puts str
