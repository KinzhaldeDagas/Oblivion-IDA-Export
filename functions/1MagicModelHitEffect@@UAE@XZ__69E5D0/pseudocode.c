void __thiscall MagicModelHitEffect::~MagicModelHitEffect(MagicModelHitEffect *this)
{
  int v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // edi
  int v6; // edi
  int v7; // edi
  _BYTE *v8; // eax
  int v9; // edi
  int v10; // edi
  _DWORD v11[2]; // [esp+14h] [ebp-14h] BYREF
  int v12; // [esp+24h] [ebp-4h]

  v11[1] = this; /*0x69e5f9*/
  *(_DWORD *)this = &MagicModelHitEffect::`vftable'; /*0x69e5fd*/
  v2 = *((_DWORD *)this + 0xC); /*0x69e603*/
  v3 = InterlockedDecrement; /*0x69e606*/
  v12 = 2; /*0x69e610*/
  if ( v2 ) /*0x69e618*/
  {
    v4 = *(_DWORD *)(v2 + 0x1C); /*0x69e61a*/
    if ( v4 ) /*0x69e61f*/
    {
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v4 + 0x88))(v4, v11, v2); /*0x69e62f*/
      if ( v11[0] ) /*0x69e637*/
      {
        v5 = (void (__thiscall ***)(_DWORD, int))v11[0]; /*0x69e639*/
        if ( !v3((volatile LONG *)(v11[0] + 4)) ) /*0x69e63f*/
          (**v5)(v5, 1); /*0x69e651*/
      }
    }
    v6 = *((_DWORD *)this + 0xC); /*0x69e653*/
    if ( v6 ) /*0x69e658*/
    {
      if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x69e65e*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x69e670*/
      *((_DWORD *)this + 0xC) = 0; /*0x69e672*/
    }
  }
  v7 = *((_DWORD *)this + 0xD); /*0x69e675*/
  if ( v7 ) /*0x69e67a*/
  {
    if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x69e680*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x69e692*/
    *((_DWORD *)this + 0xD) = 0; /*0x69e694*/
  }
  v8 = *((_BYTE **)this + 0xB); /*0x69e697*/
  if ( v8 ) /*0x69e69c*/
  {
    if ( *v8 ) /*0x69e69e*/
    {
      QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)v8, 0, 1); /*0x69e6ac*/
      if ( *((_BYTE *)this + 0x28) ) /*0x69e6b1*/
        FormHeapFree(*((_DWORD *)this + 0xB)); /*0x69e6ba*/
    }
  }
  *((_DWORD *)this + 0xB) = 0; /*0x69e6c2*/
  v9 = *((_DWORD *)this + 0xD); /*0x69e6c5*/
  LOBYTE(v12) = 1; /*0x69e6ca*/
  if ( v9 ) /*0x69e6cf*/
  {
    if ( !v3((volatile LONG *)(v9 + 4)) ) /*0x69e6d5*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x69e6e7*/
  }
  v10 = *((_DWORD *)this + 0xC); /*0x69e6e9*/
  LOBYTE(v12) = 0; /*0x69e6ee*/
  if ( v10 ) /*0x69e6f2*/
  {
    if ( !v3((volatile LONG *)(v10 + 4)) ) /*0x69e6f8*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x69e70a*/
  }
  v12 = 0xFFFFFFFF; /*0x69e70e*/
  MagicHitEffect_destr(this); /*0x69e716*/
}
