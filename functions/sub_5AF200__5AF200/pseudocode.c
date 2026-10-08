void __thiscall sub_5AF200(int this)
{
  int v2; // eax
  int v3; // eax
  SkillMasteryLevel SkillMasteryLevel; // eax
  int v5; // ebx
  int v6; // ebp
  int v7; // esi
  UInt32 *v8; // ecx
  double v9; // st7

  v2 = *(_DWORD *)(this + 0x160); /*0x5af207*/
  *(float *)(this + 0x158) = 0.0; /*0x5af20d*/
  *(float *)(this + 0x14C) = 0.0; /*0x5af216*/
  v3 = this + 0x28 * v2; /*0x5af21c*/
  *(_DWORD *)(this + 0x150) = 4; /*0x5af21f*/
  if ( !*(_BYTE *)(v3 + 0x95) ) /*0x5af229*/
    *(float *)(v3 + 0x90) = -*(float *)(this + 0x6C); /*0x5af237*/
  SkillMasteryLevel = Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Security); /*0x5af245*/
  if ( SkillMasteryLevel )
  {
    switch ( SkillMasteryLevel )
    {
      case kSkillMastery_Apprentice:
        v5 = 1; /*0x5af257*/
        break;
      case kSkillMastery_Journeyman:
        v5 = 2; /*0x5af260*/
        break;
      case kSkillMastery_Expert:
        v5 = 3; /*0x5af269*/
        break;
      default:
        v5 = SkillMasteryLevel != kSkillMastery_Master ? 0 : 4;
        break;
    }
  }
  else
  {
    v5 = 0; /*0x5af24e*/
  }
  if ( TESObjectREFR_GetItemCount((TESObjectREFR *)reference, (TESForm *)MEMORY[0xB35ECC]) ) /*0x5af288*/
    ++v5; /*0x5af291*/
  v6 = 0; /*0x5af294*/
  if ( *(int *)(this + 0x4C) > 0 ) /*0x5af299*/
  {
    v7 = this + 0x95; /*0x5af29c*/
    do /*0x5af2ed*/
    {
      if ( *(_BYTE *)v7 ) /*0x5af2a2*/
      {
        if ( v5 > 0 ) /*0x5af2a9*/
        {
          --v5; /*0x5af2e1*/
        }
        else
        {
          v8 = *(UInt32 **)(v7 + 0xB); /*0x5af2ab*/
          *(_BYTE *)v7 = 0; /*0x5af2b0*/
          *(_BYTE *)(v7 - 1) = 1; /*0x5af2b3*/
          *(_BYTE *)(v7 + 1) = 1; /*0x5af2b7*/
          v9 = -*(float *)(this + 0x6C); /*0x5af2be*/
          *(_DWORD *)(v7 - 0x15) = 0xFFFFFFFF; /*0x5af2c0*/
          *(float *)(v7 - 5) = v9; /*0x5af2c7*/
          if ( v8 ) /*0x5af2ca*/
          {
            if ( !SoundHandle::IsPlaying(v8) ) /*0x5af2cc*/
              sub_6B7190(*(int **)(v7 + 0xB), 1); /*0x5af2da*/
          }
        }
      }
      ++v6; /*0x5af2e4*/
      v7 += 0x28; /*0x5af2e7*/
    }
    while ( v6 < *(_DWORD *)(this + 0x4C) ); /*0x5af2ed*/
  }
}
