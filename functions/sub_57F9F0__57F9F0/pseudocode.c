// AchievementsNative evidence: focused tile with xlist=&xitem drives parent xscroll by pulsing the xscroll target's user5 through -999999, tile xscroll, then 0; do not leave scroll target user5 at the desired scroll value.
// Verified: handles focus transition and click trait dispatch. Click path calls Menu vtable +0x0C at 0x57FCC4 then still calls tile update 0x58FBA0 on original clicked Tile at 0x57FCCB. A hook must not delete that Tile before dispatcher unwinds. xitem focus also pulses ancestor xscroll user5. Fallout named analogue 0x824F06A0.
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
  Tile *v9; // ecx
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

  v7 = LODWORD(a3); /*0x57f9f4*/
  if ( a3 != 0.0 && Tile_GetFloat((_DWORD *)LODWORD(a3), 0xFF6) == dbl_A69070 ) /*0x57fa17*/
  {
    v9 = *(Tile **)(v7 + 0x10); /*0x57fa19*/
    a3 = 0.0; /*0x57fa26*/
    v10 = (Tile *)Tile::ResolveNavigationTrait(v9, st5_0, st6_0, result, (_DWORD *)0xFF5, &a3); /*0x57fa2a*/
    v11 = v10; /*0x57fa2f*/
    if ( v10 ) /*0x57fa33*/
    {
      Tile_SetFloat(v10, (_DWORD *)0xFB3, flt_A6906C); /*0x57fa46*/
      a2 = Tile_GetFloat((_DWORD *)v7, 0xFF5); /*0x57fa58*/
      Tile_SetFloat(v11, (_DWORD *)0xFB3, a2); /*0x57fa62*/
      Tile_SetFloat(v11, (_DWORD *)0xFB3, 0.0); /*0x57fa74*/
    }
  }
  v12 = *((_DWORD **)this + 0x22); /*0x57fa79*/
  if ( v12 ) /*0x57fa81*/
  {
    if ( v12 != (_DWORD *)v7 && Tile_GetFloat(v12, 0xFF0) > *(float *)&SrcStr ) /*0x57fa9c*/
    {
      v13 = (double)(int)++*((_DWORD *)this + 0x23); /*0x57faa5*/
      if ( *((int *)this + 0x23) < 0 ) /*0x57fab3*/
        v13 = v13 + flt_A2FC78; /*0x57fab5*/
      a2a = v13; /*0x57fac2*/
      Tile_SetFloat(*((Tile **)this + 0x22), (_DWORD *)0xFF0, a2a); /*0x57faca*/
    }
  }
  if ( !v7 ) /*0x57fad1*/
  {
    v29 = *((Tile **)this + 0x22); /*0x57fc13*/
    if ( !v29 ) /*0x57fc1b*/
    {
LABEL_31:
      *(this + 0x22) = 0.0; /*0x57fd45*/
      *(this + 0x27) = 0.0; /*0x57fd4b*/
      *(this + 0x26) = 0.0; /*0x57fd51*/
      return result; /*0x57fd51*/
    }
LABEL_30:
    Tile_SetFloat(v29, (_DWORD *)0xFDD, 0.0); /*0x57fd07*/
    ParentMenu = (_DWORD *)Tile_GetParentMenu(*((_DWORD **)this + 0x22)); /*0x57fd27*/
    a2e = *((_DWORD **)this + 0x22); /*0x57fd2b*/
    v37 = (void (__thiscall **)(_DWORD *, int, _DWORD *))(*ParentMenu + 0x14); /*0x57fd31*/
    result = Tile_GetFloat(a2e, 0xFA8); /*0x57fd34*/
    v38 = Double_To_SInt32(result); /*0x57fd39*/
    (*v37)(ParentMenu, v38, a2e); /*0x57fd43*/
    goto LABEL_31; /*0x57fd43*/
  }
  v14 = *((Tile **)this + 0x26); /*0x57fad7*/
  if ( v14 ) /*0x57fadf*/
  {
    Tile_SetFloat(v14, (_DWORD *)0xFDD, 0.0); /*0x57faec*/
    v15 = (_DWORD *)Tile_GetParentMenu(*((_DWORD **)this + 0x26)); /*0x57fb02*/
    a2b = *((_DWORD **)this + 0x26); /*0x57fb07*/
    v16 = (void (__thiscall **)(_DWORD *, int, _DWORD *))(*v15 + 0x14); /*0x57fb0d*/
    result = Tile_GetFloat(a2b, 0xFA8); /*0x57fb10*/
    v17 = Double_To_SInt32(result); /*0x57fb15*/
    (*v16)(v15, v17, a2b); /*0x57fb1f*/
  }
  v18 = a6; /*0x57fb23*/
  v19 = a6 == (_DWORD *)0xFDD; /*0x57fb27*/
  *(this + 0x26) = 0.0; /*0x57fb2c*/
  *(this + 0x27) = 0.0; /*0x57fb32*/
  if ( v19 ) /*0x57fb38*/
  {
    v20 = *((Tile **)this + 0x22); /*0x57fb3e*/
    if ( v20 != (Tile *)v7 ) /*0x57fb46*/
    {
      if ( v20 ) /*0x57fb4e*/
      {
        Tile_SetFloat(v20, v18, 0.0); /*0x57fb57*/
        v21 = (_DWORD *)Tile_GetParentMenu(*((_DWORD **)this + 0x22)); /*0x57fb6d*/
        a2c = *((_DWORD **)this + 0x22); /*0x57fb72*/
        v22 = (void (__thiscall **)(_DWORD *, int, _DWORD *))(*v21 + 0x14); /*0x57fb78*/
        Float = Tile_GetFloat(a2c, 0xFA8); /*0x57fb7b*/
        v24 = Double_To_SInt32(Float); /*0x57fb80*/
        (*v22)(v21, v24, a2c); /*0x57fb8a*/
      }
      *((_DWORD *)this + 0x22) = v7; /*0x57fb93*/
      if ( Tile_GetFloat((_DWORD *)v7, 0xFF0) > *(float *)&SrcStr ) /*0x57fba9*/
        sub_57D300(*((Tile **)this + 0x22), (Tile *)0xFF0, ++*((_DWORD *)this + 0x23)); /*0x57fbc4*/
      Tile_SetFloat((Tile *)v7, (_DWORD *)0xFDD, 1.0); /*0x57fbd6*/
      v25 = (_DWORD *)Tile_GetParentMenu(*((_DWORD **)this + 0x22)); /*0x57fbec*/
      a2d = *((_DWORD **)this + 0x22); /*0x57fbf0*/
      v26 = (double (__thiscall **)(_DWORD *, int, _DWORD *))(*v25 + 0x10); /*0x57fbf8*/
      v27 = Tile_GetFloat(a2d, 0xFA8); /*0x57fbfb*/
      v28 = Double_To_SInt32(v27); /*0x57fc00*/
      return (*v26)(v25, v28, a2d); /*0x57fc0a*/
    }
    return result; /*0x57fc10*/
  }
  if ( v18 == (_DWORD *)0xFE1 ) /*0x57fc2c*/
  {
    Tile_GetFloat((_DWORD *)v7, 0xFE5); /*0x57fc39*/
    v30 = Double_To_SInt32(result); /*0x57fc3e*/
    if ( v30 ) /*0x57fc45*/
      sub_57DE50(v30); /*0x57fc48*/
    a3 = Tile_GetFloat((_DWORD *)v7, 0xFE2) + dbl_A2F928; /*0x57fc65*/
    Tile_SetFloat((Tile *)v7, (_DWORD *)0xFE3, a3); /*0x57fc75*/
    Tile_SetFloat((Tile *)v7, (_DWORD *)0xFE1, 1.0); /*0x57fc87*/
    Tile_SetFloat((Tile *)v7, (_DWORD *)0xFE1, 0.0); /*0x57fc99*/
    v31 = (_DWORD *)Tile_GetParentMenu((_DWORD *)v7); /*0x57fca5*/
    v32 = (double (__thiscall **)(_DWORD *, int, int))(*v31 + 0xC); /*0x57fcb2*/
    v33 = Tile_GetFloat((_DWORD *)v7, 0xFA8); /*0x57fcb5*/
    v34 = Double_To_SInt32(v33); /*0x57fcba*/
    result = (*v32)(v31, v34, v7);              // CharacterSpecificSaves v3: native click dispatch calls Menu::HandleClick here, then still passes the original clicked Tile to sub_58FBA0 at 0x57FCCB. Any row-destroying rebuild must be deferred until this dispatcher unwinds. /*0x57fcc4*/
    sub_58FBA0(v7, st5_0, st6_0, result, 0); /*0x57fccb*/
    v35 = *((_DWORD **)this + 0x22); /*0x57fcd0*/
    if ( v35 ) /*0x57fcd8*/
    {
      if ( !Tile::IsVisible(v35) || Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0x22), 0xFC9) != fConstant_2 ) /*0x57fcfe*/
      {
        v29 = *((Tile **)this + 0x22); /*0x57fd01*/
        goto LABEL_30; /*0x57fd01*/
      }
    }
  }
  return result; /*0x57fc0c*/
}
