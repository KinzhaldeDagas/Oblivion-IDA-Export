void __thiscall sub_96DCD0(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edi
  unsigned __int16 v5; // ax

  v2 = *(this + 2); /*0x96dcd3*/
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x10))(v2); /*0x96dce0*/
    v4 = v3; /*0x96dce2*/
    if ( v3 )
    {
      if ( !*(this + 0x10) )
      {
        v5 = *(_WORD *)(*(_DWORD *)(v3 + 0xB4) + 8); /*0x96dcf4*/
        if ( v5 )
        {
          *((_WORD *)this + 0x25) = v5; /*0x96dcfd*/
          *(this + 0x10) = FormHeapAlloc((0xC * (unsigned __int64)v5) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v5);
          *((_BYTE *)this + 0x48) = 1; /*0x96dd1d*/
          *((_WORD *)this + 0x26) = *(_WORD *)(*(_DWORD *)(v4 + 0xB4) + 0x40); /*0x96dd2e*/
        }
      }
    }
  }
}
