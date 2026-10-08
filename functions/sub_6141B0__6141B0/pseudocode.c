double __thiscall sub_6141B0(float *this)
{
  float *v2; // edi
  int v3; // ecx
  float *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // ebp
  unsigned int v9; // eax
  float v11; // [esp+8h] [ebp-8h]
  float v12; // [esp+Ch] [ebp-4h]

  v2 = this + 0x57; /*0x6141b7*/
  if ( this == (float *)0xFFFFFEA4 ) /*0x6141bf*/
    return 0.0; /*0x6141bf*/
  if ( !*((_DWORD *)this + 0x58) && !*(_DWORD *)v2 ) /*0x6141cb*/
    return 0.0; /*0x6141cb*/
  v3 = 0; /*0x6141d4*/
  v4 = v2; /*0x6141d6*/
  do /*0x6141e5*/
  {
    if ( *(_DWORD *)v4 ) /*0x6141d8*/
      ++v3; /*0x6141dd*/
    v4 = *((float **)v4 + 1); /*0x6141e0*/
  }
  while ( v4 ); /*0x6141e5*/
  v12 = dbl_A56CA0 / (double)v3; /*0x6141f5*/
  if ( *(this + 0x33) >= 0.0 ) /*0x614206*/
    return 0.0; /*0x61427a*/
  v11 = 0.0; /*0x614209*/
  do /*0x61426c*/
  {
    v5 = *(_DWORD *)v2; /*0x614210*/
    if ( !*(_DWORD *)v2 ) /*0x614210*/
      break; /*0x614214*/
    v2 = *((float **)v2 + 1); /*0x61421e*/
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x330))(v5); /*0x614221*/
    v7 = v6; /*0x614223*/
    if ( v6 ) /*0x614227*/
    {
      v8 = CombatController_GetCurrentTarget(v6); /*0x614232*/
      if ( v8 == CombatController_GetCurrentTarget((int)this) ) /*0x61423b*/
      {
        v9 = *(_DWORD *)(v7 + 0x70); /*0x61423d*/
        if ( v9 < 2 || v9 == 3 ) /*0x61424c*/
        {
          v11 = v11 + v12; /*0x614256*/
          *(float *)(v7 + 0xCC) = v11 * dbl_A31C78; /*0x614264*/
        }
      }
    }
  }
  while ( v2 ); /*0x61426c*/
  return 0.0; /*0x614272*/
}
