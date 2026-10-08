int __thiscall sub_5E1AB0(void *this)
{
  int v2; // ebx
  int v3; // edi

  v2 = 0; /*0x5e1abd*/
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e1ac1*/
  if ( v3 ) /*0x5e1ac5*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e1ad1*/
      v2 = v3; /*0x5e1ad7*/
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)(v2 + 0x24) + 0x10))(v2 + 0x24); /*0x5e1ae3*/
}
