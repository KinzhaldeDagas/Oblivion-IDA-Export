int __thiscall sub_8B6980(void *this, _OWORD *a2, _OWORD *a3, int a4)
{
  int v5; // eax
  _DWORD *v6; // esi
  int result; // eax

  v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x30, 0x24); /*0x8b69b4*/
  *(_WORD *)(v5 + 4) = 0x30; /*0x8b69b6*/
  v6 = sub_8F3490((_DWORD *)v5, a2, a3, a4); /*0x8b69e1*/
  result = (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x4C))(this, v6); /*0x8b69f3*/
  if ( *((_WORD *)v6 + 2) ) /*0x8b69f5*/
  {
    result = (unsigned __int16)--*((_WORD *)v6 + 3); /*0x8b6a01*/
    if ( !(_WORD)result ) /*0x8b6a08*/
      return (*(int (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x8b6a12*/
  }
  return result; /*0x8b6a14*/
}
