// positive sp value has been detected, the output may be wrong!
void __userpurge HUDMainMenu_UpdateActiveEffects_::CheckForDuplicateLoop(
        int _EBP@<ebp>,
        int edi0@<edi>,
        unsigned int esi0@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7,
        int a8,
        int a9,
        float a3,
        _DWORD *a11)
{
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  _DWORD *v16; // eax
  _DWORD **v17; // esi
  Tile **v18; // ebx
  Tile *v19; // eax
  const char *v20; // eax
  _DWORD *v21; // eax
  int v22; // eax
  _DWORD *v23; // ecx
  Tile **v24; // ecx
  Tile *v25; // ecx
  _DWORD *v26; // edx
  _DWORD *v27; // eax
  float *v28; // eax
  float v31; // [esp-10h] [ebp-20h]
  float v32; // [esp-Ch] [ebp-1Ch]
  float v33; // [esp-8h] [ebp-18h]
  float v34; // [esp-8h] [ebp-18h]
  int v35; // [esp-4h] [ebp-14h]
  _DWORD *v36; // [esp+0h] [ebp-10h]
  int v37; // [esp+4h] [ebp-Ch]
  int v38; // [esp+8h] [ebp-8h]
  _DWORD *a2; // [esp+Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+10h] [ebp+0h]

  do /*0x5a7d80*/
  {
    if ( *a2 ) /*0x5a7d34*/
    {
      v11 = *(_DWORD *)(*a2 + 4); /*0x5a7d3a*/
      if ( v11 ) /*0x5a7d3f*/
      {
        if ( *(_DWORD *)v11 ) /*0x5a7d41*/
        {
          v12 = *(_DWORD *)(*(_DWORD *)v11 + 0xC); /*0x5a7d47*/
          v13 = *(_DWORD *)(_EBP + 0xC); /*0x5a7d4a*/
          v14 = *(_DWORD *)(v13 + 0x1C); /*0x5a7d50*/
          if ( *(_DWORD *)(*(_DWORD *)(v12 + 0x1C) + 0x98) == *(_DWORD *)(v14 + 0x98) /*0x5a7d70*/
            && ((*(_DWORD *)(v14 + 0x58) & 0x180000) == 0 || *(_DWORD *)(v12 + 0x14) == *(_DWORD *)(v13 + 0x14)) )
          {
            break; /*0x5a7d70*/
          }
        }
      }
    }
    ++a2; /*0x5a7d72*/
    ++esi0; /*0x5a7d77*/
  }
  while ( esi0 < *(_DWORD *)(edi0 + 0x84) ); /*0x5a7d80*/
  if ( LOBYTE(STACK[0x124]) ) /*0x5a7d82*/
  {
    if ( esi0 < *(_DWORD *)(edi0 + 0x84) ) /*0x5a7d92*/
    {
      BSSimpleList_Remove(*(int **)(*(_DWORD *)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0) + 4), _EBP); /*0x5a7da2*/
      v15 = *(_DWORD *)(edi0 + 0x7C); /*0x5a7da7*/
      v16 = *(_DWORD **)(*(_DWORD *)(v15 + 4 * esi0) + 4); /*0x5a7dad*/
      if ( !v16[1] && !*v16 ) /*0x5a7dba*/
      {
        v17 = *(_DWORD ***)(v15 + 4 * esi0); /*0x5a7dc5*/
        Tile_GetFloat(*(_DWORD **)(edi0 + 4), 0xFDB); /*0x5a7dd0*/
        __asm /*0x5a7dda*/
        {
          fstp    [esp+8+a2]; float
          fldz
          fstp    [esp+8+var_8]; float
        }
        Tile_GetFloat(*v17, 0xFA7); /*0x5a7de8*/
        __asm { fstp    [esp+0Ch+var_C]; float } /*0x5a7df0*/
        sub_589980(*v17, 0xFA7, v31, v32, v33); /*0x5a7df8*/
        ++*(_BYTE *)(edi0 + 0x90); /*0x5a7dfd*/
      }
    }
  }
  else
  {
    if ( esi0 == *(_DWORD *)(edi0 + 0x84) ) /*0x5a7e0f*/
    {
      if ( esi0 >= 8 ) /*0x5a7e18*/
        goto LABEL_30; /*0x5a7e18*/
      v18 = (Tile **)FormHeapAlloc(8u); /*0x5a7e25*/
      a2 = v18; /*0x5a7e29*/
      v19 = (Tile *)FormHeapAlloc(8u); /*0x5a7e2d*/
      if ( v19 ) /*0x5a7e37*/
      {
        *(_DWORD *)v19 = 0; /*0x5a7e39*/
        *((_DWORD *)v19 + 1) = 0; /*0x5a7e3f*/
      }
      else
      {
        v19 = 0; /*0x5a7e48*/
      }
      v18[1] = v19; /*0x5a7e4c*/
      *v18 = Menu::RenderTemplate((Menu *)edi0, *(Tile **)(edi0 + 0x50), "icon_template", 0); /*0x5a7e5f*/
      v20 = *(const char **)(*(_DWORD *)(*(_DWORD *)(_EBP + 0xC) + 0x1C) + 0x48); /*0x5a7e6a*/
      if ( !v20 ) /*0x5a7e6f*/
        v20 = EmptyString; /*0x5a7e71*/
      _sprintf((char *)&a7, "%s\\%s", "Icons", v20); /*0x5a7e86*/
      Tile_SetString(*v18, (_DWORD *)0xFE6, (char *)&a7); /*0x5a7e9a*/
      retaddr = (_UNKNOWN *)esi0; /*0x5a7ea1*/
      __asm { fild    [esp+arg_10] } /*0x5a7ea5*/
      __asm { fstp    [esp+4+a2]; value }
      Tile_SetFloat(*v18, 0xFAEu, v34); /*0x5a7ebc*/
      esi0 = NiTLargeArray32_AppendSlot((NiTLargeArrayUInt32 *)(edi0 + 0x78), (const unsigned int *)&a2); /*0x5a7ed2*/
      sub_58FBA0((int)*v18, a4, a5, a6, 0); /*0x5a7ed4*/
    }
    v21 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0) + 4); /*0x5a7ee2*/
    if ( v21 ) /*0x5a7ee6*/
    {
      while ( *v21 != _EBP ) /*0x5a7eea*/
      {
        v21 = (_DWORD *)v21[1]; /*0x5a7eec*/
        if ( !v21 ) /*0x5a7ef1*/
          goto LABEL_24; /*0x5a7ef1*/
      }
    }
    else
    {
LABEL_24:
      BSSimpleList_InsertSorted( /*0x5a7ef3*/
        *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0) + 4),
        _EBP,
        (int)sub_5A63F0,
        v35,
        v36,
        v37,
        v38,
        (int (__cdecl *)(int, _DWORD))a2);
    }
    if ( _EBP == **(_DWORD **)(*(_DWORD *)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0) + 4) ) /*0x5a7f09*/
    {
      v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(_EBP + 8) + 0x18))(*(_DWORD *)(_EBP + 8)); /*0x5a7f17*/
      a2 = v23; /*0x5a7f1c*/
      if ( v22 == 1 ) /*0x5a7f1d*/
      {
        __asm { fld     dword ptr ds:0A30634h } /*0x5a7f22*/
        v24 = *(Tile ***)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0); /*0x5a7f28*/
        __asm { fstp    [esp-10h+a3]; value } /*0x5a7f2b*/
        Tile_SetFloat(*v24, 0xFAFu, *(float *)&a2); /*0x5a7f35*/
      }
      else
      {
        __asm { fld     dword ptr [ebp+1Ch] } /*0x5a7f3c*/
        __asm { fsub    dword ptr [ebp+4] }
        v25 = **(Tile ***)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0); /*0x5a7f48*/
        __asm /*0x5a7f4a*/
        {
          fstp    [esp-10h+arg_20]
          fld     dword ptr [ebp+1Ch]
          fstp    [esp-10h+arg_24]
          fld     [esp-10h+arg_20]
          fstp    [esp-10h+a3]; value
        }
        Tile_SetFloat(v25, 0xFAFu, *(float *)&a2); /*0x5a7f61*/
        v26 = **(_DWORD ***)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0); /*0x5a7f6c*/
        *(float *)&a2 = 0.0; /*0x5a7f6e*/
        v27 = sub_5894F0(v26, 0x11); /*0x5a7f7f*/
        v28 = (float *)OblivionDynamicCast( /*0x5a7f88*/
                         v27,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                         &Tile3D `RTTI Type Descriptor',
                         (int)a2);
        if ( v28 ) /*0x5a7f92*/
        {
          __asm { fld     [esp-14h+arg_20] } /*0x5a7f94*/
          __asm { fdiv    [esp-14h+arg_24] }
          _ECX = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v28 + 0x11) + 0x14) + 4); /*0x5a7fa2*/
          __asm /*0x5a7fa5*/
          {
            fstp    [esp-14h+arg_24]
            fld     [esp-14h+arg_24]
            fld1
            fsubrp  st(1), st
            fmul    dword ptr [ecx+18h]
            fstp    dword ptr [eax+58h]
          }
          v28[0x16] = _ET1; /*0x5a7fb4*/
        }
      }
    }
  }
LABEL_30:
  HUDMainMenu_UpdateActiveEffects_::Done(a7, a8); /*0x5a7fb7*/
}
