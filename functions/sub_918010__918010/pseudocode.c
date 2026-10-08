int __thiscall sub_918010(_DWORD **this, int a2, int a3)
{
  int v3; // esi
  int v5; // eax

  v3 = 0; /*0x918018*/
  if ( a3 <= 0 ) /*0x91801e*/
    return a3; /*0x91803f*/
  while ( 1 ) /*0x918032*/
  {
    v5 = (*(int (__thiscall **)(_DWORD, int, int))(**(this + 2) + 0x10))(*(this + 2), v3 + a2, a3 - v3); /*0x918032*/
    v3 += v5; /*0x918035*/
    if ( !v5 ) /*0x918039*/
      break; /*0x918039*/
    if ( v3 >= a3 ) /*0x91803d*/
      return a3; /*0x91803d*/
  }
  return v3; /*0x918041*/
}
