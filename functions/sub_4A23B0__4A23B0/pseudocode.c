void __thiscall sub_4A23B0(unsigned int ***this)
{
  DWORD CurrentThreadId; // eax
  _DWORD *v3; // ecx
  unsigned int v4; // esi
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // edx
  unsigned int *v8; // eax
  unsigned int **v9; // ecx
  void (__thiscall ***v10)(_DWORD, int); // edi
  volatile LONG *v11; // esi
  unsigned int v13; // [esp+14h] [ebp-18h] BYREF
  int v14; // [esp+18h] [ebp-14h] BYREF
  unsigned int *v15; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v16; // [esp+28h] [ebp-4h]

  EnterCriticalSection(&MEMORY[0xB35380]); /*0x4a23de*/
  CurrentThreadId = GetCurrentThreadId(); /*0x4a23e4*/
  ++unk_B353FC; /*0x4a23ea*/
  unk_B353F8 = CurrentThreadId; /*0x4a23f1*/
  v3 = *(this + 2); /*0x4a23f6*/
  if ( v3[3] ) /*0x4a23fb*/
  {
    v4 = v3[1]; /*0x4a2404*/
    v5 = 0; /*0x4a2407*/
    if ( v4 ) /*0x4a240b*/
    {
      v6 = (_DWORD *)v3[2]; /*0x4a240d*/
      v7 = v6; /*0x4a2410*/
      while ( !*v7 ) /*0x4a2414*/
      {
        ++v5; /*0x4a241a*/
        ++v7; /*0x4a241d*/
        if ( v5 >= v4 ) /*0x4a2422*/
          goto LABEL_6; /*0x4a2422*/
      }
      v8 = (unsigned int *)v6[v5]; /*0x4a24be*/
    }
    else
    {
LABEL_6:
      v8 = 0; /*0x4a2424*/
    }
    v15 = v8; /*0x4a2428*/
    while ( v15 ) /*0x4a242c*/
    {
      v14 = 0; /*0x4a2430*/
      v13 = 0; /*0x4a2434*/
      v9 = *(this + 2); /*0x4a2442*/
      v16 = 0; /*0x4a244a*/
      sub_7B2600(v9, &v15, &v14, &v13); /*0x4a244e*/
      v10 = (void (__thiscall ***)(_DWORD, int))v13; /*0x4a2453*/
      v11 = (volatile LONG *)(v13 + 4); /*0x4a245b*/
      if ( *(_DWORD *)(v13 + 4) == 2 ) /*0x4a245e*/
        NiTMap_RemoveAt(*(this + 2), v14); /*0x4a2468*/
      v16 = 0xFFFFFFFF; /*0x4a246e*/
      if ( !InterlockedDecrement(v11) ) /*0x4a2476*/
        (**v10)(v10, 1); /*0x4a2488*/
    }
  }
  if ( unk_B353FC-- == 1 ) /*0x4a2490*/
    unk_B353F8 = 0; /*0x4a2499*/
  LeaveCriticalSection(&MEMORY[0xB35380]); /*0x4a24a4*/
}
