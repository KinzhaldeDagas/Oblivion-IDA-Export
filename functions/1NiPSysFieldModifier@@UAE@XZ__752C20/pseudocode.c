void __thiscall NiPSysFieldModifier::~NiPSysFieldModifier(NiPSysFieldModifier *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = *((_DWORD *)this + 2); /*0x752c26*/
  *(_DWORD *)this = &NiPSysModifier::`vftable'; /*0x752c27*/
  FormHeapFree(v2); /*0x752c2d*/
  NiRefObject_destr(this); /*0x752c38*/
}
