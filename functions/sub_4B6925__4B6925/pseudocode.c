// positive sp value has been detected, the output may be wrong!
char __userpurge sub_4B6925@<al>(
        ActorAnimData *a1@<eax>,
        int a2@<edx>,
        char a3@<ch>,
        int a4@<ebp>,
        _BYTE *a5@<edi>,
        int a6@<esi>,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  _DWORD *v11; // eax
  char v13; // [esp-24h] [ebp-24h]
  char v14; // [esp-20h] [ebp-20h]

  *(_BYTE *)(a4 + 0x6A0B74C0) = __ROL1__(*(_BYTE *)(a4 + 0x6A0B74C0), 1);
  *(_BYTE *)(a2 + 1) += a3;
  sub_475440(a1, v13, v14);
  sub_520F00(TESDataHandler_g_Lockpick);
  sub_520F40(1);
  sub_520F20(1);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a6 + 0x58) + 0x48))(*(_DWORD *)(a6 + 0x58), a6);
  sub_520F00(0);
  sub_520F40(0);
  sub_520F20(0xFFFFFFFF);
  v11 = (_DWORD *)sub_4D77D0((int)a5);
  if ( v11 )
  {
    sub_428E90(v11);
    sub_4D9070(a5);
  }
  return 0;
}
