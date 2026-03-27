int __thiscall sub_5E10A0(_DWORD *this, int a2)
{
  int v2; // eax

  if ( *(this + 0x16)
    && (v2 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 0x16) + 0x3B0))(*(this + 0x16), a2)) != 0 )
  {
    return *(_DWORD *)(v2 + 4);
  }
  else
  {
    return 0;
  }
}
