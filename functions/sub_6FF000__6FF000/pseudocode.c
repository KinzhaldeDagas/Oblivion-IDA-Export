NiObject *sub_6FF000()
{
  NiObject *v0; // eax

  v0 = (NiObject *)FormHeapAlloc(0x3Cu); /*0x6ff023*/
  if ( v0 ) /*0x6ff039*/
    return sub_6FEEE0(v0); /*0x6ff03d*/
  else
    return 0; /*0x6ff052*/
}
