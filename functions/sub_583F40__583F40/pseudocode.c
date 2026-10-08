// Verified: reads GetTimerPercent and Menu fade state +0x24. State 2 completion sets state 4; if root trait 0x1772==2, destroys MenuTopicManager for DialogMenu at 0x584230 then invokes root tile deleting destructor at 0x584255. Otherwise hides root. State 8 completion sets state 1. This is the normal deferred destruction path, separate from StartFadeOut.
void __usercall sub_583F40(_DWORD *this@<ecx>, char bp0@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  InputGlobal *input; // ecx
  int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int ParentMenu; // eax
  int v11; // esi
  int v12; // ebp
  signed int TopVisibleMenuID; // eax
  int v14; // ecx
  int v15; // edx
  char v16; // bl
  _DWORD *v17; // ecx
  double v18; // st4
  bool v19; // bl
  _DWORD *v20; // eax
  int v21; // ecx
  int v22; // eax
  void (__thiscall ***v23)(_DWORD, int); // esi
  bool v24; // bl
  int v25; // eax
  float a2a; // [esp+4h] [ebp-28h]
  float a2; // [esp+4h] [ebp-28h]
  char v28; // [esp+Ch] [ebp-20h]
  bool v29; // [esp+1Bh] [ebp-11h]
  float v30; // [esp+1Ch] [ebp-10h]
  float v31; // [esp+1Ch] [ebp-10h]
  _DWORD *v32; // [esp+20h] [ebp-Ch]
  float v33; // [esp+24h] [ebp-8h]
  InputGlobal *v34; // [esp+28h] [ebp-4h]

  input = MEMORY[0xB33398]->input; /*0x583f4b*/
  v7 = *(this + 0x1A); /*0x583f4e*/
  *((_BYTE *)this + 9) = 0; /*0x583f51*/
  v8 = *(_DWORD **)(v7 + 0x34); /*0x583f55*/
  v34 = input; /*0x583f5a*/
  if ( !v8 ) /*0x583f5e*/
    goto LABEL_60; /*0x583f5e*/
  v28 = bp0; /*0x583f65*/
  while ( 1 ) /*0x583f6a*/
  {
    v9 = (_DWORD *)v8[2]; /*0x583f6a*/
    v32 = (_DWORD *)*v8; /*0x583f70*/
    if ( !v9 ) /*0x583f74*/
      goto LABEL_45; /*0x583f74*/
    ParentMenu = Tile_GetParentMenu(v9); /*0x583f7a*/
    v11 = ParentMenu; /*0x583f7f*/
    if ( !ParentMenu || !*(_DWORD *)(ParentMenu + 4) ) /*0x583f89*/
      goto LABEL_45; /*0x583f8d*/
    InterfaceManager::GetTimerPercent(ParentMenu); /*0x583f94*/
    v30 = a5; /*0x583f99*/
    v33 = fabs(v30); /*0x583fab*/
    a5 = v33; /*0x583faf*/
    v29 = v33 == fConstant_1; /*0x583fc0*/
    v12 = *(_DWORD *)(v11 + 0x24); /*0x583fc5*/
    TopVisibleMenuID = InterfaceManager::GetTopVisibleMenuID(this); /*0x583fca*/
    v14 = *(this + 0x38); /*0x583fd2*/
    v15 = *(this + 0x39); /*0x583fd8*/
    if ( v12 == 2 ) /*0x583fde*/
      break; /*0x583fde*/
    if ( v12 != 8 ) /*0x5840f0*/
      goto LABEL_45; /*0x5840f0*/
    v19 = TopVisibleMenuID && v14 == TopVisibleMenuID && TopVisibleMenuID != 0x3F3 && TopVisibleMenuID != 0x3E9 /*0x584124*/
       || v15 && v15 == TopVisibleMenuID && (v14 == 0x3F3 || v14 == 0x3E9);
    a2 = fConstant_2; /*0x584136*/
    if ( v29 ) /*0x58413e*/
    {
      Tile_SetFloat(*(Tile **)(v11 + 4), 0xFA1u, a2); /*0x584143*/
      sub_57EA20(*(NiObject **)(*(_DWORD *)(v11 + 4) + 0x24), 1.0, 0.0); /*0x58415f*/
      *(_DWORD *)(v11 + 0x24) = 1; /*0x584166*/
      if ( v19 ) /*0x58416d*/
      {
        if ( unk_B42D54 ) /*0x58416f*/
          unk_B42D50 = 1.0; /*0x58417a*/
        unk_B42D54 = 0; /*0x584180*/
      }
    }
    else
    {
      *((_BYTE *)this + 9) = 1; /*0x584189*/
      Tile_SetFloat(*(Tile **)(v11 + 4), 0xFA1u, a2); /*0x584190*/
      sub_57EA20(*(NiObject **)(*(_DWORD *)(v11 + 4) + 0x24), v30, 0.0); /*0x5841ae*/
      if ( v19 && unk_B42D54 ) /*0x5841b7*/
      {
        v18 = v30; /*0x5841c0*/
        goto LABEL_44; /*0x5841c0*/
      }
    }
LABEL_45:
    if ( !v32 ) /*0x5841cf*/
      goto LABEL_59; /*0x5841cf*/
    v8 = v32; /*0x5841d5*/
  }
  if ( TopVisibleMenuID ) /*0x583fe6*/
  {
    if ( !v14 ) /*0x583ff0*/
      goto LABEL_15; /*0x583ff0*/
  }
  else if ( !v14 ) /*0x583fea*/
  {
LABEL_14:
    v16 = 1; /*0x584006*/
    goto LABEL_16; /*0x584008*/
  }
  if ( !v15 && (v14 == 0x3F3 || v14 == 0x3E9) ) /*0x584004*/
    goto LABEL_14; /*0x584004*/
LABEL_15:
  v16 = 0; /*0x58400a*/
LABEL_16:
  if ( !v29 ) /*0x584011*/
  {
    a2a = fConstant_2; /*0x584091*/
    *((_BYTE *)this + 9) = 1; /*0x584094*/
    Tile_SetFloat(*(Tile **)(v11 + 4), 0xFA1u, a2a); /*0x5840a0*/
    v31 = 1.0 - v30; /*0x5840b6*/
    sub_57EA20(*(NiObject **)(*(_DWORD *)(v11 + 4) + 0x24), v31, 0.0); /*0x5840ca*/
    if ( v16 && unk_B42D54 ) /*0x5840d7*/
    {
      v18 = v31; /*0x5840e4*/
LABEL_44:
      unk_B42D50 = v18; /*0x5841c4*/
      goto LABEL_45; /*0x5841c4*/
    }
    goto LABEL_45; /*0x5840de*/
  }
  v17 = *(_DWORD **)(v11 + 4); /*0x584013*/
  *(_DWORD *)(v11 + 0x24) = 4; /*0x58401b*/
  if ( Tile_GetFloat(v17, 0x1772) != fConstant_2 ) /*0x584032*/
  {
    Tile_SetFloat(*(Tile **)(v11 + 4), 0xFA1u, 1.0); /*0x584046*/
    sub_57EA20(*(NiObject **)(*(_DWORD *)(v11 + 4) + 0x24), 0.0, 0.0); /*0x584060*/
    if ( v16 ) /*0x584067*/
    {
      if ( unk_B42D54 ) /*0x58406d*/
        unk_B42D50 = 0.0; /*0x584078*/
      unk_B42D54 = 0; /*0x58407e*/
    }
    goto LABEL_45; /*0x584085*/
  }
  if ( (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v11 + 0x34))( /*0x5841ec*/
         v11,
         a5,
         a4,
         a3) == 0x3F1 )
  {
    v20 = OblivionDynamicCast( /*0x5841fd*/
            (void *)v11,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &DialogMenu `RTTI Type Descriptor',
            0);
    if ( v20 ) /*0x584207*/
    {
      v21 = v20[0x18]; /*0x584209*/
      if ( v21 ) /*0x58420e*/
      {
        if ( *((_BYTE *)v20 + 0x95) ) /*0x584210*/
        {
          *(this + 0x43) = v21; /*0x584219*/
        }
        else if ( *((_BYTE *)v20 + 0x94) ) /*0x584221*/
        {
          *(this + 0x44) = v21; /*0x58422a*/
        }
      }
    }
    MenuTopicManager::Destroy(); /*0x584230*/
  }
  v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x34))(v11); /*0x58423c*/
  v23 = *(void (__thiscall ****)(_DWORD, int))(v11 + 4); /*0x58423e*/
  v24 = v22 == 0x3F3; /*0x584246*/
  if ( v23 ) /*0x58424b*/
    (**v23)(v23, 1); /*0x584255*/
  if ( v24 ) /*0x584259*/
    sub_5A4510(a3, a5, a4); /*0x58425b*/
LABEL_59:
  bp0 = v28; /*0x584260*/
LABEL_60:
  if ( *((_BYTE *)this + 8) == 4 && (!*((_BYTE *)this + 9) || MEMORY[0xB333A0]->unk51 || MEMORY[0xB333A0]->unk52) ) /*0x58427a*/
  {
    InputGlobals::FlushKeyboardBuffer(v34); /*0x584284*/
    v25 = *(this + 7); /*0x58428b*/
    *((_BYTE *)this + 8) = 1; /*0x58428e*/
    *(_WORD *)(*(_DWORD *)(v25 + 0x24) + 0x18) |= 1u; /*0x584295*/
    Tile_SetFloat((Tile *)*(this + 7), 0xFA1u, 1.0); /*0x5842a6*/
    sub_58E870(*(this + 7), a3, a4, a5); /*0x5842ae*/
    sub_57D940((int)this, bp0, a3, a4, a5, 1.0, 1); /*0x5842b7*/
    if ( reference ) /*0x5842bc*/
    {
      if ( PlayerCharacter_GetNodeByPerspective(reference, 0) ) /*0x5842c8*/
        sub_5A6040(a3, a4, 0, 0); /*0x5842d5*/
    }
    *(this + 0x46) = 0; /*0x5842dd*/
  }
  unk_B3A6E4 = 0x63; /*0x5842e7*/
}
