int __thiscall sub_74E8B0(_DWORD *this, float a2, char a3)
{
  _DWORD *v3; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  _DWORD *i; // esi
  int v8; // eax
  int result; // eax

  v3 = 0;
  if ( a3 )
  {
    v5 = (_DWORD *)*(this + 0x27);
    while ( v5 )
    {
      v6 = (_DWORD *)v5[2];
      v5 = (_DWORD *)*v5;
      if ( v6 )
      {
        if ( v6[3] )
          (*(void (__stdcall **)(_DWORD))(*v6 + 0x50))(LODWORD(a2));
      }
    }
    for ( i = (_DWORD *)*(this + 3); i; i = (_DWORD *)i[0xD] )
    {
      v8 = (*(int (__thiscall **)(_DWORD *))(*i + 4))(i);
      if ( v8 )
      {
        while ( (char *)v8 != dword_B40DFC )
        {
          v8 = *(_DWORD *)(v8 + 4);
          if ( !v8 )
            goto LABEL_11;
        }
        v3 = i;
      }
      else
      {
LABEL_11:
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*i + 0x54))(i, LODWORD(a2));
      }
    }
    (*(void (__thiscall **)(_DWORD *))(*this + 0x74))(this);
    if ( v3 )
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v3 + 0x54))(v3, LODWORD(a2));
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 0x74))(this);
  }
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x78))(this);
  *((_BYTE *)this + 0xF4) = a3;
  *((float *)this + 0x3C) = a2;
  return result;
}
