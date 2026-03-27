void __thiscall sub_7D21F0(_DWORD *this)
{
  _DWORD *v2; // edi
  NiNode *v3; // eax
  NiProperty *NiPropertyByID; // esi
  BOOL v5; // eax
  _DWORD *v6; // eax

  v2 = (_DWORD *)*(this + 0x3A);
  while ( v2 )
  {
    v3 = (NiNode *)v2[2];
    v2 = (_DWORD *)*v2;
    NiPropertyByID = NiNode_GetNiPropertyByID(v3, 4);
    if ( NiPropertyByID )
    {
      v5 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
      v6 = v5 ? (_DWORD *)NiPropertyByID : 0;
      if ( v6 )
        sub_7EE720(v6, (char)this);
    }
  }
  dword_B42E90 = 0xFFFFFFFF;
  dword_B42EB8 = 0;
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 0x39));
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)this + 0xB);
}
