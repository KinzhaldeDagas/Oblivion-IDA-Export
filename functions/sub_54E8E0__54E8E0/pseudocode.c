_DWORD *__userpurge sub_54E8E0@<eax>(_DWORD *a1@<ecx>, double a2@<st0>, int a3)
{
  int v4; // ebx
  void (__thiscall **v5)(_DWORD *, _DWORD); // ebx
  void (__thiscall **v6)(_DWORD *, int); // ebx
  int v7; // eax
  unsigned int i; // ebx
  void (__thiscall **v9)(_DWORD *, unsigned int, _DWORD); // ebp
  float v11; // [esp+10h] [ebp-14h]
  float v12; // [esp+14h] [ebp-10h]

  v4 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a3 + 4))(a3, a2);
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 4))(a1) == v4 )
  {
    v5 = (void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x10);
    v12 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 0xC))(a3);
    (*v5)(a1, LODWORD(v12));
    v6 = (void (__thiscall **)(_DWORD *, int))(*a1 + 0x58);
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x50))(a3, 1);
    (*v6)(a1, v7);
    for ( i = 0; i < a1[4]; ++i )
    {
      v9 = (void (__thiscall **)(_DWORD *, unsigned int, _DWORD))(*a1 + 0x4C);
      v11 = ((double (__thiscall *)(int, unsigned int))*(_DWORD *)(*(_DWORD *)a3 + 0x48))(a3, i);
      (*v9)(a1, i, LODWORD(v11));
    }
  }
  return a1;
}
