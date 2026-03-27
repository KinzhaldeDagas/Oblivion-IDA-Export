char __usercall sub_67B5F0@<al>(int *a1@<ecx>, int a2@<edi>)
{
  unsigned int *i; // eax
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  char result; // al
  int v8; // ecx

  sub_674FD0(a2, &ActorProcessManager_ptr, a1);
  for ( i = (unsigned int *)*a1; *a1; i = (unsigned int *)*a1 )
  {
    v4 = *i;
    if ( !v4 )
      break;
    FormHeapFree(v4);
    v5 = (_DWORD *)*a1;
    v6 = *(_DWORD **)(*a1 + 4);
    if ( v6 )
    {
      v5[1] = v6[1];
      *v5 = *v6;
      FormHeapFree((unsigned int)v6);
    }
    else
    {
      *v5 = 0;
    }
  }
  FormHeapFree(*a1);
  result = sub_566830((unsigned int *)a1[2], 1);
  v8 = a1[2];
  if ( v8 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x10))(v8, 1);
  return result;
}
