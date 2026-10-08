// Verified Oblivion setter writes the supplied NiPoint3 into ExtraDistantData.normal_00C (+0x0C..+0x17). Fallout's same-named setter uses LandNormal at the same +0x0C offset; its EType is 0x13 versus Oblivion's 0x18.
void __thiscall ExtraDataList_SetDistantDataNormal(ExtraDataList *this, NiPoint3 *normal)
{
  ExtraDistantData_Oblivion_018Verified *distantData; // esi
  ExtraDistantData_Oblivion_018Verified *v4; // eax
  ExtraDistantData_Oblivion_018Verified *v5; // eax

  distantData = (ExtraDistantData_Oblivion_018Verified *)BaseExtraList_GetExtraData(this, kExtraData_DistantData); /*0x42012c*/
  if ( !distantData ) /*0x420130*/
  {
    v4 = (ExtraDistantData_Oblivion_018Verified *)FormHeapAlloc(0x18u); /*0x420134*/
    if ( v4 ) /*0x420146*/
      v5 = ExtraDistantData_ctor(v4); /*0x42014a*/
    else
      v5 = 0; /*0x420151*/
    distantData = v5; /*0x42015e*/
    BaseExtraList_AddExtra(this, (BSExtraData *)v5); /*0x420160*/
  }
  distantData->normal_00C = *normal;            // Verified stores the caller's complete NiPoint3 into ExtraDistantData.normal_00C (+0x0C..+0x17). /*0x42016b*/
}
