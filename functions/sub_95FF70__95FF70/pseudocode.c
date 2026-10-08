unsigned int __thiscall sub_95FF70(_DWORD *this, signed int a2)
{
  signed int v2; // ebx
  unsigned int result; // eax
  unsigned int v5; // edi
  int v6; // ecx

  v2 = a2; /*0x95ff71*/
  sub_95DB50(this, a2); /*0x95ff7a*/
  a2 = *((unsigned __int16 *)this + 7); /*0x95ff89*/
  result = sub_6D3660(v2, (int)&a2); /*0x95ff8d*/
  v5 = 0; /*0x95ff92*/
  if ( *((_WORD *)this + 7) ) /*0x95ff97*/
  {
    do /*0x95ffbb*/
    {
      v6 = *(_DWORD *)(*(this + 2) + 4 * v5); /*0x95ffa3*/
      if ( v6 ) /*0x95ffa8*/
        (*(void (__thiscall **)(int, signed int))(*(_DWORD *)v6 + 4))(v6, v2); /*0x95ffb0*/
      result = *((unsigned __int16 *)this + 7); /*0x95ffb2*/
      ++v5; /*0x95ffb6*/
    }
    while ( v5 < result ); /*0x95ffbb*/
  }
  return result; /*0x95ffbd*/
}
