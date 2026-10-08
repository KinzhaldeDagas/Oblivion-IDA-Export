//
// [Collision v143 2026-10-07] Verified list cinfo is 1C bytes: +04 raw hkShape* array, +08 count, +0C capacity flags; +10 filters pointer, +14 count, +18 capacity flags. Each hkShape+08 back-pointer identifies its bhk wrapper for RTTI. Native8E88A0 retains hk children;8A1390/8A13E0 retain/release Ni wrappers. Temporary arrays are borrowed for synchronous construction. Plugin v143 uses this constructor for mixed authored spheres, capsules and boxes.
void __thiscall OB_bhkListShape_BuildFromCinfo_010201A0(bhkRefObject *self, const OB_CollisionListCinfo_010201A0 *info)
{
  unsigned int childCount; // ebp
  unsigned int v3; // ebx
  _DWORD *v4; // eax
  int v5; // esi
  NiRTTI *v6; // eax
  NiRTTI *v7; // eax
  _WORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int v11; // ebx
  unsigned int j; // edi
  _WORD *v13; // eax
  void **i; // [esp+14h] [ebp-18h]

  if ( info ) /*0x8a11a1*/
  {
    childCount = info->childCount; /*0x8a11a7*/
    v3 = 0; /*0x8a11ad*/
    for ( i = info->childHkShapes; v3 < childCount; ++v3 ) /*0x8a11b5*/
    {
      v4 = info->childHkShapes[v3]; /*0x8a11be*/
      if ( v4 ) /*0x8a11c3*/
        v5 = v4[2]; /*0x8a11c5*/
      else
        v5 = 0; /*0x8a11ca*/
      if ( v5 ) /*0x8a11ce*/
      {
        v6 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5); /*0x8a11db*/
        if ( v6 ) /*0x8a11df*/
        {
          while ( v6 != &stru_BA8150 ) /*0x8a11e6*/
          {
            v6 = v6->parent; /*0x8a11ec*/
            if ( !v6 ) /*0x8a11f1*/
              goto LABEL_10; /*0x8a11f1*/
          }
        }
        else
        {
LABEL_10:
          v7 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5); /*0x8a11f3*/
          if ( !v7 ) /*0x8a11fe*/
          {
LABEL_13:
            v8 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x1C, 0x24); /*0x8a1212*/
            v8[2] = 0x1C; /*0x8a1223*/
            v9 = sub_8E89D0(v8, (int)i, childCount); /*0x8a123d*/
            goto LABEL_14; /*0x8a123d*/
          }
          while ( v7 != &stru_BA7FF8 ) /*0x8a1205*/
          {
            v7 = v7->parent; /*0x8a120b*/
            if ( !v7 ) /*0x8a1210*/
              goto LABEL_13; /*0x8a1210*/
          }
        }
      }
    }
    v13 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x20, 0x24); /*0x8a12e6*/
    v13[2] = 0x20; /*0x8a12f7*/
    v9 = sub_8E86E0(v13, (int)i, childCount); /*0x8a1311*/
LABEL_14:
    v10 = v9; /*0x8a1242*/
    v11 = (*(int (__thiscall **)(_DWORD *))(*v9 + 0x20))(v9); /*0x8a1255*/
    if ( childCount >= info->filterCount ) /*0x8a125c*/
      childCount = info->filterCount; /*0x8a125e*/
    for ( j = 0; j < childCount; ++j ) /*0x8a1264*/
    {
      sub_8E8880(v10, v11, info->childFilters[j]); /*0x8a1274*/
      (*(void (__thiscall **)(_DWORD *, int))(*v10 + 0x24))(v10, v11); /*0x8a1281*/
    }
    self->__vftable[1].super.Destructor((NiRefObject *)self, (bool)v10); /*0x8a1296*/
    if ( *((_WORD *)v10 + 2) ) /*0x8a1298*/
    {
      if ( !--*((_WORD *)v10 + 3) ) /*0x8a12a4*/
        (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1); /*0x8a12b5*/
    }
    self->__vftable[1].DumpAttributes(self, (void *)info); /*0x8a12c3*/
  }
}
