NiObject *__stdcall sub_6EC530(int a1, char a2, int a3, float a4, unsigned __int8 a5)
{
  NiObject *v5; // eax

  v5 = (NiObject *)FormHeapAlloc(0x34u); /*0x6ec553*/
  if ( v5 ) /*0x6ec569*/
    return sub_6EB460(v5, a2, a4, a5); /*0x6ec57f*/
  else
    return 0; /*0x6ec596*/
}
