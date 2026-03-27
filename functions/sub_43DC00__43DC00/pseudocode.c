void __usercall sub_43DC00(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  char *v5; // ebx
  int *v6; // edi
  int *v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // edi
  int *v9; // eax
  IOTask *v10; // edi
  void *v11; // edi
  int v12; // [esp+10h] [ebp-14h] BYREF
  IOTask *v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+20h] [ebp-4h]

  v5 = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x20) + 0x170))(*(_DWORD *)(a1 + 0x20));
  v6 = (int *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x20) + 0x168))(*(_DWORD *)(a1 + 0x20));
  if ( v6 || (v6 = sub_523170(v5, *(_DWORD *)(a1 + 0x20))) != 0 )
  {
    sub_5268D0((int)v5, a2, a3, a4, *(TESObjectREFR **)(a1 + 0x20), (char *)v6);
    v7 = sub_4788E0((_DWORD **)v6, &v12, (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 0x10)), a1);
    v14 = 0;
    sub_4348B0((int *)(a1 + 0x3C), v7);
    v14 = 0xFFFFFFFF;
    if ( v12 )
    {
      v8 = (void (__thiscall ***)(_DWORD, int))v12;
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 8)) )
        (**v8)(v8, 1);
    }
    v9 = (int *)sub_43BA30(&v13, (UInt32)v5, BYTE2(*(_DWORD *)(a1 + 0x10)), (volatile LONG *)a1);
    v14 = 1;
    sub_4348B0((int *)(a1 + 0x38), v9);
    v14 = 0xFFFFFFFF;
    if ( v13 )
    {
      v10 = v13;
      if ( !InterlockedDecrement((volatile LONG *)&v13->members.unk08) )
        (*(void (__thiscall **)(IOTask *, int))v10->vtbl)(v10, 1);
    }
  }
  if ( v5 )
    v11 = v5 + 0xAC;
  else
    v11 = 0;
  sub_43D000(
    (int *)ModelLoaderPtr,
    v11,
    BYTE2(*(_DWORD *)(a1 + 0x10)),
    (volatile LONG *)a1,
    *(_DWORD *)(a1 + 0x20),
    0,
    0);
  sub_5E4DD0(*(void **)(a1 + 0x20));
  sub_43C9B0((_DWORD **)a1);
}
