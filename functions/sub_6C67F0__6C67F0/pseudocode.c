_DWORD *__thiscall sub_6C67F0(_DWORD *this, int *a2)
{
  int v3; // ebx
  int v4; // eax
  bool v5; // zf

  v3 = *this;
  if ( *this != *a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    v4 = *a2;
    v5 = *a2 == 0;
    *this = *a2;
    if ( !v5 )
      InterlockedIncrement((volatile LONG *)(v4 + 4));
  }
  *((_WORD *)this + 2) = *((_WORD *)a2 + 2);
  *((_WORD *)this + 3) = *((_WORD *)a2 + 3);
  *((_WORD *)this + 4) = *((_WORD *)a2 + 4);
  *((_WORD *)this + 5) = *((_WORD *)a2 + 5);
  *((_WORD *)this + 6) = *((_WORD *)a2 + 6);
  return this;
}
