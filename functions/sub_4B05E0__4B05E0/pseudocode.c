char __thiscall sub_4B05E0(_BYTE *this, int a2, int a3, _DWORD *a4, _WORD *a5, void *a6)
{
  int SchoolFromSkillAV; // eax
  unsigned __int8 v8; // bl
  int RandomLargeInteger; // ecx
  int v10; // ebx
  _BYTE *v11; // edi
  int v12; // ebp
  void **v13; // esi
  int v14; // esi
  int SchoolAV; // eax
  int v16; // edx
  int v17; // eax
  void *v18; // esi
  __int16 v19; // di
  _BYTE *v20; // eax
  int v22; // [esp-Ch] [ebp-1Ch]
  _BYTE *v23; // [esp+8h] [ebp-8h] BYREF
  _BYTE *v24; // [esp+Ch] [ebp-4h]

  *a4 = 0;
  *a5 = 0;
  v24 = this + 0x24;
  LOBYTE(SchoolFromSkillAV) = TESLeveledList_GetChanceNone(this + 0x24);
  v8 = SchoolFromSkillAV;
  if ( !(_BYTE)SchoolFromSkillAV
    || (RandomLargeInteger = GetRandomLargeInteger_(0),
        SchoolFromSkillAV = 0x64 * (RandomLargeInteger / 0x64),
        RandomLargeInteger % 0x64 >= v8) )
  {
    v10 = 0;
    v11 = this + 0x28;
    v12 = 1;
    v23 = 0;
    if ( this != (_BYTE *)0xFFFFFFD8 )
    {
      do
      {
        v13 = *(void ***)v11;
        if ( !*(_DWORD *)v11 )
          break;
        SchoolFromSkillAV = (int)OblivionDynamicCast(
                                   v13[1],
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &MagicItem `RTTI Type Descriptor',
                                   0);
        v14 = *(unsigned __int16 *)v13;
        if ( v14 > (unsigned __int16)a3 )
          break;
        if ( SchoolFromSkillAV )
        {
          SchoolAV = EffectItemList_GetSchoolAV();
          SchoolFromSkillAV = Magic_GetSchoolFromSkillAV(SchoolAV);
          if ( SchoolFromSkillAV != a2 )
            break;
        }
        if ( v14 <= v10
          || v10 && (LOBYTE(SchoolFromSkillAV) = TESLeveledList_GetCalcAllLevels(v24), (_BYTE)SchoolFromSkillAV) )
        {
          ++v12;
        }
        else
        {
          v12 = 1;
          v23 = v11;
          v10 = v14;
        }
        v11 = *((_BYTE **)v11 + 1);
      }
      while ( v11 );
      if ( v23 )
      {
        v16 = GetRandomLargeInteger_(0) % v12;
        SchoolFromSkillAV = (int)v23;
        if ( v16 )
        {
          while ( 1 )
          {
            SchoolFromSkillAV = *(_DWORD *)(SchoolFromSkillAV + 4);
            --v16;
            if ( !SchoolFromSkillAV )
              break;
            if ( !v16 )
              goto LABEL_18;
          }
        }
        else
        {
LABEL_18:
          v17 = *(_DWORD *)SchoolFromSkillAV;
          v18 = *(void **)(v17 + 4);
          v19 = *(_WORD *)(v17 + 8);
          v20 = OblivionDynamicCast(
                  v18,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESLevSpell `RTTI Type Descriptor',
                  0);
          if ( v20 )
          {
            if ( (_BYTE)a6 )
            {
              v22 = (int)a6;
              a6 = 0;
              v23 = 0;
              sub_4B05E0(v20, a2, a3, &a6, &v23, v22);
              v18 = a6;
              v19 *= (_WORD)v23;
            }
          }
          *a4 = v18;
          *a5 = v19;
          LOBYTE(SchoolFromSkillAV) = (_BYTE)a4;
        }
      }
    }
  }
  return SchoolFromSkillAV;
}
