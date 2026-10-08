void __thiscall sub_44FFF0(_DWORD *this, _DWORD *a2)
{
  int v2; // eax

  *(this + 4) = a2; /*0x44fff9*/
  if ( a2 ) /*0x44fffc*/
  {
    v2 = a2[0xC]; /*0x44fffe*/
    if ( v2 == 0xFFFFFFFF ) /*0x450004*/
      v2 = a2[0x52]; /*0x450006*/
    *(this + 0x97) = v2; /*0x45000c*/
    *(this + 0x96) = (*(int (__thiscall **)(_DWORD *))(*a2 + 0x1C))(a2); /*0x450019*/
  }
}
