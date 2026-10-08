bool __thiscall sub_6D9A90(float *this, int a2)
{
  int v4; // ecx

  if ( !sub_6EC2E0(a2) || sub_6D5A40(this + 3, (float *)(a2 + 0xC)) ) /*0x6d9ab0*/
    return 0; /*0x6d9ab7*/
  v4 = *((_DWORD *)this + 7); /*0x6d9ab9*/
  if ( v4 ) /*0x6d9abe*/
    return *(_DWORD *)(a2 + 0x1C) /*0x6d9aa6*/
        && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x1C));
  return !*(_DWORD *)(a2 + 0x1C); /*0x6d9aca*/
}
