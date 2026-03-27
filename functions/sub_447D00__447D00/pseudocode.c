void __thiscall sub_447D00(_BYTE *this)
{
  char v2; // bl
  int v3; // ecx
  _DWORD *v4; // eax

  v2 = *(this + 0xCD4);
  *(this + 0xCD4) = 1;
  while ( *((_DWORD *)this + 0x22F) || *((_DWORD *)this + 0x22E) )
  {
    v3 = *((_DWORD *)this + 0x22E);
    if ( v3 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1);
    v4 = *((_DWORD **)this + 0x22F);
    if ( v4 )
    {
      *((_DWORD *)this + 0x22F) = v4[1];
      *((_DWORD *)this + 0x22E) = *v4;
      FormHeapFree((unsigned int)v4);
    }
    else
    {
      *((_DWORD *)this + 0x22E) = 0;
    }
  }
  *(this + 0xCD4) = v2;
}
