bool __thiscall sub_5E6BC0(_DWORD **this)
{
  int v2; // eax
  int v3; // edi
  bool result; // al

  result = 0; /*0x5e6c04*/
  if ( *(this + 0x16) ) /*0x5e6bc3*/
  {
    v2 = (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x184))(*(this + 0x16)); /*0x5e6bd5*/
    if ( v2 ) /*0x5e6bd9*/
    {
      v3 = *(_DWORD *)(v2 + 0x18); /*0x5e6bdb*/
      if ( v3 != 0xFFFFFFFF /*0x5e6c01*/
        && ((*(_BYTE *)(v2 + 0x1E) & 1) != 0
         || *(_DWORD *)(*(_DWORD *)(4 * v3 + 0xB152B0)
                      + 4 * (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x180))(*(this + 0x16))) == 0xD) )
      {
        return 1; /*0x5e6bc8*/
      }
    }
  }
  return result; /*0x5e6c03*/
}
