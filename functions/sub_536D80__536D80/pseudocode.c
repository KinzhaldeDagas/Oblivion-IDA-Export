void __thiscall sub_536D80(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)*(this + 2);
  if ( v2 && (*(_BYTE *)(a2 + 0x30) & 0x3F) == 0xC )
  {
    v3 = (_DWORD *)*(this + 2);
    while ( v3[2] != a2 + 0x14 )
    {
      v3 = (_DWORD *)v3[1];
      if ( !v3 )
        return;
    }
    *(this + 2) = sub_536980(v3, v2);
    FormHeapFree((unsigned int)v3);
  }
}
