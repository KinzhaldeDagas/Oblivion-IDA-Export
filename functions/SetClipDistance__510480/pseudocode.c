bool __cdecl SetClipDistance(
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  UInt8 v9; // bl
  double v10; // st7
  NiCamera *v11; // edx
  UInt16 v12[2]; // [esp+0h] [ebp-20h] BYREF
  int a2[7]; // [esp+4h] [ebp-1Ch] BYREF

  *(float *)v12 = 0.0; /*0x51048d*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, argC, a5, l, v12); /*0x5104af*/
  if ( result ) /*0x5104b9*/
  {
    v9 = 0; /*0x5104c6*/
    v10 = *(float *)v12; /*0x5104cc*/
    if ( *(float *)v12 > 0.0 ) /*0x5104d1*/
    {
      if ( flt_A3F4F0 < v10 ) /*0x5104f4*/
      {
        *(float *)v12 = flt_A3F4F0; /*0x5104f8*/
        v10 = *(float *)v12; /*0x5104fc*/
      }
    }
    else
    {
      v9 = 1; /*0x5104d5*/
      *(float *)v12 = flt_A3F4F0; /*0x5104dd*/
      v10 = *(float *)v12; /*0x5104e1*/
    }
    v11 = *((NiCamera **)g_WorldSceneReceiverRoot + 0x37); /*0x51050a*/
    if ( !v11 ) /*0x510512*/
      return 1; /*0x510512*/
    qmemcpy(a2, &v11->members.Frustum, sizeof(a2)); /*0x510527*/
    if ( *(float *)&a2[5] == v10 ) /*0x510536*/
    {
      return 1; /*0x51056a*/
    }
    else
    {
      *(float *)&a2[5] = v10; /*0x510538*/
      v11->members.MaxFarNearRatio = v10 / *(float *)&a2[4]; /*0x510547*/
      Camera_SetFrustum(v11, (int)a2); /*0x51054d*/
      MEMORY[0xB333A0]->sky->atmosphere->unk18 = v9; /*0x51055e*/
      return 1; /*0x510561*/
    }
  }
  return result; /*0x5104bb*/
}
