void __thiscall NiControllerSequence::~NiControllerSequence(NiControllerSequence *this)
{
  char *v2; // eax
  unsigned int v3; // edi
  char *v4; // eax
  unsigned int v5; // edi
  int v6; // edi
  LONG (__stdcall *v7)(volatile LONG *); // ebx
  int v8; // edi

  *(_DWORD *)this = &NiControllerSequence::`vftable'; /*0x6ca7ea*/
  if ( *((_DWORD *)this + 0x11) ) /*0x6ca7f0*/
    NiControllerSequence_Deactivate(this, 0.0, 0); /*0x6ca806*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x6ca80f*/
  v2 = *((char **)this + 5); /*0x6ca814*/
  if ( v2 ) /*0x6ca81c*/
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFC); /*0x6ca821*/
    _LN21(v2, 0x10u, *((_DWORD *)v2 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_6C64C0); /*0x6ca82d*/
    FormHeapFree(v3); /*0x6ca833*/
  }
  v4 = *((char **)this + 6); /*0x6ca83b*/
  if ( v4 ) /*0x6ca840*/
  {
    v5 = (unsigned int)(v4 + 0xFFFFFFFC); /*0x6ca845*/
    _LN21(v4, 0x10u, *((_DWORD *)v4 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6ca851*/
    FormHeapFree(v5); /*0x6ca857*/
  }
  FormHeapFree(*((_DWORD *)this + 0x17)); /*0x6ca863*/
  v6 = *((_DWORD *)this + 0x19); /*0x6ca868*/
  v7 = InterlockedDecrement; /*0x6ca86b*/
  if ( v6 ) /*0x6ca87b*/
  {
    if ( !v7((volatile LONG *)(v6 + 4)) ) /*0x6ca881*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x6ca893*/
  }
  v8 = *((_DWORD *)this + 8); /*0x6ca895*/
  if ( v8 ) /*0x6ca89f*/
  {
    if ( !v7((volatile LONG *)(v8 + 4)) ) /*0x6ca8a5*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x6ca8b7*/
  }
  NiRefObject_destr(this); /*0x6ca8c3*/
}
