_DWORD *__thiscall sub_92F1D0(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v6; // edx
  _DWORD *v7; // eax
  int v8; // ecx

  v3 = *(this + 2); /*0x92f1d3*/
  if ( (v3 & 0x3FFFFFFF) < a2[1] ) /*0x92f1e7*/
  {
    v4 = MEMORY[0xBA9DE4]; /*0x92f1ec*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x92f1f3*/
    if ( v3 >= 0 ) /*0x92f1fa*/
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), (_DWORD *)*this, 8 * v3, 0x14); /*0x92f20f*/
    *this = sub_8A7560(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), 8 * a2[1], 0x14); /*0x92f22c*/
    *(this + 2) = a2[1] | *(this + 2) & 0x40000000; /*0x92f23c*/
  }
  v6 = a2[1]; /*0x92f240*/
  v7 = (_DWORD *)*this; /*0x92f245*/
  *(this + 1) = v6; /*0x92f247*/
  if ( v6 > 0 ) /*0x92f24c*/
  {
    v8 = *a2 - (_DWORD)v7; /*0x92f24e*/
    do /*0x92f260*/
    {
      *v7 = *(_DWORD *)((char *)v7 + v8); /*0x92f253*/
      v7[1] = *(_DWORD *)((char *)v7 + v8 + 4); /*0x92f259*/
      v7 += 2; /*0x92f25c*/
      --v6; /*0x92f25f*/
    }
    while ( v6 ); /*0x92f260*/
  }
  return this; /*0x92f262*/
}
