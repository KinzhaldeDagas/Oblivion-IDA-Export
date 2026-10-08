// MoonSugarEffect decode: Refraction constant maps expose texRatio0/texRatio1 and Ambient Color; two-input pass uses source plus dword_B474AC texture.
char __thiscall sub_8002F0(int *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  v3 = (Ni2DBuffer **)(this + 0xC); /*0x800319*/
  if ( !*(this + 0xC) ) /*0x800315*/
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x800324*/
    if ( v4 ) /*0x80033a*/
      v5 = NiD3DShaderCostantMapVertex::Construct(v4, *(this + 5)); /*0x800342*/
    else
      v5 = 0; /*0x800349*/
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5); /*0x800356*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable /*0x800384*/
     + 6))(
      *v3,
      "texRatio0",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x29,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable /*0x8003af*/
     + 6))(
      *v3,
      "texRatio1",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x2D,
      0);
  }
  if ( !*(this + 0xB) ) /*0x8003b1*/
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x8003bc*/
    if ( v6 ) /*0x8003d2*/
      v7 = NiD3DShaderCostantMapPixel::Construct(v6, *(this + 5)); /*0x8003da*/
    else
      v7 = 0; /*0x8003e1*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v7); /*0x8003ee*/
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*(this + 0xB) + 0x18))( /*0x80041a*/
      *(this + 0xB),
      "Ambient Color",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x1A1],
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2); /*0x800428*/
}
