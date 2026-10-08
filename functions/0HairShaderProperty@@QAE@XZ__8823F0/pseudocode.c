HairShaderProperty *__thiscall HairShaderProperty::HairShaderProperty(HairShaderProperty *this)
{
  double v2; // st7
  int v3; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // edi
  int v6; // edi

  BSShaderPPLightingProperty::BSShaderPPLightingProperty(this); /*0x88241b*/
  *(_DWORD *)this = &HairShaderProperty::`vftable'; /*0x882422*/
  *((_DWORD *)this + 0x3C) = 0; /*0x88242c*/
  *((_DWORD *)this + 0x3D) = 0; /*0x882432*/
  v2 = 0.0; /*0x882438*/
  *((float *)this + 0x4A) = 0.0; /*0x88243a*/
  *((float *)this + 0x4B) = 0.0; /*0x882440*/
  *((float *)this + 0x4C) = 0.0; /*0x882446*/
  *((float *)this + 0x4D) = 0.0; /*0x88244c*/
  *((float *)this + 0x4E) = 0.0; /*0x882452*/
  *((float *)this + 0x4F) = 0.0; /*0x882458*/
  *((float *)this + 0x50) = 0.0; /*0x88245e*/
  *((float *)this + 0x51) = 0.0; /*0x882464*/
  *((float *)this + 0x52) = 0.0; /*0x88246a*/
  *((float *)this + 0x53) = 0.0; /*0x882470*/
  *((float *)this + 0x54) = 0.0; /*0x882476*/
  *((float *)this + 0x55) = 0.0; /*0x88247c*/
  *((float *)this + 0x56) = 0.0; /*0x882482*/
  *((float *)this + 0x57) = 0.0; /*0x882488*/
  *((float *)this + 0x58) = 0.0; /*0x88248e*/
  *((float *)this + 0x59) = 0.0; /*0x882494*/
  *((_DWORD *)this + 0x5A) = 0; /*0x88249a*/
  *((_DWORD *)this + 0x5B) = 0; /*0x8824a0*/
  v3 = *((_DWORD *)this + 0x5A); /*0x8824a6*/
  v4 = InterlockedDecrement; /*0x8824ae*/
  if ( v3 ) /*0x8824b9*/
  {
    if ( !v4((volatile LONG *)(v3 + 4)) ) /*0x8824c1*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8824d3*/
    v2 = 0.0; /*0x8824d5*/
    *((_DWORD *)this + 0x5A) = 0; /*0x8824d7*/
  }
  v5 = *((_DWORD *)this + 0x3C); /*0x8824dd*/
  if ( v5 ) /*0x8824e5*/
  {
    if ( !v4((volatile LONG *)(v5 + 4)) ) /*0x8824ed*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x8824ff*/
    v2 = 0.0; /*0x882501*/
    *((_DWORD *)this + 0x3C) = 0; /*0x882503*/
  }
  v6 = *((_DWORD *)this + 0x3D); /*0x882509*/
  if ( v6 ) /*0x882511*/
  {
    if ( !v4((volatile LONG *)(v6 + 4)) ) /*0x882519*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x88252b*/
    v2 = 0.0; /*0x88252d*/
    *((_DWORD *)this + 0x3D) = 0; /*0x88252f*/
  }
  *((_DWORD *)this + 0x3E) = LODWORD(g_zeroNiPoint3.x); /*0x88253b*/
  *((_DWORD *)this + 0x3F) = LODWORD(g_zeroNiPoint3.y); /*0x882547*/
  *((_DWORD *)this + 0x40) = LODWORD(g_zeroNiPoint3.z); /*0x882552*/
  *((float *)this + 0x47) = v2; /*0x882558*/
  *((_DWORD *)this + 0x41) = LODWORD(g_zeroNiPoint3.x); /*0x882564*/
  *((_DWORD *)this + 0x42) = LODWORD(g_zeroNiPoint3.y); /*0x882570*/
  *((_DWORD *)this + 0x43) = LODWORD(g_zeroNiPoint3.z); /*0x88257b*/
  *((float *)this + 0x48) = v2; /*0x882581*/
  *((_DWORD *)this + 0x44) = LODWORD(g_zeroNiPoint3.x); /*0x88258d*/
  *((_DWORD *)this + 0x45) = LODWORD(g_zeroNiPoint3.y); /*0x882599*/
  *((_DWORD *)this + 0x46) = LODWORD(g_zeroNiPoint3.z); /*0x8825a4*/
  *((float *)this + 0x49) = v2; /*0x8825aa*/
  return this; /*0x8825b2*/
}
