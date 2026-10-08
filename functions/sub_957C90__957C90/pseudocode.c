int __thiscall sub_957C90(
        unsigned int *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int **a6)
{
  int v7; // eax
  unsigned int *v8; // ecx
  unsigned int v9; // ecx
  unsigned int *v10; // eax
  int v11; // edi
  unsigned int *v12; // eax
  int v13; // edi
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // edi
  int v19; // eax
  unsigned int *v21[3]; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD v22[2]; // [esp+1Ch] [ebp-10h] BYREF
  int v23; // [esp+24h] [ebp-8h]
  int v24; // [esp+28h] [ebp-4h]

  *(this + 2) = a5; /*0x957ca9*/
  *(this + 0xA) = a2; /*0x957cac*/
  *(this + 8) = a3; /*0x957caf*/
  *(this + 9) = a4; /*0x957cb2*/
  v7 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 8))(a2); /*0x957cb7*/
  v21[2] = *(unsigned int **)(a5 + 4); /*0x957cc5*/
  v8 = *a6; /*0x957cc9*/
  v21[1] = (unsigned int *)v7; /*0x957ccb*/
  v21[0] = v8; /*0x957ccf*/
  *(this + 0xE) = 0; /*0x957cd3*/
  if ( v7 ) /*0x957cd6*/
  {
    v9 = 0; /*0x957cd8*/
    do /*0x957ce5*/
    {
      v7 >>= 1; /*0x957ce0*/
      ++v9; /*0x957ce2*/
    }
    while ( v7 ); /*0x957ce5*/
    *(this + 0xE) = v9; /*0x957ce7*/
  }
  *(this + 4) = 0; /*0x957cea*/
  *(this + 5) = 0; /*0x957ced*/
  v10 = a6[1]; /*0x957cf0*/
  v11 = 0x400; /*0x957cf3*/
  do /*0x957d3e*/
  {
    *v10 = *(this + 4); /*0x957cfb*/
    ++*(this + 5); /*0x957cfd*/
    v10[0x3E] = (unsigned int)v10; /*0x957d00*/
    ++*(this + 5); /*0x957d10*/
    v10[0x7C] = (unsigned int)(v10 + 0x3E); /*0x957d13*/
    ++*(this + 5); /*0x957d23*/
    v10[0xBA] = (unsigned int)(v10 + 0x7C); /*0x957d2c*/
    *(this + 4) = (unsigned int)(v10 + 0xBA); /*0x957d2e*/
    v10 += 0xF8; /*0x957d35*/
    --v11; /*0x957d3a*/
    ++*(this + 5); /*0x957d3b*/
  }
  while ( v11 ); /*0x957d3e*/
  *(this + 6) = 0; /*0x957d44*/
  *(this + 7) = 0; /*0x957d47*/
  v12 = a6[2]; /*0x957d4a*/
  v13 = 0x400; /*0x957d4d*/
  do /*0x957d98*/
  {
    *v12 = *(this + 6); /*0x957d55*/
    ++*(this + 7); /*0x957d57*/
    v12[0x2F] = (unsigned int)v12; /*0x957d5a*/
    ++*(this + 7); /*0x957d6a*/
    v12[0x5E] = (unsigned int)(v12 + 0x2F); /*0x957d6d*/
    ++*(this + 7); /*0x957d7d*/
    v12[0x8D] = (unsigned int)(v12 + 0x5E); /*0x957d86*/
    *(this + 6) = (unsigned int)(v12 + 0x8D); /*0x957d88*/
    v12 += 0xBC; /*0x957d8f*/
    --v13; /*0x957d94*/
    ++*(this + 7); /*0x957d95*/
  }
  while ( v13 ); /*0x957d98*/
  *(this + 0xC) = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a4 + 8))(a4); /*0x957da1*/
  v14 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a4 + 0xC))(a4); /*0x957da8*/
  v15 = *(this + 2); /*0x957dab*/
  *(this + 0xD) = v14; /*0x957dae*/
  v16 = *(_DWORD *)(v15 + 8) + 2; /*0x957dbc*/
  v17 = (**(int (__thiscall ***)(int, int, int))unk_BA7D98)(unk_BA7D98, 4 * v16, 0x25); /*0x957dc9*/
  *(this + 3) = (unsigned int)v22; /*0x957dd6*/
  v23 = v17; /*0x957ddc*/
  v22[1] = v16; /*0x957de0*/
  v22[0] = 0; /*0x957de4*/
  v24 = 0; /*0x957de8*/
  v18 = sub_957980((int)this, 0, v21, 0, 0); /*0x957df6*/
  (*(void (__thiscall **)(unsigned int, int, unsigned int *, int))(*(_DWORD *)a4 + 0x10))(a4, v18, this, 0x2000); /*0x957dfe*/
  v19 = v23; /*0x957e01*/
  *(this + 3) = 0; /*0x957e05*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, v19); /*0x957e11*/
  return v18; /*0x957e16*/
}
