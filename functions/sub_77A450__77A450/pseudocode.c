NiD3DPass *__thiscall sub_77A450(BSShader *this)
{
  UInt32 i; // ebp
  NiD3DPass *result; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // ecx

  for ( i = 0; i < this->member.super.PassCount; ++i )
  {
    result = this->member.super.Passes.data;
    v4 = *((_DWORD *)&result->__vftable + i);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 0x44);
      if ( v5 )
        result = (NiD3DPass *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x40))(v5);
      v6 = *(_DWORD *)(v4 + 0x58);
      if ( v6 )
        result = (NiD3DPass *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x58))(v6);
    }
  }
  this->member.super.super.IsRenderSet = 0;
  return result;
}
