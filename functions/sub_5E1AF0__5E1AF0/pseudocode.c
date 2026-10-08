int __thiscall sub_5E1AF0(void *this)
{
  int v2; // ebx
  int v3; // edi

  v2 = 0; /*0x5e1afd*/
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e1b01*/
  if ( v3 ) /*0x5e1b05*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e1b11*/
      v2 = v3; /*0x5e1b17*/
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)(v2 + 0x24) + 0x14))(v2 + 0x24); /*0x5e1b23*/
}
