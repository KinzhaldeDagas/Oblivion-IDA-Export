int __thiscall sub_612DA0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // ecx

  for ( result = 0; result < 2; ++result ) /*0x612da4*/
  {
    if ( *(_DWORD *)(4 * result + 0xB15198) == a2 ) /*0x612dad*/
      break; /*0x612dad*/
  }
  v3 = *(_DWORD *)(*(this + 0xF) + 0x58); /*0x612dbd*/
  if ( result < 2 ) /*0x612dc0*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x17C))(v3, result); /*0x612dce*/
  return result; /*0x612dd0*/
}
