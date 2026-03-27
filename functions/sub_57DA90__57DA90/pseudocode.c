_DWORD *__userpurge sub_57DA90@<eax>(
        void *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        int *a5,
        _DWORD *a6)
{
  _DWORD *v6; // ebx
  int *v7; // esi
  int v8; // ebp
  int v9; // eax
  double Float; // st5
  _DWORD *v12; // edi
  _DWORD *v13; // eax
  _DWORD *v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // [esp+Ch] [ebp-10h]
  int v19; // [esp+10h] [ebp-Ch] BYREF
  int v20; // [esp+14h] [ebp-8h]
  void *v21; // [esp+18h] [ebp-4h]

  v6 = a6;
  v7 = a5;
  v8 = *a5;
  v21 = this;
  v18 = 0;
  v20 = 0x7FFFFFFF;
  *a5 = 0x80000000;
  v19 = 0x80000000;
  if ( !a6 )
  {
    Menu_GetB3A708(1);
    v9 = sub_5877D0(v8, st5_0, st6_0);
    if ( !v9 )
      return 0;
    v6 = *(_DWORD **)(v9 + 4);
    if ( (*(int (__thiscall **)(_DWORD *))(*v6 + 0xC))(v6) == 0x389
      && *(_DWORD *)(Tile_GetParentMenu(v6) + 0x24) != 1
      && *(_DWORD *)(Tile_GetParentMenu(v6) + 0x24) != 8 )
    {
      return 0;
    }
  }
  Float = Tile_GetFloat(v6, 0xFA1);
  if ( Float == fConstant_1 )
    return 0;
  v12 = (_DWORD *)v6[0xD];
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = (_DWORD *)v12[2];
      v12 = (_DWORD *)*v12;
      v19 = 0x80000000;
      v14 = sub_57DA90(v21, Float, st6_0, &v19, v13);
      if ( v14 )
      {
        if ( v19 <= v8 )
        {
          if ( v19 != v8 )
            goto LABEL_17;
          v15 = sub_588B50(v14, 0xFAA);
          if ( !v15 )
            goto LABEL_17;
          Float = *(float *)(v15 + 4);
          v16 = Double_To_SInt32(a4);
          if ( v16 >= v20 )
            goto LABEL_17;
          v20 = v16;
        }
        else
        {
          v8 = v19;
        }
        v18 = v14;
      }
LABEL_17:
      if ( !v12 )
      {
        v7 = a5;
        break;
      }
    }
  }
  if ( Tile_GetFloat(v6, 0xFC9) == fConstant_2 && Tile_GetFloat(v6, 0xFA1) != fConstant_1 && sub_588B50(v6, 0xFF0) )
  {
    v17 = Double_To_SInt32(a4);
    v19 = v17;
    if ( v17 > v8 )
    {
      *v7 = v17;
      return v6;
    }
    if ( v17 == v8 )
    {
      if ( sub_588B50(v6, 0xFAA) )
      {
        if ( Double_To_SInt32(a4) < v20 )
          v18 = v6;
      }
    }
  }
  *v7 = v8;
  return v18;
}
