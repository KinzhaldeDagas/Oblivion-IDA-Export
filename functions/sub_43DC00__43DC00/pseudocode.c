void __usercall sub_43DC00(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  BSExtraDataVtbl *v5; // ebx
  int *v6; // edi
  int *v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // edi
  int *v9; // eax
  IOTask *v10; // edi
  bool (__thiscall **p_CompareTo)(BSExtraData *, BSExtraData *); // edi
  int v12; // [esp+10h] [ebp-14h] BYREF
  IOTask *v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+20h] [ebp-4h]

  v5 = (BSExtraDataVtbl *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x20) + 0x170))(*(_DWORD *)(a1 + 0x20)); /*0x43dc38*/
  v6 = (int *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x20) + 0x168))(*(_DWORD *)(a1 + 0x20)); /*0x43dc44*/
  if ( v6 || (v6 = sub_523170(v5, *(_DWORD *)(a1 + 0x20))) != 0 ) /*0x43dc59*/
  {
    sub_5268D0(v5, a2, a3, a4, *(TESObjectREFR **)(a1 + 0x20), (char *)v6); /*0x43dc66*/
    v7 = sub_4788E0((_DWORD **)v6, &v12, (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 0x10)), (volatile LONG *)a1); /*0x43dc84*/
    v14 = 0; /*0x43dc8d*/
    sub_4348B0((int *)(a1 + 0x3C), v7); /*0x43dc95*/
    v14 = 0xFFFFFFFF; /*0x43dca0*/
    if ( v12 ) /*0x43dca8*/
    {
      v8 = (void (__thiscall ***)(_DWORD, int))v12; /*0x43dcaa*/
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 8)) ) /*0x43dcb0*/
        (**v8)(v8, 1); /*0x43dcc6*/
    }
    v9 = (int *)sub_43BA30(&v13, (UInt32)v5, BYTE2(*(_DWORD *)(a1 + 0x10)), (volatile LONG *)a1); /*0x43dce6*/
    v14 = 1; /*0x43dcef*/
    sub_4348B0((int *)(a1 + 0x38), v9); /*0x43dcf7*/
    v14 = 0xFFFFFFFF; /*0x43dd02*/
    if ( v13 ) /*0x43dd0a*/
    {
      v10 = v13; /*0x43dd0c*/
      if ( !InterlockedDecrement((volatile LONG *)&v13->members.unk08) ) /*0x43dd12*/
        (*(void (__thiscall **)(IOTask *, int))v10->vtbl)(v10, 1); /*0x43dd28*/
    }
  }
  if ( v5 ) /*0x43dd2c*/
    p_CompareTo = &v5[0x15].CompareTo; /*0x43dd2e*/
  else
    p_CompareTo = 0; /*0x43dd36*/
  sub_43D000( /*0x43dd59*/
    (int *)MEMORY[0xB33A1C],
    p_CompareTo,
    BYTE2(*(_DWORD *)(a1 + 0x10)),
    (volatile LONG *)a1,
    *(_DWORD *)(a1 + 0x20),
    0,
    0);
  sub_5E4DD0(*(Actor **)(a1 + 0x20)); /*0x43dd61*/
  sub_43C9B0((_DWORD **)a1); /*0x43dd68*/
}
