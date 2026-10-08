void __cdecl sub_A26EB0()
{
  if ( OB_g_strError_010201A0.capacity >= 0x10 ) /*0xa26eb7*/
    FormHeapFree((unsigned int)OB_g_strError_010201A0.storage.heapData); /*0xa26ebf*/
  OB_g_strError_010201A0.capacity = 0xF; /*0xa26ec9*/
  OB_g_strError_010201A0.size = 0; /*0xa26ed3*/
  OB_g_strError_010201A0.storage.inlineData[0] = 0; /*0xa26ed8*/
}
