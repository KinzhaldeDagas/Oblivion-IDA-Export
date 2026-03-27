double __userpurge EffectItem_MagickaCostForCaster@<st0>(int a1@<ecx>, int a2@<ebx>, int *a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  double v8; // st7
  int SkillAVFromSchool; // [esp+8h] [ebp-1Ch]
  float v12; // [esp+18h] [ebp-Ch]
  float v13; // [esp+18h] [ebp-Ch]
  float v14; // [esp+20h] [ebp-4h]

  EffectItem_MagickaCost((float *)a1);
  if ( a3 )
  {
    v4 = *(_DWORD *)(a1 + 0x18);
    if ( v4 )
      v5 = *(_DWORD *)(v4 + 4);
    else
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 0x1C) + 0x64);
    v6 = *a3;
    (*(void (__thiscall **)(int *, int, int))(*a3 + 0x284))(a3, 7, a2);
    SkillAVFromSchool = Magic_GetSkillAVFromSchool(v5);
    v7 = (*(int (__thiscall **)(int *))(v6 + 0x284))(a3);
    v12 = Calc_SkillModifiedMagickaCost(v12, v7, SkillAVFromSchool);
  }
  v14 = (float)Double_To_SInt32(v12);
  v8 = v14;
  if ( v12 - v14 < 0.0 )
    v8 = v8 - 1.0;
  v13 = v8;
  if ( v13 <= 1.0 )
    return (float)1.0;
  else
    return (float)v8;
}
