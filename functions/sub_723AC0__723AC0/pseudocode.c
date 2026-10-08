bool __thiscall sub_723AC0(NiNode *this, int a2)
{
  int v4; // ecx
  int v5; // esi
  int v6; // ebx

  if ( !sub_723F30(this, a2) ) /*0x723ac9*/
    return 0; /*0x723ad0*/
  v4 = *((_DWORD *)this + 0x3F); /*0x723ad9*/
  v5 = *(_DWORD *)(a2 + 0xFC); /*0x723ae1*/
  if ( v4 ) /*0x723ae7*/
  {
    if ( v5 ) /*0x723aeb*/
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4); /*0x723b05*/
      if ( v6 != (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) /*0x723b21*/
        || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x3F) + 0x2C))(
             *((_DWORD *)this + 0x3F),
             v5) )
      {
        return 1; /*0x723b25*/
      }
    }
    return 0; /*0x723ad6*/
  }
  return !v5; /*0x723af3*/
}
