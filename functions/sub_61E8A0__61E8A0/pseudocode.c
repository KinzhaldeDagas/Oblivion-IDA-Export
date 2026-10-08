void __thiscall sub_61E8A0(void **this)
{
  int *EffectiveCombatStyle; // eax
  int v3; // edi
  float *v4; // ebp
  float v5; // ecx
  float v6; // eax
  bool v7; // [esp+Fh] [ebp-11h]
  float v8; // [esp+10h] [ebp-10h]
  float v9; // [esp+14h] [ebp-Ch] BYREF
  float v10; // [esp+18h] [ebp-8h]
  float v11; // [esp+1Ch] [ebp-4h]

  EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*(this + 0xF)); /*0x61e8ab*/
  v7 = (double)(*(char (__thiscall **)(int *))(*EffectiveCombatStyle + 0x11C))(EffectiveCombatStyle) > dbl_A2FC68; /*0x61e8d9*/
  *((_BYTE *)this + 0xC4) = 0; /*0x61e8de*/
  v3 = 0; /*0x61e8e5*/
  v4 = (float *)(this + 0x2C); /*0x61e8e7*/
  do /*0x61e973*/
  {
    v5 = MEMORY[0xB3F9B0][0]; /*0x61e8f8*/
    v8 = 0.0; /*0x61e8fe*/
    v6 = *(&g_zeroNiPoint3 + 1); /*0x61e902*/
    v9 = g_zeroNiPoint3; /*0x61e907*/
    v11 = v5; /*0x61e90f*/
    v10 = v6; /*0x61e917*/
    if ( sub_615F70(*((float *)this + 0xF), v3 + 0x16, &v9) ) /*0x61e920*/
      v8 = v10; /*0x61e930*/
    if ( v7 && v8 > 0.0 ) /*0x61e946*/
    {
      *v4 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*(this + 0xF) + 0xEC))(*(this + 0xF)) * v8; /*0x61e959*/
      *((_BYTE *)this + 0xC4) = 1; /*0x61e95c*/
    }
    else
    {
      *v4 = 0.0; /*0x61e967*/
    }
    ++v3; /*0x61e96a*/
    ++v4; /*0x61e96d*/
  }
  while ( v3 < 5 ); /*0x61e973*/
}
