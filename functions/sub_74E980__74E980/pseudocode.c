int __thiscall sub_74E980(_DWORD *this, Ni2DBuffer *a2)
{
  NiGeometry_UpdatePropertiesDownward(this, a2); /*0x74e988*/
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(this + 0x2D) + 0x68) + 0x6C))(
           *(_DWORD *)(*(this + 0x2D) + 0x68),
           *(this + 0x2B));
}
