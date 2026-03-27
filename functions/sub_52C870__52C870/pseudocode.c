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

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESRace `RTTI Type Descriptor',
                    0);
  v4 = (int)v3;
  v27 = v3;
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  if ( !memcmp((char *)this + 0x50, (const void *)(v4 + 0x50), 0x24u) )
  {
    v6 = *((TESForm **)this + 0xC0);
    if ( !v6 )
      v6 = this;
    v7 = *(TESForm **)(v4 + 0x300);
    if ( !v7 )
      v7 = (TESForm *)v4;
    if ( v6 == v7 )
    {
      v8 = *((TESForm **)this + 0xC1);
      if ( !v8 )
        v8 = this;
      v9 = *(TESForm **)(v4 + 0x304);
      if ( !v9 )
        v9 = (TESForm *)v4;
      if ( v8 == v9
        && *((_DWORD *)this + 0x25) == *(_DWORD *)(v4 + 0x94)
        && *((_DWORD *)this + 0x26) == *(_DWORD *)(v4 + 0x98)
        && *((_BYTE *)this + 0x9C) == *(_BYTE *)(v4 + 0x9C) )
      {
        v24 = sub_52B4C0((float *)this);
        if ( v24 == sub_52B4C0((float *)v4) )
        {
          v25 = sub_52B4F0((float *)this);
          if ( v25 == sub_52B4F0((float *)v4)
            && !(*(unsigned __int8 (__thiscall **)(char *, int))(*((_DWORD *)this + 0x1D) + 0xC))(
                  (char *)this + 0x74,
                  v4 + 0x74)
            && !(*(unsigned __int8 (__thiscall **)(char *, int))(*((_DWORD *)this + 0x20) + 0xC))(
                  (char *)this + 0x80,
                  v4 + 0x80) )
          {
            v10 = 0;
            v11 = (char *)this + 0x1B8;
            v12 = (char *)this + 0xE0;
            while ( 1 )
            {
              v13 = sub_52BC50(v4, v10);
              if ( (*(unsigned __int8 (__thiscall **)(char *, unsigned int))(*(_DWORD *)v12 + 0xC))(v12, v13) )
                break;
              v14 = sub_52BD00(v4, v10);
              if ( (*(unsigned __int8 (__thiscall **)(char *, unsigned int))(*(_DWORD *)v11 + 0xC))(v11, v14) )
                break;
              ++v10;
              v12 += 0x18;
              v11 += 0xC;
              if ( v10 >= 9 )
              {
                v28 = (char *)this + 0x224;
                v15 = 0;
                v16 = (char *)this + 0xB0;
                v26 = (char *)v27 - (char *)this;
LABEL_27:
                v17 = v28;
                v18 = 0;
                while ( !(*(unsigned __int8 (__thiscall **)(char *, char *))(*(_DWORD *)v17 + 0xC))(v17, &v17[v26]) )
                {
                  ++v18;
                  v17 += 0xC;
                  if ( v18 >= 5 )
                  {
                    if ( (*(unsigned __int8 (__thiscall **)(char *, char *))(*(_DWORD *)v16 + 0xC))(v16, &v16[v26]) )
                      return 1;
                    v28 += 0x3C;
                    ++v15;
                    v16 += 0x18;
                    if ( v15 < 2 )
                      goto LABEL_27;
                    p_next = &v27[5].member.modlist.next;
                    v20 = BSSimpleList_Count((_DWORD *)this + 0x23);
                    if ( v20 != BSSimpleList_Count(&v27[5].member.modlist.next) )
                      return 1;
                    if ( v27 != (TESForm *)0xFFFFFF74 )
                    {
                      do
                      {
                        if ( !*p_next )
                          break;
                        if ( !sub_52B520(this, (int)(*p_next)[1].next) )
                          return 1;
                        p_next = (TESForm::ModReferenceList **)p_next[1];
                      }
                      while ( p_next );
                    }
                    v21 = v27 + 7;
                    v22 = BSSimpleList_Count((_DWORD *)this + 0x2A);
                    if ( v22 != BSSimpleList_Count(&v27[7].vtbl) )
                      return 1;
                    if ( v27 != (TESForm *)0xFFFFFF58 )
                    {
                      do
                      {
                        if ( !v21->vtbl )
                          break;
                        if ( !sub_52B5E0(this, (int)v21->vtbl->super.CompareTo) )
                          return 1;
                        v21 = *(TESForm **)&v21->member.type;
                      }
                      while ( v21 );
                    }
                    if ( sub_551990((char *)&v27[0x1B].member.modlist.next, (char *)this + 0x29C) )
                    {
                      *((_WORD *)this + 0x17E) = GetRandomLargeInteger_(0);
                      return 1;
                    }
                    return *((_WORD *)this + 0x17E) != LOWORD(v27[0x1F].member.modlist.next);
                  }
                }
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}
