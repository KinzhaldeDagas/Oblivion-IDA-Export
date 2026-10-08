LONG __cdecl sub_6D4000(int a1)
{
  volatile LONG *v2; // esi
  NiPathInterpolator *v3; // ebp
  NiPathInterpolator *v4; // eax
  NiTimeController *v5; // eax
  NiTimeController *v6; // ebx
  int v7; // eax
  int v8; // ebx
  volatile LONG *v9; // ebx
  LONG result; // eax
  NiNode *v11; // [esp+18h] [ebp-14h]
  int v12; // [esp+30h] [ebp+4h]

  v11 = *(NiNode **)(a1 + 0x30); /*0x6d4033*/
  v2 = sub_700010(v11, (int)unk_B3CA58); /*0x6d403c*/
  v3 = 0; /*0x6d403e*/
  if ( v2 ) /*0x6d4046*/
    InterlockedIncrement(v2 + 1); /*0x6d404c*/
  v4 = (NiPathInterpolator *)FormHeapAlloc(0x5Cu); /*0x6d4058*/
  if ( v4 ) /*0x6d406b*/
    v3 = NiPathInterpolator::NiPathInterpolator(v4, *(_DWORD *)(a1 + 0x48), *(_DWORD *)(a1 + 0x4C)); /*0x6d407c*/
  if ( (*(_BYTE *)(a1 + 0x3C) & 4) != 0 ) /*0x6d408c*/
    *((_WORD *)v3 + 6) |= 4u; /*0x6d408e*/
  else
    *((_WORD *)v3 + 6) &= ~4u; /*0x6d4095*/
  if ( (*(_BYTE *)(a1 + 0x3C) & 8) != 0 ) /*0x6d40a4*/
    *((_WORD *)v3 + 6) |= 8u; /*0x6d40a6*/
  else
    *((_WORD *)v3 + 6) &= ~8u; /*0x6d40ad*/
  *((_DWORD *)v3 + 0xE) = *(_DWORD *)(a1 + 0x68); /*0x6d40b6*/
  if ( (*(_BYTE *)(a1 + 0x3C) & 0x10) != 0 ) /*0x6d40c1*/
  {
    *((_WORD *)v3 + 6) |= 0x10u; /*0x6d40c3*/
    sub_6DBBC0((int)v3); /*0x6d40ca*/
  }
  else
  {
    *((_WORD *)v3 + 6) &= ~0x10u; /*0x6d40e1*/
  }
  if ( (*(_BYTE *)(a1 + 0x3C) & 0x20) != 0 ) /*0x6d40d8*/
    *((_WORD *)v3 + 6) |= 0x20u; /*0x6d40da*/
  else
    *((_WORD *)v3 + 6) &= ~0x20u; /*0x6d40e9*/
  *((float *)v3 + 0xA) = *(float *)(a1 + 0x58); /*0x6d40fa*/
  *((float *)v3 + 0xB) = *(float *)(a1 + 0x5C); /*0x6d4108*/
  *((_WORD *)v3 + 0x18) = *(_WORD *)(a1 + 0x60); /*0x6d410f*/
  if ( (*(_BYTE *)(a1 + 0x3C) & 0x40) != 0 ) /*0x6d411c*/
    *((_WORD *)v3 + 6) |= 0x40u; /*0x6d411e*/
  else
    *((_WORD *)v3 + 6) &= ~0x40u; /*0x6d4125*/
  if ( (*(_BYTE *)(a1 + 0x3C) & 2) != 0 ) /*0x6d4137*/
    *((_WORD *)v3 + 6) |= 2u; /*0x6d4139*/
  else
    *((_WORD *)v3 + 6) &= ~2u; /*0x6d413f*/
  if ( !v2 || (*(int (__thiscall **)(volatile LONG *, _DWORD))(*v2 + 0x80))(v2, 0) ) /*0x6d4155*/
  {
    v5 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x6d417a*/
    if ( v5 ) /*0x6d418c*/
      v6 = sub_6C3E50(v5); /*0x6d4195*/
    else
      v6 = 0; /*0x6d4199*/
    if ( v2 != (volatile LONG *)v6 ) /*0x6d41a2*/
    {
      if ( v2 ) /*0x6d41a6*/
      {
        if ( !InterlockedDecrement(v2 + 1) ) /*0x6d41ac*/
          (**(void (__thiscall ***)(volatile LONG *, int))v2)(v2, 1); /*0x6d41be*/
      }
      v2 = (volatile LONG *)v6; /*0x6d41c2*/
      if ( v6 ) /*0x6d41c8*/
        InterlockedIncrement((volatile LONG *)&v6->members); /*0x6d41ce*/
    }
    (*(void (__thiscall **)(volatile LONG *, NiPathInterpolator *, _DWORD))(*v2 + 0x84))(v2, v3, 0); /*0x6d41e1*/
    (*(void (__thiscall **)(volatile LONG *, NiNode *))(*v2 + 0x58))(v2, v11); /*0x6d41ef*/
    sub_6D3B40(a1, (int)v2); /*0x6d41f3*/
    sub_478300(v11, *((NiTimeController **)v2 + 0xD)); /*0x6d4201*/
    v8 = *((_DWORD *)v2 + 0xD); /*0x6d4209*/
    v12 = *(_DWORD *)(a1 + 0x34); /*0x6d420e*/
    v7 = v12; /*0x6d4206*/
    if ( v8 != v12 ) /*0x6d4212*/
    {
      if ( v8 ) /*0x6d4216*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x6d421c*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x6d4232*/
        v7 = v12; /*0x6d4234*/
      }
      *((_DWORD *)v2 + 0xD) = v7; /*0x6d423a*/
      if ( v7 ) /*0x6d423d*/
        InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x6d4243*/
    }
    v9 = *(volatile LONG **)(a1 + 0x34); /*0x6d4249*/
    if ( v9 != v2 ) /*0x6d424e*/
    {
      if ( v9 ) /*0x6d4252*/
      {
        if ( !InterlockedDecrement(v9 + 1) ) /*0x6d4258*/
          (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x6d426e*/
      }
      *(_DWORD *)(a1 + 0x34) = v2; /*0x6d4274*/
      InterlockedIncrement(v2 + 1); /*0x6d4277*/
    }
  }
  else
  {
    (*(void (__thiscall **)(volatile LONG *, NiPathInterpolator *, _DWORD))(*v2 + 0x84))(v2, v3, 0); /*0x6d4167*/
    sub_6D3B40(a1, (int)v2); /*0x6d416b*/
  }
  (*(void (__thiscall **)(NiPathInterpolator *))(*(_DWORD *)v3 + 0x7C))(v3); /*0x6d4285*/
  if ( v11 ) /*0x6d428d*/
    NiObjectNET_RemoveController((Ni2DBuffer **)v11, (Ni2DBuffer *)a1); /*0x6d4290*/
  result = InterlockedDecrement(v2 + 1); /*0x6d42a1*/
  if ( !result ) /*0x6d42a9*/
    return (**(LONG (__thiscall ***)(volatile LONG *, int))v2)(v2, 1); /*0x6d42b3*/
  return result; /*0x6d42b5*/
}
