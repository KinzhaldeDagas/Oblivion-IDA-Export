_OWORD *__thiscall sub_929560(int *this, int a2)
{
  int v3; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // ecx
  _OWORD *result; // eax
  int v11; // edx

  if ( (*(_DWORD *)(a2 + 8) & 0x3FFFFFFF) < *(this + 9) ) /*0x929577*/
  {
    v3 = MEMORY[0xBA9DE4]; /*0x92957c*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x929583*/
    if ( *(int *)(a2 + 8) >= 0 ) /*0x92958a*/
    {
      v5 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x929590*/
      if ( !v5 ) /*0x929598*/
        v5 = unk_BA7D9C; /*0x92959a*/
      sub_8A75D0(v5, *(_DWORD **)a2, 0x10 * *(_DWORD *)(a2 + 8), 0x14); /*0x9295a9*/
    }
    v6 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x9295b2*/
    if ( !v6 ) /*0x9295bc*/
      v6 = unk_BA7D9C; /*0x9295be*/
    v7 = sub_8A7560(v6, 0x10 * *(this + 9), 0x14); /*0x9295ce*/
    v8 = *(_DWORD *)(a2 + 8); /*0x9295d3*/
    *(_DWORD *)a2 = v7; /*0x9295d6*/
    *(_DWORD *)(a2 + 8) = *(this + 9) | v8 & 0x40000000; /*0x9295e3*/
  }
  v9 = *(this + 9); /*0x9295e6*/
  result = *(_OWORD **)a2; /*0x9295eb*/
  *(_DWORD *)(a2 + 4) = v9; /*0x9295ed*/
  if ( v9 > 0 ) /*0x9295f5*/
  {
    v11 = *(this + 8) - (_DWORD)result; /*0x9295f7*/
    do /*0x92960b*/
    {
      *result = *(_OWORD *)((char *)result + v11); /*0x929604*/
      ++result; /*0x929607*/
      --v9; /*0x92960a*/
    }
    while ( v9 ); /*0x92960b*/
  }
  return result; /*0x9295f3*/
}
