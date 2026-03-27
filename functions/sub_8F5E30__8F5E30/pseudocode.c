int __thiscall sub_8F5E30(_DWORD **this)
{
  int v2; // ecx

  v2 = (*(int (__thiscall **)(_DWORD))(**(this + 2) + 0x1C))(*(this + 2));
  if ( v2 < 0 )
    return 0xFFFFFFFF;
  else
    return (int)*(this + 4) + v2;
}
