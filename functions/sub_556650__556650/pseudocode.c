signed int __thiscall sub_556650(_DWORD *this)
{
  int v2; // ecx
  signed int result; // eax
  int v4; // esi
  unsigned int i; // edi
  int v6; // eax
  int v7; // esi
  unsigned int v8; // ebx
  int j; // ebp
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // [esp+0h] [ebp-8h]

  v2 = *(this + 3); /*0x556655*/
  result = 0; /*0x556658*/
  if ( v2 ) /*0x556660*/
  {
    v4 = *(_DWORD *)(v2 + 8); /*0x556667*/
    if ( v4 ) /*0x55666c*/
    {
      v13 = 0x24; /*0x556675*/
      for ( i = 0; i < 0x20; i += 0x10 ) /*0x55667d*/
      {
        v6 = *(_DWORD *)(i + v4 + 8); /*0x556680*/
        if ( v6 ) /*0x556686*/
          v7 = (*(_DWORD *)(i + v4 + 0xC) - v6) >> 6; /*0x556692*/
        else
          v7 = 0; /*0x556688*/
        v13 += v7 << 6; /*0x556698*/
        v8 = 0; /*0x55669c*/
        for ( j = 0; ; j += 0x40 ) /*0x55669e*/
        {
          v4 = *(_DWORD *)(*(this + 3) + 8); /*0x5566a3*/
          v10 = *(_DWORD *)(i + v4 + 8); /*0x5566a6*/
          if ( !v10 || v8 >= (*(_DWORD *)(i + v4 + 0xC) - v10) >> 6 ) /*0x5566b9*/
            break; /*0x5566b9*/
          v11 = *(_DWORD *)(*(_DWORD *)(i + v4 + 8) + j + 0x14); /*0x5566dd*/
          if ( v11 ) /*0x5566e2*/
            v12 = *(_DWORD *)(*(_DWORD *)(i + v4 + 8) + j + 0x18) - v11; /*0x5566eb*/
          else
            v12 = 0; /*0x5566e4*/
          ++v8; /*0x5566f6*/
          v13 += v12 + 2 * v12; /*0x5566f9*/
        }
      }
      return v13; /*0x55670e*/
    }
  }
  return result; /*0x556716*/
}
