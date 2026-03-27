int __userpurge sub_549240@<eax>(_DWORD *a1@<ecx>, float a2, int a3, int a4, int a5, int a6, char a7, char a8)
{
  int result; // eax
  int v10; // edx
  int (__thiscall *v11)(_DWORD *, float *); // edx
  int v12; // [esp+44h] [ebp-50h]
  float v13[16]; // [esp+54h] [ebp-40h] BYREF

  result = (*(int (__thiscall **)(_DWORD *, int, int, int, int))(*a1 + 0xB0))(a1, a3, a4, a5, a6);
  if ( (_BYTE)a3 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(a1[4] + 0x10))(a1 + 4, 0.0);
    if ( a2 <= 0.0 )
      result = (*(int (__thiscall **)(_DWORD *, int))(a1[4] + 0x20))(a1 + 4, 1);
    else
      result = (*(int (__thiscall **)(_DWORD *, unsigned int, _DWORD))(*a1 + 0xC8))(a1, 0xFFFFFFFF, 1.0);
  }
  if ( (_BYTE)a5 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(a1[0x1B] + 0x10))(a1 + 0x1B, 0.0);
    v12 = 1;
    if ( *(float *)&a3 <= 0.0 )
    {
      result = (*(int (__thiscall **)(_DWORD *, int))(a1[0x1B] + 0x20))(a1 + 0x1B, 1);
      if ( a7 )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 0x64))(a1, 0, 1.0, v12);
        *(float *)&v12 = 1.0;
        result = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x64))(a1, 1);
      }
    }
    else if ( a8 )
    {
      sub_54F630(v13, 0x11u, 1);
      v10 = *a1;
      v13[0] = 1.0;
      v11 = *(int (__thiscall **)(_DWORD *, float *))(v10 + 0xA4);
      v13[1] = 1.0;
      v12 = a3;
      result = v11(a1, v13);
    }
    else
    {
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 0xA8))(a1, 2, a3);
    }
  }
  if ( (_BYTE)a4 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(a1[0x32] + 0x10))(a1 + 0x32, 0.0, v12);
    v12 = 1;
    if ( *(float *)&a3 <= 0.0 )
      result = (*(int (__thiscall **)(_DWORD *, int))(a1[0x32] + 0x20))(a1 + 0x32, 1);
    else
      result = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 0xA8))(a1, 0, a3);
  }
  if ( (_BYTE)a6 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(a1[0x49] + 0x10))(a1 + 0x49, 0.0, v12);
    if ( *(float *)&a3 <= 0.0 )
      return (*(int (__thiscall **)(_DWORD *, int))(a1[0x49] + 0x20))(a1 + 0x49, 1);
    else
      return (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 0xA8))(a1, 3, a3);
  }
  return result;
}
