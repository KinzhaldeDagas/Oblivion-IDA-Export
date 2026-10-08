bool __userpurge sub_54E5B0@<al>(int *a1@<ecx>, double a2@<st0>, int a3)
{
  bool v4; // bl
  int v5; // edi
  int v6; // edi
  int v7; // eax

  (*(void (__thiscall **)(int *))(*a1 + 0xC))(a1); /*0x54e5bc*/
  v4 = 0.0 != a2; /*0x54e5cb*/
  (*(void (__thiscall **)(int *, _DWORD))(*a1 + 0x10))(a1, 0.0); /*0x54e5d8*/
  v5 = 0; /*0x54e5e1*/
  if ( (*(int (__thiscall **)(int *))(*a1 + 0x50))(a1) ) /*0x54e5e3*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*a1 + 0x54))(a1, v5) ) /*0x54e5fc*/
    {
      if ( ++v5 >= (unsigned int)(*(int (__thiscall **)(int *))(*a1 + 0x50))(a1) ) /*0x54e60c*/
        goto LABEL_6; /*0x54e60c*/
    }
    v4 = 1; /*0x54e610*/
  }
LABEL_6:
  v6 = *a1; /*0x54e612*/
  v7 = (*(int (__thiscall **)(int *, int))(*a1 + 0x50))(a1, a3); /*0x54e61e*/
  (*(void (__thiscall **)(int *, int))(v6 + 0x58))(a1, v7); /*0x54e626*/
  return v4; /*0x54e628*/
}
