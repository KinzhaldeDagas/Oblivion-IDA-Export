bhkRefObject *__thiscall sub_8B96D0(bhkRefObject *this, _DWORD *a2)
{
  int (__stdcall ***v3)(signed int); // ebp
  int v4; // ebx
  int v5; // eax
  int *v6; // eax
  int v7; // eax

  sub_8A4150(this);
  this->__vftable = (NiObjectVtbl *)&bhkRigidBodyT::`vftable';
  ++dword_BA8014;
  v3 = (int (__stdcall ***)(signed int))a2[2];
  v4 = 0;
  sub_8BC720(v3);
  v5 = a2[2];
  if ( v5 )
  {
    v6 = (int *)(v5 + 0x14);
    if ( v6 )
    {
      v7 = *v6;
      if ( v7 )
        v4 = *(_DWORD *)(v7 + 8);
    }
  }
  if ( v4 )
    InterlockedIncrement((volatile LONG *)(v4 + 4));
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x4C))(a2, 0);
  sub_89D730(this, (int)v3);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  sub_8BC730(v3);
  return this;
}
