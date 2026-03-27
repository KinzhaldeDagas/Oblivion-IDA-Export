int __userpurge sub_645710@<eax>(void **a1@<ecx>, int a2@<ebx>, double a3@<st0>, TESObjectREFR *a4)
{
  _DWORD **v5; // esi
  int result; // eax
  PlayerCharacter *v8; // eax
  char v9; // bl
  int v10; // [esp+3Ch] [ebp+4h]

  v5 = 0;
  if ( a1[0xB] || ((*((void (__thiscall **)(void **, TESObjectREFR *))*a1 + 0x156))(a1, a4), a1[0xB]) )
  {
    if ( !sub_5687D0((TESPackage *)a1[2], a2, a3, a4) )
      return (*((int (__thiscall **)(void **, TESObjectREFR *, _DWORD, unsigned int, _DWORD))*a1 + 0x66))(
               a1,
               a4,
               0,
               0xFFFFFFFF,
               0);
  }
  if ( a1[0xB] == TESDataHandler_g_PlayerRef
    && PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef)
    && (v8 = TESDataHandler_g_PlayerRef, !TESDataHandler_g_PlayerRef->isMovingToNewSpace) )
  {
    v8->HoursToSleep = 0;
    v8->isSleeping = 1;
    return (*((int (__thiscall **)(void **, TESObjectREFR *, unsigned int))*a1 + 0x62))(a1, a4, 0xFFFFFFFF);
  }
  else
  {
    result = Double_To_SInt32(flt_B36C68 * dbl_A3C800);
    v9 = 0;
    v10 = result;
    if ( result )
    {
      do
      {
        result = ((int (__thiscall *)(TESObjectREFR *, _DWORD))a4->vtbl->IsDead)(a4, 0);
        if ( (_BYTE)result )
          break;
        a4->vtbl[1].GetKnockedState(a4);
        result = ((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1);
        if ( !(_BYTE)result )
          break;
        v5 = (_DWORD **)OblivionDynamicCast(
                          a1[0xB],
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
        result = sub_5E03C0(v5, (int)a4);
        if ( v5 )
        {
          result = ((int (__thiscall *)(_DWORD **, _DWORD))(*v5)[0x66])(v5, 0);
          if ( !(_BYTE)result )
          {
            if ( !((unsigned __int8 (__thiscall *)(_DWORD **, int))(*v5)[0xCD])(v5, 1) )
              (*(void (__thiscall **)(_DWORD *, _DWORD **, TESObjectREFR *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*v5[0x16] + 0x228))(
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
            result = ((int (__thiscall *)(_DWORD **))(*v5)[0xD1])(v5);
            v9 = 1;
          }
        }
        --v10;
      }
      while ( v10 );
      if ( v9 )
        return (*(int (__thiscall **)(_DWORD *))(*v5[0x16] + 0x20))(v5[0x16]);
    }
  }
  return result;
}
