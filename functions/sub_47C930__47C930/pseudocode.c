_DWORD *__thiscall sub_47C930(_DWORD *this, float a2, char a3)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *result; // eax
  _DWORD *i; // esi

  if ( a3 )
  {
    v4 = (_DWORD *)*(this + 0x27);
    while ( v4 )
    {
      v5 = (_DWORD *)v4[2];
      result = v4 + 2;
      v4 = (_DWORD *)*v4;
      if ( v5 )
      {
        if ( v5[3] )
          result = (_DWORD *)(*(int (__stdcall **)(_DWORD))(*v5 + 0x50))(LODWORD(a2));
      }
    }
  }
  for ( i = (_DWORD *)*(this + 3); i; i = (_DWORD *)i[0xD] )
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*i + 0x54))(i, LODWORD(a2));
  return result;
}
