_DWORD *__thiscall sub_6C6870(_DWORD *this, int *a2)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  int v7; // esi
  int v8; // eax

  v2 = InterlockedDecrement;
  v4 = *this;
  if ( *this != *a2 )
  {
    if ( v4 )
    {
      if ( !v2((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    v5 = *a2;
    v6 = *a2 == 0;
    *this = *a2;
    if ( !v6 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  v7 = *(this + 1);
  if ( v7 != a2[1] )
  {
    if ( v7 )
    {
      if ( !v2((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    v8 = a2[1];
    *(this + 1) = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  *(this + 2) = a2[2];
  *((_BYTE *)this + 0xC) = *((_BYTE *)a2 + 0xC);
  *((_BYTE *)this + 0xD) = *((_BYTE *)a2 + 0xD);
  return this;
}
