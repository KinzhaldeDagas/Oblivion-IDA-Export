void __thiscall sub_589D60(_DWORD *this)
{
  int v2; // eax
  NiNode *v3; // edi
  NiTexturingProperty *NiPropertyByID; // eax
  _DWORD *v5; // esi
  void *v6; // edi

  v2 = *(this + 9); /*0x589d63*/
  if ( v2 ) /*0x589d69*/
  {
    if ( *(_WORD *)(v2 + 0xB6) ) /*0x589d6b*/
      v3 = **(NiNode ***)(v2 + 0xB0); /*0x589d7f*/
    else
      v3 = 0; /*0x589d75*/
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) == 0x386 ) /*0x589d8d*/
    {
      if ( v3 ) /*0x589d91*/
      {
        NiPropertyByID = (NiTexturingProperty *)NiNode_GetNiPropertyByID(v3, 6); /*0x589d97*/
        if ( NiPropertyByID ) /*0x589d9e*/
        {
          OB_NiTexturingProperty_SetBaseTexture_010201A0(NiPropertyByID, 0); /*0x589da4*/
          *(this + 0xB) |= 0x20u; /*0x589da9*/
        }
      }
    }
  }
  v5 = (_DWORD *)*(this + 0xD); /*0x589dad*/
  while ( v5 ) /*0x589db2*/
  {
    v6 = (void *)v5[2]; /*0x589db4*/
    v5 = (_DWORD *)*v5; /*0x589dba*/
    if ( v6 != (void *)sub_5A8260() && v6 != (void *)sub_5A8270() && v6 != sub_5A8280() ) /*0x589dd5*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)v6 + 0x18))(v6); /*0x589dde*/
  }
}
