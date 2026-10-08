int __thiscall sub_8A17E0(_DWORD *this, _BYTE *a2)
{
  int v3; // eax
  bool v4; // zf

  if ( *(this + 3) ) /*0x8a17e6*/
  {
    *a2 = 0; /*0x8a1839*/
    return *(this + 3); /*0x8a183b*/
  }
  else
  {
    v3 = FormHeapAlloc(0x1Cu); /*0x8a17ed*/
    if ( v3 ) /*0x8a17f7*/
    {
      *(_DWORD *)v3 = 0; /*0x8a17f9*/
      *(_DWORD *)(v3 + 4) = 0; /*0x8a1800*/
      *(_DWORD *)(v3 + 8) = 0; /*0x8a1803*/
      *(_DWORD *)(v3 + 0xC) = 0x80000000; /*0x8a1806*/
      *(_DWORD *)(v3 + 0x10) = 0; /*0x8a1809*/
      *(_DWORD *)(v3 + 0x14) = 0; /*0x8a180c*/
      *(_DWORD *)(v3 + 0x18) = 0x80000000; /*0x8a180f*/
    }
    else
    {
      v3 = 0; /*0x8a1814*/
    }
    v4 = *(this + 2) == 0; /*0x8a1816*/
    *(this + 3) = v3; /*0x8a1819*/
    if ( !v4 ) /*0x8a181c*/
      sub_8A16D0(this, (const void **)v3); /*0x8a1821*/
    *a2 = 1; /*0x8a182a*/
    return *(this + 3); /*0x8a182d*/
  }
}
