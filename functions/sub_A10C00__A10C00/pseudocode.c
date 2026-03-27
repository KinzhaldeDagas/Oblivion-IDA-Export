int sub_A10C00()
{
  dword_B42970 = sub_784840();
  *(_BYTE *)(dword_B42970 + 0x2D) = 1;
  *(_DWORD *)(dword_B42970 + 4) = dword_B42970;
  *(_DWORD *)dword_B42970 = dword_B42970;
  *(_DWORD *)(dword_B42970 + 8) = dword_B42970;
  dword_B42974 = 0;
  return atexit(sub_A26E30);
}
