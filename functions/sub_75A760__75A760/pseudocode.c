NiPSysFieldModifier *__thiscall sub_75A760(NiPSysFieldModifier *this, char a2)
{
  int v3; // esi

  v3 = *((_DWORD *)this + 6);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  NiPSysFieldModifier::~NiPSysFieldModifier(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
