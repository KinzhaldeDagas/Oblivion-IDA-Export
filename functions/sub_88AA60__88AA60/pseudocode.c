int __cdecl sub_88AA60(int a1, int a2)
{
  int result; // eax
  _DWORD *v3; // ecx

  result = a1; /*0x88aa60*/
  v3 = *(_DWORD **)(a1 + 0x10); /*0x88aa64*/
  if ( v3 ) /*0x88aa69*/
    return sub_89F4D0(v3, *(_DWORD *)(a2 + 0xC)); /*0x88aa73*/
  return result; /*0x88aa78*/
}
