int *__thiscall sub_959C40(int *this, char a2)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebx
  int v4; // esi
  int v5; // esi

  v2 = InterlockedDecrement;
  v4 = *(this + 1);
  if ( v4 )
  {
    if ( !v2((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  v5 = *this;
  if ( *this )
  {
    if ( !v2((volatile LONG *)(v5 + 4)) )
    {
      if ( v5 )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
  }
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
