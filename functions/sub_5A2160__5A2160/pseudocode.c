void __thiscall sub_5A2160(int this)
{
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // ecx
  int *v7; // eax
  int *v8; // esi
  int *v9; // ebp
  _DWORD *a2; // ebx
  int *v11; // eax
  _DWORD *v12; // esi
  int v13; // ebp
  double (__thiscall ***v14)(_DWORD, _DWORD); // ecx
  double (__thiscall *v15)(_DWORD, _DWORD); // eax
  double v16; // st7
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // ebx
  Tile *v20; // eax
  BSStringT *v21; // esi
  char *v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  float v25; // [esp+4h] [ebp-148h]
  float v26; // [esp+4h] [ebp-148h]
  float Float; // [esp+4h] [ebp-148h]
  float v28; // [esp+4h] [ebp-148h]
  float v29; // [esp+4h] [ebp-148h]
  char v30; // [esp+8h] [ebp-144h]
  char v31; // [esp+Ch] [ebp-140h]
  int v32; // [esp+1Ch] [ebp-130h]
  _DWORD *v33; // [esp+20h] [ebp-12Ch]
  BSStringT v34; // [esp+24h] [ebp-128h] BYREF
  BSStringT v35; // [esp+2Ch] [ebp-120h] BYREF
  Tile *parent; // [esp+34h] [ebp-118h]
  char v37[260]; // [esp+38h] [ebp-114h] BYREF
  int v38; // [esp+148h] [ebp-4h]

  v4 = *(_DWORD **)(this + 0x90); /*0x5a219d*/
  if ( v4 ) /*0x5a21a7*/
  {
    BSSimpleList_Clear(v4); /*0x5a21a9*/
    FormHeapFree(*(_DWORD *)(this + 0x90)); /*0x5a21b5*/
    *(_DWORD *)(this + 0x90) = 0; /*0x5a21bd*/
  }
  v5 = *(_DWORD *)(this + 0x30); /*0x5a21c3*/
  if ( v5 ) /*0x5a21c8*/
    *(_DWORD *)(this + 0x34) = OblivionDynamicCast( /*0x5a21e2*/
                                 *(void **)(v5 + 8),
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESEnchantableForm `RTTI Type Descriptor',
                                 0);
  v6 = *(_DWORD *)(this + 0x34); /*0x5a21e5*/
  if ( v6 ) /*0x5a21ea*/
  {
    if ( *(_DWORD *)(this + 0x2C) ) /*0x5a21ec*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x10))(v6) != 3 /*0x5a2208*/
        || !*(_DWORD *)(*(_DWORD *)(this + 0x28) + 0x2C) && !*(_DWORD *)(*(_DWORD *)(this + 0x28) + 0x28) )
      {
        v7 = (int *)EffectSettingCollection_FilteredEffectList(0, 0, 0, 1, v30, v31); /*0x5a2211*/
        *(_DWORD *)(this + 0x90) = v7; /*0x5a2219*/
        sub_663AA0((Actor *)reference, v7); /*0x5a2226*/
      }
    }
  }
  v8 = *(int **)(this + 0x90); /*0x5a222b*/
  v9 = 0; /*0x5a2231*/
  while ( v8 ) /*0x5a2235*/
  {
    if ( !v8[1] && !*v8 ) /*0x5a223c*/
      break; /*0x5a223e*/
    a2 = (_DWORD *)*v8; /*0x5a2240*/
    if ( *v8 /*0x5a2267*/
      && (a2[0x16] & 0x200000) != 0
      && sub_4194B0(*(_DWORD *)(this + 0x30), (int)a2, 1)
      && sub_419220(*(_DWORD **)(this + 0x28), a2) )
    {
      v9 = v8; /*0x5a2270*/
      v8 = (int *)v8[1]; /*0x5a2272*/
    }
    else if ( v9 ) /*0x5a2279*/
    {
      BSSimpleList_Remove(v9, (int)a2); /*0x5a227e*/
      v8 = (int *)v9[1]; /*0x5a2283*/
    }
    else
    {
      v11 = (int *)v8[1]; /*0x5a2288*/
      if ( v11 ) /*0x5a228d*/
      {
        v8[1] = v11[1]; /*0x5a2292*/
        *v8 = *v11; /*0x5a2298*/
        FormHeapFree((unsigned int)v11); /*0x5a229a*/
      }
      else
      {
        *v8 = 0; /*0x5a22a4*/
      }
    }
  }
  parent = *(Tile **)(this + 0x54); /*0x5a22b3*/
  sub_5893F0(parent); /*0x5a22b7*/
  v35.m_data = 0; /*0x5a22c6*/
  v35.m_dataLen = 0; /*0x5a22ca*/
  v35.m_bufLen = 0; /*0x5a22cf*/
  BSStringT_Set(&v35, "known_effect_template", 0); /*0x5a22d4*/
  v12 = *(_DWORD **)(this + 0x90); /*0x5a22d9*/
  v13 = 0; /*0x5a22df*/
  v38 = 0; /*0x5a22e1*/
  v33 = v12; /*0x5a22e8*/
  v32 = 0; /*0x5a22ec*/
  v34.m_data = 0; /*0x5a22f0*/
  *(_DWORD *)&v34.m_dataLen = 0; /*0x5a22f4*/
  v14 = (double (__thiscall ***)(_DWORD, _DWORD))(*(_DWORD *)(this + 0x28) + 0x24); /*0x5a2304*/
  v15 = **v14; /*0x5a2307*/
  LOBYTE(v38) = 1; /*0x5a230a*/
  v16 = v15(v14, 0); /*0x5a2312*/
  v17 = Double_To_SInt32(v16 * flt_B37ED0[0x46]); /*0x5a231a*/
  BSStringT_Static_Format(&v34, "%d", v17); /*0x5a232a*/
  Tile_SetString(*(_DWORD **)(this + 0x48), (_DWORD *)0xFDE, v34.m_data); /*0x5a233f*/
  v18 = sub_5E4420((Actor *)reference); /*0x5a234a*/
  BSStringT_Static_Format(&v34, "%d", v18); /*0x5a235a*/
  Tile_SetString(*(_DWORD **)(this + 0x4C), (_DWORD *)0xFDE, v34.m_data); /*0x5a236f*/
  if ( v12 ) /*0x5a2376*/
  {
    while ( 1 ) /*0x5a238c*/
    {
      v19 = (_DWORD *)*v12; /*0x5a238c*/
      v20 = Menu::RenderTemplate((Menu *)this, parent, v35.m_data, 0); /*0x5a2394*/
      v21 = (BSStringT *)v20; /*0x5a2399*/
      if ( v20 ) /*0x5a239d*/
      {
        if ( v19 ) /*0x5a23a5*/
        {
          v25 = (float)v32; /*0x5a23b2*/
          Tile_SetFloat(v20, 0xFAEu, v25); /*0x5a23ba*/
          v26 = (float)(v13 + 0x3E8); /*0x5a23d0*/
          Tile_SetFloat((Tile *)v21, 0xFA8u, v26); /*0x5a23d8*/
          v22 = (char *)v19[0xF]; /*0x5a23dd*/
          if ( !v22 ) /*0x5a23e2*/
            v22 = EmptyString; /*0x5a23e4*/
          Tile_SetString(v21, (_DWORD *)0xFB0, v22); /*0x5a23f1*/
          v23 = (const char *)v19[0xF]; /*0x5a23f6*/
          if ( !v23 ) /*0x5a23fb*/
            v23 = EmptyString; /*0x5a23fd*/
          BSStringT_Set(v21 + 1, v23, 0); /*0x5a2408*/
          Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 0x60), 0xFB5); /*0x5a241b*/
          Tile_SetFloat((Tile *)v21, 0xFB1u, Float); /*0x5a2425*/
          v24 = (const char *)v19[0x12]; /*0x5a242a*/
          if ( !v24 ) /*0x5a242f*/
            v24 = EmptyString; /*0x5a2431*/
          _sprintf(v37, "%s\\%s", "Icons", v24); /*0x5a2446*/
          Tile_SetString(v21, (_DWORD *)0xFAF, v37); /*0x5a245a*/
          v28 = (float)(int)v19[0x26]; /*0x5a2470*/
          Tile_SetFloat((Tile *)v21, 0xFB2u, v28); /*0x5a2478*/
          Tile_SetFloat((Tile *)v21, 0xFB4u, flt_A31C80); /*0x5a248e*/
          Tile_SetFloat((Tile *)v21, 0xFC9u, fConstant_2); /*0x5a24a4*/
          v32 = ++v13; /*0x5a24b4*/
          v29 = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 0x60), 0xFB5); /*0x5a24be*/
          Tile_SetFloat((Tile *)v21, 0xFB6u, v29); /*0x5a24c8*/
        }
      }
      v33 = (_DWORD *)v33[1]; /*0x5a24d6*/
      if ( !v33 ) /*0x5a24da*/
        break; /*0x5a24da*/
      v12 = v33; /*0x5a2380*/
    }
  }
  FormHeapFree((unsigned int)v34.m_data); /*0x5a24e5*/
  FormHeapFree((unsigned int)v35.m_data); /*0x5a24ef*/
}
