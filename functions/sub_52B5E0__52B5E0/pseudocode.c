int __thiscall sub_52B5E0(_DWORD *this, int a2)
{
  _DWORD *v2; // eax

  v2 = this + 0x2A; /*0x52b5e0*/
  if ( this != (_DWORD *)0xFFFFFF58 ) /*0x52b5e8*/
  {
    while ( *v2 ) /*0x52b5f4*/
    {
      if ( *(_DWORD *)(*v2 + 0xC) == a2 ) /*0x52b5f9*/
        return *v2; /*0x52b607*/
      v2 = (_DWORD *)v2[1]; /*0x52b5fb*/
      if ( !v2 ) /*0x52b600*/
        return 0; /*0x52b600*/
    }
  }
  return 0; /*0x52b604*/
}
