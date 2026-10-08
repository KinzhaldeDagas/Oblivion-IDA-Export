// LockFreeMap remove core: finds key, atomically unlinks node, places node on retired/free list, clears thread-local traversal slots.
int __thiscall sub_55F270(_DWORD *this, LONG a2, LONG Comperand)
{
  LONG (__stdcall *v3)(volatile LONG *, LONG, LONG); // ebx
  int result; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  LONG Comperanda; // [esp+20h] [ebp+8h]

  v3 = InterlockedCompareExchange; /*0x55f274*/
  do /*0x55f2da*/
  {
    if ( !sub_43A260(this, a2, Comperand) ) /*0x55f292*/
    {
      LOBYTE(result) = 0; /*0x55f33f*/
      goto LABEL_10; /*0x55f341*/
    }
    Comperanda = *(this + 6) & 0xFFFFFFFE; /*0x55f2af*/
  }
  while ( v3((volatile LONG *)((*(this + 5) & 0xFFFFFFFE) + 8), Comperanda | 1, Comperanda) != Comperanda ); /*0x55f2da*/
  *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 4) = 0; /*0x55f2e2*/
  v7 = *(this + 5) & 0xFFFFFFFE; /*0x55f2fe*/
  if ( v3((volatile LONG *)*(this + 4), Comperanda, v7) == v7 ) /*0x55f310*/
  {
    v8 = *(this + 5) & 0xFFFFFFFE; /*0x55f315*/
    *(_DWORD *)(v8 + 4) = 0; /*0x55f318*/
    *(_DWORD *)(v8 + 4) = *(this + 7); /*0x55f322*/
    ++*(this + 8); /*0x55f325*/
    v9 = *this; /*0x55f329*/
    *(this + 7) = v8; /*0x55f32b*/
    if ( *(this + 8) == *(_DWORD *)(v9 + 0x10) ) /*0x55f334*/
      sub_435FE0(this); /*0x55f338*/
  }
  else
  {
    sub_43A260(this, a2, Comperand); /*0x55f34b*/
  }
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x34))(*this); /*0x55f357*/
  LOBYTE(result) = 1; /*0x55f359*/
LABEL_10:
  *(_DWORD *)*(this + 1) = 0; /*0x55f35b*/
  *(_DWORD *)*(this + 2) = 0; /*0x55f368*/
  *(_DWORD *)*(this + 3) = 0; /*0x55f373*/
  return result; /*0x55f367*/
}
