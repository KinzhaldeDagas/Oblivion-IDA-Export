int __thiscall sub_957420(_DWORD *this, int a2)
{
  int result; // eax

  result = a2; /*0x957420*/
  if ( a2 ) /*0x957426*/
  {
    if ( *(_BYTE *)(a2 + 4) ) /*0x957428*/
    {
      *(_DWORD *)a2 = *(this + 6); /*0x957432*/
      *(this + 6) = a2; /*0x957434*/
      ++*(this + 7); /*0x957437*/
    }
    else
    {
      *(_DWORD *)a2 = *(this + 4); /*0x957440*/
      *(this + 4) = a2; /*0x957442*/
      ++*(this + 5); /*0x957445*/
    }
  }
  return result; /*0x95743a*/
}
