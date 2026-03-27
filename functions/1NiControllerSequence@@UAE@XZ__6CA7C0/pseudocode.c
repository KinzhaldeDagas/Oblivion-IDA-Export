void __thiscall NiControllerSequence::~NiControllerSequence(NiControllerSequence *this)
{
  int *v2; // eax
  unsigned int v3; // edi
  int *v4; // eax
  unsigned int v5; // edi
  int v6; // edi
  LONG (__stdcall *v7)(volatile LONG *); // ebx
  int v8; // edi

  *(_DWORD *)this = &NiControllerSequence::`vftable';
  if ( *((_DWORD *)this + 0x11) )
    sub_6C9CB0((int)this, 0.0, 0);
  FormHeapFree(*((_DWORD *)this + 2));
  v2 = *((int **)this + 5);
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 0x10u, v2[0xFFFFFFFF], (void (__thiscall *)(void *))sub_6C64C0);
    FormHeapFree(v3);
  }
  v4 = *((int **)this + 6);
  if ( v4 )
  {
    v5 = (unsigned int)(v4 + 0xFFFFFFFF);
    _LN21(v4, 0x10u, v4[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v5);
  }
  FormHeapFree(*((_DWORD *)this + 0x17));
  v6 = *((_DWORD *)this + 0x19);
  v7 = InterlockedDecrement;
  if ( v6 )
  {
    if ( !v7((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  v8 = *((_DWORD *)this + 8);
  if ( v8 )
  {
    if ( !v7((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  NiRefObject_destr(this);
}
