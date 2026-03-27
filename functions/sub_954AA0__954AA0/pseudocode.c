int __thiscall sub_954AA0(_DWORD **this, _DWORD *a2, int a3, int a4)
{
  int result; // eax
  int v5; // edx

  result = a4;
  v5 = *(_DWORD *)(a4 + 0x44);
  if ( *a2 )
  {
    if ( !v5 )
    {
      if ( *(_DWORD *)(a3 + 0x44) )
        return sub_9548D0(this, 0, *(_DWORD *)(a4 + 0x40));
    }
  }
  else if ( !v5 )
  {
    result = *(_DWORD *)(a4 + 0x40);
    if ( result )
      return sub_9548D0(this, 0, result);
  }
  return result;
}
