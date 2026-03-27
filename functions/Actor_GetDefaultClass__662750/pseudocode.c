int __thiscall Actor_GetDefaultClass(Actor *this)
{
  int i; // esi
  char *TESSkillByCode; // ecx
  double v4; // st7
  int v5; // eax
  int v6; // eax
  double v7; // st5
  double v8; // st2
  int v9; // edi
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  void *v14; // eax
  void *v15; // edx
  int result; // eax
  float v17; // [esp+4h] [ebp-10h]
  float v18; // [esp+8h] [ebp-Ch]
  float v19; // [esp+Ch] [ebp-8h]
  float v20; // [esp+10h] [ebp-4h]
  float v21; // [esp+10h] [ebp-4h]
  float v22; // [esp+10h] [ebp-4h]

  if ( (TESForm::ModReferenceList *)iClassCharactergenClass != Actor_GetBaseClass(this)[1].next )
    return Actor_GetDefaultClass_::Return_CurrentClass();
  v18 = 0.0;
  v17 = 0.0;
  v19 = 0.0;
  for ( i = 0; i < 0x15; ++i )
  {
    TESSkillByCode = TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, i);
    v20 = *(float *)(*((_DWORD *)this + 0x16C) + 4 * i);
    if ( TESSkillByCode )
    {
      v4 = v20;
      if ( v20 > 0.0 )
      {
        v5 = *((_DWORD *)TESSkillByCode + 0xD);
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            if ( v6 == 1 )
              v19 = v4 + v19;
          }
          else
          {
            v17 = v4 + v17;
          }
        }
        else
        {
          v18 = v4 + v18;
        }
      }
    }
  }
  v7 = dbl_A49318;
  Double_To_SInt32(v17);
  v8 = dbl_A2FAA0;
  v9 = Double_To_SInt32(v17);
  Double_To_SInt32(v8);
  v10 = Double_To_SInt32(v8);
  v11 = Double_To_SInt32(v8);
  v21 = v17 + v18 + v19;
  v22 = v19 / v21 * v7;
  v12 = Double_To_SInt32((double)((v22 - (double)v11 >= v8) + v11));
  v13 = v12;
  if ( v9 >= 7 || v10 >= 7 )
    JUMPOUT(0x662A2D);
  if ( v12 >= 7 )
    JUMPOUT(0x662A2C);
  switch ( v9 )
  {
    case 3:
      if ( v10 != 2 || v12 != 2 )
        goto Actor_GetDefaultClass___def_662919;
      v15 = (void *)iClassRogue;
      goto LABEL_26;
    case 4:
      if ( v12 == 2 )
        v14 = TESDataHandler_LookupTESClassByFormID((void *)iClassScout);
      else
        v14 = TESDataHandler_LookupTESClassByFormID((void *)iClassArcher);
      goto LABEL_27;
    case 5:
      if ( v10 == 2 )
      {
        v14 = TESDataHandler_LookupTESClassByFormID((void *)iClassCrusader);
      }
      else
      {
        v15 = (void *)iClassKnight;
LABEL_26:
        v14 = TESDataHandler_LookupTESClassByFormID(v15);
      }
LABEL_27:
      *((_DWORD *)this + 0x194) = v14;
      result = Actor_GetDefaultClass_::def_662919((int)this, v10, v9, v13);
      break;
    case 6:
      v14 = TESDataHandler_LookupTESClassByFormID((void *)iClassBarbarian);
      goto LABEL_27;
    default:
Actor_GetDefaultClass___def_662919:
      JUMPOUT(0x662975);
  }
  return result;
}
