char __stdcall sub_43FBA0(MobileObject *a1)
{
  MobileObject *v1; // esi
  int v2; // eax
  NiNode *m_parent; // edi
  NiNodeVtbl *vtbl; // ebx
  int v5; // eax

  v1 = a1; /*0x43fba1*/
  LOBYTE(v2) = TESObjectREFR_HasVisibleDistantFlag(a1);// Verified gate: mobile-object scene cleanup begins only when TESObjectREFR_HasVisibleDistantFlag is true. Fallout's same-named visible-distant getter confirms the 0x8000 meaning; this call path then independently requires the 0x80000 state before detaching the NiNode. /*0x43fba7*/
  if ( (_BYTE)v2 ) /*0x43fbae*/
  {
    v2 = (int)v1->vtbl->super.GetNiNode((TESObjectREFR *)v1); /*0x43fbba*/
    if ( v2 ) /*0x43fbbe*/
    {
      LOBYTE(v2) = TESObjectREFR_HasTemp3DFlag(v1);// Verified gate: mobile cleanup removes the current NiNode only when the reference has the probable visible-distant flag, has a NiNode, and has the probable HasTemp3D bit set. It then clears the NiNode pointer and HasTemp3D bit. /*0x43fbc2*/
      if ( (_BYTE)v2 ) /*0x43fbc9*/
      {
        m_parent = v1->vtbl->super.GetNiNode((TESObjectREFR *)v1)->members.super.m_parent; /*0x43fbd8*/
        if ( m_parent ) /*0x43fbdd*/
        {
          vtbl = m_parent->vtbl; /*0x43fbe8*/
          v5 = (int)v1->vtbl->super.GetNiNode((TESObjectREFR *)v1); /*0x43fbec*/
          vtbl->RemoveObject(m_parent, (NiAVObject **)&a1, (NiAVObject *)v5); /*0x43fbfc*/
          sub_7016A0((NiD3DVertexShader *)&a1); /*0x43fc02*/
        }
        MobileObject_SetNiNode(v1, 0); /*0x43fc0c*/
        LOBYTE(v2) = TESObjectREFR_SetTemp3DFlag(v1, 0); /*0x43fc15*/
      }
    }
  }
  return v2; /*0x43fc1b*/
}
