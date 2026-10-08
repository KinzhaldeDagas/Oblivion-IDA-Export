int sub_8CABF0()
{
  int result; // eax

  sub_91E980(); /*0x8cabf0*/
  sub_91E760(); /*0x8cabf5*/
  sub_91E090(); /*0x8cabfa*/
  sub_91DB30(); /*0x8cabff*/
  sub_91D250(); /*0x8cac04*/
  sub_91CBE0(); /*0x8cac09*/
  sub_91BF90(); /*0x8cac0e*/
  sub_91B680(); /*0x8cac13*/
  sub_91AC40(); /*0x8cac18*/
  sub_919FB0(); /*0x8cac1d*/
  sub_919440(); /*0x8cac22*/
  sub_919030(); /*0x8cac27*/
  result = sub_947C50((LPCRITICAL_SECTION *)unk_BA950C, "WorldMemory", (int)sub_918D10); /*0x918e00*/
  unk_BA8410 = result; /*0x918e05*/
  return result; /*0x918e0a*/
}
