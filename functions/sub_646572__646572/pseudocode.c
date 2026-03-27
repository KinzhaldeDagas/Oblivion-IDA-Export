// positive sp value has been detected, the output may be wrong!
char __userpurge sub_646572@<al>(
        int a1@<eax>,
        int a2@<ecx>,
        Actor *a3@<edi>,
        int a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        int a7,
        char a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // ecx
  int v13; // ecx
  TESObjectREFR *v15; // [esp-24h] [ebp-30h]
  TESObjectREFR *v16; // [esp-20h] [ebp-2Ch]
  TESObjectREFR *v17; // [esp-1Ch] [ebp-28h]
  int v18; // [esp-18h] [ebp-24h]
  int v19; // [esp-14h] [ebp-20h]
  int v20; // [esp-10h] [ebp-1Ch]
  char v21; // [esp-Ch] [ebp-18h]
  char v22; // [esp+7h] [ebp-5h]

  LOBYTE(a1) = a1 & 0x40;
  *(_DWORD *)(a1 + 8) = a2;
  sub_6836E0((_DWORD *)dword_B3BF80, a5, a6, v15, v16, v17, v18, v19, v20, v21);
  v12 = dword_B3BF80;
  a8 = 0;
  if ( sub_682820(v12, a4, (int)a3, &a8) )
  {
    if ( a8 )
      sub_689DC0(*(char **)(a4 + 0x34), a3);
    else
      sub_5F7CF0(a3, 0, 0);
  }
  v13 = *(_DWORD *)(a4 + 0x34);
  if ( v13 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 0x30))(v13, 0);
  return v22;
}
