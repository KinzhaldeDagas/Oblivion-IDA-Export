bool __thiscall sub_52C870(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  int v4; // ebp
  TESForm *v6; // ecx
  TESForm *v7; // eax
  TESForm *v8; // ecx
  TESForm *v9; // eax
  unsigned int v10; // esi
  char *v11; // ebx
  char *v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ebx
  char *v16; // ebp
  char *v17; // esi
  unsigned int v18; // edi
  TESForm::ModReferenceList **p_next; // esi
  int v20; // ebp
  TESForm *v21; // esi
  int v22; // ebp
  double v24; // [esp+1Ch] [ebp-Ch]
  double v25; // [esp+1Ch] [ebp-Ch]
  int v26; // [esp+1Ch] [ebp-Ch]
  TESForm *v27; // [esp+24h] [ebp-4h]
  char *v28; // [esp+2Ch] [ebp+4h]

  v3 = (TESForm *)OblivionDynamicCast( /*0x52c88e*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESRace `RTTI Type Descriptor',
                    0);
  v4 = (int)v3; /*0x52c893*/
  v27 = v3; /*0x52c89a*/
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) ) /*0x52c8ad*/
    return 1; /*0x52c8a1*/
  if ( !memcmp((char *)this + 0x50, (const void *)(v4 + 0x50), 0x24u) ) /*0x52c8c7*/
  {
    v6 = *((TESForm **)this + 0xC0); /*0x52c942*/
    if ( !v6 ) /*0x52c94a*/
      v6 = this; /*0x52c94c*/
    v7 = *(TESForm **)(v4 + 0x300); /*0x52c94e*/
    if ( !v7 ) /*0x52c956*/
      v7 = (TESForm *)v4; /*0x52c958*/
    if ( v6 == v7 ) /*0x52c95c*/
    {
      v8 = *((TESForm **)this + 0xC1); /*0x52c962*/
      if ( !v8 ) /*0x52c96a*/
        v8 = this; /*0x52c96c*/
      v9 = *(TESForm **)(v4 + 0x304); /*0x52c96e*/
      if ( !v9 ) /*0x52c976*/
        v9 = (TESForm *)v4; /*0x52c978*/
      if ( v8 == v9 /*0x52c9b2*/
        && *((_DWORD *)this + 0x25) == *(_DWORD *)(v4 + 0x94)
        && *((_DWORD *)this + 0x26) == *(_DWORD *)(v4 + 0x98)
        && *((_BYTE *)this + 0x9C) == *(_BYTE *)(v4 + 0x9C) )
      {
        v24 = sub_52B4C0((float *)this); /*0x52c9bf*/
        if ( v24 == sub_52B4C0((float *)v4) ) /*0x52c9d5*/
        {
          v25 = sub_52B4F0((float *)this); /*0x52c9e2*/
          if ( v25 == sub_52B4F0((float *)v4) /*0x52ca2b*/
            && !(*(unsigned __int8 (__thiscall **)(char *, int))(*((_DWORD *)this + 0x1D) + 0xC))(
                  (char *)this + 0x74,
                  v4 + 0x74)
            && !(*(unsigned __int8 (__thiscall **)(char *, int))(*((_DWORD *)this + 0x20) + 0xC))(
                  (char *)this + 0x80,
                  v4 + 0x80) )
          {
            v10 = 0; /*0x52ca35*/
            v11 = (char *)this + 0x1B8; /*0x52ca37*/
            v12 = (char *)this + 0xE0; /*0x52ca3d*/
            while ( 1 ) /*0x52ca46*/
            {
              v13 = sub_52BC50(v4, v10); /*0x52ca46*/
              if ( (*(unsigned __int8 (__thiscall **)(char *, unsigned int))(*(_DWORD *)v12 + 0xC))(v12, v13) ) /*0x52ca53*/
                break; /*0x52ca53*/
              v14 = sub_52BD00(v4, v10); /*0x52ca60*/
              if ( (*(unsigned __int8 (__thiscall **)(char *, unsigned int))(*(_DWORD *)v11 + 0xC))(v11, v14) ) /*0x52ca6d*/
                break; /*0x52ca6d*/
              ++v10; /*0x52ca77*/
              v12 += 0x18; /*0x52ca7a*/
              v11 += 0xC; /*0x52ca7d*/
              if ( v10 >= 9 ) /*0x52ca83*/
              {
                v28 = (char *)this + 0x224; /*0x52ca93*/
                v15 = 0; /*0x52ca9b*/
                v16 = (char *)this + 0xB0; /*0x52ca9d*/
                v26 = (char *)v27 - (char *)this; /*0x52caa5*/
LABEL_27:
                v17 = v28; /*0x52cab0*/
                v18 = 0; /*0x52cab4*/
                while ( !(*(unsigned __int8 (__thiscall **)(char *, char *))(*(_DWORD *)v17 + 0xC))(v17, &v17[v26]) ) /*0x52cac8*/
                {
                  ++v18; /*0x52cace*/
                  v17 += 0xC; /*0x52cad1*/
                  if ( v18 >= 5 ) /*0x52cad7*/
                  {
                    if ( (*(unsigned __int8 (__thiscall **)(char *, char *))(*(_DWORD *)v16 + 0xC))(v16, &v16[v26]) ) /*0x52cae9*/
                      return 1; /*0x52caed*/
                    v28 += 0x3C; /*0x52caf3*/
                    ++v15; /*0x52caf8*/
                    v16 += 0x18; /*0x52cafb*/
                    if ( v15 < 2 ) /*0x52cb01*/
                      goto LABEL_27; /*0x52cb01*/
                    p_next = &v27[5].member.modlist.next; /*0x52cb11*/
                    v20 = BSSimpleList_Count((_DWORD *)this + 0x23); /*0x52cb1e*/
                    if ( v20 != BSSimpleList_Count(&v27[5].member.modlist.next) ) /*0x52cb27*/
                      return 1; /*0x52cb27*/
                    if ( v27 != (TESForm *)0xFFFFFF74 ) /*0x52cb2f*/
                    {
                      do /*0x52cb4b*/
                      {
                        if ( !*p_next ) /*0x52cb31*/
                          break; /*0x52cb35*/
                        if ( !sub_52B520(this, (int)(*p_next)[1].next) ) /*0x52cb44*/
                          return 1; /*0x52cb44*/
                        p_next = (TESForm::ModReferenceList **)p_next[1]; /*0x52cb46*/
                      }
                      while ( p_next ); /*0x52cb4b*/
                    }
                    v21 = v27 + 7; /*0x52cb53*/
                    v22 = BSSimpleList_Count((_DWORD *)this + 0x2A); /*0x52cb60*/
                    if ( v22 != BSSimpleList_Count(&v27[7].vtbl) ) /*0x52cb69*/
                      return 1; /*0x52cb69*/
                    if ( v27 != (TESForm *)0xFFFFFF58 ) /*0x52cb6d*/
                    {
                      do /*0x52cb8a*/
                      {
                        if ( !v21->vtbl ) /*0x52cb70*/
                          break; /*0x52cb74*/
                        if ( !sub_52B5E0(this, (int)v21->vtbl->super.CompareTo) ) /*0x52cb83*/
                          return 1; /*0x52cb83*/
                        v21 = *(TESForm **)&v21->member.type; /*0x52cb85*/
                      }
                      while ( v21 ); /*0x52cb8a*/
                    }
                    if ( FaceGenHeadParameters_Differ( /*0x52cb9a*/
                           (const FaceGenHeadParameters *)&v27[0x1B].member.modlist.next,
                           (const FaceGenHeadParameters *)((char *)this + 0x29C)) )
                    {
                      *((_WORD *)this + 0x17E) = Game_RandomLargeInteger(0); /*0x52cbb0*/
                      return 1; /*0x52cbb0*/
                    }
                    return *((_WORD *)this + 0x17E) != LOWORD(v27[0x1F].member.modlist.next); /*0x52cbd4*/
                  }
                }
                return 1; /*0x52cac8*/
              }
            }
          }
        }
      }
    }
  }
  return 1; /*0x52c8a0*/
}
