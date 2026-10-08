NiObject *sub_754C80()
{
  NiObject *v0; // eax

  v0 = (NiObject *)FormHeapAlloc(0xB0u); /*0x754c85*/
  if ( v0 ) /*0x754c8f*/
    return sub_754B20(v0, 1.0, 0, 0, 0, 0, 1.0); /*0x754ca5*/
  else
    return 0; /*0x754cab*/
}
