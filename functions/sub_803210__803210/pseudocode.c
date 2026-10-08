void __thiscall sub_803210(unsigned int *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  void (__thiscall ***v5)(_DWORD, int); // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // esi
  _DWORD v10[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v11; // [esp+2Ch] [ebp-4h]

  v10[1] = this; /*0x803239*/
  v2 = *(this + 2); /*0x80323d*/
  v3 = InterlockedDecrement; /*0x803240*/
  v11 = 2; /*0x80324a*/
  if ( v2 ) /*0x803252*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x803258*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x80326a*/
    *(this + 2) = 0; /*0x80326c*/
  }
  v4 = *(this + 1); /*0x80326f*/
  if ( v4 ) /*0x803274*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x80327a*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x80328c*/
    *(this + 1) = 0; /*0x80328e*/
  }
  if ( *(_DWORD *)(*this + 0x1C) ) /*0x803293*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(*this + 0x1C) + 0x88))( /*0x8032a9*/
      *(_DWORD *)(*this + 0x1C),
      v10,
      *this);
    if ( v10[0] ) /*0x8032b1*/
    {
      v5 = (void (__thiscall ***)(_DWORD, int))v10[0]; /*0x8032b3*/
      if ( !v3((volatile LONG *)(v10[0] + 4)) ) /*0x8032b9*/
        (**v5)(v5, 1); /*0x8032cb*/
    }
  }
  v6 = *this; /*0x8032cd*/
  if ( *this ) /*0x8032cd*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x8032d7*/
    {
      if ( v6 ) /*0x8032df*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x8032e9*/
    }
    *this = 0; /*0x8032eb*/
  }
  sub_802DB0((int)this); /*0x8032ef*/
  if ( *(this + 4) ) /*0x8032f4*/
  {
    FormHeapFree(*(this + 4)); /*0x8032fc*/
    *(this + 4) = 0; /*0x803304*/
  }
  FormHeapFree(*(this + 5)); /*0x80330b*/
  *(this + 5) = 0; /*0x803310*/
  v7 = *(this + 2); /*0x803313*/
  LOBYTE(v11) = 1; /*0x80331b*/
  if ( v7 ) /*0x803320*/
  {
    if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x803326*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x803338*/
  }
  v8 = *(this + 1); /*0x80333a*/
  LOBYTE(v11) = 0; /*0x80333f*/
  if ( v8 ) /*0x803343*/
  {
    if ( !v3((volatile LONG *)(v8 + 4)) ) /*0x803349*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x80335b*/
  }
  v9 = *this; /*0x80335d*/
  v11 = 0xFFFFFFFF; /*0x803361*/
  if ( v9 ) /*0x803369*/
  {
    if ( !v3((volatile LONG *)(v9 + 4)) ) /*0x80336f*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x803381*/
  }
}
