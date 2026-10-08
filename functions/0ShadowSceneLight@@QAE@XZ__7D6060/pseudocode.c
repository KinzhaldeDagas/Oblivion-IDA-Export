// ShadowSceneLight constructor. Initializes projection/transition/status fields, object/receiver list ownership, map/camera state, and source pointers.
ShadowSceneLight *__thiscall ShadowSceneLight::ShadowSceneLight(ShadowSceneLight *this)
{
  NiFrustumPlanes *v2; // edi
  int i; // ebp
  double v4; // st7
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  double v10; // st6
  double v11; // st5
  int v12; // edi
  int v13; // edi
  int v14; // edi

  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x7d6092*/
  *((_DWORD *)this + 1) = 0; /*0x7d6098*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x7d609b*/
  *(_DWORD *)this = &ShadowSceneLight::`vftable'; /*0x7d60a1*/
  *((_DWORD *)this + 0x3C) = 0; /*0x7d60ab*/
  *((_DWORD *)this + 0x3A) = 0; /*0x7d60b1*/
  *((_DWORD *)this + 0x3B) = 0; /*0x7d60b7*/
  *((_DWORD *)this + 0x39) = &NiTPointerList<NiPointer<NiTriBasedGeom>>::`vftable'; /*0x7d60bd*/
  *((_DWORD *)this + 0x3E) = 0;                 // Initialize the auxiliary strong-owned pointer at ShadowSceneLight+0xF8 to null. The bounded native shadow-range scan found lifecycle init/release but no direct producer. /*0x7d60c7*/
  *((_DWORD *)this + 0x40) = 0; /*0x7d60cd*/
  *((_DWORD *)this + 0x45) = 0; /*0x7d60d3*/
  *((_DWORD *)this + 0x47) = 0; /*0x7d60d9*/
  *((_DWORD *)this + 0x4C) = 0; /*0x7d60df*/
  *((_DWORD *)this + 0x50) = 0; /*0x7d60e5*/
  *((_DWORD *)this + 0x4E) = 0; /*0x7d60eb*/
  *((_DWORD *)this + 0x4F) = 0; /*0x7d60f1*/
  *((_DWORD *)this + 0x4D) = &NiTPointerList<NiPointer<NiAVObject>>::`vftable'; /*0x7d60f7*/
  *((_DWORD *)this + 0x52) = 0; /*0x7d6101*/
  *((_DWORD *)this + 0x53) = 0; /*0x7d6107*/
  v2 = (NiFrustumPlanes *)((char *)this + 0x150); /*0x7d6112*/
  for ( i = 5; i >= 0; --i ) /*0x7d6118*/
  {
    sub_716DB0(v2); /*0x7d6122*/
    v2 = (NiFrustumPlanes *)((char *)v2 + 0x10); /*0x7d6127*/
  }
  v4 = 0.0; /*0x7d612f*/
  v5 = InterlockedDecrement; /*0x7d6131*/
  *((_DWORD *)this + 0x6C) = 0x3F; /*0x7d6137*/
  *((float *)this + 0x34) = 0.0; /*0x7d6141*/
  *((float *)this + 0x35) = 0.0; /*0x7d6147*/
  *((_BYTE *)this + 0xF5) = 1;                  // Constructor transiently sets specialCubeDispatch (+0xF5) while initializing, but this value does not survive construction. /*0x7d614d*/
  *((float *)this + 0x36) = 0.0; /*0x7d6154*/
  *((_BYTE *)this + 0xF4) = 0; /*0x7d615a*/
  *((_BYTE *)this + 0xFC) = 0;                  // OBLIVION AUTHORITY (2026-08-24): ShadowSceneLight constructor initializes byte +0xFC to 0. SetBackingLight 0x7D3400 later sets it iff the backing light RTTI-walk reaches NiPointLight; UpdateLightColorConstant uses it to choose directional versus point semantics. /*0x7d6160*/
  *((_BYTE *)this + 0x104) = 0;                 // Initialize trackBackingPosition +0x104 to false. Full-list creation later stores the caller-selected tracking mode before binding the backing light. /*0x7d6166*/
  *((_DWORD *)this + 0x42) = LODWORD(g_zeroNiPoint3.x); /*0x7d6171*/
  *((_DWORD *)this + 0x43) = LODWORD(g_zeroNiPoint3.y); /*0x7d617d*/
  *((_DWORD *)this + 0x44) = LODWORD(g_zeroNiPoint3.z); /*0x7d6189*/
  *((_WORD *)this + 0x8C) = 0; /*0x7d618f*/
  v6 = *((_DWORD *)this + 0x3E); /*0x7d6196*/
  if ( v6 ) /*0x7d619e*/
  {
    if ( !v5((volatile LONG *)(v6 + 4)) ) /*0x7d61a6*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7d61b8*/
    v4 = 0.0; /*0x7d61ba*/
    *((_DWORD *)this + 0x3E) = 0; /*0x7d61bc*/
  }
  v7 = *((_DWORD *)this + 0x40); /*0x7d61c2*/
  if ( v7 ) /*0x7d61ca*/
  {
    if ( !v5((volatile LONG *)(v7 + 4)) ) /*0x7d61d2*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7d61e4*/
    v4 = 0.0; /*0x7d61e6*/
    *((_DWORD *)this + 0x40) = 0; /*0x7d61e8*/
  }
  v8 = *((_DWORD *)this + 0x47); /*0x7d61ee*/
  if ( v8 ) /*0x7d61f6*/
  {
    if ( !v5((volatile LONG *)(v8 + 4)) ) /*0x7d61fe*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7d6210*/
    v4 = 0.0; /*0x7d6212*/
    *((_DWORD *)this + 0x47) = 0; /*0x7d6214*/
  }
  v9 = *((_DWORD *)this + 0x45); /*0x7d621a*/
  if ( v9 ) /*0x7d6222*/
  {
    if ( !v5((volatile LONG *)(v9 + 4)) ) /*0x7d622a*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7d623c*/
    v4 = 0.0; /*0x7d623e*/
    *((_DWORD *)this + 0x45) = 0; /*0x7d6240*/
  }
  *((float *)this + 0x12) = v4; /*0x7d6246*/
  *((float *)this + 0x11) = v4; /*0x7d6249*/
  *((float *)this + 0x10) = v4; /*0x7d624c*/
  *((float *)this + 0xF) = v4; /*0x7d624f*/
  *((float *)this + 0xD) = v4; /*0x7d6252*/
  *((float *)this + 0xC) = v4; /*0x7d6255*/
  *((float *)this + 0xB) = v4; /*0x7d6258*/
  *((float *)this + 0xA) = v4; /*0x7d625b*/
  *((float *)this + 8) = v4; /*0x7d625e*/
  *((float *)this + 7) = v4; /*0x7d6261*/
  *((float *)this + 6) = v4; /*0x7d6264*/
  *((float *)this + 5) = v4; /*0x7d6267*/
  v10 = 1.0; /*0x7d626a*/
  *((float *)this + 0x13) = 1.0; /*0x7d626c*/
  *((float *)this + 0xE) = 1.0; /*0x7d626f*/
  *((float *)this + 9) = 1.0; /*0x7d6272*/
  *((float *)this + 4) = 1.0; /*0x7d6275*/
  v11 = flt_A430CC; /*0x7d6278*/
  *((_BYTE *)this + 0xF5) = 0;                  // Constructor final state clears specialCubeDispatch (+0xF5). New native ShadowSceneLight instances return in normal-dispatch state. /*0x7d627e*/
  *((float *)this + 0x49) = v11;                // Initialize ShadowSceneLight projector FOV +0x124 to the retail default 90.0 degrees. /*0x7d6284*/
  *((_BYTE *)this + 0x120) = 0;                 // Clear +0x120 render-gate override. Attached-reference light registration also clears it at 0x004D8129; no retail true producer is proved. /*0x7d628a*/
  *((_BYTE *)this + 0x12C) = 0;                 // Clear +0x12C. Its sole decoded ShadowSceneLight consumer binds the generated map's inner texture to shader definition 9; no direct native shadow-range setter was found. /*0x7d6290*/
  *((float *)this + 0x4A) = 1.0;                // Initialize ShadowSceneLight falloffExponent_128 to 1.0. Attached-reference registration later copies TESObjectLIGH DATA falloff exponent +0x80; no ShadowSceneLight renderer-side consumer is proved. /*0x7d6296*/
  v12 = *((_DWORD *)this + 0x4C); /*0x7d629c*/
  if ( v12 ) /*0x7d62a4*/
  {
    if ( !v5((volatile LONG *)(v12 + 4)) ) /*0x7d62ae*/
      (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7d62c0*/
    v4 = 0.0; /*0x7d62c2*/
    *((_DWORD *)this + 0x4C) = 0; /*0x7d62c4*/
    v10 = 1.0; /*0x7d62ca*/
  }
  *((_DWORD *)this + 0x51) = 0; /*0x7d62cc*/
  v13 = *((_DWORD *)this + 0x52); /*0x7d62d2*/
  if ( v13 ) /*0x7d62da*/
  {
    if ( !v5((volatile LONG *)(v13 + 4)) ) /*0x7d62e4*/
      (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x7d62f6*/
    v4 = 0.0; /*0x7d62f8*/
    *((_DWORD *)this + 0x52) = 0; /*0x7d62fa*/
    v10 = 1.0; /*0x7d6300*/
  }
  v14 = *((_DWORD *)this + 0x53); /*0x7d6302*/
  if ( v14 ) /*0x7d630a*/
  {
    if ( !v5((volatile LONG *)(v14 + 4)) ) /*0x7d6314*/
      (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x7d6326*/
    v4 = 0.0; /*0x7d6328*/
    *((_DWORD *)this + 0x53) = 0; /*0x7d632a*/
    v10 = 1.0; /*0x7d6330*/
  }
  *((float *)this + 0x38) = v4; /*0x7d6336*/
  *((float *)this + 0x37) = v10; /*0x7d6344*/
  *((_BYTE *)this + 0x214) = 0;                 // Initialize ShadowSceneLight+0x214 to zero; the per-source renderer also clears it after map rendering. /*0x7d634a*/
  _memset((int)this + 0x1B4, 0, 0x60u);         // Zero the 0x60-byte reserved tail block at ShadowSceneLight+0x1B4..+0x213; no direct core shadow consumer was found. /*0x7d6350*/
  return this; /*0x7d635a*/
}
