int __usercall sub_69FD40@<eax>(unsigned int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // eax
  int v6; // ebx
  const char *v7; // eax
  _DWORD *v8; // eax
  float *v9; // eax
  int v10; // esi
  NiExtraData *ExtraData; // eax
  NiObject *v12; // eax
  NiObject *v13; // eax
  unsigned int *v14; // eax
  unsigned int *v15; // eax
  void (__thiscall *v16)(int); // eax
  float v18; // [esp+14h] [ebp-34h]
  float v19[9]; // [esp+18h] [ebp-30h] BYREF
  unsigned int v20; // [esp+44h] [ebp-4h]

  v5 = *(_DWORD *)(a1 + 8);
  v6 = 0;
  if ( (v5 & 0x20) != 0 || (v5 & 0x800) != 0 )
    return 0;
  if ( !(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a1 + 0x154))(a1) )
  {
    v7 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)(*(_DWORD *)(a1 + 0x74) + 0x18) + 0x14))(
                         *(_DWORD *)(a1 + 0x74) + 0x18,
                         a4,
                         a3,
                         a2);
    v6 = sub_69FBF0(v7);
    if ( v6 )
    {
      if ( (*(_DWORD *)((*(int (__usercall **)@<eax>(unsigned int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x170))(
                          a1,
                          a4,
                          a3,
                          a2)
                      + 8)
          & 0x10) != 0 )
        sub_46A9C0((_DWORD *)a1, 1);
      sub_4D7D10((MobileObject *)a1, (volatile LONG *)v6);
      v8 = (_DWORD *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a1 + 0x174))(a1);
      *(_DWORD *)(v6 + 0x54) = *v8;
      *(_DWORD *)(v6 + 0x58) = v8[1];
      *(_DWORD *)(v6 + 0x5C) = v8[2];
      v9 = sub_4D7AF0((float *)a1, v19);
      qmemcpy((void *)(v6 + 0x30), v9, 0x24u);
      v10 = (int)(v9 + 9);
      sub_897A20(v6, 1);
      ExtraData = NiObjectNET_GetExtraData((NiObjectNET *)v6, dword_A7D0EC);
      if ( ExtraData )
      {
        if ( ((int)ExtraData[1].__vftable & 0x10) != 0 && (*(_DWORD *)(a1 + 8) & 0x80) == 0 )
          sub_4E26F0(v10, v6);
      }
      v12 = (NiObject *)NiObjectNET_GetExtraData((NiObjectNET *)v6, off_A3CEB0);
      v13 = NiRTTI_Cast((BSStringT *)dword_B35ACC, v12);
      if ( v13 )
      {
        v13[1].members.m_uiRefCount = a1;
      }
      else
      {
        v14 = (unsigned int *)FormHeapAlloc(0x10u);
        v20 = 0;
        if ( v14 )
          v15 = sub_4D67C0(v14, a1);
        else
          v15 = 0;
        v20 = 0xFFFFFFFF;
        NiNode_AddNiExtraData((const void **)v6, v6, v15);
      }
      sub_4E3490((TESObjectREFR *)a1, a2, a3, a4);
      v18 = fabs(((double (__thiscall *)(unsigned int))*(_DWORD *)(*(_DWORD *)a1 + 0xEC))(a1));
      v16 = *(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x50);
      *(float *)(v6 + 0x60) = v18;
      v16(v6);
    }
  }
  return v6;
}
