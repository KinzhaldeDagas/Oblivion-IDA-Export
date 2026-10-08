char __thiscall sub_7AEF80(int *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // edi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  v3 = (Ni2DBuffer **)(this + 0xC); /*0x7aefa9*/
  if ( !*(this + 0xC) ) /*0x7aefa5*/
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7aefb0*/
    if ( v4 ) /*0x7aefc6*/
      v5 = NiD3DShaderCostantMapVertex::Construct(v4, *(this + 5)); /*0x7aefce*/
    else
      v5 = 0; /*0x7aefd5*/
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5); /*0x7aefe2*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable /*0x7af010*/
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
      this + 0x28,
      0);
  }
  if ( !*(this + 0xB) ) /*0x7af012*/
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7af01d*/
    if ( v6 ) /*0x7af033*/
      v7 = NiD3DShaderCostantMapPixel::Construct(v6, *(this + 5)); /*0x7af03b*/
    else
      v7 = 0; /*0x7af042*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v7); /*0x7af04f*/
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*(this + 0xB) + 0x18))( /*0x7af07d*/
      *(this + 0xB),
      "Camera Pos",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x2C,
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2); /*0x7af08b*/
}
