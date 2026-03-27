void __thiscall NiPSysFieldModifier::~NiPSysFieldModifier(NiPSysFieldModifier *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &NiPSysModifier::`vftable';
  FormHeapFree(v2);
  NiRefObject_destr(this);
}
