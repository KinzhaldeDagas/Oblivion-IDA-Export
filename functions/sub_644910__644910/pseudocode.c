void __userpurge sub_644910(int *a1@<ecx>, int a2@<ebx>, double a3@<st2>, double a4@<st0>, TESChildCELL *a5)
{
  char v8; // al
  int v9; // ebp
  float *v10; // ebx
  BSExtraDataVtbl *v11; // eax
  TESForm *v12; // ebx
  double v13; // st7
  double v14; // st7
  TESPackage *v15; // ecx
  double v16; // st7
  int v17; // ebx
  float *v18; // eax
  BSExtraDataVtbl *v19; // [esp+10h] [ebp-38h]
  TESWorldSpace *v20; // [esp+14h] [ebp-34h]
  TESWorldSpace *v21; // [esp+1Ch] [ebp-2Ch]
  float v22; // [esp+1Ch] [ebp-2Ch]
  int v23; // [esp+20h] [ebp-28h]
  double v24; // [esp+30h] [ebp-18h] BYREF
  float v25[3]; // [esp+3Ch] [ebp-Ch] BYREF
  float GameHour; // [esp+4Ch] [ebp+4h]
  float v27; // [esp+4Ch] [ebp+4h]
  float v28; // [esp+4Ch] [ebp+4h]

  sub_566DC0((TESPackage *)a1[2], a4, kTerrainLODQuadRayDirectionZ, a3, (Actor *)a5, 0, kTerrainLODQuadRayDirectionZ); /*0x64492d*/
  if ( v8 ) /*0x644934*/
  {
    sub_5EAE70((Actor *)a5, a2, (int)a5, v23); /*0x644a55*/
  }
  else if ( a1[0xD] /*0x644984*/
         || (v9 = *a1,
             v10 = sub_566B30((TESPackage *)a1[2], (float *)&v24, (Actor *)a5),
             v21 = sub_566940((TESPackage *)a1[2], (Actor *)a5),
             v11 = sub_566A40((char **)a1[2], (Actor *)a5),
             (*(unsigned __int8 (__thiscall **)(int *, TESChildCELL *, _DWORD, _DWORD, _DWORD, BSExtraDataVtbl *, TESWorldSpace *))(v9 + 0x3DC))(
               a1,
               a5,
               *(_DWORD *)v10,
               *((_DWORD *)v10 + 1),
               *((_DWORD *)v10 + 2),
               v11,
               v21)) )
  {
    v12 = TESForm_LookupByFormID(0x3Au); /*0x64499d*/
    GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x6449a4*/
    v24 = GameHour; /*0x6449ae*/
    v13 = sub_6599B0(a5); /*0x6449b2*/
    if ( v13 > v24 ) /*0x6449c0*/
      GameHour = GameHour + dbl_A2F920; /*0x6449cc*/
    v24 = GameHour; /*0x6449d6*/
    v14 = sub_6599B0(a5); /*0x6449da*/
    v15 = (TESPackage *)a1[2]; /*0x6449e3*/
    *(float *)&v24 = v24 - v14; /*0x6449e9*/
    v16 = *(float *)&v12[1].member.refID; /*0x6449ed*/
    v17 = *a1; /*0x6449f0*/
    v27 = v16; /*0x6449f2*/
    v22 = sub_5677B0(v15, v16, (TESObjectREFR *)a5, 1); /*0x6449fe*/
    v28 = dbl_A2F938 / v27 * *(float *)&v24; /*0x644a13*/
    v20 = sub_566940((TESPackage *)a1[2], (Actor *)a5); /*0x644a27*/
    v19 = sub_566A40((char **)a1[2], (Actor *)a5); /*0x644a31*/
    v18 = sub_566B30((TESPackage *)a1[2], v25, (Actor *)a5); /*0x644a38*/
    (*(void (__thiscall **)(int *, TESChildCELL *, float *, BSExtraDataVtbl *, TESWorldSpace *, _DWORD, _DWORD))(v17 + 0x418))( /*0x644a47*/
      a1,
      a5,
      v18,
      v19,
      v20,
      LODWORD(v28),
      LODWORD(v22));
  }
}
