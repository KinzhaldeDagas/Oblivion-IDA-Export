void __thiscall sub_8046C0(int this)
{
  switch ( *(_DWORD *)(this + 0xA4) )
  {
    case 0:
    case 1:
      sub_7AECB0(*(NiD3DPass **)(this + 0x70), *(NiD3DVertexShader **)(this + 0x90));
      sub_7AEC60(*(NiD3DPassVtbl ***)(this + 0x70), *(NiD3DPixelShader **)(this + 0x98));
      break;
    case 2:
      sub_7AECB0(*(NiD3DPass **)(this + 0x70), *(NiD3DVertexShader **)(this + 0x94));
      sub_7AEC60(*(NiD3DPassVtbl ***)(this + 0x70), *(NiD3DPixelShader **)(this + 0x9C));
      break;
    case 3:
      sub_7AECB0(*(NiD3DPass **)(this + 0x70), *(NiD3DVertexShader **)(this + 0x90));
      sub_7AEC60(*(NiD3DPassVtbl ***)(this + 0x70), *(NiD3DPixelShader **)(this + 0xA0));
      break;
    case 4:
      sub_7AECB0(*(NiD3DPass **)(this + 0x70), *(NiD3DVertexShader **)(this + 0x90));
      sub_7AEC60(*(NiD3DPassVtbl ***)(this + 0x70), *(NiD3DPixelShader **)(this + 0xA0));
      def_8046D2();
      break;
    default:
      JUMPOUT(0x804777);
  }
}
