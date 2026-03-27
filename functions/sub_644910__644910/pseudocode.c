void __userpurge sub_644910(int *a1@<ecx>, int a2@<ebx>, double a3@<st1>, TESChildCELL *a4)
{
  char v6; // al
  int v7; // ebp
  _DWORD *v8; // ebx
  TESObjectCELL *v9; // eax
  TESForm *v10; // ebx
  double v11; // st7
  double v12; // st7
  TESPackage *v13; // ecx
  double v14; // st7
  int v15; // ebx
  int v16; // eax
  TESObjectCELL *v17; // [esp+10h] [ebp-38h]
  TESWorldSpace *v18; // [esp+14h] [ebp-34h]
  TESWorldSpace *v19; // [esp+1Ch] [ebp-2Ch]
  float v20; // [esp+1Ch] [ebp-2Ch]
  int v21; // [esp+20h] [ebp-28h]
  double v22; // [esp+30h] [ebp-18h] BYREF
  _BYTE v23[12]; // [esp+3Ch] [ebp-Ch] BYREF
  float GameHour; // [esp+4Ch] [ebp+4h]
  float v25; // [esp+4Ch] [ebp+4h]
  float v26; // [esp+4Ch] [ebp+4h]

  sub_566DC0((TESPackage *)a1[2], flt_A30634, a3, (Actor *)a4, 0, flt_A30634);
  if ( v6 )
  {
    sub_5EAE70((Actor *)a4, a2, (int)a4, v21);
  }
  else if ( a1[0xD]
         || (v7 = *a1,
             v8 = (_DWORD *)sub_566B30((TESPackage *)a1[2], (int)&v22, (Actor *)a4),
             v19 = sub_566940((TESPackage *)a1[2], (Actor *)a4),
             v9 = sub_566A40((char **)a1[2], (Actor *)a4),
             (*(unsigned __int8 (__thiscall **)(int *, TESChildCELL *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))(v7 + 0x3DC))(
               a1,
               a4,
               *v8,
               v8[1],
               v8[2],
               v9,
               v19)) )
  {
    v10 = TESForm_LookupByFormID(0x3Au);
    GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
    v22 = GameHour;
    v11 = sub_6599B0(a4);
    if ( v11 > v22 )
      GameHour = GameHour + dbl_A2F920;
    v22 = GameHour;
    v12 = sub_6599B0(a4);
    v13 = (TESPackage *)a1[2];
    *(float *)&v22 = v22 - v12;
    v14 = *(float *)&v10[1].member.refID;
    v15 = *a1;
    v25 = v14;
    v20 = sub_5677B0(v13, v14, (TESObjectREFR *)a4, 1);
    v26 = dbl_A2F938 / v25 * *(float *)&v22;
    v18 = sub_566940((TESPackage *)a1[2], (Actor *)a4);
    v17 = sub_566A40((char **)a1[2], (Actor *)a4);
    v16 = sub_566B30((TESPackage *)a1[2], (int)v23, (Actor *)a4);
    (*(void (__thiscall **)(int *, TESChildCELL *, int, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(v15 + 0x418))(
      a1,
      a4,
      v16,
      v17,
      v18,
      LODWORD(v26),
      LODWORD(v20));
  }
}
