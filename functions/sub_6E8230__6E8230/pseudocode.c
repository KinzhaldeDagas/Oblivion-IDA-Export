char __thiscall sub_6E8230(int this, float a2, int a3, bool *a4)
{
  double v5; // st7
  char v6; // al
  int v8; // eax
  float v9; // ecx
  char v10; // dl
  int v11; // edi
  int v12; // eax
  char v13; // al

  v5 = a2; /*0x6e8241*/
  if ( a2 == *(float *)(this + 8) ) /*0x6e8246*/
  {
    v6 = *(_BYTE *)(this + 0xC); /*0x6e8248*/
    if ( v6 == byte_A7C6AC ) /*0x6e8253*/
    {
      *a4 = 0; /*0x6e8259*/
      return 0; /*0x6e825c*/
    }
    else
    {
      *a4 = v6 != 0; /*0x6e826c*/
      return 1; /*0x6e826e*/
    }
  }
  else
  {
    v8 = *(_DWORD *)(this + 0x10); /*0x6e8275*/
    if ( v8 ) /*0x6e827a*/
    {
      v9 = *(float *)(v8 + 8); /*0x6e827c*/
      v10 = *(_BYTE *)(v8 + 0x14); /*0x6e8281*/
      v11 = *(_DWORD *)(v8 + 0x10); /*0x6e8285*/
      v12 = *(_DWORD *)(v8 + 0xC); /*0x6e8288*/
      if ( v9 != 0.0 ) /*0x6e828f*/
      {
        v5 = a2; /*0x6e82a6*/
        *(_BYTE *)(this + 0xC) = sub_6BDBA0(a2, v12, v11, v9, (int *)(this + 0x14), v10) != 0; /*0x6e82b2*/
      }
    }
    v13 = *(_BYTE *)(this + 0xC); /*0x6e82b6*/
    if ( v13 == byte_A7C6AC ) /*0x6e82bf*/
    {
      *a4 = 0; /*0x6e82c7*/
      return 0; /*0x6e82ca*/
    }
    else
    {
      *a4 = v13 != 0; /*0x6e82da*/
      *(float *)(this + 8) = v5; /*0x6e82dc*/
      return 1; /*0x6e82df*/
    }
  }
}
