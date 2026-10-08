char *__thiscall sub_6E10B0(_BYTE *this, int a2, char *Src, int a4)
{
  unsigned int v4; // kr00_4
  char *v5; // eax
  int v6; // ebx
  char *result; // eax
  int v8; // esi
  LONG (__stdcall *v9)(volatile LONG *); // ebp

  if ( *(this + 0x10) ) /*0x6e10d4*/
  {
    v4 = strlen(Src); /*0x6e10e8*/
    v5 = (char *)FormHeapAlloc(v4 + 1); /*0x6e10ff*/
    v6 = a2; /*0x6e1104*/
    *(_DWORD *)(a2 + 4) = v5; /*0x6e110b*/
    result = (char *)strcpy_s(v5, v4 + 1, Src); /*0x6e110e*/
  }
  else
  {
    v6 = a2; /*0x6e1118*/
    result = Src; /*0x6e111c*/
    *(_DWORD *)(a2 + 4) = Src; /*0x6e1120*/
  }
  v8 = *(_DWORD *)(v6 + 8); /*0x6e1123*/
  v9 = InterlockedDecrement; /*0x6e112c*/
  if ( v8 != a4 ) /*0x6e1132*/
  {
    if ( v8 ) /*0x6e1136*/
    {
      result = (char *)v9((volatile LONG *)(v8 + 4)); /*0x6e113c*/
      if ( !result ) /*0x6e1140*/
        result = (char *)(**(int (__thiscall ***)(int, int))v8)(v8, 1); /*0x6e114e*/
    }
    *(_DWORD *)(v6 + 8) = a4; /*0x6e1152*/
    if ( a4 ) /*0x6e1155*/
      result = (char *)InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x6e115b*/
  }
  if ( a4 ) /*0x6e116b*/
  {
    result = (char *)v9((volatile LONG *)(a4 + 4)); /*0x6e1171*/
    if ( !result ) /*0x6e1175*/
      return (**(char *(__thiscall ***)(int, int))a4)(a4, 1); /*0x6e117f*/
  }
  return result; /*0x6e1181*/
}
