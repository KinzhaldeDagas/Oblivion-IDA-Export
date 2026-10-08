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

  v4 = *(this + 0x16); /*0x5e2435*/
  v5 = *(int (**)(void))(*this + 0x170); /*0x5e243c*/
  if ( v4 ) /*0x5e2443*/
  {
    v6 = 0; /*0x5e2445*/
    v7 = v5(); /*0x5e2449*/
    if ( v7 ) /*0x5e244d*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) ) /*0x5e2459*/
        v6 = v7; /*0x5e245f*/
    }
    v8 = a2; /*0x5e2465*/
    result = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v4 + 0x270))(v4, v6, a2, LODWORD(a3)); /*0x5e247a*/
  }
  else
  {
    v10 = 0; /*0x5e247e*/
    v11 = v5(); /*0x5e2482*/
    if ( v11 ) /*0x5e2486*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) ) /*0x5e2492*/
        v10 = v11; /*0x5e2498*/
    }
    result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 0x130))(v10, a2, LODWORD(a3)); /*0x5e24b1*/
    v8 = a2; /*0x5e24b3*/
  }
  switch ( v8 ) /*0x5e24c3*/
  {
    case 0: /*0x5e24c3*/
    case 7: /*0x5e24c3*/
    case 0x12: /*0x5e24c3*/
    case 0x1B: /*0x5e24c3*/
      result = (*(int (__thiscall **)(_DWORD *))(*this + 0x2C0))(this); /*0x5e24d4*/
      break; /*0x5e24d4*/
    default:
      return result;
  }
  return result; /*0x5e24d6*/
}
