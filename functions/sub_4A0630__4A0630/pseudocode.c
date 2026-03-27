int *__thiscall sub_4A0630(int **this, int *a2, int **a3)
{
  int *v4; // ebp
  _DWORD *v6; // edx
  _DWORD *v7; // eax
  int v8; // edi

  v4 = *a3;
  if ( *a3 == *(this + 1) )
  {
    *a3 = (int *)*v4;
    sub_4A0480(this, a2);
    return a2;
  }
  else if ( v4 == *(this + 2) )
  {
    *a3 = 0;
    sub_4A0510(this, a2);
    return a2;
  }
  else
  {
    v6 = (_DWORD *)v4[1];
    v7 = (_DWORD *)*v4;
    *a3 = (int *)*v4;
    if ( v6 )
      *v6 = v7;
    if ( v7 )
      v7[1] = v6;
    v8 = v4[2];
    if ( v8 )
      InterlockedIncrement((volatile LONG *)(v8 + 4));
    ((void (__thiscall *)(int **, int *))(*this)[2])(this, v4);
    *(this + 3) = (int *)((char *)*(this + 3) + 0xFFFFFFFF);
    *a2 = v8;
    if ( v8 )
    {
      InterlockedIncrement((volatile LONG *)(v8 + 4));
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    return a2;
  }
}
