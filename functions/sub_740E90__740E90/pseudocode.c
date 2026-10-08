// Fog decode: NIF factory for plain NiFogProperty; default color comes from B3FA90/94/98.
NiObjectNET *sub_740E90()
{
  NiObjectNET *v0; // eax
  NiObjectNET *v1; // esi

  v0 = (NiObjectNET *)FormHeapAlloc(0x2Cu);     // Fog fixed/default decode: NIF factory allocates 0x2C plain NiFogProperty. /*0x740eb4*/
  v1 = v0; /*0x740eb9*/
  if ( !v0 ) /*0x740ecc*/
    return 0; /*0x740f1e*/
  NiObjectNET::NiObjectNET(v0); /*0x740ed0*/
  v1->vtbl = (NiObjectVtbl **)&NiFogProperty::`vftable';// Fog fixed/default decode: NIF factory object uses NiFogProperty vtable, separate from active B333E4 BSFogProperty. /*0x740ed7*/
  *(float *)&v1[1].members.m_pcName = 0.0; /*0x740edd*/
  *(float *)&v1[1].members.m_controller = 0.0; /*0x740ee0*/
  *(float *)&v1[1].members.m_extraDataList = 0.0; /*0x740ee3*/
  LOWORD(v1[1].vtbl) = 0;                       // Fog fixed/default decode: factory initializes plain NiFogProperty flags +0x18 to 0. /*0x740ee8*/
  *(float *)&v1[1].members.super.m_uiRefCount = 1.0;// Fog fixed/default decode: factory initializes plain NiFogProperty depth +0x1C to 1.0. /*0x740eee*/
  *(float *)&v1[1].members.m_pcName = MEMORY[0xB3F9B0][0x38];// Fog decode: NiFogProperty factory default color.r from B3FA90. /*0x740ef6*/
  *(float *)&v1[1].members.m_controller = MEMORY[0xB3F9B0][0x39];// Fog decode: NiFogProperty factory default color.g from B3FA94. /*0x740eff*/
  *(float *)&v1[1].members.m_extraDataList = MEMORY[0xB3F9B0][0x3A];// Fog decode: NiFogProperty factory default color.b from B3FA98. /*0x740f08*/
  return v1; /*0x740f0d*/
}
