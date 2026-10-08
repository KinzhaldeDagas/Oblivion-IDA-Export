char *__thiscall sub_77CD10(_BYTE *this, int a2, char *Src, int a4)
{
  unsigned int v4; // kr00_4
  char *v5; // eax
  int v6; // ebx
  char *result; // eax
  int v8; // esi
  LONG (__stdcall *v9)(volatile LONG *); // ebp

  if ( *(this + 0x10) ) /*0x77cd10*/
  {
    v4 = strlen(Src); /*0x77cd20*/
    v5 = (char *)FormHeapAlloc(v4 + 1); /*0x77cd32*/
    v6 = a2; /*0x77cd37*/
    *(_DWORD *)(a2 + 4) = v5; /*0x77cd3e*/
    result = (char *)strcpy_s(v5, v4 + 1, Src); /*0x77cd41*/
  }
  else
  {
    v6 = a2; /*0x77cd4b*/
    result = Src; /*0x77cd4f*/
    *(_DWORD *)(a2 + 4) = Src; /*0x77cd53*/
  }
  v8 = *(_DWORD *)(v6 + 8); /*0x77cd56*/
  v9 = InterlockedDecrement; /*0x77cd5f*/
  if ( v8 == a4 ) /*0x77cd65*/
    goto LABEL_10; /*0x77cd65*/
  if ( v8 ) /*0x77cd69*/
  {
    result = (char *)v9((volatile LONG *)(v8 + 4)); /*0x77cd6f*/
    if ( !result ) /*0x77cd73*/
      result = (char *)(**(int (__thiscall ***)(int, int))v8)(v8, 1); /*0x77cd81*/
  }
  *(_DWORD *)(v6 + 8) = a4; /*0x77cd85*/
  if ( a4 ) /*0x77cd88*/
  {
    result = (char *)InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x77cd8e*/
LABEL_10:
    if ( a4 ) /*0x77cd96*/
    {
      result = (char *)v9((volatile LONG *)(a4 + 4)); /*0x77cd9c*/
      if ( !result ) /*0x77cda0*/
        return (**(char *(__thiscall ***)(int, int))a4)(a4, 1); /*0x77cdaa*/
    }
  }
  return result; /*0x77cdac*/
}
