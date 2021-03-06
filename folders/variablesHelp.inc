"{\\rtf1\\ansi\\ansicpg1252\\deff0\\deflang1033\\deflangfe1033{\\fonttbl{\\f0\\fswiss\\fprq2\\fcharset0 Arial;}}\n"
"{\\*\\generator Msftedit 5.41.21.2500;}\\viewkind4\\uc1\\pard\\nowidctlpar\\ri-1686\\f0\\fs20 Don't forget to click on \\i Apply\\i0  to save the changes. If you don't then the changes won't\n"
"be saved to the database, they will only be valid for this session.\\par"
"\\pard\\nowidctlpar\\ul\\b\\par\n"
"Variable string\\ulnone\\b0\\tab\\tab\\ul\\b What it expands to:\\ulnone\\b0\\par\n"
"%miranda_userdata%\\tab Expands to the private profile data directory.\\par"
"%miranda_path%\\tab Expands to your miranda path (e.g: c:\\\\program files\\\\miranda im).\\par"
"%profile_path%\\tab\\tab Expands to your profile path - the value found in mirandaboot.ini,\\par"
"\\tab\\tab\\tab\\ul ProfileDir\\ulnone  section (usually inside miranda's folder).\\par"
"\\pard\\nowidctlpar\\ri-696 %current_profile%\\tab Expands to your current profile name without the extenstion.\\par"
"\\tab\\tab\\tab (e.g.\\b default\\b0  if your your profile is \\i default.dat\\i0 ).\\par"
"\\par\n"
"\\ul\\b Environment variables\\par\n"
"\\ulnone\\b0 The plugin can also expand environment variables; the variables are specified like in any other\n"
"program that can use environment variables, i.e. %<env variable>%.\n\n"
"\\b Note\\b0 : Environment variables are expanded before any Miranda variables. So if you have, for\n"
"example, %profile_path% defined as a system variable then it will be expanded to that value\\n"
"instead of expanding to Miranda\\rquote s profile path.\\par\n"
"\\ul\\b Examples:\\par\n"
"\\ulnone\\b0 If the value for the ProfileDir inside \\i mirandaboot.ini\\i0 , \\ul ProfileDir\\ulnone  section is '.\\\\profiles', current\n"
"profile is 'default.dat' and miranda's path is 'c:\\\\program files\\\\miranda im' then:\\par\n"
"\\b %miranda_path%\\b0  \\tab\\tab\\tab will expand to 'c:\\\\program files\\\\miranda im'\\par"
"\\b %profile_path%\\b0  \\tab\\tab\\tab will expand to 'c:\\\\program files\\\\miranda im\\\\profiles'\\par"
"\\b %current_profile%\\b0\\tab\\tab\\tab will expand to 'default'\\par"
"\\b %temp%\\b0\\tab\\tab\\tab\\tab will expand to the temp folder of the current user.\\par"
"\\b %profile_path%\\\\%current_profile%\\tab\\b0 will expand to 'c:\\\\program files\\\\miranda im\\\\profiles\\\\default'\\par"
"\\b %miranda_path%\\\\plugins\\\\config\\b0\\tab will expand to 'c:\\\\program files\\\\miranda im\\\\plugins\\\\config'\\par"
"\\b '   %miranda_path%\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\     '\\b0\\tab will expand to 'c:\\\\program files\\\\miranda im'\\par\n"
"notice that the spaces at the beginning and the end of the string are trimmed, as well as the last \\\\\\par\n"
"}\n"
"\n"
"\n"
