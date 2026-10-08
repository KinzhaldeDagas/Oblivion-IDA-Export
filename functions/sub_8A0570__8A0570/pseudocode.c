int __thiscall sub_8A0570(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx

  if ( this ) /*0x8a0576*/
    result = *(this + 2); /*0x8a0578*/
  else
    result = 0; /*0x8a057d*/
  if ( a2 != result ) /*0x8a0585*/
  {
    if ( result ) /*0x8a0589*/
    {
      v4 = *(_DWORD *)(result + 8); /*0x8a058b*/
      if ( v4 ) /*0x8a0590*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, result); /*0x8a0598*/
    }
    return sub_89D400(this, a2); /*0x8a059d*/
  }
  return result; /*0x8a05a2*/
}
