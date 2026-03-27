double __thiscall sub_8913C0(float *this)
{
  int v2; // esi
  int v3; // eax
  char v4; // al
  int v5; // eax
  int v6; // eax

  v2 = *((_DWORD *)this + 0xDD);
  if ( !v2 )
    return *(this + 0xE8);
  v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 4))(*((_DWORD *)this + 0xDD));
  if ( v3 )
  {
    while ( (char *)v3 != dword_BA7FD8 )
    {
      v3 = *(_DWORD *)(v3 + 4);
      if ( !v3 )
        goto LABEL_5;
    }
    v4 = 1;
  }
  else
  {
LABEL_5:
    v4 = 0;
  }
  v5 = v4 != 0 ? v2 : 0;
  if ( !v5 )
    return *(this + 0xE8);
  v6 = *(_DWORD *)(v5 + 8);
  if ( v6 )
    return *(float *)(v6 + 0xC);
  else
    return flt_B2EFC4;
}
