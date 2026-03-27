float *__thiscall sub_6CC890(float *this, float *a2)
{
  int v3; // ebx
  int v4; // eax
  bool v5; // zf

  v3 = *(_DWORD *)this;
  if ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    v4 = *(_DWORD *)a2;
    v5 = *(_DWORD *)a2 == 0;
    *this = *a2;
    if ( !v5 )
      InterlockedIncrement((volatile LONG *)(v4 + 4));
  }
  *(this + 1) = a2[1];
  *(this + 2) = a2[2];
  *((_BYTE *)this + 0xC) = *((_BYTE *)a2 + 0xC);
  *(this + 4) = a2[4];
  *(this + 5) = a2[5];
  return this;
}
