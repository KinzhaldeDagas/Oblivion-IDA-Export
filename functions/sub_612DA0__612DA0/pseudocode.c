int __thiscall sub_612DA0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // ecx

  for ( result = 0; result < 2; ++result )
  {
    if ( *(_DWORD *)(4 * result + 0xB15198) == a2 )
      break;
  }
  v3 = *(_DWORD *)(*(this + 0xF) + 0x58);
  if ( result < 2 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x17C))(v3, result);
  return result;
}
