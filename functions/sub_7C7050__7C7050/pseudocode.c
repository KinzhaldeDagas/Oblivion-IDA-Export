char __cdecl sub_7C7050(int a1, int a2)
{
  NiObject *v3; // eax
  NiObject *v4; // ebp
  NiNode *v5; // eax
  char v6; // bl
  int v7; // edi
  NiObject *v8; // eax
  int vftable; // ecx
  int v10; // esi
  int v11; // eax
  int v12; // esi
  char updated; // al
  int v14; // eax

  if ( !a1 ) /*0x7c7057*/
    return 1; /*0x7c705c*/
  v3 = (NiObject *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x7c7065*/
  v4 = v3; /*0x7c7067*/
  if ( v3 ) /*0x7c706b*/
  {
    v6 = 1; /*0x7c7092*/
    v7 = 0; /*0x7c7094*/
    v8 = NiRTTI_Cast((BSStringT *)&stru_B3FD70, v3); /*0x7c7096*/
    if ( v8 ) /*0x7c70a0*/
    {
      vftable = (int)v8[0x1C].__vftable; /*0x7c70a6*/
      if ( vftable >= 0 && vftable < HIWORD(v8[0x16].members.m_uiRefCount) ) /*0x7c70bd*/
      {
        v10 = *((_DWORD *)&v8[0x16].__vftable->super.Destructor + vftable); /*0x7c70c9*/
        if ( v10 ) /*0x7c70ce*/
        {
          if ( (*(_BYTE *)(v10 + 0x18) & 1) == 0 ) /*0x7c70d7*/
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x10))(v10) ) /*0x7c70e4*/
              return ShadowSceneNode_UpdateGeometryReceiverAssociations((NiNode *)v10, a2) & 1; /*0x7c7103*/
            v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x7c710b*/
            if ( v11 ) /*0x7c710f*/
            {
              if ( (*(_BYTE *)(v11 + 0x18) & 1) == 0 ) /*0x7c7119*/
                return sub_7C7050(v11, a2) & 1; /*0x7c7138*/
            }
          }
        }
      }
      return v6; /*0x7c7119*/
    }
    if ( !HIWORD(v4[0x16].members.m_uiRefCount) ) /*0x7c7142*/
      return v6; /*0x7c71a7*/
    while ( 1 ) /*0x7c714e*/
    {
      v12 = *((_DWORD *)&v4[0x16].__vftable->super.Destructor + v7); /*0x7c714e*/
      if ( !v12 || (*(_BYTE *)(v12 + 0x18) & 1) != 0 ) /*0x7c7159*/
        goto LABEL_26; /*0x7c7159*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x10))(v12) ) /*0x7c7162*/
      {
        updated = ShadowSceneNode_UpdateGeometryReceiverAssociations((NiNode *)v12, a2); /*0x7c716e*/
      }
      else
      {
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12); /*0x7c717c*/
        if ( !v14 || (*(_BYTE *)(v14 + 0x18) & 1) != 0 ) /*0x7c7186*/
          goto LABEL_26; /*0x7c7186*/
        updated = sub_7C7050(v14, a2); /*0x7c718e*/
      }
      v6 &= updated; /*0x7c7196*/
LABEL_26:
      if ( HIWORD(v4[0x16].members.m_uiRefCount) <= (unsigned int)++v7 ) /*0x7c71a4*/
        return v6; /*0x7c71a4*/
    }
  }
  v5 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x10))(a1); /*0x7c7074*/
  if ( v5 ) /*0x7c7078*/
    return ShadowSceneNode_UpdateGeometryReceiverAssociations(v5, a2); /*0x7c7080*/
  else
    return 1; /*0x7c7086*/
}
