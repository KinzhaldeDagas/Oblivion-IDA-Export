AnimSequenceMultiple *__thiscall AnimSequenceMultiple::AnimSequenceMultiple(AnimSequenceMultiple *this, int a2)
{
  _DWORD *v3; // eax
  volatile LONG *v5; // eax

  *(_DWORD *)this = &AnimSequenceMultiple::`vftable';
  v3 = (_DWORD *)FormHeapAlloc(0x10u);
  if ( v3 )
  {
    v3[3] = 0;
    v3[1] = 0;
    v3[2] = 0;
    *v3 = &NiTList<BSAnimGroupSequence const *>::`vftable';
  }
  else
  {
    v3 = 0;
  }
  *((_DWORD *)this + 1) = v3;
  v5 = (volatile LONG *)(*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)a2 + 0x10))(a2, 0xFFFFFFFF);
  AddMultiple((ActorAnimData *)this, v5);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 4))(a2, 0);
  (**(void (__thiscall ***)(int, int))a2)(a2, 1);
  return this;
}
