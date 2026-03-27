int __thiscall sub_496FD0(_RTL_CRITICAL_SECTION_0 *this, int a2)
{
  _RTL_CRITICAL_SECTION_0 *v3; // edi
  int v4; // ebx
  int v6; // [esp+Ch] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp-4h]

  v3 = this + 4;
  v4 = 0;
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(this + 4), (int)&unk_A2F830);
  v7 = 0;
  if ( sub_496DF0(this, a2, &v6) )
    v4 = v7;
  NiLeaveCriticalSection_0(v3);
  return v4;
}
