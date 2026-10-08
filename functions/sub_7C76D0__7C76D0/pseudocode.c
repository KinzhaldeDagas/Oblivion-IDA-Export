// Inverse caster-root removal: match exact light+0x130 in the active list and remove through native list/refcount ownership.
void __thiscall sub_7C76D0(int **this, int a2)
{
  _DWORD *v3; // ecx
  int v4; // eax
  LONG (__stdcall *v5)(volatile LONG *); // edi
  void (__thiscall ***v6)(_DWORD, int); // esi
  void (__thiscall ***v7)(_DWORD, int); // esi
  int v8; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v9; // [esp+18h] [ebp-4h]

  v3 = *(this + 0x3E); /*0x7c76f5*/
  if ( v3 ) /*0x7c76fd*/
  {
    while ( 1 ) /*0x7c770a*/
    {
      v4 = v3[2]; /*0x7c770a*/
      v3 = (_DWORD *)*v3; /*0x7c770e*/
      if ( v4 ) /*0x7c7710*/
      {
        if ( *(_DWORD *)(v4 + 0x130) == a2 ) /*0x7c7718*/
          break; /*0x7c7718*/
      }
      if ( !v3 ) /*0x7c771c*/
        return; /*0x7c771c*/
    }
    a2 = v4; /*0x7c7732*/
    InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x7c773a*/
    v9 = 0; /*0x7c7750*/
    NiTRefPointerList__RemoveFirstByValue(this + 0x3D, &v8, &a2); /*0x7c7758*/
    v5 = InterlockedDecrement; /*0x7c7763*/
    if ( v8 ) /*0x7c7769*/
    {
      v6 = (void (__thiscall ***)(_DWORD, int))v8; /*0x7c776b*/
      if ( !v5((volatile LONG *)(v8 + 4)) ) /*0x7c7771*/
        (**v6)(v6, 1); /*0x7c7783*/
    }
    v7 = (void (__thiscall ***)(_DWORD, int))a2; /*0x7c7785*/
    v9 = 0xFFFFFFFF; /*0x7c778b*/
    if ( a2 ) /*0x7c7793*/
    {
      if ( !v5((volatile LONG *)(a2 + 4)) ) /*0x7c7799*/
        (**v7)(v7, 1); /*0x7c77a7*/
    }
  }
}
