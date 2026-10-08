double __userpurge sub_645710@<st0>(void **a1@<ecx>, int a2@<ebx>, double result@<st0>, TESObjectREFR *a4)
{
  _DWORD **v5; // esi
  PlayerCharacter *v7; // eax
  char v8; // bl
  int v9; // [esp+3Ch] [ebp+4h]

  v5 = 0; /*0x645714*/
  if ( (a1[0xB] || ((*((void (__thiscall **)(void **, TESObjectREFR *))*a1 + 0x156))(a1, a4), a1[0xB])) /*0x645735*/
    && !sub_5687D0((TESPackage *)a1[2], a2, result, a4) )
  {
    (*((void (__thiscall **)(void **, TESObjectREFR *, _DWORD, unsigned int, _DWORD))*a1 + 0x66))( /*0x64574e*/
      a1,
      a4,
      0,
      0xFFFFFFFF,
      0);
  }
  else if ( a1[0xB] == reference /*0x64576f*/
         && PlayerCharacter::IsSleeping_(reference)
         && (v7 = reference, !reference->isMovingToNewSpace) )
  {
    v7->HoursToSleep = 0; /*0x645778*/
    v7->isSleeping = 1; /*0x64577e*/
    (*((void (__thiscall **)(void **, TESObjectREFR *, unsigned int))*a1 + 0x62))(a1, a4, 0xFFFFFFFF); /*0x645793*/
  }
  else
  {
    v8 = 0; /*0x6457ad*/
    v9 = Double_To_SInt32(result); /*0x6457b1*/
    if ( v9 ) /*0x6457b5*/
    {
      do /*0x645876*/
      {
        if ( a4->vtbl->IsDead(a4, 0) ) /*0x6457cc*/
          break; /*0x6457d0*/
        ((void (__usercall *)(TESObjectREFR *@<ecx>, double@<st0>))a4->vtbl[1].GetKnockedState)(a4, result); /*0x6457e0*/
        if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1) ) /*0x6457ee*/
          break; /*0x6457f2*/
        v5 = (_DWORD **)OblivionDynamicCast( /*0x645812*/
                          a1[0xB],
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
        sub_5E03C0(v5, (int)a4); /*0x645817*/
        if ( v5 ) /*0x64581e*/
        {
          if ( !((unsigned __int8 (__thiscall *)(_DWORD **, _DWORD))(*v5)[0x66])(v5, 0) ) /*0x64582c*/
          {
            if ( !((unsigned __int8 (__usercall *)@<al>(_DWORD **@<ecx>, int, double@<st0>))(*v5)[0xCD])(v5, 1, result) ) /*0x64583e*/
              (*(void (__thiscall **)(_DWORD *, _DWORD **, TESObjectREFR *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*v5[0x16] + 0x228))( /*0x645861*/
                v5[0x16],
                v5,
                a4,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                1);
            ((void (__thiscall *)(_DWORD **))(*v5)[0xD1])(v5); /*0x64586d*/
            v8 = 1; /*0x64586f*/
          }
        }
        --v9; /*0x645871*/
      }
      while ( v9 ); /*0x645876*/
      if ( v8 ) /*0x64587e*/
        (*(void (__thiscall **)(_DWORD *))(*v5[0x16] + 0x20))(v5[0x16]); /*0x645888*/
    }
  }
  return result; /*0x645750*/
}
