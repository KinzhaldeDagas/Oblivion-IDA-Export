double __thiscall sub_6A1F30(void *this, int a2)
{
  int *v2; // eax
  int *v3; // ecx
  int v4; // eax

  v2 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this); /*0x6a1f36*/
  if ( v2 ) /*0x6a1f3a*/
  {
    do /*0x6a1f40*/
    {
      v3 = (int *)v2[1]; /*0x6a1f40*/
      if ( !v3 && !*v2 ) /*0x6a1f47*/
        break; /*0x6a1f47*/
      v4 = *v2; /*0x6a1f4b*/
      if ( v4 && **(_DWORD **)(v4 + 0xC) == a2 ) /*0x6a1f56*/
        return *(float *)(v4 + 0x18); /*0x6a1f64*/
      v2 = v3; /*0x6a1f58*/
    }
    while ( v3 ); /*0x6a1f40*/
  }
  return 0.0; /*0x6a1f60*/
}
