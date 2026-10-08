NiD3DPass *__thiscall sub_77A4A0(NiD3DShader *this)
{
  UInt32 i; // edi
  NiD3DPass *result; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // ecx

  if ( this->member.super.D3DRenderer ) /*0x77a4a3*/
  {
    for ( i = 0; i < this->member.PassCount; ++i ) /*0x77a4ac*/
    {
      result = this->member.Passes.data; /*0x77a4b2*/
      v4 = *((_DWORD *)&result->__vftable + i); /*0x77a4b5*/
      if ( v4 ) /*0x77a4ba*/
      {
        v5 = *(_DWORD *)(v4 + 0x44); /*0x77a4bc*/
        if ( v5 ) /*0x77a4c1*/
          result = (NiD3DPass *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x44))(v5); /*0x77a4c8*/
        v6 = *(_DWORD *)(v4 + 0x58); /*0x77a4ca*/
        if ( v6 ) /*0x77a4cf*/
          result = (NiD3DPass *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x5C))(v6); /*0x77a4d6*/
      }
    }
    this->member.super.IsRenderSet = 1; /*0x77a4e1*/
  }
  return result; /*0x77a4e6*/
}
