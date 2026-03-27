void __thiscall sub_60E1C0(int this, int a2)
{
  float *v3; // esi
  float *v4; // eax
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( *(float *)(this + 0x3C) >= 0.0 )
  {
    if ( *(_DWORD *)(this + 0x40) )
    {
      if ( TESDataHandler_g_PlayerRef )
      {
        v3 = (float *)NiRTTI_Cast((BSStringT *)dword_B3FA80, *(NiObject **)(this + 0x30));
        if ( v3 )
        {
          v4 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
          v5[0] = *v4 - v3[0x22];
          v5[1] = v4[1] - v3[0x23];
          v5[2] = v4[2] - v3[0x24];
          if ( *(float *)(this + 0x3C) > sub_404C90(v5) )
            (*(void (__cdecl **)(float *))(this + 0x40))(v3);
        }
      }
    }
  }
}
