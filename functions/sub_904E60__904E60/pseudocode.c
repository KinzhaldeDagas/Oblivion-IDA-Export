int __thiscall sub_904E60(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int i; // esi
  int v7; // ecx

  result = *(this + 4); /*0x904e64*/
  for ( i = 0; i < result; ++i ) /*0x904e6b*/
  {
    v7 = *(_DWORD *)(*(this + 3) + 8 * i + 4); /*0x904e83*/
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v7 + 0x24))(v7, a2, a3, a4); /*0x904e90*/
    result = *(this + 4); /*0x904e93*/
  }
  return result; /*0x904e9d*/
}
