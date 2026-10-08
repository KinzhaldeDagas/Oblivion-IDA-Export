NiLight *__thiscall sub_719870(char **this, _DWORD **a2)
{
  NiLight *v3; // eax
  NiLight *v4; // esi

  v3 = (NiLight *)FormHeapAlloc(0x114u); /*0x71989a*/
  v4 = 0; /*0x7198a6*/
  if ( v3 ) /*0x7198ae*/
    v4 = sub_719760(v3); /*0x7198b7*/
  sub_71A5A0(this, (int)v4, a2); /*0x7198c9*/
  v4[1].vtbl = (NiAVObjectVtbl *)*(this + 0x42); /*0x7198da*/
  v4[1].members.super.super.m_uiRefCount = (UInt32)*(this + 0x43); /*0x7198e3*/
  v4[1].members.super.m_pcName = *(this + 0x44); /*0x7198ec*/
  return v4; /*0x7198f4*/
}
