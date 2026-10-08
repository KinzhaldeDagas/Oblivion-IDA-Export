int __thiscall sub_6DA280(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 6); /*0x6da280*/
  if ( result ) /*0x6da285*/
    return *(_DWORD *)(result + 8); /*0x6da28a*/
  return result; /*0x6da287*/
}
