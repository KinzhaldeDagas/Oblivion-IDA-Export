_DWORD *__thiscall sub_74BAD0(_DWORD *this, char a2)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebx
  int v4; // esi

  v2 = InterlockedDecrement;
  v4 = *(this + 2);
  if ( v4 )
  {
    if ( !v2((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  *this = &NiRefObject::`vftable';
  v2(&NiRefObject_objcount);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
