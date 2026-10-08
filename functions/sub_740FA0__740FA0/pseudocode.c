// Fog decode: startup plain NiFogProperty default producer using B3FA90/94/98; separate from active BSFogProperty world fog path.
LONG sub_740FA0()
{
  NiObjectNET *v0; // eax
  float v1; // esi
  LONG result; // eax
  float v3; // edi

  v0 = (NiObjectNET *)FormHeapAlloc(0x2Cu);     // Fog fixed/default decode: startup default producer allocates 0x2C plain NiFogProperty, not BSFogProperty. /*0x740fc5*/
  v1 = *(float *)&v0; /*0x740fca*/
  if ( v0 ) /*0x740fdd*/
  {
    NiObjectNET::NiObjectNET(v0); /*0x740fe1*/
    *(_DWORD *)LODWORD(v1) = &NiFogProperty::`vftable';// Fog fixed/default decode: startup default object vtable is NiFogProperty; no +0x2C/+0x30 BSFogProperty fields. /*0x740fe8*/
    *(float *)(LODWORD(v1) + 0x20) = 0.0; /*0x740fee*/
    *(float *)(LODWORD(v1) + 0x24) = 0.0; /*0x740ff1*/
    *(float *)(LODWORD(v1) + 0x28) = 0.0; /*0x740ff4*/
    *(_WORD *)(LODWORD(v1) + 0x18) = 0;         // Fog fixed/default decode: plain NiFogProperty flags at +0x18 initialized to 0. /*0x740ff9*/
    *(float *)(LODWORD(v1) + 0x1C) = 1.0;       // Fog fixed/default decode: plain NiFogProperty depth at +0x1C initialized to 1.0. /*0x740fff*/
    *(float *)(LODWORD(v1) + 0x20) = MEMORY[0xB3F9B0][0x38];// Fog decode: default plain NiFogProperty color.r from B3FA90. /*0x741007*/
    *(float *)(LODWORD(v1) + 0x24) = MEMORY[0xB3F9B0][0x39];// Fog decode: default plain NiFogProperty color.g from B3FA94. /*0x741010*/
    *(float *)(LODWORD(v1) + 0x28) = MEMORY[0xB3F9B0][0x3A];// Fog decode: default plain NiFogProperty color.b from B3FA98. /*0x741019*/
  }
  else
  {
    v1 = 0.0; /*0x74101e*/
  }
  result = LODWORD(MEMORY[0xB3F9B0][0x213]); /*0x741020*/
  if ( LODWORD(MEMORY[0xB3F9B0][0x213]) != LODWORD(v1) ) /*0x74102f*/
  {
    if ( result ) /*0x741033*/
    {
      v3 = MEMORY[0xB3F9B0][0x213]; /*0x741035*/
      result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x74103b*/
      if ( !result ) /*0x741043*/
        result = (**(int (__thiscall ***)(float, int))LODWORD(v3))(COERCE_FLOAT(LODWORD(v3)), 1); /*0x741051*/
    }
    MEMORY[0xB3F9B0][0x213] = v1;               // Fog decode: installs default plain NiFogProperty global B401FC; not the active B333E4 BSFogProperty used by world shader fog. /*0x741055*/
    if ( v1 != 0.0 ) /*0x74105b*/
      return InterlockedIncrement((volatile LONG *)(LODWORD(v1) + 4)); /*0x741061*/
  }
  return result; /*0x741067*/
}
