int __thiscall sub_6FFE10(NiRenderTargetGroup *this, int arg0)
{
  int result; // eax
  unsigned __int16 i; // di
  int v5; // ecx
  Ni2DBuffer *v6; // ecx

  result = sub_700750((NiTriBasedGeomData *)this, arg0);
  for ( i = 0; i < LOWORD(this->members.RenderTargets[3]); ++i )
  {
    result = i;
    v5 = *((_DWORD *)&this->members.RenderTargets[2]->__vftable + i);
    if ( v5 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x38))(v5, arg0);
  }
  v6 = this->members.RenderTargets[1];
  if ( v6 )
    return (*((int (__thiscall **)(Ni2DBuffer *, int))v6->__vftable + 0xE))(v6, arg0);
  return result;
}
