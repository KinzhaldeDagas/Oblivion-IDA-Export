int __thiscall sub_88D780(_DWORD *this, int a2)
{
  int v3; // esi
  int result; // eax
  int v5; // esi
  int v6; // ecx
  _DWORD v7[2]; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-4h]

  v3 = *(this + 0x15);
  v7[1] = a2;
  result = 0;
  v5 = v3 - 1;
  v7[0] = this;
  v8 = 0;
  if ( v5 >= 0 )
  {
    do
    {
      v6 = *(this + 0x14);
      if ( *(_DWORD *)(v6 + 4 * v5) )
        (***(void (__thiscall ****)(_DWORD, _DWORD *))(v6 + 4 * v5))(*(_DWORD *)(v6 + 4 * v5), v7);
      --v5;
    }
    while ( v5 >= 0 );
    return v8;
  }
  return result;
}
