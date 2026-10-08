char __usercall sub_67B5F0@<al>(int *a1@<ecx>, int a2@<edi>)
{
  unsigned int *i; // eax
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  char result; // al
  int v8; // ecx

  sub_674FD0(a2, (ActorProcessManager *)&qword_B3BB2C[0x75], a1); /*0x67b5f9*/
  for ( i = (unsigned int *)*a1; *a1; i = (unsigned int *)*a1 ) /*0x67b5fe*/
  {
    v4 = *i; /*0x67b604*/
    if ( !v4 ) /*0x67b608*/
      break; /*0x67b608*/
    FormHeapFree(v4); /*0x67b60b*/
    v5 = (_DWORD *)*a1; /*0x67b610*/
    v6 = *(_DWORD **)(*a1 + 4); /*0x67b612*/
    if ( v6 ) /*0x67b61a*/
    {
      v5[1] = v6[1]; /*0x67b61f*/
      *v5 = *v6; /*0x67b625*/
      FormHeapFree((unsigned int)v6); /*0x67b627*/
    }
    else
    {
      *v5 = 0; /*0x67b631*/
    }
  }
  FormHeapFree(*a1); /*0x67b640*/
  result = sub_566830((unsigned int *)a1[2], 1); /*0x67b64d*/
  v8 = a1[2]; /*0x67b652*/
  if ( v8 ) /*0x67b658*/
    return (*(char (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x10))(v8, 1); /*0x67b661*/
  return result; /*0x67b657*/
}
