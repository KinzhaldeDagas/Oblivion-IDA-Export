char __cdecl sub_410BA0(const char *ArgList, char a2, char a3, char a4, char a5, float a6, char a7)
{
  int v10; // eax
  char v11; // bl

  if ( !a7 )
  {
    sub_410340();
    if ( byte_B33431 && (v10 = dword_B33440) != 0 )
    {
      dword_B33440 = 0;
      byte_B33431 = 0;
    }
    else
    {
      v10 = FormHeapAlloc(0x28u);
      if ( v10 )
      {
        *(_DWORD *)v10 = 0;
        *(float *)(v10 + 0x14) = 1.0;
        *(_DWORD *)(v10 + 4) = 0;
        *(_DWORD *)(v10 + 8) = 0;
        *(float *)(v10 + 0x18) = 0.0;
        *(_DWORD *)(v10 + 0xC) = 0;
        *(float *)(v10 + 0x1C) = 0.0;
        *(_DWORD *)(v10 + 0x10) = 0;
        *(_DWORD *)(v10 + 0x20) = 0;
        *(_BYTE *)(v10 + 0x24) = 0;
      }
      else
      {
        v10 = 0;
      }
    }
    ObjectPtr = v10;
  }
  v11 = sub_410A70((_DWORD *)ObjectPtr, ArgList, a2, a3, a4, a5, a6);
  sub_410B00();
  return v11;
}
