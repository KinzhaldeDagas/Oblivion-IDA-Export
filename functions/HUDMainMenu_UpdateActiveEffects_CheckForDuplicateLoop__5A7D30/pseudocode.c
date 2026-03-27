// positive sp value has been detected, the output may be wrong!
int __userpurge HUDMainMenu_UpdateActiveEffects_::CheckForDuplicateLoop@<eax>(
        int a1@<ebp>,
        int edi0@<edi>,
        unsigned int esi0@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7,
        float a8,
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
  unsigned int **v18; // ebx
  unsigned int *v19; // eax
  const char *v20; // eax
  double v21; // st7
  _DWORD *v22; // eax
  int v23; // eax
  _DWORD *v24; // ecx
  Tile *v25; // ecx
  _DWORD *v26; // edx
  _DWORD *v27; // eax
  float *v28; // eax
  int v29; // ecx
  float v31; // [esp-10h] [ebp-20h]
  float Float; // [esp-8h] [ebp-18h]
  float v33; // [esp-8h] [ebp-18h]
  int v34; // [esp-4h] [ebp-14h]
  int v35; // [esp+0h] [ebp-10h]
  int v36; // [esp+4h] [ebp-Ch]
  int v37; // [esp+8h] [ebp-8h]
  _DWORD *a2; // [esp+Ch] [ebp-4h] BYREF
  unsigned int retaddr; // [esp+10h] [ebp+0h]

  do
  {
    if ( *a2 )
    {
      v11 = *(_DWORD *)(*a2 + 4);
      if ( v11 )
      {
        if ( *(_DWORD *)v11 )
        {
          v12 = *(_DWORD *)(*(_DWORD *)v11 + 0xC);
          v13 = *(_DWORD *)(a1 + 0xC);
          v14 = *(_DWORD *)(v13 + 0x1C);
          if ( *(_DWORD *)(*(_DWORD *)(v12 + 0x1C) + 0x98) == *(_DWORD *)(v14 + 0x98)
            && ((*(_DWORD *)(v14 + 0x58) & 0x180000) == 0 || *(_DWORD *)(v12 + 0x14) == *(_DWORD *)(v13 + 0x14)) )
          {
            break;
          }
        }
      }
    }
    ++a2;
    ++esi0;
  }
  while ( esi0 < *(_DWORD *)(edi0 + 0x84) );
  if ( LOBYTE(STACK[0x124]) )
  {
    if ( esi0 < *(_DWORD *)(edi0 + 0x84) )
    {
      BSSimpleList_Remove(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0) + 4), a1);
      v15 = *(_DWORD *)(edi0 + 0x7C);
      v16 = *(_DWORD **)(*(_DWORD *)(v15 + 4 * esi0) + 4);
      if ( !v16[1] && !*v16 )
      {
        v17 = *(_DWORD ***)(v15 + 4 * esi0);
        Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(edi0 + 4), 0xFDB);
        v31 = Tile_GetFloat(*v17, 0xFA7);
        sub_589980(*v17, 0xFA7, v31, 0.0, Float);
        ++*(_BYTE *)(edi0 + 0x90);
      }
    }
  }
  else
  {
    if ( esi0 == *(_DWORD *)(edi0 + 0x84) )
    {
      if ( esi0 >= 8 )
        return ((int (__stdcall *)(int, _DWORD))HUDMainMenu_UpdateActiveEffects_::Done)(a7, LODWORD(a8));
      v18 = (unsigned int **)FormHeapAlloc(8u);
      a2 = v18;
      v19 = (unsigned int *)FormHeapAlloc(8u);
      if ( v19 )
      {
        *v19 = 0;
        v19[1] = 0;
      }
      else
      {
        v19 = 0;
      }
      v18[1] = v19;
      *v18 = Menu_CreateTileFromTemplate((_DWORD *)edi0, a4, a5, a6, *(TileWindow **)(edi0 + 0x50), "icon_template", 0);
      v20 = *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x48);
      if ( !v20 )
        v20 = EmptyString;
      _sprintf((char *)&a7, "%s\\%s", "Icons", v20);
      Tile_SetString(*v18, (_DWORD *)0xFE6, (char *)&a7);
      retaddr = esi0;
      v21 = (double)(int)esi0;
      v33 = v21;
      Tile_SetFloat((Tile *)*v18, (_DWORD *)0xFAE, v33);
      esi0 = sub_5A6AB0((unsigned int *)(edi0 + 0x78), &a2);
      sub_58FBA0((int)*v18, a4, a5, v21, 0);
    }
    v22 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0) + 4);
    if ( v22 )
    {
      while ( *v22 != a1 )
      {
        v22 = (_DWORD *)v22[1];
        if ( !v22 )
          goto LABEL_24;
      }
    }
    else
    {
LABEL_24:
      BSSimpleList_InsertSorted(
        *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0) + 4),
        a1,
        (int)sub_5A63F0,
        v34,
        v35,
        v36,
        v37,
        (int (__cdecl *)(int, _DWORD))a2);
    }
    if ( a1 == **(_DWORD **)(*(_DWORD *)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0) + 4) )
    {
      v23 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 0x18))(*(_DWORD *)(a1 + 8));
      a2 = v24;
      if ( v23 == 1 )
      {
        Tile_SetFloat(**(Tile ***)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0), (_DWORD *)0xFAF, flt_A30634);
      }
      else
      {
        v25 = **(Tile ***)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0);
        a3 = *(float *)(a1 + 0x1C) - *(float *)(a1 + 4);
        a11 = *(_DWORD **)(a1 + 0x1C);
        Tile_SetFloat(v25, (_DWORD *)0xFAF, a3);
        v26 = **(_DWORD ***)(*(_DWORD *)(edi0 + 0x7C) + 4 * esi0);
        a2 = 0;
        v27 = sub_5894F0(v26, 0x11);
        v28 = (float *)OblivionDynamicCast(
                         v27,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                         &Tile3D `RTTI Type Descriptor',
                         (int)a2);
        if ( v28 )
        {
          v29 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v28 + 0x11) + 0x14) + 4);
          *(float *)&a11 = a3 / *(float *)&a11;
          v28[0x16] = (1.0 - *(float *)&a11) * *(float *)(v29 + 0x18);
        }
      }
    }
  }
  return ((int (__stdcall *)(int, _DWORD))HUDMainMenu_UpdateActiveEffects_::Done)(a7, LODWORD(a8));
}
