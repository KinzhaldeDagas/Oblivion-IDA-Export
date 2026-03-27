void __thiscall sub_531B40(TESForm *this, TESForm *a2)
{
  TESForm *v2; // edi
  char *v4; // ebx
  TESFormVtbl **v5; // ebx
  TESFormVtbl *v6; // edi
  TESForm *v7; // esi
  TESFormVtbl **v8; // eax
  TESForm *v9; // ebx
  int *v10; // eax
  char **v11; // esi
  int v12; // ebx
  _DWORD *v13; // eax
  BSStringT *v14; // edi
  int *v15; // eax
  _DWORD *v16; // esi
  int v17; // eax
  bool v18; // zf
  BSStringT **v19; // eax
  TESForm *v20; // eax
  TESForm *v21; // [esp-4h] [ebp-30h]
  int *v23; // [esp+18h] [ebp-14h]
  TESForm *a2a; // [esp+30h] [ebp+4h]

  v2 = this;
  v4 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESTopicInfo `RTTI Type Descriptor',
                 0);
  a2a = (TESForm *)v4;
  if ( v4 )
  {
    TESForm_CopyAllComponentsFrom(v2, a2);
    *(_WORD *)((char *)&v2[1].member.flags + 3) = *(_WORD *)(v4 + 0x23);
    BYTE1(v2[1].member.refID) = v4[0x25];
    sub_530690((BSSimpleList_VoidPtr *)v2);
    v5 = (TESFormVtbl **)(v4 + 0x28);
    if ( v5 )
    {
      do
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        v5 = (TESFormVtbl **)v5[1];
        v7 = (TESForm *)((char *)this + 0x28);
        if ( *((_DWORD *)this + 0xB) )
        {
          do
            v7 = *(TESForm **)&v7->member.type;
          while ( *(_DWORD *)&v7->member.type );
        }
        if ( v7->vtbl )
        {
          v8 = (TESFormVtbl **)FormHeapAlloc(8u);
          if ( v8 )
          {
            *v8 = v6;
            v8[1] = 0;
            *(_DWORD *)&v7->member.type = v8;
          }
          else
          {
            *(_DWORD *)&v7->member.type = 0;
          }
        }
        else
        {
          v7->vtbl = v6;
        }
      }
      while ( v5 );
      v2 = this;
    }
    sub_530620();
    v9 = a2a;
    v10 = sub_530C40(a2a);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = (char **)*v10;
        if ( !*v10 )
          break;
        v12 = v10[1];
        v23 = (int *)v12;
        v13 = (_DWORD *)FormHeapAlloc(0x18u);
        v14 = v13 ? (BSStringT *)sub_52E150(v13) : 0;
        sub_52E110(v14, v11);
        v15 = sub_530C40(this);
        if ( v14 )
        {
          v16 = v15;
          v17 = (int)(v15 + 1);
          if ( *(_DWORD *)v17 )
          {
            do
            {
              v16 = *(_DWORD **)v17;
              v18 = *(_DWORD *)(*(_DWORD *)v17 + 4) == 0;
              v17 = *(_DWORD *)v17 + 4;
            }
            while ( !v18 );
          }
          if ( *v16 )
          {
            v19 = (BSStringT **)FormHeapAlloc(8u);
            if ( v19 )
            {
              *v19 = v14;
              v19[1] = 0;
              v16[1] = v19;
            }
            else
            {
              v16[1] = 0;
            }
          }
          else
          {
            *v16 = v14;
          }
        }
        v2 = this;
        v18 = v12 == 0;
        v9 = a2a;
        if ( v18 )
          break;
        v10 = v23;
      }
    }
    v21 = sub_531290(v9);
    v20 = sub_531290(v2);
    sub_4FC7A0(v20, 0, (int)v21);
    LOWORD(v2[1].member.flags) = v9[1].member.flags;
    sub_530430((void **)&v2->vtbl, &v9[1]);
    if ( v9[2].vtbl )
      sub_530BA0((unsigned int *)v2, (int *)v9[2].vtbl);
    TESForm_SetIsLinked(v2, (v9->member.flags & 8) != 0);
  }
}
