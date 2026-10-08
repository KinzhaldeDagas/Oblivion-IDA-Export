char __thiscall sub_8D2CE0(int *this, int a2, float *a3, int a4)
{
  float *v4; // ebx
  int v5; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  float *v11; // eax
  bool v12; // zf
  int v13; // eax
  int v15; // [esp+10h] [ebp-14h]
  float v16[4]; // [esp+14h] [ebp-10h] BYREF

  v4 = a3; /*0x8d2ce4*/
  v5 = a2; /*0x8d2ceb*/
  ++*(_DWORD *)(a2 + 0x88); /*0x8d2cef*/
  a3 = v4 + 1; /*0x8d2cfa*/
  v15 = 2; /*0x8d2cfe*/
  do /*0x8d2dd4*/
  {
    v7 = *(_DWORD *)a3; /*0x8d2d0a*/
    a2 = v7; /*0x8d2d0c*/
    v8 = *(_DWORD *)(v7 + 0x50) + 0x10; /*0x8d2d19*/
    if ( !*(_BYTE *)(v7 + 0x92) && *(float *)(*(_DWORD *)(v7 + 0x50) + 0x6C) != *(float *)&SrcStr ) /*0x8d2d34*/
    {
      sub_8DD530(*v4, (__m128 *)v8); /*0x8d2d3e*/
      *(_OWORD *)(v8 + 0x40) = *(_OWORD *)(v8 + 0x50); /*0x8d2d47*/
      *(_OWORD *)(v8 + 0x60) = *(_OWORD *)(v8 + 0x70); /*0x8d2d4f*/
      *(float *)(v8 + 0x4C) = *v4; /*0x8d2d55*/
      *(_DWORD *)(v8 + 0x5C) = 0; /*0x8d2d58*/
      sub_8E77C0(a2, *(_DWORD **)(v5 + 0x74)); /*0x8d2d68*/
      v9 = *(this + 0xA); /*0x8d2d6d*/
      if ( v9 == 1 ) /*0x8d2d76*/
      {
        sub_8CC4E0((int)this, a2); /*0x8d2d7e*/
        sub_8D4AD0((int)this, (int)v4, (int)&a2, 1, *(_DWORD *)(v5 + 0x74)); /*0x8d2d93*/
      }
      else if ( !v9 ) /*0x8d2d9c*/
      {
        v10 = *this; /*0x8d2da4*/
        v11 = sub_8D2C90(v16, *(float *)(v5 + 0xC), *(float *)(v5 + 0x18)); /*0x8d2dad*/
        (*(void (__thiscall **)(int *, int *, int, int, float *))(v10 + 0x18))(this, &a2, 1, v5, v11); /*0x8d2dbd*/
      }
    }
    LOBYTE(v13) = v15 - 1; /*0x8d2dcb*/
    v12 = v15 == 1; /*0x8d2dcb*/
    ++a3; /*0x8d2dcc*/
    --v15; /*0x8d2dd0*/
  }
  while ( !v12 ); /*0x8d2dd4*/
  v12 = (*(_DWORD *)(v5 + 0x88))-- == 1; /*0x8d2dda*/
  if ( v12 ) /*0x8d2de0*/
  {
    v13 = *(_DWORD *)(v5 + 0x84); /*0x8d2de2*/
    if ( v13 ) /*0x8d2dea*/
    {
      LOBYTE(v13) = *(_BYTE *)(v5 + 0x90); /*0x8d2dec*/
      if ( !(_BYTE)v13 ) /*0x8d2df4*/
        LOBYTE(v13) = sub_899210(v5); /*0x8d2df8*/
    }
  }
  return v13; /*0x8d2dfd*/
}
