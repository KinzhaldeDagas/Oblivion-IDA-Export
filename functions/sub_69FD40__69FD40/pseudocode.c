int __usercall sub_69FD40@<eax>(UInt32 a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // eax
  int v6; // ebx
  const char *v7; // eax
  _DWORD *v8; // eax
  NiMatrix33 *v9; // eax
  int v10; // esi
  NiExtraData *ExtraData; // eax
  NiObject *v12; // eax
  NiObject *v13; // eax
  NiObject *v14; // eax
  unsigned int *v15; // eax
  void (__thiscall *v16)(int); // eax
  float v18; // [esp+14h] [ebp-34h]
  NiMatrix33 v19; // [esp+18h] [ebp-30h] BYREF
  unsigned int v20; // [esp+44h] [ebp-4h]

  v5 = *(_DWORD *)(a1 + 8); /*0x69fd69*/
  v6 = 0; /*0x69fd71*/
  if ( (v5 & 0x20) != 0 || (v5 & 0x800) != 0 ) /*0x69fd81*/
    return 0; /*0x69feee*/
  if ( !(*(int (__thiscall **)(UInt32))(*(_DWORD *)a1 + 0x154))(a1) ) /*0x69fd92*/
  {
    v7 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)(*(_DWORD *)(a1 + 0x74) + 0x18) + 0x14))( /*0x69fda8*/
                         *(_DWORD *)(a1 + 0x74) + 0x18,
                         a4,
                         a3,
                         a2);
    v6 = sub_69FBF0(v7); /*0x69fdb0*/
    if ( v6 ) /*0x69fdb7*/
    {
      if ( (*(_DWORD *)((*(int (__usercall **)@<eax>(UInt32@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x170))( /*0x69fdd3*/
                          a1,
                          a4,
                          a3,
                          a2)
                      + 8)
          & 0x10) != 0 )
        sub_46A9C0((_DWORD *)a1, 1); /*0x69fdd9*/
      MobileObject_SetNiNode((MobileObject *)a1, (NiAVObject *)v6); /*0x69fde1*/
      v8 = (_DWORD *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)a1 + 0x174))(a1); /*0x69fdf1*/
      *(_DWORD *)(v6 + 0x54) = *v8; /*0x69fdf5*/
      *(_DWORD *)(v6 + 0x58) = v8[1]; /*0x69fdfb*/
      *(_DWORD *)(v6 + 0x5C) = v8[2]; /*0x69fe08*/
      v9 = sub_4D7AF0((float *)a1, &v19); /*0x69fe0b*/
      qmemcpy((void *)(v6 + 0x30), v9, 0x24u); /*0x69fe1d*/
      v10 = (int)&v9[1]; /*0x69fe1d*/
      sub_897A20(v6, 1); /*0x69fe1f*/
      ExtraData = NiObjectNET_GetExtraData((NiObjectNET *)v6, dword_A7D0EC); /*0x69fe2e*/
      if ( ExtraData ) /*0x69fe35*/
      {
        if ( ((int)ExtraData[1].__vftable & 0x10) != 0 && (*(_DWORD *)(a1 + 8) & 0x80) == 0 ) /*0x69fe4a*/
          sub_4E26F0(v10, v6); /*0x69fe4d*/
      }
      v12 = (NiObject *)NiObjectNET_GetExtraData((NiObjectNET *)v6, off_A3CEB0); /*0x69fe5c*/
      v13 = NiRTTI_Cast((BSStringT *)&stru_B35ACC, v12); /*0x69fe67*/
      if ( v13 ) /*0x69fe71*/
      {
        v13[1].members.m_uiRefCount = a1; /*0x69fe73*/
      }
      else
      {
        v14 = (NiObject *)FormHeapAlloc(0x10u); /*0x69fe7a*/
        v20 = 0; /*0x69fe88*/
        if ( v14 ) /*0x69fe90*/
          v15 = (unsigned int *)sub_4D67C0(v14, a1); /*0x69fe95*/
        else
          v15 = 0; /*0x69fe9c*/
        v20 = 0xFFFFFFFF; /*0x69fea1*/
        NiObjectNET_AddExtraData((const void **)v6, v6, v15); /*0x69fea9*/
      }
      Actor_SetupAnimationData((TESObjectREFR *)a1, a2, a3, a4); /*0x69feb0*/
      v18 = fabs(((double (__thiscall *)(UInt32))*(_DWORD *)(*(_DWORD *)a1 + 0xEC))(a1)); /*0x69fec6*/
      v16 = *(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x50); /*0x69fece*/
      *(float *)(v6 + 0x60) = v18; /*0x69fed3*/
      v16(v6); /*0x69fed6*/
    }
  }
  return v6; /*0x69feda*/
}
