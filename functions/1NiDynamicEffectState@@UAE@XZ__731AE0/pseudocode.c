void __thiscall NiDynamicEffectState::~NiDynamicEffectState(NiDynamicEffectState *this)
{
  _DWORD *v2; // [esp-4h] [ebp-8h]
  _DWORD *v3; // [esp-4h] [ebp-8h]
  _DWORD *v4; // [esp-4h] [ebp-8h]

  *(_DWORD *)this = &NiDynamicEffectState::`vftable';
  while ( *((_DWORD *)this + 3) )
  {
    v2 = *((_DWORD **)this + 3);
    *((_DWORD *)this + 3) = *v2;
    FormHeapFree((unsigned int)v2);
  }
  while ( *((_DWORD *)this + 4) )
  {
    v3 = *((_DWORD **)this + 4);
    *((_DWORD *)this + 4) = *v3;
    FormHeapFree((unsigned int)v3);
  }
  while ( *((_DWORD *)this + 5) )
  {
    v4 = *((_DWORD **)this + 5);
    *((_DWORD *)this + 5) = *v4;
    FormHeapFree((unsigned int)v4);
  }
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
