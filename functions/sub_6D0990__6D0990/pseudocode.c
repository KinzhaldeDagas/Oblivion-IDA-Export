char __thiscall sub_6D0990(float *this, int a2)
{
  int v2; // edi
  int v5; // ebx
  _DWORD *v6; // ebp
  unsigned __int8 (__thiscall **v7)(_DWORD *, int); // edi
  int v8; // eax

  v2 = a2;
  if ( !sub_6D0540(this, a2)
    || !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x14) + 0x2C))(
          *((_DWORD *)this + 0x14),
          *(_DWORD *)(a2 + 0x50)) )
  {
    return 0;
  }
  v5 = 0;
  if ( !(*(unsigned __int16 (__thiscall **)(float *))(*(_DWORD *)this + 0x74))(this) )
    return 1;
  while ( 1 )
  {
    v6 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x80))(v2, v5);
    v7 = (unsigned __int8 (__thiscall **)(_DWORD *, int))(*v6 + 0x2C);
    v8 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x80))(this, v5);
    if ( !(*v7)(v6, v8) )
      break;
    if ( (unsigned __int16)++v5 >= (*(unsigned __int16 (__thiscall **)(float *))(*(_DWORD *)this + 0x74))(this) )
      return 1;
    v2 = a2;
  }
  return 0;
}
