void __thiscall sub_4A6010(_DWORD *this)
{
  int i; // edi
  _DWORD *v3; // eax

  for ( i = *(this + 1); i; i = *(this + 1) ) /*0x4a601c*/
  {
    v3 = (_DWORD *)*(this + 2); /*0x4a6020*/
    if ( v3 ) /*0x4a6025*/
    {
      *(this + 2) = v3[1]; /*0x4a602a*/
      *(this + 1) = *v3; /*0x4a6030*/
      FormHeapFree((unsigned int)v3); /*0x4a6033*/
    }
    else
    {
      *(this + 1) = 0; /*0x4a603d*/
    }
    if ( *((_BYTE *)this + 0xC) ) /*0x4a6040*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)i + 8))(i, 1); /*0x4a6052*/
  }
  *(this + 4) = 0; /*0x4a605c*/
}
