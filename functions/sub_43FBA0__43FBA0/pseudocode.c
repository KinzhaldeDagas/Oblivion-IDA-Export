char __stdcall sub_43FBA0(MobileObject *a1)
{
  MobileObject *v1; // esi
  int v2; // eax
  NiNode *m_parent; // edi
  NiNodeVtbl *vtbl; // ebx
  int v5; // eax

  v1 = a1;
  LOBYTE(v2) = sub_4D6FD0(a1);
  if ( (_BYTE)v2 )
  {
    v2 = (int)v1->vtbl->super.GetNiNode((TESObjectREFR *)v1);
    if ( v2 )
    {
      LOBYTE(v2) = sub_4D7000(v1);
      if ( (_BYTE)v2 )
      {
        m_parent = v1->vtbl->super.GetNiNode((TESObjectREFR *)v1)->members.super.m_parent;
        if ( m_parent )
        {
          vtbl = m_parent->vtbl;
          v5 = (int)v1->vtbl->super.GetNiNode((TESObjectREFR *)v1);
          vtbl->RemoveObject(m_parent, (NiAVObject **)&a1, (NiAVObject *)v5);
          sub_7016A0((NiD3DVertexShader *)&a1);
        }
        sub_4D7D10(v1, 0);
        LOBYTE(v2) = sub_4D7010(v1, 0);
      }
    }
  }
  return v2;
}
