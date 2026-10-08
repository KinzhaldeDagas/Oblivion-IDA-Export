bool __thiscall sub_6D2E60(float *this, int a2)
{
  int v4; // ecx

  if ( !sub_6EC2E0(a2) || *(float *)(a2 + 0xC) != *(this + 3) ) /*0x6d2e86*/
    return 0; /*0x6d2e86*/
  v4 = *((_DWORD *)this + 4); /*0x6d2e88*/
  if ( v4 ) /*0x6d2e8d*/
    return *(_DWORD *)(a2 + 0x10) /*0x6d2e76*/
        && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x10));
  return !*(_DWORD *)(a2 + 0x10); /*0x6d2e99*/
}
