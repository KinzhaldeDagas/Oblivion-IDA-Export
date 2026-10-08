double __userpurge EffectItem_MagickaCostForCaster@<st0>(int a1@<ecx>, int a2@<ebx>, int *a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  double v9; // st7
  int v11; // [esp+8h] [ebp-1Ch]
  float v13; // [esp+18h] [ebp-Ch]
  float v14; // [esp+18h] [ebp-Ch]
  float v15; // [esp+20h] [ebp-4h]

  EffectItem_MagickaCost((float *)a1); /*0x413895*/
  if ( a3 ) /*0x4138a4*/
  {
    v4 = *(_DWORD *)(a1 + 0x18); /*0x4138a6*/
    if ( v4 ) /*0x4138ab*/
      v5 = *(_DWORD *)(v4 + 4); /*0x4138ad*/
    else
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 0x1C) + 0x64); /*0x4138b5*/
    v6 = *a3; /*0x4138b9*/
    (*(void (__thiscall **)(int *, int, int))(*a3 + 0x284))(a3, 7, a2); /*0x4138c7*/
    Magic_GetSkillAVFromSchool(v5); /*0x4138cb*/
    v11 = v7; /*0x4138d9*/
    v8 = (*(int (__thiscall **)(int *))(v6 + 0x284))(a3); /*0x4138dc*/
    v13 = Calc_SkillModifiedMagickaCost(v13, v8, v11); /*0x4138ef*/
  }
  v15 = (float)Double_To_SInt32(v13); /*0x413909*/
  v9 = v15; /*0x413915*/
  if ( v13 - v15 < 0.0 ) /*0x413922*/
    v9 = v9 - 1.0; /*0x413924*/
  v14 = v9; /*0x41392a*/
  if ( v14 <= 1.0 ) /*0x413939*/
    return (float)1.0; /*0x41394b*/
  else
    return (float)v9; /*0x41393d*/
}
