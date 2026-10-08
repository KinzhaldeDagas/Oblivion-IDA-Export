bool __thiscall sub_6E3BE0(int this, float a2, int a3, _DWORD *a4)
{
  int v6; // eax
  int v7; // ecx
  char v8; // dl
  int v9; // edi
  int v10; // eax
  float *v11; // eax
  float v12[4]; // [esp+24h] [ebp-10h] BYREF

  if ( a2 == *(float *)(this + 8) ) /*0x6e3bf8*/
  {
    *a4 = *(_DWORD *)(this + 0xC); /*0x6e3c06*/
    a4[1] = *(_DWORD *)(this + 0x10); /*0x6e3c0b*/
    a4[2] = *(_DWORD *)(this + 0x14); /*0x6e3c11*/
    a4[3] = *(_DWORD *)(this + 0x18); /*0x6e3c1c*/
    return !sub_73B770((float *)(this + 0xC), (float *)&dword_B24FD4); /*0x6e3c26*/
  }
  else
  {
    v6 = *(_DWORD *)(this + 0x1C); /*0x6e3c30*/
    if ( v6 ) /*0x6e3c36*/
    {
      v7 = *(_DWORD *)(v6 + 8); /*0x6e3c38*/
      v8 = *(_BYTE *)(v6 + 0x14); /*0x6e3c3d*/
      v9 = *(_DWORD *)(v6 + 0x10); /*0x6e3c40*/
      v10 = *(_DWORD *)(v6 + 0xC); /*0x6e3c43*/
      if ( v7 ) /*0x6e3c4a*/
      {
        v11 = sub_6BE040(v12, a2, v10, v9, v7, (int *)(this + 0x20), v8); /*0x6e3c61*/
        *(float *)(this + 0xC) = *v11; /*0x6e3c68*/
        *(float *)(this + 0x10) = v11[1]; /*0x6e3c6e*/
        *(float *)(this + 0x14) = v11[2]; /*0x6e3c74*/
        *(float *)(this + 0x18) = v11[3]; /*0x6e3c7d*/
      }
    }
    if ( sub_73B770((float *)(this + 0xC), (float *)&dword_B24FD4) ) /*0x6e3c8e*/
    {
      return 0; /*0x6e3c98*/
    }
    else
    {
      *a4 = *(_DWORD *)(this + 0xC); /*0x6e3cab*/
      a4[1] = *(_DWORD *)(this + 0x10); /*0x6e3cb0*/
      a4[2] = *(_DWORD *)(this + 0x14); /*0x6e3cb6*/
      a4[3] = *(_DWORD *)(this + 0x18); /*0x6e3cbc*/
      *(float *)(this + 8) = a2; /*0x6e3cbf*/
      return 1; /*0x6e3cc3*/
    }
  }
}
