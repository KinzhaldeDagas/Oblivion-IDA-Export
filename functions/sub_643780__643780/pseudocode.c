int __thiscall sub_643780(_DWORD *this)
{
  if ( *(this + 0xD) && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xD) + 4))(*(this + 0xD)) == 2 )
    return *(this + 0xD);
  else
    return 0;
}
