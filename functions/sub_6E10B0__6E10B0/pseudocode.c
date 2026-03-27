char *__thiscall sub_6E10B0(_BYTE *this, int a2, char *Src, int a4)
{
  unsigned int v4; // kr00_4
  char *v5; // eax
  int v6; // ebx
  char *result; // eax
  int v8; // esi
  LONG (__stdcall *v9)(volatile LONG *); // ebp

  if ( *(this + 0x10) )
  {
    v4 = strlen(Src);
    v5 = (char *)FormHeapAlloc(v4 + 1);
    v6 = a2;
    *(_DWORD *)(a2 + 4) = v5;
    result = (char *)strcpy_s(v5, v4 + 1, Src);
  }
  else
  {
    v6 = a2;
    result = Src;
    *(_DWORD *)(a2 + 4) = Src;
  }
  v8 = *(_DWORD *)(v6 + 8);
  v9 = InterlockedDecrement;
  if ( v8 != a4 )
  {
    if ( v8 )
    {
      result = (char *)v9((volatile LONG *)(v8 + 4));
      if ( !result )
        result = (char *)(**(int (__thiscall ***)(int, int))v8)(v8, 1);
    }
    *(_DWORD *)(v6 + 8) = a4;
    if ( a4 )
      result = (char *)InterlockedIncrement((volatile LONG *)(a4 + 4));
  }
  if ( a4 )
  {
    result = (char *)v9((volatile LONG *)(a4 + 4));
    if ( !result )
      return (**(char *(__thiscall ***)(int, int))a4)(a4, 1);
  }
  return result;
}
