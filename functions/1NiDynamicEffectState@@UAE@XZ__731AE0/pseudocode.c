void __thiscall NiDynamicEffectState::~NiDynamicEffectState(NiDynamicEffectState *this)
{
  _DWORD *v2; // [esp-4h] [ebp-8h]
  _DWORD *v3; // [esp-4h] [ebp-8h]
  _DWORD *v4; // [esp-4h] [ebp-8h]

  *(_DWORD *)this = &NiDynamicEffectState::`vftable'; /*0x731ae3*/
  while ( *((_DWORD *)this + 3) ) /*0x731ae9*/
  {
    v2 = *((_DWORD **)this + 3); /*0x731af5*/
    *((_DWORD *)this + 3) = *v2; /*0x731af6*/
    FormHeapFree((unsigned int)v2); /*0x731af9*/
  }
  while ( *((_DWORD *)this + 4) ) /*0x731b07*/
  {
    v3 = *((_DWORD **)this + 4); /*0x731b15*/
    *((_DWORD *)this + 4) = *v3; /*0x731b16*/
    FormHeapFree((unsigned int)v3); /*0x731b19*/
  }
  while ( *((_DWORD *)this + 5) ) /*0x731b27*/
  {
    v4 = *((_DWORD **)this + 5); /*0x731b35*/
    *((_DWORD *)this + 5) = *v4; /*0x731b36*/
    FormHeapFree((unsigned int)v4); /*0x731b39*/
  }
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x731b4c*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x731b52*/
}
