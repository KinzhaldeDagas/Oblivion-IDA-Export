void __userpurge sub_6167F0(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        int a6,
        char a7)
{
  int v8; // eax
  int v9; // ecx
  int *v10; // [esp+4h] [ebp-4h] BYREF

  v8 = *(_DWORD *)(a1 + 0x3C);
  v10 = 0;
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 0x58);
    if ( v9 )
      v10 = (int *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 0x33C))(v9, 0);
  }
  sub_616530(a2, a4, a3, &v10, *(TESObjectREFR **)(a1 + 0x3C), a5, a6, a7);
}
