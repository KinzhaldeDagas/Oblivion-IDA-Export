NiLight *__thiscall sub_719870(char **this, _DWORD **a2)
{
  NiLight *v3; // eax
  NiLight *v4; // esi

  v3 = (NiLight *)FormHeapAlloc(0x114u);
  v4 = 0;
  if ( v3 )
    v4 = sub_719760(v3);
  sub_71A5A0(this, (int)v4, a2);
  v4[1].vtbl = (NiAVObjectVtbl *)*(this + 0x42);
  v4[1].members.super.super.m_uiRefCount = (UInt32)*(this + 0x43);
  v4[1].members.super.m_pcName = *(this + 0x44);
  return v4;
}
