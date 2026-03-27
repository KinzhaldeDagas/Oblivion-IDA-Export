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

  v11 = *(NiNode **)(a1 + 0x30);
  v2 = sub_700010(v11, (int)dword_B3CA58);
  v3 = 0;
  if ( v2 )
    InterlockedIncrement(v2 + 1);
  v4 = (NiPathInterpolator *)FormHeapAlloc(0x5Cu);
  if ( v4 )
    v3 = NiPathInterpolator::NiPathInterpolator(v4, *(_DWORD *)(a1 + 0x48), *(_DWORD *)(a1 + 0x4C));
  if ( (*(_BYTE *)(a1 + 0x3C) & 4) != 0 )
    *((_WORD *)v3 + 6) |= 4u;
  else
    *((_WORD *)v3 + 6) &= ~4u;
  if ( (*(_BYTE *)(a1 + 0x3C) & 8) != 0 )
    *((_WORD *)v3 + 6) |= 8u;
  else
    *((_WORD *)v3 + 6) &= ~8u;
  *((_DWORD *)v3 + 0xE) = *(_DWORD *)(a1 + 0x68);
  if ( (*(_BYTE *)(a1 + 0x3C) & 0x10) != 0 )
  {
    *((_WORD *)v3 + 6) |= 0x10u;
    sub_6DBBC0((int)v3);
  }
  else
  {
    *((_WORD *)v3 + 6) &= ~0x10u;
  }
  if ( (*(_BYTE *)(a1 + 0x3C) & 0x20) != 0 )
    *((_WORD *)v3 + 6) |= 0x20u;
  else
    *((_WORD *)v3 + 6) &= ~0x20u;
  *((float *)v3 + 0xA) = *(float *)(a1 + 0x58);
  *((float *)v3 + 0xB) = *(float *)(a1 + 0x5C);
  *((_WORD *)v3 + 0x18) = *(_WORD *)(a1 + 0x60);
  if ( (*(_BYTE *)(a1 + 0x3C) & 0x40) != 0 )
    *((_WORD *)v3 + 6) |= 0x40u;
  else
    *((_WORD *)v3 + 6) &= ~0x40u;
  if ( (*(_BYTE *)(a1 + 0x3C) & 2) != 0 )
    *((_WORD *)v3 + 6) |= 2u;
  else
    *((_WORD *)v3 + 6) &= ~2u;
  if ( !v2 || (*(int (__thiscall **)(volatile LONG *, _DWORD))(*v2 + 0x80))(v2, 0) )
  {
    v5 = (NiTimeController *)FormHeapAlloc(0x40u);
    if ( v5 )
      v6 = sub_6C3E50(v5);
    else
      v6 = 0;
    if ( v2 != (volatile LONG *)v6 )
    {
      if ( v2 )
      {
        if ( !InterlockedDecrement(v2 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v2)(v2, 1);
      }
      v2 = (volatile LONG *)v6;
      if ( v6 )
        InterlockedIncrement((volatile LONG *)&v6->members);
    }
    (*(void (__thiscall **)(volatile LONG *, NiPathInterpolator *, _DWORD))(*v2 + 0x84))(v2, v3, 0);
    (*(void (__thiscall **)(volatile LONG *, NiNode *))(*v2 + 0x58))(v2, v11);
    sub_6D3B40(a1, (int)v2);
    sub_478300(v11, *((NiTimeController **)v2 + 0xD));
    v8 = *((_DWORD *)v2 + 0xD);
    v12 = *(_DWORD *)(a1 + 0x34);
    v7 = v12;
    if ( v8 != v12 )
    {
      if ( v8 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
          (**(void (__thiscall ***)(int, int))v8)(v8, 1);
        v7 = v12;
      }
      *((_DWORD *)v2 + 0xD) = v7;
      if ( v7 )
        InterlockedIncrement((volatile LONG *)(v7 + 4));
    }
    v9 = *(volatile LONG **)(a1 + 0x34);
    if ( v9 != v2 )
    {
      if ( v9 )
      {
        if ( !InterlockedDecrement(v9 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
      }
      *(_DWORD *)(a1 + 0x34) = v2;
      InterlockedIncrement(v2 + 1);
    }
  }
  else
  {
    (*(void (__thiscall **)(volatile LONG *, NiPathInterpolator *, _DWORD))(*v2 + 0x84))(v2, v3, 0);
    sub_6D3B40(a1, (int)v2);
  }
  (*(void (__thiscall **)(NiPathInterpolator *))(*(_DWORD *)v3 + 0x7C))(v3);
  if ( v11 )
    sub_6FFE90((Ni2DBuffer **)v11, (Ni2DBuffer *)a1);
  result = InterlockedDecrement(v2 + 1);
  if ( !result )
    return (**(LONG (__thiscall ***)(volatile LONG *, int))v2)(v2, 1);
  return result;
}
