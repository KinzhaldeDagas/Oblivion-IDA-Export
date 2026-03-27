char __thiscall sub_74D6C0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  unsigned int i; // esi
  int v5; // ecx

  result = sub_6E7270(this, a2);
  if ( result )
  {
    for ( i = 0; i < HIWORD(this->members.RenderData); ++i )
    {
      v5 = *((_DWORD *)&this->members.DepthStencilBuffer->vtlb + i);
      if ( v5 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2);
    }
    return 1;
  }
  return result;
}
