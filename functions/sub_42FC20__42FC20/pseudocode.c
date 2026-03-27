int __thiscall sub_42FC20(LONG *this, char a2)
{
  int v4; // eax
  int v5; // eax

  if ( !this )
    return 0;
  v4 = *(this + 3);
  if ( v4 )
  {
    if ( a2 )
      NiEnterCriticalSection(*(struct _RTL_CRITICAL_SECTION **)(v4 + 4), (int)&unk_A2F830);
    v5 = *(this + 2);
    if ( (v5 == 1 || v5 == 2) && *(int *)(*(this + 3) + 0x2C) > 0 )
    {
      sub_42FBF0(this);
      (*(void (__thiscall **)(LONG *))(*this + 8))(this);
      *(this + 2) = 0;
    }
    if ( a2 )
      NiLeaveCriticalSection_0(*(LPCRITICAL_SECTION *)(*(this + 3) + 4));
  }
  return *(this + 2);
}
