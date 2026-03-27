double __userpurge sub_54E630@<st0>(_DWORD *a1@<ecx>, double result@<st0>, int a3)
{
  void (__thiscall **v4)(_DWORD *, int); // ebx
  int v5; // eax
  void (__thiscall **v6)(_DWORD *, _DWORD); // ebx
  void (__thiscall **v7)(_DWORD *, int); // ebx
  int v8; // eax
  unsigned int i; // ebx
  void (__thiscall **v10)(_DWORD *, unsigned int, _DWORD); // ebp
  float v11; // [esp+14h] [ebp-14h]
  float v12; // [esp+18h] [ebp-10h]

  if ( a3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x40))(a3) )
    {
      v4 = (void (__thiscall **)(_DWORD *, int))(*a1 + 8);
      v5 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a3 + 4))(a3, result);
      (*v4)(a1, v5);
      v6 = (void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x10);
      result = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 0xC))(a3);
      v12 = result;
      (*v6)(a1, LODWORD(v12));
      v7 = (void (__thiscall **)(_DWORD *, int))(*a1 + 0x58);
      v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x50))(a3, 1);
      (*v7)(a1, v8);
      for ( i = 0; i < a1[4]; ++i )
      {
        v10 = (void (__thiscall **)(_DWORD *, unsigned int, _DWORD))(*a1 + 0x4C);
        (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)a3 + 0x48))(a3, i);
        v11 = result;
        (*v10)(a1, i, LODWORD(v11));
      }
    }
  }
  return result;
}
