int __thiscall sub_946880(int *this, int a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // esi
  int v6; // ecx
  _DWORD *v7; // [esp+10h] [ebp-Ch] BYREF
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v3 = *(this + 7);
  result = 0x80000000;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0x80000000;
  if ( v3 > 0 )
  {
    do
    {
      v8 = 0;
      sub_9465A0(
        this + 0xFFFFFFFE,
        *(_DWORD *)(*(this + 6) + 8 * v5),
        *(_DWORD **)(*(this + 6) + 8 * v5 + 4),
        0,
        (const void **)&v7);
      ++v5;
      result = v9;
    }
    while ( v5 < *(this + 7) );
  }
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    return sub_8A75D0(v6, v7, 8 * result, 0x14);
  }
  return result;
}
