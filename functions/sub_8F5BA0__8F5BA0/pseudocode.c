int __thiscall sub_8F5BA0(_DWORD **this)
{
  int v2; // ecx

  v2 = (*(int (__thiscall **)(_DWORD))(**(this + 2) + 0x28))(*(this + 2));
  if ( v2 < 0 )
    return 0xFFFFFFFF;
  else
    return v2 + (char *)*(this + 4) - (char *)*(this + 5);
}
