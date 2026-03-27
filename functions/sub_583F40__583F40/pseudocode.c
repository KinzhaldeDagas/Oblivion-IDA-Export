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
  double v26; // st7
  float a2a; // [esp+4h] [ebp-28h]
  float a2; // [esp+4h] [ebp-28h]
  char v29; // [esp+Ch] [ebp-20h]
  bool v30; // [esp+1Bh] [ebp-11h]
  float v31; // [esp+1Ch] [ebp-10h]
  float v32; // [esp+1Ch] [ebp-10h]
  _DWORD *v33; // [esp+20h] [ebp-Ch]
  float v34; // [esp+24h] [ebp-8h]
  InputGlobal *v35; // [esp+28h] [ebp-4h]

  input = OSGlobals->input;
  v7 = *(this + 0x1A);
  *((_BYTE *)this + 9) = 0;
  v8 = *(_DWORD **)(v7 + 0x34);
  v35 = input;
  if ( !v8 )
    goto LABEL_60;
  v29 = bp0;
  while ( 1 )
  {
    v9 = (_DWORD *)v8[2];
    v33 = (_DWORD *)*v8;
    if ( !v9 )
      goto LABEL_45;
    ParentMenu = Tile_GetParentMenu(v9);
    v11 = ParentMenu;
    if ( !ParentMenu || !*(_DWORD *)(ParentMenu + 4) )
      goto LABEL_45;
    sub_583D50(ParentMenu);
    v31 = a5;
    v34 = fabs(v31);
    a5 = v34;
    v30 = v34 == fConstant_1;
    v12 = *(_DWORD *)(v11 + 0x24);
    TopVisibleMenuID = InterfaceManager::GetTopVisibleMenuID(this);
    v14 = *(this + 0x38);
    v15 = *(this + 0x39);
    if ( v12 == 2 )
      break;
    if ( v12 != 8 )
      goto LABEL_45;
    v19 = TopVisibleMenuID && v14 == TopVisibleMenuID && TopVisibleMenuID != 0x3F3 && TopVisibleMenuID != 0x3E9
       || v15 && v15 == TopVisibleMenuID && (v14 == 0x3F3 || v14 == 0x3E9);
    a2 = fConstant_2;
    if ( v30 )
    {
      Tile_SetFloat(*(Tile **)(v11 + 4), (_DWORD *)0xFA1, a2);
      sub_57EA20(*(NiObject **)(*(_DWORD *)(v11 + 4) + 0x24), 1.0, 0.0);
      *(_DWORD *)(v11 + 0x24) = 1;
      if ( v19 )
      {
        if ( byte_B42D54 )
          flt_B42D50 = 1.0;
        byte_B42D54 = 0;
      }
    }
    else
    {
      *((_BYTE *)this + 9) = 1;
      Tile_SetFloat(*(Tile **)(v11 + 4), (_DWORD *)0xFA1, a2);
      sub_57EA20(*(NiObject **)(*(_DWORD *)(v11 + 4) + 0x24), v31, 0.0);
      if ( v19 && byte_B42D54 )
      {
        v18 = v31;
        goto LABEL_44;
      }
    }
LABEL_45:
    if ( !v33 )
      goto LABEL_59;
    v8 = v33;
  }
  if ( TopVisibleMenuID )
  {
    if ( !v14 )
      goto LABEL_15;
  }
  else if ( !v14 )
  {
LABEL_14:
    v16 = 1;
    goto LABEL_16;
  }
  if ( !v15 && (v14 == 0x3F3 || v14 == 0x3E9) )
    goto LABEL_14;
LABEL_15:
  v16 = 0;
LABEL_16:
  if ( !v30 )
  {
    a2a = fConstant_2;
    *((_BYTE *)this + 9) = 1;
    Tile_SetFloat(*(Tile **)(v11 + 4), (_DWORD *)0xFA1, a2a);
    v32 = 1.0 - v31;
    sub_57EA20(*(NiObject **)(*(_DWORD *)(v11 + 4) + 0x24), v32, 0.0);
    if ( v16 && byte_B42D54 )
    {
      v18 = v32;
LABEL_44:
      flt_B42D50 = v18;
      goto LABEL_45;
    }
    goto LABEL_45;
  }
  v17 = *(_DWORD **)(v11 + 4);
  *(_DWORD *)(v11 + 0x24) = 4;
  if ( Tile_GetFloat(v17, 0x1772) != fConstant_2 )
  {
    Tile_SetFloat(*(Tile **)(v11 + 4), (_DWORD *)0xFA1, 1.0);
    sub_57EA20(*(NiObject **)(*(_DWORD *)(v11 + 4) + 0x24), 0.0, 0.0);
    if ( v16 )
    {
      if ( byte_B42D54 )
        flt_B42D50 = 0.0;
      byte_B42D54 = 0;
    }
    goto LABEL_45;
  }
  if ( (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v11 + 0x34))(
         v11,
         a5,
         a4,
         a3) == 0x3F1 )
  {
    v20 = OblivionDynamicCast(
            (void *)v11,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &DialogMenu `RTTI Type Descriptor',
            0);
    if ( v20 )
    {
      v21 = v20[0x18];
      if ( v21 )
      {
        if ( *((_BYTE *)v20 + 0x95) )
        {
          *(this + 0x43) = v21;
        }
        else if ( *((_BYTE *)v20 + 0x94) )
        {
          *(this + 0x44) = v21;
        }
      }
    }
    sub_6B94E0();
  }
  v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x34))(v11);
  v23 = *(void (__thiscall ****)(_DWORD, int))(v11 + 4);
  v24 = v22 == 0x3F3;
  if ( v23 )
    (**v23)(v23, 1);
  if ( v24 )
    sub_5A4510(a3, 2, a5, a4);
LABEL_59:
  bp0 = v29;
LABEL_60:
  if ( *((_BYTE *)this + 8) == 4 && (!*((_BYTE *)this + 9) || TES->unk51 || TES->unk52) )
  {
    InputGlobals::FlushKeyboardBuffer(v35);
    v25 = *(this + 7);
    *((_BYTE *)this + 8) = 1;
    *(_WORD *)(*(_DWORD *)(v25 + 0x24) + 0x18) |= 1u;
    Tile_SetFloat((Tile *)*(this + 7), (_DWORD *)0xFA1, 1.0);
    sub_58E870(*(this + 7), a3, a4, a5);
    v26 = sub_57D940((int)this, bp0, a3, a4, a5, 1.0, 1);
    if ( TESDataHandler_g_PlayerRef )
    {
      if ( PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0) )
        sub_5A6040(a3, a4, bp0, v26, 0, 0);
    }
    *(this + 0x46) = 0;
  }
  dword_B3A6E4 = 0x63;
}
