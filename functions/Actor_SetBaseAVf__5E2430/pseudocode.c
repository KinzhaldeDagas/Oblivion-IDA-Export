int __thiscall Actor_SetBaseAVf(_DWORD *this, int a2, float a3)
{
  int v4; // ebp
  int (*v5)(void); // edx
  int v6; // ebx
  int v7; // edi
  int v8; // edi
  int result; // eax
  int v10; // edi
  int v11; // ebx

  v4 = *(this + 0x16);
  v5 = *(int (**)(void))(*this + 0x170);
  if ( v4 )
  {
    v6 = 0;
    v7 = v5();
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) )
        v6 = v7;
    }
    v8 = a2;
    result = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v4 + 0x270))(v4, v6, a2, LODWORD(a3));
  }
  else
  {
    v10 = 0;
    v11 = v5();
    if ( v11 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) )
        v10 = v11;
    }
    result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 0x130))(v10, a2, LODWORD(a3));
    v8 = a2;
  }
  switch ( v8 )
  {
    case 0:
    case 7:
    case 0x12:
    case 0x1B:
      result = (*(int (__thiscall **)(_DWORD *))(*this + 0x2C0))(this);
      break;
    default:
      return result;
  }
  return result;
}
