unsigned int __thiscall sub_6FD750(_DWORD *this, _DWORD *a2)
{
  unsigned int result; // eax
  unsigned int v4; // ebp
  _DWORD *v5; // esi
  unsigned int i; // edi
  int v7; // eax

  result = NiTimeController_LinkObject(this, a2); /*0x6fd759*/
  v4 = 0; /*0x6fd75e*/
  if ( *((_WORD *)this + 0x27) ) /*0x6fd760*/
  {
    do /*0x6fd7a4*/
    {
      v5 = *(_DWORD **)(*(this + 0x12) + 4 * v4); /*0x6fd76b*/
      if ( v5 ) /*0x6fd770*/
      {
        for ( i = 0; i < v5[2]; ++i ) /*0x6fd774*/
        {
          v7 = sub_7124A0(a2); /*0x6fd784*/
          if ( i < v5[2] ) /*0x6fd78c*/
            *(_DWORD *)(*v5 + 4 * i) = v7; /*0x6fd790*/
        }
      }
      result = *((unsigned __int16 *)this + 0x27); /*0x6fd79b*/
      ++v4; /*0x6fd79f*/
    }
    while ( v4 < result ); /*0x6fd7a4*/
  }
  return result; /*0x6fd7a8*/
}
