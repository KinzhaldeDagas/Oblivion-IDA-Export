char *__thiscall sub_4A2210(_BYTE *this, int a2, char *Src, int a4)
{
  unsigned int v4; // kr00_4
  char *v5; // eax
  int v6; // ebx
  char *result; // eax
  int v8; // esi
  LONG (__stdcall *v9)(volatile LONG *); // ebp

  if ( *(this + 0x10) ) /*0x4a2234*/
  {
    v4 = strlen(Src); /*0x4a2248*/
    v5 = (char *)FormHeapAlloc(v4 + 1); /*0x4a225f*/
    v6 = a2; /*0x4a2264*/
    *(_DWORD *)(a2 + 4) = v5; /*0x4a226b*/
    result = (char *)strcpy_s(v5, v4 + 1, Src); /*0x4a226e*/
  }
  else
  {
    v6 = a2; /*0x4a2278*/
    result = Src; /*0x4a227c*/
    *(_DWORD *)(a2 + 4) = Src; /*0x4a2280*/
  }
  v8 = *(_DWORD *)(v6 + 8); /*0x4a2283*/
  v9 = InterlockedDecrement; /*0x4a228c*/
  if ( v8 != a4 ) /*0x4a2292*/
  {
    if ( v8 ) /*0x4a2296*/
    {
      result = (char *)v9((volatile LONG *)(v8 + 4)); /*0x4a229c*/
      if ( !result ) /*0x4a22a0*/
        result = (char *)(**(int (__thiscall ***)(int, int))v8)(v8, 1); /*0x4a22ae*/
    }
    *(_DWORD *)(v6 + 8) = a4; /*0x4a22b2*/
    if ( a4 ) /*0x4a22b5*/
      result = (char *)InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x4a22bb*/
  }
  if ( a4 ) /*0x4a22cb*/
  {
    result = (char *)v9((volatile LONG *)(a4 + 4)); /*0x4a22d1*/
    if ( !result ) /*0x4a22d5*/
      return (**(char *(__thiscall ***)(int, int))a4)(a4, 1); /*0x4a22df*/
  }
  return result; /*0x4a22e1*/
}
