int sub_784840()
{
  int result; // eax

  result = FormHeapAlloc(0x30u);
  if ( result )
    *(_DWORD *)result = 0;
  if ( result != 0xFFFFFFFC )
    *(_DWORD *)(result + 4) = 0;
  if ( result != 0xFFFFFFF8 )
    *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 0x2C) = 1;
  *(_BYTE *)(result + 0x2D) = 0;
  return result;
}
