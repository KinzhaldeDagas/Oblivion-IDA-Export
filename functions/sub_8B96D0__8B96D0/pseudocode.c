bhkRefObject *__thiscall sub_8B96D0(bhkRefObject *this, _DWORD *a2)
{
  int (__thiscall ***v3)(int (__stdcall ***)(signed int), int); // ebp
  int v4; // ebx
  int v5; // eax
  int *v6; // eax
  int v7; // eax

  sub_8A4150(this); /*0x8b96fb*/
  this->__vftable = (NiObjectVtbl *)&bhkRigidBodyT::`vftable'; /*0x8b9704*/
  ++unk_BA8014; /*0x8b970a*/
  v3 = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))a2[2]; /*0x8b9711*/
  v4 = 0; /*0x8b9714*/
  sub_8BC720(v3); /*0x8b971c*/
  v5 = a2[2]; /*0x8b9721*/
  if ( v5 ) /*0x8b9726*/
  {
    v6 = (int *)(v5 + 0x14); /*0x8b9728*/
    if ( v6 ) /*0x8b972d*/
    {
      v7 = *v6; /*0x8b972f*/
      if ( v7 ) /*0x8b9733*/
        v4 = *(_DWORD *)(v7 + 8); /*0x8b9735*/
    }
  }
  if ( v4 ) /*0x8b973a*/
    InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x8b9740*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x4C))(a2, 0); /*0x8b974f*/
  sub_89D730(this, (int)v3); /*0x8b9754*/
  if ( v4 ) /*0x8b975b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x8b9761*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x8b9773*/
  }
  sub_8BC730(v3); /*0x8b9777*/
  return this; /*0x8b977e*/
}
