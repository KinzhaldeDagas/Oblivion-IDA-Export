double __userpurge sub_57F9F0@<st0>(
        float *this@<ecx>,
        double st5_0@<st2>,
        double result@<st0>,
        double st6_0@<st1>,
        float a3,
        _DWORD *a6,
        int a7)
{
  int v7; // edi
  _DWORD *v9; // ecx
  Tile *v10; // eax
  Tile *v11; // ebx
  _DWORD *v12; // ecx
  double v13; // st4
  Tile *v14; // ecx
  _DWORD *v15; // ebp
  void (__thiscall **v16)(_DWORD *, int, _DWORD *); // ebx
  int v17; // eax
  _DWORD *v18; // eax
  bool v19; // zf
  Tile *v20; // ecx
  _DWORD *v21; // ebp
  void (__thiscall **v22)(_DWORD *, int, _DWORD *); // ebx
  double Float; // st7
  int v24; // eax
  _DWORD *v25; // ebx
  double (__thiscall **v26)(_DWORD *, int, _DWORD *); // edi
  double v27; // st7
  int v28; // eax
  Tile *v29; // ecx
  int v30; // eax
  _DWORD *v31; // ebp
  double (__thiscall **v32)(_DWORD *, int, int); // ebx
  double v33; // st7
  int v34; // eax
  _DWORD *v35; // ecx
  _DWORD *ParentMenu; // ebx
  void (__thiscall **v37)(_DWORD *, int, _DWORD *); // edi
  int v38; // eax
  float a2; // [esp+10h] [ebp-14h]
  float a2a; // [esp+10h] [ebp-14h]
  _DWORD *a2b; // [esp+10h] [ebp-14h]
  _DWORD *a2c; // [esp+10h] [ebp-14h]
  _DWORD *a2d; // [esp+10h] [ebp-14h]
  _DWORD *a2e; // [esp+10h] [ebp-14h]

  v7 = LODWORD(a3);
  if ( a3 != 0.0 && Tile_GetFloat((_DWORD *)LODWORD(a3), 0xFF6) == dbl_A69070 )
  {
    v9 = *(_DWORD **)(v7 + 0x10);
    a3 = 0.0;
    v10 = (Tile *)sub_58E3B0(v9, st5_0, st6_0, result, (_DWORD *)0xFF5, &a3);
    v11 = v10;
    if ( v10 )
    {
      Tile_SetFloat(v10, (_DWORD *)0xFB3, flt_A6906C);
      a2 = Tile_GetFloat((_DWORD *)v7, 0xFF5);
      Tile_SetFloat(v11, (_DWORD *)0xFB3, a2);
      Tile_SetFloat(v11, (_DWORD *)0xFB3, 0.0);
    }
  }
  v12 = *((_DWORD **)this + 0x22);
  if ( v12 )
  {
    if ( v12 != (_DWORD *)v7 && Tile_GetFloat(v12, 0xFF0) > *(float *)&SrcStr )
    {
      v13 = (double)(int)++*((_DWORD *)this + 0x23);
      if ( *((int *)this + 0x23) < 0 )
        v13 = v13 + flt_A2FC78;
      a2a = v13;
      Tile_SetFloat(*((Tile **)this + 0x22), (_DWORD *)0xFF0, a2a);
    }
  }
  if ( !v7 )
  {
    v29 = *((Tile **)this + 0x22);
    if ( !v29 )
    {
LABEL_31:
      *(this + 0x22) = 0.0;
      *(this + 0x27) = 0.0;
      *(this + 0x26) = 0.0;
      return result;
    }
LABEL_30:
    Tile_SetFloat(v29, (_DWORD *)0xFDD, 0.0);
    ParentMenu = (_DWORD *)Tile_GetParentMenu(*((_DWORD **)this + 0x22));
    a2e = *((_DWORD **)this + 0x22);
    v37 = (void (__thiscall **)(_DWORD *, int, _DWORD *))(*ParentMenu + 0x14);
    result = Tile_GetFloat(a2e, 0xFA8);
    v38 = Double_To_SInt32(result);
    (*v37)(ParentMenu, v38, a2e);
    goto LABEL_31;
  }
  v14 = *((Tile **)this + 0x26);
  if ( v14 )
  {
    Tile_SetFloat(v14, (_DWORD *)0xFDD, 0.0);
    v15 = (_DWORD *)Tile_GetParentMenu(*((_DWORD **)this + 0x26));
    a2b = *((_DWORD **)this + 0x26);
    v16 = (void (__thiscall **)(_DWORD *, int, _DWORD *))(*v15 + 0x14);
    result = Tile_GetFloat(a2b, 0xFA8);
    v17 = Double_To_SInt32(result);
    (*v16)(v15, v17, a2b);
  }
  v18 = a6;
  v19 = a6 == (_DWORD *)0xFDD;
  *(this + 0x26) = 0.0;
  *(this + 0x27) = 0.0;
  if ( v19 )
  {
    v20 = *((Tile **)this + 0x22);
    if ( v20 != (Tile *)v7 )
    {
      if ( v20 )
      {
        Tile_SetFloat(v20, v18, 0.0);
        v21 = (_DWORD *)Tile_GetParentMenu(*((_DWORD **)this + 0x22));
        a2c = *((_DWORD **)this + 0x22);
        v22 = (void (__thiscall **)(_DWORD *, int, _DWORD *))(*v21 + 0x14);
        Float = Tile_GetFloat(a2c, 0xFA8);
        v24 = Double_To_SInt32(Float);
        (*v22)(v21, v24, a2c);
      }
      *((_DWORD *)this + 0x22) = v7;
      if ( Tile_GetFloat((_DWORD *)v7, 0xFF0) > *(float *)&SrcStr )
        sub_57D300(*((Tile **)this + 0x22), (Tile *)0xFF0, ++*((_DWORD *)this + 0x23));
      Tile_SetFloat((Tile *)v7, (_DWORD *)0xFDD, 1.0);
      v25 = (_DWORD *)Tile_GetParentMenu(*((_DWORD **)this + 0x22));
      a2d = *((_DWORD **)this + 0x22);
      v26 = (double (__thiscall **)(_DWORD *, int, _DWORD *))(*v25 + 0x10);
      v27 = Tile_GetFloat(a2d, 0xFA8);
      v28 = Double_To_SInt32(v27);
      return (*v26)(v25, v28, a2d);
    }
    return result;
  }
  if ( v18 == (_DWORD *)0xFE1 )
  {
    Tile_GetFloat((_DWORD *)v7, 0xFE5);
    v30 = Double_To_SInt32(result);
    if ( v30 )
      sub_57DE50(v30);
    a3 = Tile_GetFloat((_DWORD *)v7, 0xFE2) + dbl_A2F928;
    Tile_SetFloat((Tile *)v7, (_DWORD *)0xFE3, a3);
    Tile_SetFloat((Tile *)v7, (_DWORD *)0xFE1, 1.0);
    Tile_SetFloat((Tile *)v7, (_DWORD *)0xFE1, 0.0);
    v31 = (_DWORD *)Tile_GetParentMenu((_DWORD *)v7);
    v32 = (double (__thiscall **)(_DWORD *, int, int))(*v31 + 0xC);
    v33 = Tile_GetFloat((_DWORD *)v7, 0xFA8);
    v34 = Double_To_SInt32(v33);
    result = (*v32)(v31, v34, v7);
    sub_58FBA0(v7, st5_0, st6_0, result, 0);
    v35 = *((_DWORD **)this + 0x22);
    if ( v35 )
    {
      if ( !sub_5893B0(v35) || Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x22), 0xFC9) != fConstant_2 )
      {
        v29 = *((Tile **)this + 0x22);
        goto LABEL_30;
      }
    }
  }
  return result;
}
