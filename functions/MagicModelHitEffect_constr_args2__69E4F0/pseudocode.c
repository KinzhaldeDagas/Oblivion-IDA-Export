NiObject *__thiscall MagicModelHitEffect_constr_args2(NiObject *this, TESChildCELL *a2, int a3, float a4)
{
  int v5; // edi
  LONG (__stdcall *v6)(volatile LONG *); // ebp
  int v7; // edi
  double v8; // st7
  NiObject *result; // eax

  MagicHitEffect_constr_args(this, a2, 0); /*0x69e523*/
  this->__vftable = (NiObjectVtbl *)&MagicModelHitEffect::`vftable'; /*0x69e528*/
  *((_DWORD *)this + 0xC) = 0; /*0x69e532*/
  *((_DWORD *)this + 0xD) = 0; /*0x69e535*/
  v5 = *((_DWORD *)this + 0xC); /*0x69e538*/
  v6 = InterlockedDecrement; /*0x69e53d*/
  if ( v5 ) /*0x69e548*/
  {
    if ( !v6((volatile LONG *)(v5 + 4)) ) /*0x69e54e*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x69e560*/
    *((_DWORD *)this + 0xC) = 0; /*0x69e562*/
  }
  v7 = *((_DWORD *)this + 0xD); /*0x69e565*/
  if ( v7 ) /*0x69e56a*/
  {
    if ( !v6((volatile LONG *)(v7 + 4)) ) /*0x69e570*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x69e582*/
    *((_DWORD *)this + 0xD) = 0; /*0x69e584*/
  }
  *((_BYTE *)this + 0x29) = 0; /*0x69e591*/
  *((_DWORD *)this + 0xB) = a3; /*0x69e596*/
  *((_BYTE *)this + 0x28) = 0; /*0x69e599*/
  v8 = a4; /*0x69e59e*/
  result = this; /*0x69e5a3*/
  if ( a4 < 0.0 ) /*0x69e5a5*/
    v8 = flt_A32048; /*0x69e5a9*/
  *((float *)this + 2) = v8; /*0x69e5af*/
  return result; /*0x69e5b2*/
}
