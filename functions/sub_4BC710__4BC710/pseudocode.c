// Verified virtual compare routine returns bool; returns mismatch for non-TESSubSpace input or inherited component differences, then compares the three dimension fields for inequality.
bool __thiscall TESSubSpace_CompareComponentsTo(TESSubSpace *this, TESForm *other)
{
  TESForm *v3; // eax
  unsigned __int16 *v4; // esi
  TESForm *v6; // eax
  int dimensionsX; // ecx
  int dimensionsY; // edx
  double v9; // st7
  int dimensionsZ; // eax
  NiPoint3 othera; // [esp+8h] [ebp-18h] BYREF
  NiPoint3 v12; // [esp+14h] [ebp-Ch] BYREF
  TESForm *v13; // [esp+24h] [ebp+4h]
  TESForm *v14; // [esp+24h] [ebp+4h]

  v3 = (TESForm *)OblivionDynamicCast( /*0x4bc72a*/
                    other,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESSubSpace `RTTI Type Descriptor',
                    0);
  v4 = (unsigned __int16 *)v3; /*0x4bc72f*/
  if ( !v3 || TESForm_CompareAllComponentsTo((TESForm *)this, v3) ) /*0x4bc745*/
    return 1; /*0x4bc739*/
  v6 = (TESForm *)v4[0x14]; /*0x4bc756*/
  dimensionsX = this->dimensionsX; /*0x4bc75e*/
  v13 = (TESForm *)v4[0x13]; /*0x4bc766*/
  dimensionsY = this->dimensionsY; /*0x4bc76a*/
  othera.x = (float)v4[0x12]; /*0x4bc76e*/
  v9 = (double)(int)v13; /*0x4bc772*/
  v14 = v6; /*0x4bc776*/
  dimensionsZ = this->dimensionsZ; /*0x4bc77a*/
  othera.y = v9; /*0x4bc77e*/
  othera.z = (float)(int)v14; /*0x4bc78e*/
  v12.x = (float)dimensionsX; /*0x4bc79f*/
  v12.y = (float)dimensionsY; /*0x4bc7ab*/
  v12.z = (float)dimensionsZ; /*0x4bc7b3*/
  return NiPoint3__NotEqual(&v12, &othera); /*0x4bc738*/
}
