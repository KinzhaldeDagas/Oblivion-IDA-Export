char __thiscall sub_6E8230(int this, float a2, int a3, bool *a4)
{
  double v5; // st7
  char v6; // al
  int v8; // eax
  int v9; // ecx
  unsigned __int8 v10; // dl
  int v11; // edi
  int v12; // eax
  char v13; // al

  v5 = a2;
  if ( a2 == *(float *)(this + 8) )
  {
    v6 = *(_BYTE *)(this + 0xC);
    if ( v6 == byte_A7C6AC )
    {
      *a4 = 0;
      return 0;
    }
    else
    {
      *a4 = v6 != 0;
      return 1;
    }
  }
  else
  {
    v8 = *(_DWORD *)(this + 0x10);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      v10 = *(_BYTE *)(v8 + 0x14);
      v11 = *(_DWORD *)(v8 + 0x10);
      v12 = *(_DWORD *)(v8 + 0xC);
      if ( v9 )
      {
        v5 = a2;
        *(_BYTE *)(this + 0xC) = sub_6BDBA0(a2, v12, v11, v9, (int *)(this + 0x14), v10) != 0;
      }
    }
    v13 = *(_BYTE *)(this + 0xC);
    if ( v13 == byte_A7C6AC )
    {
      *a4 = 0;
      return 0;
    }
    else
    {
      *a4 = v13 != 0;
      *(float *)(this + 8) = v5;
      return 1;
    }
  }
}
