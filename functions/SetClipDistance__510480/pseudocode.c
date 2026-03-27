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
  NiCamera *camera; // edx
  UInt16 v12[2]; // [esp+0h] [ebp-20h] BYREF
  int a2[7]; // [esp+4h] [ebp-1Ch] BYREF

  *(float *)v12 = 0.0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, argC, a5, l, v12);
  if ( result )
  {
    v9 = 0;
    v10 = *(float *)v12;
    if ( *(float *)v12 > 0.0 )
    {
      if ( flt_A3F4F0 < v10 )
      {
        *(float *)v12 = flt_A3F4F0;
        v10 = *(float *)v12;
      }
    }
    else
    {
      v9 = 1;
      *(float *)v12 = flt_A3F4F0;
      v10 = *(float *)v12;
    }
    camera = g_worldScenegraph->camera;
    if ( !camera )
      return 1;
    qmemcpy(a2, &camera->members.Frustum, sizeof(a2));
    if ( *(float *)&a2[5] == v10 )
    {
      return 1;
    }
    else
    {
      *(float *)&a2[5] = v10;
      camera->members.MaxFarNearRatio = v10 / *(float *)&a2[4];
      Camera_SetFrustum(camera, (int)a2);
      TES->sky->atmosphere->unk18 = v9;
      return 1;
    }
  }
  return result;
}
