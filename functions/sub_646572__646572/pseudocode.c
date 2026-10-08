// positive sp value has been detected, the output may be wrong!
char __userpurge sub_646572@<al>(
        int a1@<eax>,
        int a2@<ecx>,
        TESObjectREFR *a3@<edi>,
        int a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v13; // ecx
  int v14; // ecx
  TESObjectREFR *v16; // [esp-24h] [ebp-30h]
  TESObjectCELL *v17; // [esp-20h] [ebp-2Ch]
  TESObjectREFR *v18; // [esp-1Ch] [ebp-28h]
  int v19; // [esp-18h] [ebp-24h]
  int v20; // [esp-14h] [ebp-20h]
  int v21; // [esp-10h] [ebp-1Ch]
  char v22; // [esp-Ch] [ebp-18h]
  char v23; // [esp+7h] [ebp-5h]

  LOBYTE(a1) = a1 & 0x40; /*0x646572*/
  *(_DWORD *)(a1 + 8) = a2; /*0x646576*/
  sub_6836E0((NiTMap_TESCELL *)unk_B3BF80, a5, a6, a7, v16, v17, v18, v19, v20, v21, v22); /*0x646580*/
  v13 = unk_B3BF80; /*0x646585*/
  a9 = 0; /*0x646591*/
  if ( sub_682820(v13, a4, (Actor *)a3, &a9) ) /*0x646596*/
  {
    if ( a9 ) /*0x6465a4*/
      TravelPath_AddRoadSegmentsForPath(*(TravelPath **)(a4 + 0x34), a3); /*0x6465af*/
    else
      sub_5F7CF0((Actor *)a3, 0, 0); /*0x6465f0*/
  }
  v14 = *(_DWORD *)(a4 + 0x34); /*0x6465b4*/
  if ( v14 ) /*0x6465b9*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 0x30))(v14, 0); /*0x6465c2*/
  return v23; /*0x6465cf*/
}
