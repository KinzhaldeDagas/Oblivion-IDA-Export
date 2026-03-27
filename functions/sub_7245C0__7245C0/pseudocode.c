NiNode *__thiscall sub_7245C0(char **this, _DWORD **a2)
{
  NiNode *v3; // eax
  NiNode *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0xFCu);
  v4 = 0;
  if ( v3 )
    v4 = sub_723F70(v3);
  sub_70AC60(this, (NiGeometry *)v4, a2);
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0x6E);
  v4[1].members.super.super.super.m_uiRefCount = (UInt32)*(this + 0x38);
  return v4;
}
