char __thiscall sub_7000F0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  unsigned __int16 i; // bx
  Ni2DBuffer *v5; // ecx
  int v6; // esi
  Ni2DBuffer *v7; // ecx

  result = sub_700650(this, a2);
  if ( result )
  {
    for ( i = 0; i < LOWORD(this->members.RenderTargets[3]); ++i )
    {
      v5 = this->members.RenderTargets[2];
      v6 = *((_DWORD *)&v5->__vftable + i);
      if ( v6 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 0x4C))(*((_DWORD *)&v5->__vftable + i)) )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x24))(v6, a2);
      }
    }
    v7 = this->members.RenderTargets[1];
    if ( v7 )
      (*((void (__thiscall **)(Ni2DBuffer *, int))v7->__vftable + 9))(v7, a2);
    return 1;
  }
  return result;
}
