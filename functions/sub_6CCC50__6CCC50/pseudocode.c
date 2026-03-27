bool __thiscall sub_6CCC50(float *this, float *a2)
{
  int v2; // eax
  int v4; // ecx

  v2 = *(_DWORD *)a2;
  v4 = *(_DWORD *)this;
  if ( v4 )
  {
    if ( !v2 || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)a2) )
      return 0;
  }
  else if ( v2 )
  {
    return 0;
  }
  return a2[1] == *(this + 1)
      && a2[2] == *(this + 2)
      && *((_BYTE *)this + 0xC) == *((_BYTE *)a2 + 0xC)
      && a2[4] == *(this + 4);
}
