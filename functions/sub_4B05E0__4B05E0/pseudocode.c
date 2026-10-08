void __thiscall sub_4B05E0(_BYTE *this, int a2, int a3, _DWORD *a4, _WORD *a5, void *a6)
{
  unsigned __int8 ChanceNone; // bl
  int v8; // ebx
  int *v9; // edi
  int v10; // ebp
  void **v11; // esi
  void *v12; // eax
  int v13; // esi
  int SchoolAV; // eax
  int v15; // eax
  int v16; // edx
  int *v17; // eax
  int v18; // eax
  void *v19; // esi
  __int16 v20; // di
  _BYTE *v21; // eax
  void *v22; // [esp-Ch] [ebp-1Ch]
  int *v23; // [esp+8h] [ebp-8h] BYREF
  _BYTE *v24; // [esp+Ch] [ebp-4h]

  *a4 = 0; /*0x4b05ef*/
  *a5 = 0; /*0x4b05f5*/
  v24 = this + 0x24; /*0x4b05fd*/
  ChanceNone = TESLeveledList_GetChanceNone(this + 0x24); /*0x4b0606*/
  if ( !ChanceNone || Game_RandomLargeInteger(0) % 0x64 >= ChanceNone ) /*0x4b0633*/
  {
    v8 = 0; /*0x4b063b*/
    v9 = (int *)(this + 0x28); /*0x4b063d*/
    v10 = 1; /*0x4b0642*/
    v23 = 0; /*0x4b0647*/
    if ( this != (_BYTE *)0xFFFFFFD8 ) /*0x4b064b*/
    {
      do /*0x4b06c2*/
      {
        v11 = (void **)*v9; /*0x4b0651*/
        if ( !*v9 ) /*0x4b0651*/
          break; /*0x4b0655*/
        v12 = OblivionDynamicCast( /*0x4b0669*/
                v11[1],
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &MagicItem `RTTI Type Descriptor',
                0);
        v13 = *(unsigned __int16 *)v11; /*0x4b066e*/
        if ( v13 > (unsigned __int16)a3 ) /*0x4b067b*/
          break; /*0x4b067b*/
        if ( v12 ) /*0x4b067f*/
        {
          SchoolAV = EffectItemList_GetSchoolAV(); /*0x4b0684*/
          Magic_GetSchoolFromSkillAV(SchoolAV); /*0x4b068a*/
          if ( v15 != a2 ) /*0x4b0696*/
            break; /*0x4b0696*/
        }
        if ( v13 <= v8 || v8 && TESLeveledList_GetCalcAllLevels(v24) ) /*0x4b06a4*/
        {
          ++v10; /*0x4b06ba*/
        }
        else
        {
          v10 = 1; /*0x4b06ad*/
          v23 = v9; /*0x4b06b2*/
          v8 = v13; /*0x4b06b6*/
        }
        v9 = (int *)v9[1]; /*0x4b06bd*/
      }
      while ( v9 ); /*0x4b06c2*/
      if ( v23 ) /*0x4b06c9*/
      {
        v16 = Game_RandomLargeInteger(0) % v10; /*0x4b06d7*/
        v17 = v23; /*0x4b06d9*/
        if ( v16 ) /*0x4b06e4*/
        {
          while ( 1 ) /*0x4b06e6*/
          {
            v17 = (int *)v17[1]; /*0x4b06e6*/
            --v16; /*0x4b06e9*/
            if ( !v17 ) /*0x4b06ee*/
              break; /*0x4b06ee*/
            if ( !v16 ) /*0x4b06f2*/
              goto LABEL_18; /*0x4b06f2*/
          }
        }
        else
        {
LABEL_18:
          v18 = *v17; /*0x4b06f4*/
          v19 = *(void **)(v18 + 4); /*0x4b06f6*/
          v20 = *(_WORD *)(v18 + 8); /*0x4b06f9*/
          v21 = OblivionDynamicCast( /*0x4b070a*/
                  v19,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESLevSpell `RTTI Type Descriptor',
                  0);
          if ( v21 ) /*0x4b0714*/
          {
            if ( (_BYTE)a6 ) /*0x4b071c*/
            {
              v22 = a6; /*0x4b071e*/
              a6 = 0; /*0x4b0735*/
              v23 = 0; /*0x4b0739*/
              sub_4B05E0(v21, a2, a3, &a6, &v23, v22); /*0x4b073d*/
              v19 = a6; /*0x4b0746*/
              v20 *= (_WORD)v23; /*0x4b074d*/
            }
          }
          *a4 = v19; /*0x4b0758*/
          *a5 = v20; /*0x4b075a*/
        }
      }
    }
  }
}
