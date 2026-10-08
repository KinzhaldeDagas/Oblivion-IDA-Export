NiD3DPass *__thiscall sub_77A450(BSShader *this)
{
  UInt32 i; // ebp
  NiD3DPass *result; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // ecx

  for ( i = 0; i < this->member.super.PassCount; ++i ) /*0x77a456*/
  {
    result = this->member.super.Passes.data; /*0x77a460*/
    v4 = *((_DWORD *)&result->__vftable + i); /*0x77a463*/
    if ( v4 ) /*0x77a468*/
    {
      v5 = *(_DWORD *)(v4 + 0x44); /*0x77a46a*/
      if ( v5 ) /*0x77a46f*/
        result = (NiD3DPass *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x40))(v5); /*0x77a476*/
      v6 = *(_DWORD *)(v4 + 0x58); /*0x77a478*/
      if ( v6 ) /*0x77a47d*/
        result = (NiD3DPass *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x58))(v6); /*0x77a484*/
    }
  }
  this->member.super.super.IsRenderSet = 0; /*0x77a48f*/
  return result; /*0x77a493*/
}
