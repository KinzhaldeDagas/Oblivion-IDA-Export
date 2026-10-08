void __thiscall ExtraEnableStateChildren::~ExtraEnableStateChildren(ExtraEnableStateChildren *this)
{
  int v2; // edi

  *(_DWORD *)this = &ExtraEnableStateChildren::`vftable'; /*0x42a623*/
  if ( *((_DWORD *)this + 4) ) /*0x42a629*/
  {
    do /*0x42a644*/
    {
      v2 = *(_DWORD *)(*((_DWORD *)this + 4) + 4); /*0x42a633*/
      FormHeapFree(*((_DWORD *)this + 4)); /*0x42a637*/
      *((_DWORD *)this + 4) = v2; /*0x42a641*/
    }
    while ( v2 ); /*0x42a644*/
  }
  *((_DWORD *)this + 3) = 0; /*0x42a647*/
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x42a64e*/
}
