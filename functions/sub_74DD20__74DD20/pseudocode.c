void __thiscall sub_74DD20(_DWORD *this, int a2)
{
  int v3; // edi
  unsigned int i; // esi
  int v5; // ecx

  nullsub_returnvVoid_1arg(a2); /*0x74dd29*/
  if ( *(_DWORD *)(a2 + 0xD8) > 0xA010000u ) /*0x74dd38*/
  {
    v3 = *(_DWORD *)(*(this + 4) + 0xB4); /*0x74dd56*/
    if ( *(_BYTE *)(v3 + 0x6C) ) /*0x74dd5c*/
    {
      for ( i = 0; i < *(unsigned __int16 *)(v3 + 0x7E); ++i ) /*0x74dd64*/
      {
        if ( i < *((unsigned __int16 *)this + 0x10) ) /*0x74dd76*/
        {
          v5 = *(this + 7); /*0x74dd78*/
          if ( *(_DWORD *)(v5 + 4 * i) ) /*0x74dd7b*/
            sub_74D830(v3, (MEF_RefPointerArray16 **)i, *(NiObject **)(v5 + 4 * i)); /*0x74dd86*/
        }
      }
    }
  }
  else
  {
    sub_75DB40(*(unsigned __int16 **)(*(this + 4) + 0xB4), *((unsigned __int16 *)this + 0x11)); /*0x74dd48*/
  }
}
