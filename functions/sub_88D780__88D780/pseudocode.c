int __thiscall sub_88D780(_DWORD *this, int a2)
{
  int v3; // esi
  int result; // eax
  int v5; // esi
  int v6; // ecx
  _DWORD v7[2]; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-4h]

  v3 = *(this + 0x15); /*0x88d78b*/
  v7[1] = a2; /*0x88d78e*/
  result = 0; /*0x88d792*/
  v5 = v3 - 1; /*0x88d794*/
  v7[0] = this; /*0x88d797*/
  v8 = 0; /*0x88d79b*/
  if ( v5 >= 0 ) /*0x88d79f*/
  {
    do /*0x88d7bf*/
    {
      v6 = *(this + 0x14); /*0x88d7a1*/
      if ( *(_DWORD *)(v6 + 4 * v5) ) /*0x88d7a4*/
        (***(void (__thiscall ****)(_DWORD, _DWORD *))(v6 + 4 * v5))(*(_DWORD *)(v6 + 4 * v5), v7); /*0x88d7ba*/
      --v5; /*0x88d7bc*/
    }
    while ( v5 >= 0 ); /*0x88d7bf*/
    return v8; /*0x88d7c1*/
  }
  return result; /*0x88d7c5*/
}
