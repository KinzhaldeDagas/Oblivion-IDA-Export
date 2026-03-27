void __thiscall sub_589D60(_DWORD *this)
{
  int v2; // eax
  NiNode *v3; // edi
  NiTexturingProperty *NiPropertyByID; // eax
  _DWORD *v5; // esi
  void *v6; // edi

  v2 = *(this + 9);
  if ( v2 )
  {
    if ( *(_WORD *)(v2 + 0xB6) )
      v3 = **(NiNode ***)(v2 + 0xB0);
    else
      v3 = 0;
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) == 0x386 )
    {
      if ( v3 )
      {
        NiPropertyByID = (NiTexturingProperty *)NiNode_GetNiPropertyByID(v3, 6);
        if ( NiPropertyByID )
        {
          NiTexturingProperty::SetUnk08(NiPropertyByID, 0);
          *(this + 0xB) |= 0x20u;
        }
      }
    }
  }
  v5 = (_DWORD *)*(this + 0xD);
  while ( v5 )
  {
    v6 = (void *)v5[2];
    v5 = (_DWORD *)*v5;
    if ( v6 != (void *)sub_5A8260() && v6 != (void *)sub_5A8270() && v6 != sub_5A8280() )
      (*(void (__thiscall **)(void *))(*(_DWORD *)v6 + 0x18))(v6);
  }
}
