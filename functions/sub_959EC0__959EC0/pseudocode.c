void __thiscall sub_959EC0(_WORD *this)
{
  int v2; // esi
  unsigned int v3; // [esp-4h] [ebp-8h]

  sub_959CA0(this);
  v3 = *((_DWORD *)this + 7);
  *((_DWORD *)this + 6) = &NiTArray<NiPick::Record *>::`vftable';
  FormHeapFree(v3);
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
}
