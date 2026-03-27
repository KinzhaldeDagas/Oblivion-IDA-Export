int __thiscall sub_496F50(_RTL_CRITICAL_SECTION_0 *this, TESObjectCELL *a2)
{
  _RTL_CRITICAL_SECTION_0 *v3; // ebx
  int v5; // [esp+Ch] [ebp-8h] BYREF
  int v6; // [esp+10h] [ebp-4h]

  v3 = this + 4;
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(this + 4), (int)&unk_A2F830);
  v5 = 0;
  v6 = 0;
  if ( sub_496DF0(this, (int)a2, &v5) )
  {
    if ( v6 == 1 )
    {
      NiTMap_RemoveAt(this, (int)a2);
      return NiLeaveCriticalSection_0(v3);
    }
    sub_496D50(this, (int)a2, v5, v6 - 1);
  }
  return NiLeaveCriticalSection_0(v3);
}
