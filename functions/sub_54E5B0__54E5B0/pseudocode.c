bool __userpurge sub_54E5B0@<al>(int *a1@<ecx>, double a2@<st0>, int a3)
{
  bool v4; // bl
  int v5; // edi
  int v6; // edi
  int v7; // eax

  (*(void (__thiscall **)(int *))(*a1 + 0xC))(a1);
  v4 = 0.0 != a2;
  (*(void (__thiscall **)(int *, _DWORD))(*a1 + 0x10))(a1, 0.0);
  v5 = 0;
  if ( (*(int (__thiscall **)(int *))(*a1 + 0x50))(a1) )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*a1 + 0x54))(a1, v5) )
    {
      if ( ++v5 >= (unsigned int)(*(int (__thiscall **)(int *))(*a1 + 0x50))(a1) )
        goto LABEL_6;
    }
    v4 = 1;
  }
LABEL_6:
  v6 = *a1;
  v7 = (*(int (__thiscall **)(int *, int))(*a1 + 0x50))(a1, a3);
  (*(void (__thiscall **)(int *, int))(v6 + 0x58))(a1, v7);
  return v4;
}
