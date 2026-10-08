void __thiscall sub_96DD40(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // ecx
  int v6; // ebx
  __int16 v7; // ax

  v2 = *(this + 2); /*0x96dd43*/
  if ( v2 ) /*0x96dd48*/
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0xC))(v2); /*0x96dd50*/
    v4 = v3; /*0x96dd52*/
    if ( v3 ) /*0x96dd56*/
    {
      if ( *(this + 0x10) ) /*0x96dd58*/
      {
        if ( *((_BYTE *)this + 0x48) ) /*0x96dd5e*/
        {
          v5 = *(_DWORD **)(v3 + 0xB4); /*0x96dd64*/
          v6 = v5[7]; /*0x96dd70*/
          v7 = (*(int (**)(void))(*v5 + 0x50))(); /*0x96dd73*/
          off_B27168(v7, v6, *(this + 0x10), v4 + 0x64); /*0x96dd82*/
          *((_BYTE *)this + 0x48) = 0; /*0x96dd8b*/
        }
      }
    }
  }
}
