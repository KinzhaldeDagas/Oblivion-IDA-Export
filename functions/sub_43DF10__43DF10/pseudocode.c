char __thiscall sub_43DF10(_DWORD *this)
{
  _DWORD *v1; // ecx
  TESObjectCELL *DwordAtOffset40; // eax
  int v3; // esi
  TESObjectCELL *v4; // edi
  int v6; // [esp+14h] [ebp-28h] BYREF
  TESChildCELL *v7; // [esp+18h] [ebp-24h] BYREF
  _DWORD *v8; // [esp+1Ch] [ebp-20h]
  _DWORD v9[3]; // [esp+20h] [ebp-1Ch] BYREF
  char v10; // [esp+2Ch] [ebp-10h]
  int v11; // [esp+38h] [ebp-4h]

  v8 = this; /*0x43df37*/
  v9[0] = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::LockFreeMapIterator::`vftable'; /*0x43df3d*/
  v9[1] = 0; /*0x43df45*/
  v9[2] = 0; /*0x43df49*/
  v10 = 0; /*0x43df4d*/
  v11 = 0; /*0x43df51*/
  do /*0x43dfe6*/
  {
    v7 = 0; /*0x43df55*/
    v6 = 0; /*0x43df59*/
    v1 = (_DWORD *)v8[2]; /*0x43df6d*/
    LOBYTE(v11) = 1; /*0x43df75*/
    LOBYTE(DwordAtOffset40) = sub_642D90(v1, (int)v9, &v7, &v6, 1); /*0x43df7a*/
    v3 = v6; /*0x43df81*/
    if ( (_BYTE)DwordAtOffset40 ) /*0x43df85*/
    {
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v7); /*0x43df8b*/
      if ( DwordAtOffset40 ) /*0x43df94*/
      {
        v4 = (TESObjectCELL *)(unsigned __int8)BYTE2(*(_DWORD *)(v3 + 0x10)); /*0x43dfab*/
        DwordAtOffset40 = (TESObjectCELL *)sub_440C80(MEMORY[0xB333A0], DwordAtOffset40, 0); /*0x43dfae*/
        if ( v4 != DwordAtOffset40 ) /*0x43dfb5*/
          LOBYTE(DwordAtOffset40) = (*(int (__thiscall **)(int, TESObjectCELL *))(*(_DWORD *)v3 + 0x1C))( /*0x43dfbf*/
                                      v3,
                                      DwordAtOffset40);
      }
    }
    LOBYTE(v11) = 0; /*0x43dfc3*/
    if ( v3 ) /*0x43dfc7*/
    {
      DwordAtOffset40 = (TESObjectCELL *)InterlockedDecrement((volatile LONG *)(v3 + 8)); /*0x43dfcd*/
      if ( !DwordAtOffset40 ) /*0x43dfd5*/
        LOBYTE(DwordAtOffset40) = (**(int (__thiscall ***)(int, int))v3)(v3, 1); /*0x43dfdf*/
    }
  }
  while ( (v10 & 2) == 0 ); /*0x43dfe6*/
  return (char)DwordAtOffset40; /*0x43dfec*/
}
