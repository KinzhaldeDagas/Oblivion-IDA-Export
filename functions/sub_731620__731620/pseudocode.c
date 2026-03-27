int *__thiscall sub_731620(int *this, int a2)
{
  int *v3; // edi
  int v4; // ebp
  int v5; // ebx
  int v6; // eax
  int v8; // [esp+28h] [ebp+4h]

  *this = (int)&NiRefObject::`vftable';
  *(this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  v3 = this + 2;
  *this = (int)&NiPropertyState::`vftable';
  ArrayConstructor(
    this + 2,
    4u,
    0xA,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  v4 = a2 - (_DWORD)this;
  v8 = 0xA;
  do
  {
    v5 = *v3;
    if ( *v3 != *(int *)((char *)v3 + v4) )
    {
      if ( v5 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      v6 = *(int *)((char *)v3 + v4);
      *v3 = v6;
      if ( v6 )
        InterlockedIncrement((volatile LONG *)(v6 + 4));
    }
    ++v3;
    --v8;
  }
  while ( v8 );
  return this;
}
