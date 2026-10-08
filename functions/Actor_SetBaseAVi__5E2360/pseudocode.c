int __thiscall Actor_SetBaseAVi(_DWORD *this, int a2, int a3)
{
  int v4; // ebp
  int (*v5)(void); // edx
  int v6; // ebx
  int v7; // edi
  int v8; // edi
  int result; // eax
  int v10; // edi
  int v11; // ebx

  v4 = *(this + 0x16); /*0x5e2365*/
  v5 = *(int (**)(void))(*this + 0x170); /*0x5e236c*/
  if ( v4 ) /*0x5e2373*/
  {
    v6 = 0; /*0x5e2375*/
    v7 = v5(); /*0x5e2379*/
    if ( v7 ) /*0x5e237d*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) ) /*0x5e2389*/
        v6 = v7; /*0x5e238f*/
    }
    v8 = a2; /*0x5e2395*/
    result = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v4 + 0x274))(v4, v6, a2, a3); /*0x5e23a7*/
  }
  else
  {
    v10 = 0; /*0x5e23ab*/
    v11 = v5(); /*0x5e23af*/
    if ( v11 ) /*0x5e23b3*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) ) /*0x5e23bf*/
        v10 = v11; /*0x5e23c5*/
    }
    result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 0x134))(v10, a2, a3); /*0x5e23db*/
    v8 = a2; /*0x5e23dd*/
  }
  switch ( v8 ) /*0x5e23ed*/
  {
    case 0: /*0x5e23ed*/
    case 7: /*0x5e23ed*/
    case 0x12: /*0x5e23ed*/
    case 0x1B: /*0x5e23ed*/
      result = (*(int (__thiscall **)(_DWORD *))(*this + 0x2C0))(this); /*0x5e23fe*/
      break; /*0x5e23fe*/
    default:
      return result;
  }
  return result; /*0x5e2400*/
}
