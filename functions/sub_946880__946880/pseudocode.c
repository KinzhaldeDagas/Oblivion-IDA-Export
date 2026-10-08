int __thiscall sub_946880(int *this, int a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // esi
  int v6; // ecx
  _DWORD *v7; // [esp+10h] [ebp-Ch] BYREF
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v3 = *(this + 7); /*0x946889*/
  result = 0x80000000; /*0x94688e*/
  v5 = 0; /*0x946893*/
  v7 = 0; /*0x946897*/
  v8 = 0; /*0x94689b*/
  v9 = 0x80000000; /*0x94689f*/
  if ( v3 > 0 ) /*0x9468a3*/
  {
    do /*0x9468f8*/
    {
      v8 = 0; /*0x9468d3*/
      sub_9465A0( /*0x9468e9*/
        this + 0xFFFFFFFE,
        *(_DWORD *)(*(this + 6) + 8 * v5),
        *(char **)(*(this + 6) + 8 * v5 + 4),
        0,
        (const void **)&v7);
      ++v5; /*0x9468f1*/
      result = v9; /*0x9468f4*/
    }
    while ( v5 < *(this + 7) ); /*0x9468f8*/
  }
  if ( result >= 0 ) /*0x9468fc*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x94690e*/
    if ( !v6 ) /*0x946916*/
      v6 = unk_BA7D9C; /*0x946918*/
    return sub_8A75D0(v6, v7, 8 * result, 0x14); /*0x94692e*/
  }
  return result; /*0x946933*/
}
