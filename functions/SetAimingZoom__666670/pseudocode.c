void __thiscall SetAimingZoom(PlayerCharacter *a1, float a2)
{
  int v2; // ebx
  InputGlobal *input; // edi
  double v5; // st7
  double v6; // st7
  double worldFoV; // st7
  bool v8; // c0
  bool v9; // c3
  float v10; // [esp+0h] [ebp-24h]
  float v11; // [esp+Ch] [ebp-18h]
  float v12; // [esp+10h] [ebp-14h]
  float v13; // [esp+14h] [ebp-10h]
  float v14; // [esp+18h] [ebp-Ch]
  double v15; // [esp+1Ch] [ebp-8h]
  float a2a; // [esp+28h] [ebp+4h]
  float a2b; // [esp+28h] [ebp+4h]

  if ( !byte_B14F48 )
    return;
  v11 = g_DefaulFOV;
  input = OSGlobals->input;
  v13 = flt_B370A0;
  v12 = flt_B370A8;
  v14 = flt_B370B0;
  if ( a1->isThirdPerson || VanityCamState )
  {
    v6 = v11;
    if ( v11 == g_worldScenegraph->cameraFOV )
      return;
    goto LABEL_18;
  }
  if ( ((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetCurrentAction)(a1->super.super.super.process) != 5 )
  {
    if ( InputGlobals::QueryControlState(input, 6, 0) && LOBYTE(byte_B3BAEA.vtbl) )
      return;
LABEL_14:
    worldFoV = a1->worldFoV;
    v8 = v11 < worldFoV;
    v9 = v11 == worldFoV;
    v5 = v11;
    if ( v8 || v9 )
      return;
    a2a = a2 / v12 * (v5 - v13) + a1->worldFoV;
    if ( a2a <= v5 )
      goto LABEL_11;
    goto LABEL_16;
  }
  if ( !InputGlobals::QueryControlState(input, 6, 0) )
    goto LABEL_14;
  if ( LOBYTE(byte_B3BAEA.vtbl) )
  {
    if ( Actor_GetSkillMasteryLevel((int *)a1, v2, (int)input, 0x1C) >= 2 && v14 <= (double)*(float *)&flt_B3BAFC.vtbl )
    {
      v15 = a1->worldFoV;
      if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B370A0) < v15 )
      {
        v5 = v13;
        a2a = v11 + (v13 - v11) * ((*(float *)&flt_B3BAFC.vtbl - v14) / v12);
        if ( a2a >= (double)v13 )
        {
LABEL_11:
          v6 = a2a;
LABEL_18:
          v10 = v6;
          SetCameraFOV((float *)a1, v10);
          return;
        }
LABEL_16:
        a2b = v5;
        v6 = a2b;
        goto LABEL_18;
      }
    }
  }
}
