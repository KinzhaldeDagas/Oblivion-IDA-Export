// MoonSugarEffect decode: CopyShader program binder. Selects vertex/pixel NiD3DShaderProgram wrappers by mode +0xA4 and writes them into pass through NiD3DPass shader ref setters.
void __thiscall sub_8046C0(int this)
{
  switch ( *(_DWORD *)(this + 0xA4) ) /*0x8046d2*/
  {
    case 0: /*0x8046d2*/
    case 1: /*0x8046d2*/
      NiD3DPass_SetVertexShader(*(NiD3DPass **)(this + 0x70), *(NiD3DVertexShader **)(this + 0x90)); /*0x8046e3*/
      NiD3DPass_SetPixelShader(*(NiD3DPass **)(this + 0x70), *(NiD3DPixelShader **)(this + 0x98)); /*0x8046f2*/
      break; /*0x8046f8*/
    case 2: /*0x8046d2*/
      NiD3DPass_SetVertexShader(*(NiD3DPass **)(this + 0x70), *(NiD3DVertexShader **)(this + 0x94)); /*0x804723*/
      NiD3DPass_SetPixelShader(*(NiD3DPass **)(this + 0x70), *(NiD3DPixelShader **)(this + 0x9C)); /*0x804732*/
      break; /*0x804738*/
    case 3: /*0x8046d2*/
      NiD3DPass_SetVertexShader(*(NiD3DPass **)(this + 0x70), *(NiD3DVertexShader **)(this + 0x90)); /*0x804743*/
      NiD3DPass_SetPixelShader(*(NiD3DPass **)(this + 0x70), *(NiD3DPixelShader **)(this + 0xA0)); /*0x804752*/
      break; /*0x804758*/
    case 4: /*0x8046d2*/
      NiD3DPass_SetVertexShader(*(NiD3DPass **)(this + 0x70), *(NiD3DVertexShader **)(this + 0x90)); /*0x804763*/
      NiD3DPass_SetPixelShader(*(NiD3DPass **)(this + 0x70), *(NiD3DPixelShader **)(this + 0xA0)); /*0x804772*/
      def_8046D2(); /*0x804773*/
      break; /*0x804773*/
    default:
      JUMPOUT(0x804777); /*0x804777*/
  }
}
