NiD3DPass *__thiscall sub_77A4A0(NiD3DShader *this)
{
  UInt32 i; // edi
  NiD3DPass *result; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // ecx

  if ( this->member.super.D3DRenderer )
  {
    for ( i = 0; i < this->member.PassCount; ++i )
    {
      result = this->member.Passes.data;
      v4 = *((_DWORD *)&result->__vftable + i);
      if ( v4 )
      {
        v5 = *(_DWORD *)(v4 + 0x44);
        if ( v5 )
          result = (NiD3DPass *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x44))(v5);
        v6 = *(_DWORD *)(v4 + 0x58);
        if ( v6 )
          result = (NiD3DPass *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x5C))(v6);
      }
    }
    this->member.super.IsRenderSet = 1;
  }
  return result;
}
