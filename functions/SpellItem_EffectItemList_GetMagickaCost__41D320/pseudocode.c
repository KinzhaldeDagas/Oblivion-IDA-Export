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

  v5 = a1 - 0xC;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 0xC) + 0x18))(a1 - 0xC) == 2
    || (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x18))(v5) == 3 )
  {
    v6 = 0;
  }
  else
  {
    v6 = a4;
  }
  if ( (*(_BYTE *)(a1 + 0x1C) & 1) != 0 )
  {
    result = (double)*(int *)(a1 + 0x14);
    v11 = result;
    if ( v6 )
    {
      v7 = *v6;
      (*(void (__thiscall **)(int *, int, int))(*v6 + 0x284))(v6, 7, a2);
      SchoolAV = EffectItemList_GetSchoolAV();
      v8 = (*(int (__thiscall **)(int *))(v7 + 0x284))(v6);
      return (float)Calc_SkillModifiedMagickaCost(v11, v8, SchoolAV);
    }
    else
    {
      SpellItem_EffectItemList_GetMagickaCost_::Return(LODWORD(v11), result);
    }
  }
  else
  {
    SpellItem_EffectItemList_GetMagickaCost_::AutoCalc(a2, a1, v6, (int)a4);
  }
  return result;
}
