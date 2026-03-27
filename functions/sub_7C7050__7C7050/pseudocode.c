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
  char v13; // al
  int v14; // eax

  if ( !a1 )
    return 1;
  v3 = (NiObject *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  v4 = v3;
  if ( v3 )
  {
    v6 = 1;
    v7 = 0;
    v8 = NiRTTI_Cast((BSStringT *)dword_B3FD70, v3);
    if ( v8 )
    {
      vftable = (int)v8[0x1C].__vftable;
      if ( vftable >= 0 && vftable < HIWORD(v8[0x16].members.m_uiRefCount) )
      {
        v10 = *((_DWORD *)&v8[0x16].__vftable->super.Destructor + vftable);
        if ( v10 )
        {
          if ( (*(_BYTE *)(v10 + 0x18) & 1) == 0 )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x10))(v10) )
              return sub_7C6100((NiNode *)v10, a2) & 1;
            v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
            if ( v11 )
            {
              if ( (*(_BYTE *)(v11 + 0x18) & 1) == 0 )
                return sub_7C7050(v11, a2) & 1;
            }
          }
        }
      }
      return v6;
    }
    if ( !HIWORD(v4[0x16].members.m_uiRefCount) )
      return v6;
    while ( 1 )
    {
      v12 = *((_DWORD *)&v4[0x16].__vftable->super.Destructor + v7);
      if ( !v12 || (*(_BYTE *)(v12 + 0x18) & 1) != 0 )
        goto LABEL_26;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x10))(v12) )
      {
        v13 = sub_7C6100((NiNode *)v12, a2);
      }
      else
      {
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12);
        if ( !v14 || (*(_BYTE *)(v14 + 0x18) & 1) != 0 )
          goto LABEL_26;
        v13 = sub_7C7050(v14, a2);
      }
      v6 &= v13;
LABEL_26:
      if ( HIWORD(v4[0x16].members.m_uiRefCount) <= (unsigned int)++v7 )
        return v6;
    }
  }
  v5 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x10))(a1);
  if ( v5 )
    return sub_7C6100(v5, a2);
  else
    return 1;
}
