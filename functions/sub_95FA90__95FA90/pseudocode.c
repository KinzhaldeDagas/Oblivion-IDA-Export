char __thiscall sub_95FA90(_WORD *this, int a2)
{
  __int16 v4; // ax
  int v5; // esi
  int v6; // ecx

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0xC))(a2) != 4 ) /*0x95faa4*/
    return 0; /*0x95faa4*/
  v4 = *(this + 7); /*0x95faad*/
  if ( v4 != *(_WORD *)(a2 + 0xE) ) /*0x95fab5*/
    return 0; /*0x95faa7*/
  v5 = 0; /*0x95fab8*/
  if ( !v4 ) /*0x95fabd*/
    return 1; /*0x95faeb*/
  while ( 1 ) /*0x95faca*/
  {
    v6 = *(_DWORD *)(4 * v5 + *((_DWORD *)this + 2)); /*0x95faca*/
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x28))( /*0x95fada*/
           v6,
           *(_DWORD *)(4 * v5 + *(_DWORD *)(a2 + 8))) )
    {
      break; /*0x95fada*/
    }
    if ( ++v5 >= (unsigned int)(unsigned __int16)*(this + 7) ) /*0x95fae9*/
      return 1; /*0x95fae9*/
  }
  return 0; /*0x95faa6*/
}
