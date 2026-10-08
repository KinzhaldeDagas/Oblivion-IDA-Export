char __thiscall sub_5375F0(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // edx
  char result; // al

  v3 = (_DWORD *)*(this + 6); /*0x5375f0*/
  result = 0; /*0x5375f3*/
  if ( v3 ) /*0x5375f7*/
  {
    while ( v3[2] != a2 ) /*0x537603*/
    {
      v3 = (_DWORD *)v3[1]; /*0x537605*/
      if ( !v3 ) /*0x53760a*/
        return result; /*0x53760a*/
    }
    sub_536EE0(this, v3, a3); /*0x53761a*/
    return 1; /*0x53761f*/
  }
  return result; /*0x53760d*/
}
