bool __cdecl SetCameraFOV_Execute(
        ParamInfo *paramInfo,
        UInt8 *arg1,
        TESObjectREFR *thisObj,
        TESObjectREFR *contObj,
        Script *a5,
        ScriptEventList *eventList,
        int a7,
        UInt32 *opcodeoffsetPtr)
{
  bool result; // al
  double v9; // st7
  UInt32 v10; // [esp+8h] [ebp-8h] BYREF
  float a2; // [esp+Ch] [ebp-4h]

  v10 = 0xFFFFFFFF; /*0x51174a*/
  result = Script_ExtractArgs(paramInfo, arg1, opcodeoffsetPtr, thisObj, contObj, a5, eventList, &v10); /*0x511752*/
  if ( result ) /*0x51175c*/
  {
    if ( (int)v10 < 160 ) /*0x51176a*/
    {
      if ( v10 ) /*0x51177a*/
      {
        if ( (int)v10 <= 0 ) /*0x511788*/
        {
          LODWORD(a2) = -v10; /*0x511791*/
          v9 = 1.0 / (double)-v10; /*0x51179b*/
        }
        else
        {
          v9 = (double)(int)v10; /*0x51178a*/
        }
      }
      else
      {
        v10 = 75; /*0x51177c*/
        v9 = (double)75; /*0x511783*/
      }
    }
    else
    {
      v10 = 160; /*0x51176c*/
      v9 = (double)160; /*0x511773*/
    }
    a2 = v9; /*0x51179d*/
    SetCameraFOV_0((SceneGraph *)g_WorldSceneReceiverRoot, a2, 0.0); /*0x5117b1*/
    UpdateParticleShaderFOVData(a2); /*0x5117be*/
    return 1; /*0x5117c6*/
  }
  return result; /*0x51175e*/
}
