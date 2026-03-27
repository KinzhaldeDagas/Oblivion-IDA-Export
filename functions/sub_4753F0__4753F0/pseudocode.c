char __thiscall sub_4753F0(AnimSequenceSingle *this)
{
  _DWORD *v5; // eax
  unsigned int v6; // edi

  v5 = *((_DWORD **)this + 0x34);
  if ( !v5 || *v5 != 1 || !(unsigned __int8)AnimSequenceSingle::AnimSequenceSingle(this, v5[2], 0) )
    return 0;
  v6 = *((_DWORD *)this + 0x34);
  if ( v6 )
  {
    sub_4729F0(*((int **)this + 0x34));
    FormHeapFree(v6);
  }
  *((_DWORD *)this + 0x34) = 0;
  return 1;
}
