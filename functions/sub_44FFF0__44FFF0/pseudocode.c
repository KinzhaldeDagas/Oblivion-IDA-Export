void __thiscall sub_44FFF0(_DWORD *this, _DWORD *a2)
{
  int v2; // eax

  *(this + 4) = a2;
  if ( a2 )
  {
    v2 = a2[0xC];
    if ( v2 == 0xFFFFFFFF )
      v2 = a2[0x52];
    *(this + 0x97) = v2;
    *(this + 0x96) = (*(int (__thiscall **)(_DWORD *))(*a2 + 0x1C))(a2);
  }
}
