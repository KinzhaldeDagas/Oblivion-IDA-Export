int __thiscall sub_7EFBF0(char **this, _DWORD *a2, int a3)
{
  int result; // eax
  int v5; // ebx

  sub_7E2490(this, (int)a2, a3);
  a2[0x1B] = *(this + 0x1B);
  a2[0x1E] = *(this + 0x1E);
  a2[0x1F] = *(this + 0x1F);
  a2[0x20] = *(this + 0x20);
  a2[0x21] = *(this + 0x21);
  a2[0x22] = *(this + 0x22);
  a2[0x23] = *(this + 0x23);
  a2[0x24] = *(this + 0x24);
  result = (int)*(this + 0x25);
  a2[0x25] = result;
  a2[0x26] = *(this + 0x26);
  v5 = a2[0x27];
  if ( (char *)v5 == *(this + 0x27) )
  {
    a2[0x28] = *(this + 0x28);
  }
  else
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    result = (int)*(this + 0x27);
    a2[0x27] = result;
    if ( result )
    {
      InterlockedIncrement((volatile LONG *)(result + 4));
      result = (int)*(this + 0x28);
      a2[0x28] = result;
    }
    else
    {
      a2[0x28] = *(this + 0x28);
    }
  }
  return result;
}
