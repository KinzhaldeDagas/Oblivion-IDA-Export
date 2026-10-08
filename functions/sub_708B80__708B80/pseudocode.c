void __thiscall sub_708B80(_DWORD *this)
{
  _DWORD *v2; // esi
  int *v3; // ecx
  _DWORD *v4; // ebx
  int v5; // eax
  bool v6; // zf

  if ( *(this + 0x32) ) /*0x708b86*/
  {
    v2 = this + 0x2F; /*0x708b90*/
    do /*0x708bd3*/
    {
      v3 = (int *)*(this + 0x30); /*0x708ba6*/
      v4 = (_DWORD *)v3[2]; /*0x708ba9*/
      v5 = *v3; /*0x708bac*/
      v6 = *v3 == 0; /*0x708bae*/
      *(this + 0x30) = *v3; /*0x708bb0*/
      if ( v6 ) /*0x708bb3*/
        *(this + 0x31) = 0; /*0x708bba*/
      else
        *(_DWORD *)(v5 + 4) = 0; /*0x708bb5*/
      (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 8))(this + 0x2F, v3); /*0x708bc5*/
      --*(this + 0x32); /*0x708bc7*/
      sub_70B930(v4, this); /*0x708bce*/
    }
    while ( *(this + 0x32) ); /*0x708bd3*/
  }
}
