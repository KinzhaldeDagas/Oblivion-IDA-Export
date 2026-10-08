int __thiscall sub_6FFE10(NiRenderTargetGroup *this, int arg0)
{
  int result; // eax
  unsigned __int16 i; // di
  int v5; // ecx
  Ni2DBuffer *v6; // ecx

  result = sub_700750((NiTriBasedGeomData *)this, arg0); /*0x6ffe1a*/
  for ( i = 0; i < LOWORD(this->members.RenderTargets[3]); ++i ) /*0x6ffe21*/
  {
    result = i; /*0x6ffe2a*/
    v5 = *((_DWORD *)&this->members.RenderTargets[2]->__vftable + i); /*0x6ffe2d*/
    if ( v5 ) /*0x6ffe32*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x38))(v5, arg0); /*0x6ffe3a*/
  }
  v6 = this->members.RenderTargets[1]; /*0x6ffe45*/
  if ( v6 ) /*0x6ffe4a*/
    return (*((int (__thiscall **)(Ni2DBuffer *, int))v6->__vftable + 0xE))(v6, arg0); /*0x6ffe52*/
  return result; /*0x6ffe54*/
}
