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

  v10 = 0xFFFFFFFF;
  result = Script_ExtractArgs(paramInfo, arg1, opcodeoffsetPtr, thisObj, contObj, a5, eventList, &v10);
  if ( result )
  {
    if ( (int)v10 < 160 )
    {
      if ( v10 )
      {
        if ( (int)v10 <= 0 )
        {
          LODWORD(a2) = -v10;
          v9 = 1.0 / (double)-v10;
        }
        else
        {
          v9 = (double)(int)v10;
        }
      }
      else
      {
        v10 = 75;
        v9 = (double)75;
      }
    }
    else
    {
      v10 = 160;
      v9 = (double)160;
    }
    a2 = v9;
    SetCameraFOV_0(g_worldScenegraph, a2, 0.0);
    UpdateParticleShaderFOVData(a2);
    return 1;
  }
  return result;
}
