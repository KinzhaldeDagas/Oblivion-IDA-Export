void __thiscall TESTopicInfo::Copy(TESForm *this, TESForm *a2)
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
  TESForm *ResultScript; // [esp-4h] [ebp-30h]
  int *v23; // [esp+18h] [ebp-14h]
  TESForm *a2a; // [esp+30h] [ebp+4h]

  v2 = this; /*0x531b67*/
  v4 = (char *)OblivionDynamicCast( /*0x531b85*/
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESTopicInfo `RTTI Type Descriptor',
                 0);
  a2a = (TESForm *)v4; /*0x531b8c*/
  if ( v4 )
  {
    TESForm_CopyAllComponentsFrom(v2, a2); /*0x531b99*/
    *(_WORD *)((char *)&v2[1].member.flags + 3) = *(_WORD *)(v4 + 0x23); /*0x531ba2*/
    BYTE1(v2[1].member.refID) = v4[0x25]; /*0x531ba9*/
    sub_530690((BSSimpleList_VoidPtr *)v2); /*0x531bae*/
    v5 = (TESFormVtbl **)(v4 + 0x28); /*0x531bb3*/
    if ( v5 ) /*0x531bb8*/
    {
      do /*0x531c04*/
      {
        v6 = *v5; /*0x531bc0*/
        if ( !*v5 ) /*0x531bc0*/
          break; /*0x531bc4*/
        v5 = (TESFormVtbl **)v5[1]; /*0x531bca*/
        v7 = (TESForm *)((char *)this + 0x28); /*0x531bcd*/
        if ( *((_DWORD *)this + 0xB) ) /*0x531bd0*/
        {
          do /*0x531bd8*/
            v7 = *(TESForm **)&v7->member.type; /*0x531bd5*/
          while ( *(_DWORD *)&v7->member.type ); /*0x531bd8*/
        }
        if ( v7->vtbl ) /*0x531bdd*/
        {
          v8 = (TESFormVtbl **)FormHeapAlloc(8u); /*0x531be3*/
          if ( v8 ) /*0x531bed*/
          {
            *v8 = v6; /*0x531bef*/
            v8[1] = 0; /*0x531bf1*/
            *(_DWORD *)&v7->member.type = v8; /*0x531bf4*/
          }
          else
          {
            *(_DWORD *)&v7->member.type = 0; /*0x531bfb*/
          }
        }
        else
        {
          v7->vtbl = v6; /*0x531c00*/
        }
      }
      while ( v5 ); /*0x531c04*/
      v2 = this; /*0x531c06*/
    }
    TESTopicInfo_ClearSharedResponseCache(); /*0x531c0c*/
    v9 = a2a; /*0x531c11*/
    v10 = TESTopicInfo::GetResponseList(a2a); /*0x531c17*/
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = (char **)*v10; /*0x531c2a*/
        if ( !*v10 ) /*0x531c2a*/
          break; /*0x531c2a*/
        v12 = v10[1]; /*0x531c34*/
        v23 = (int *)v12; /*0x531c39*/
        v13 = (_DWORD *)FormHeapAlloc(0x18u); /*0x531c3d*/
        v14 = v13 ? (BSStringT *)TESResponse::TESResponse(v13) : 0;
        TESResponse::CopyFrom(v14, v11); /*0x531c69*/
        v15 = TESTopicInfo::GetResponseList(this); /*0x531c72*/
        if ( v14 ) /*0x531c79*/
        {
          v16 = v15; /*0x531c7b*/
          v17 = (int)(v15 + 1); /*0x531c7d*/
          if ( *(_DWORD *)v17 ) /*0x531c80*/
          {
            do /*0x531c8c*/
            {
              v16 = *(_DWORD **)v17; /*0x531c84*/
              v18 = *(_DWORD *)(*(_DWORD *)v17 + 4) == 0; /*0x531c86*/
              v17 = *(_DWORD *)v17 + 4; /*0x531c89*/
            }
            while ( !v18 ); /*0x531c8c*/
          }
          if ( *v16 ) /*0x531c8e*/
          {
            v19 = (BSStringT **)FormHeapAlloc(8u); /*0x531c94*/
            if ( v19 ) /*0x531c9e*/
            {
              *v19 = v14; /*0x531ca0*/
              v19[1] = 0; /*0x531ca2*/
              v16[1] = v19; /*0x531ca5*/
            }
            else
            {
              v16[1] = 0; /*0x531cac*/
            }
          }
          else
          {
            *v16 = v14; /*0x531cb1*/
          }
        }
        v2 = this; /*0x531cb3*/
        v18 = v12 == 0; /*0x531cb7*/
        v9 = a2a; /*0x531cb9*/
        if ( v18 ) /*0x531cbd*/
          break; /*0x531cbd*/
        v10 = v23; /*0x531c26*/
      }
    }
    ResultScript = TESTopicInfo::GetResultScript((OblivionTopicInfo *)v9); /*0x531cca*/
    v20 = TESTopicInfo::GetResultScript((OblivionTopicInfo *)v2); /*0x531ccd*/
    Script_CopyFrom(v20, 0, (int)ResultScript); /*0x531cd4*/
    LOWORD(v2[1].member.flags) = v9[1].member.flags; /*0x531ce3*/
    sub_530430((void **)&v2->vtbl, &v9[1]); /*0x531ce7*/
    if ( v9[2].vtbl ) /*0x531cec*/
      sub_530BA0((unsigned int *)v2, (int *)v9[2].vtbl); /*0x531cf6*/
    TESForm_SetIsLinked(v2, (v9->member.flags & 8) != 0); /*0x531d0a*/
  }
}
