// AnimSequenceMultiple constructor: converts an existing single sequence entry into a multiple-sequence list and moves the existing BSAnimGroupSequence into it.
AnimSequenceMultiple *__thiscall AnimSequenceMultiple::AnimSequenceMultiple(AnimSequenceMultiple *this, int a2)
{
  _DWORD *v3; // eax
  volatile LONG *v5; // eax

  *(_DWORD *)this = &AnimSequenceMultiple::`vftable'; /*0x473dc2*/
  v3 = (_DWORD *)FormHeapAlloc(0x10u); /*0x473dc8*/
  if ( v3 ) /*0x473dd2*/
  {
    v3[3] = 0; /*0x473dd4*/
    v3[1] = 0; /*0x473dd7*/
    v3[2] = 0; /*0x473dda*/
    *v3 = &NiTList<BSAnimGroupSequence const *>::`vftable'; /*0x473ddd*/
  }
  else
  {
    v3 = 0; /*0x473de5*/
  }
  *((_DWORD *)this + 1) = v3; /*0x473deb*/
  v5 = (volatile LONG *)(*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)a2 + 0x10))(a2, 0xFFFFFFFF); /*0x473df7*/
  AnimSequenceMultiple_AddSequence((ActorAnimData *)this, v5); /*0x473dfc*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 4))(a2, 0); /*0x473e09*/
  (**(void (__thiscall ***)(int, int))a2)(a2, 1); /*0x473e13*/
  return this; /*0x473e17*/
}
