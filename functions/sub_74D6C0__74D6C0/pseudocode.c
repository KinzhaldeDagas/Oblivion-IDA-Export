char __thiscall sub_74D6C0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  unsigned int i; // esi
  int v5; // ecx

  result = sub_6E7270(this, a2); /*0x74d6c9*/
  if ( result ) /*0x74d6d0*/
  {
    for ( i = 0; i < HIWORD(this->members.RenderData); ++i ) /*0x74d6da*/
    {
      v5 = *((_DWORD *)&this->members.DepthStencilBuffer->vtlb + i); /*0x74d6e3*/
      if ( v5 ) /*0x74d6e8*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2); /*0x74d6f0*/
    }
    return 1; /*0x74d6ff*/
  }
  return result; /*0x74d6d2*/
}
