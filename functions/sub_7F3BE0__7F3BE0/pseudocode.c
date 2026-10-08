NiD3DPass *__thiscall sub_7F3BE0(BoltShader *this)
{
  if ( this->super.member.super.ShaderDeclaration ) /*0x7f3be3*/
  {
    (*(void (__thiscall **)(NiD3DVertexShader *))(*(_DWORD *)this->Vertex[0] + 0x5C))(this->Vertex[0]); /*0x7f3bf4*/
    (*(void (__thiscall **)(NiD3DPixelShader *))(*(_DWORD *)this->Pixel[0] + 0x44))(this->Pixel[0]); /*0x7f3c01*/
  }
  return sub_77A4A0((NiD3DShader *)this); /*0x7f3c05*/
}
