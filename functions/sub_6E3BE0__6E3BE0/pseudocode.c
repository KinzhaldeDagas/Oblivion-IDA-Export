bool __thiscall sub_6E3BE0(int this, float a2, int a3, _DWORD *a4)
{
  int v6; // eax
  int v7; // ecx
  unsigned __int8 v8; // dl
  int v9; // edi
  int v10; // eax
  float *v11; // eax
  float v12[4]; // [esp+24h] [ebp-10h] BYREF

  if ( a2 == *(float *)(this + 8) )
  {
    *a4 = *(_DWORD *)(this + 0xC);
    a4[1] = *(_DWORD *)(this + 0x10);
    a4[2] = *(_DWORD *)(this + 0x14);
    a4[3] = *(_DWORD *)(this + 0x18);
    return !sub_73B770((float *)(this + 0xC), (float *)&dword_B24FD4);
  }
  else
  {
    v6 = *(_DWORD *)(this + 0x1C);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      v8 = *(_BYTE *)(v6 + 0x14);
      v9 = *(_DWORD *)(v6 + 0x10);
      v10 = *(_DWORD *)(v6 + 0xC);
      if ( v7 )
      {
        v11 = sub_6BE040(v12, a2, v10, v9, v7, (int *)(this + 0x20), v8);
        *(float *)(this + 0xC) = *v11;
        *(float *)(this + 0x10) = v11[1];
        *(float *)(this + 0x14) = v11[2];
        *(float *)(this + 0x18) = v11[3];
      }
    }
    if ( sub_73B770((float *)(this + 0xC), (float *)&dword_B24FD4) )
    {
      return 0;
    }
    else
    {
      *a4 = *(_DWORD *)(this + 0xC);
      a4[1] = *(_DWORD *)(this + 0x10);
      a4[2] = *(_DWORD *)(this + 0x14);
      a4[3] = *(_DWORD *)(this + 0x18);
      *(float *)(this + 8) = a2;
      return 1;
    }
  }
}
