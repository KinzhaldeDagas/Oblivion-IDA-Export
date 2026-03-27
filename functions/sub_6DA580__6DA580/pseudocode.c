char __thiscall sub_6DA580(int this, float a2, int a3, _DWORD *a4)
{
  double v5; // st7
  int v7; // eax
  int v8; // ecx
  unsigned __int8 v9; // dl
  int v10; // edi
  int v11; // eax
  _DWORD *v12; // eax
  int v13[3]; // [esp+24h] [ebp-Ch] BYREF

  v5 = a2;
  if ( a2 == *(float *)(this + 8) )
  {
    *a4 = *(_DWORD *)(this + 0xC);
    a4[1] = *(_DWORD *)(this + 0x10);
    a4[2] = *(_DWORD *)(this + 0x14);
    if ( *(float *)&dword_B24FC8 == *(float *)(this + 0xC)
      && *(float *)&dword_B24FCC == *(float *)(this + 0x10)
      && *(float *)&dword_B24FD0 == *(float *)(this + 0x14) )
    {
      return 0;
    }
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x18);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      v9 = *(_BYTE *)(v7 + 0x14);
      v10 = *(_DWORD *)(v7 + 0x10);
      v11 = *(_DWORD *)(v7 + 0xC);
      if ( v8 )
      {
        v12 = sub_6BBBA0(v13, a2, v11, v10, v8, (int *)(this + 0x1C), v9);
        v5 = a2;
        *(_DWORD *)(this + 0xC) = *v12;
        *(_DWORD *)(this + 0x10) = v12[1];
        *(_DWORD *)(this + 0x14) = v12[2];
      }
    }
    if ( *(float *)&dword_B24FC8 == *(float *)(this + 0xC)
      && *(float *)&dword_B24FCC == *(float *)(this + 0x10)
      && *(float *)&dword_B24FD0 == *(float *)(this + 0x14) )
    {
      return 0;
    }
    *a4 = *(_DWORD *)(this + 0xC);
    a4[1] = *(_DWORD *)(this + 0x10);
    a4[2] = *(_DWORD *)(this + 0x14);
    *(float *)(this + 8) = v5;
  }
  return 1;
}
