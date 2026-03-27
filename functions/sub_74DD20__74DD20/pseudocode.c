void __thiscall sub_74DD20(_DWORD *this, int a2)
{
  int v3; // edi
  unsigned int i; // esi
  int v5; // ecx

  nullsub_returnvVoid_1arg(a2);
  if ( *(_DWORD *)(a2 + 0xD8) > 0xA010000u )
  {
    v3 = *(_DWORD *)(*(this + 4) + 0xB4);
    if ( *(_BYTE *)(v3 + 0x6C) )
    {
      for ( i = 0; i < *(unsigned __int16 *)(v3 + 0x7E); ++i )
      {
        if ( i < *((unsigned __int16 *)this + 0x10) )
        {
          v5 = *(this + 7);
          if ( *(_DWORD *)(v5 + 4 * i) )
            sub_74D830(v3, i, *(void **)(v5 + 4 * i));
        }
      }
    }
  }
  else
  {
    sub_75DB40(*(unsigned __int16 **)(*(this + 4) + 0xB4), *((unsigned __int16 *)this + 0x11));
  }
}
