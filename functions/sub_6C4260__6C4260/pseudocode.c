void __thiscall sub_6C4260(_DWORD *this, int a2)
{
  _DWORD *v3; // ebx
  unsigned int i; // edi
  _DWORD *v5; // ecx

  nullsub_returnvVoid_1arg(a2);
  v3 = (_DWORD *)*(this + 0xC);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x23); ++i )
  {
    v5 = *(_DWORD **)(*(this + 0x10) + 4 * i);
    if ( v5 )
      sub_6C9590(v5, v3);
  }
}
