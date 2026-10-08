int __thiscall sub_8F5C80(int *this)
{
  int v2; // ebx
  int v3; // esi
  int v4; // eax

  if ( !*(this + 2) ) /*0x8f5c83*/
    return 0; /*0x8f5cbf*/
  v2 = *(this + 4); /*0x8f5c8b*/
  v3 = 0; /*0x8f5c8f*/
  if ( v2 <= 0 ) /*0x8f5c93*/
  {
LABEL_5:
    *(this + 4) = 0; /*0x8f5cb2*/
  }
  else
  {
    while ( 1 ) /*0x8f5ca5*/
    {
      v4 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 2) + 0xC))( /*0x8f5ca5*/
             *(this + 2),
             v3 + *(this + 3),
             v2 - v3);
      v3 += v4; /*0x8f5ca8*/
      if ( !v4 ) /*0x8f5cac*/
        break; /*0x8f5cac*/
      if ( v3 >= v2 ) /*0x8f5cb0*/
        goto LABEL_5; /*0x8f5cb0*/
    }
  }
  return v3; /*0x8f5cbd*/
}
