// MoonSugarEffect decode: NightEye constant setup maps pixel constant spellinput to flt_B46914.
char __thiscall sub_7F4FA0(int *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // edi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  int *v6; // edi
  NiD3DShaderConstantMap *v7; // eax
  NiD3DShaderConstantMap *v8; // eax

  v3 = (Ni2DBuffer **)(this + 0xB); /*0x7f4fc9*/
  if ( !*(this + 0xB) ) /*0x7f4fc5*/
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7f4fd4*/
    if ( v4 ) /*0x7f4fea*/
      v5 = NiD3DShaderCostantMapPixel::Construct(v4, *(this + 5)); /*0x7f4ff2*/
    else
      v5 = 0; /*0x7f4ff9*/
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5); /*0x7f5006*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable /*0x7f5034*/
     + 6))(
      *v3,
      "timingdata",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x20,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x7f505d*/
     + 6))(
      *v3,
      "spellinput",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B46914,
      0);
  }
  v6 = this + 0xC; /*0x7f5063*/
  if ( !*(this + 0xC) ) /*0x7f505f*/
  {
    v7 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7f506e*/
    if ( v7 ) /*0x7f5084*/
      v8 = NiD3DShaderCostantMapVertex::Construct(v7, *(this + 5)); /*0x7f508c*/
    else
      v8 = 0; /*0x7f5093*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xC, (Ni2DBuffer *)v8); /*0x7f50a0*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7f50ce*/
      *v6,
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
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7f50f9*/
      *v6,
      "texRatio1",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x2C,
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2); /*0x7f5107*/
}
