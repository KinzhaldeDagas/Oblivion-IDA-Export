void __thiscall sub_8BD090(_DWORD *this, int a2)
{
  int v3; // ebx
  unsigned int v4; // edi
  int **v5; // esi

  v3 = a2;
  if ( a2 )
  {
    InterlockedIncrement((volatile LONG *)(a2 + 4));
    v4 = *(this + 6);
    v5 = (int **)(this + 3);
    if ( v4 >= (unsigned int)v5[2] )
      sub_8BCA30(v5, (int *)((char *)v5[5] + v4));
    sub_8BCD40(v5, v4, &a2);
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
}
