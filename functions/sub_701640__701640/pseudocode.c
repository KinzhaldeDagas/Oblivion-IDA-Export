int __thiscall sub_701640(void *this)
{
  int v1; // eax
  int v3; // eax

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x7C))(this); /*0x701645*/
  if ( v1 && (v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v1 + 0x70))(v1, 0)) != 0 ) /*0x70165b*/
    return *(_DWORD *)(v3 + 8); /*0x70165d*/
  else
    return 0; /*0x70164b*/
}
