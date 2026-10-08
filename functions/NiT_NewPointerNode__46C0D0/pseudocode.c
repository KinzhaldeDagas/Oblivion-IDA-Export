int NiT_NewPointerNode()
{
  int result; // eax

  result = FormHeapAlloc(0xCu); /*0x46c0d2*/
  *(_DWORD *)(result + 8) = 0; /*0x46c0da*/
  return result; /*0x46c0e1*/
}
