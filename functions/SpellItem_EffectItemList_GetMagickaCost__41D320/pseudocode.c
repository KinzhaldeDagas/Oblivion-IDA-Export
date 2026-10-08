double __userpurge SpellItem_EffectItemList_GetMagickaCost@<st0>(
        int a1@<ecx>,
        int a2@<ebx>,
        double result@<st0>,
        int *a4)
{
  int v5; // esi
  int *v6; // esi
  int v7; // ebx
  int v8; // eax
  int SchoolAV; // [esp+10h] [ebp-10h]
  float v11; // [esp+24h] [ebp+4h]

  v5 = a1 - 0xC; /*0x41d32a*/
  if ( (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)(a1 - 0xC) + 0x18))(a1 - 0xC, result) == 2 /*0x41d342*/
    || (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x18))(v5) == 3 )
  {
    v6 = 0; /*0x41d34a*/
  }
  else
  {
    v6 = a4; /*0x41d344*/
  }
  if ( (*(_BYTE *)(a1 + 0x1C) & 1) != 0 ) /*0x41d350*/
  {
    v11 = (float)*(int *)(a1 + 0x14); /*0x41d357*/
    if ( v6 ) /*0x41d35b*/
    {
      v7 = *v6; /*0x41d35e*/
      (*(void (__thiscall **)(int *, int, int))(*v6 + 0x284))(v6, 7, a2); /*0x41d36c*/
      SchoolAV = EffectItemList_GetSchoolAV(); /*0x41d376*/
      v8 = (*(int (__thiscall **)(int *))(v7 + 0x284))(v6); /*0x41d37f*/
      return (float)Calc_SkillModifiedMagickaCost(v11, v8, SchoolAV); /*0x41d396*/
    }
    else
    {
      return SpellItem_EffectItemList_GetMagickaCost_::Return(v11); /*0x41d35b*/
    }
  }
  else
  {
    SpellItem_EffectItemList_GetMagickaCost_::AutoCalc(a2, a1, v6, (int)a4); /*0x41d350*/
  }
  return result; /*0x41d39b*/
}
