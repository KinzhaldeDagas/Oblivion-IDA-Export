int __thiscall sub_775320(_WORD *this, int a2, int a3, int a4, int *a5)
{
  unsigned int v6; // esi
  int i; // ebp
  _DWORD *v8; // ecx

  v6 = 0;
  for ( i = 0; v6 < (unsigned __int16)*(this + 0x22D); ++v6 )
  {
    v8 = *(_DWORD **)(*((_DWORD *)this + 0x115) + 4 * v6);
    if ( v8 )
    {
      if ( v8[3] == a2 && *v8 == a3 && v8[1] == a4 )
      {
        i = *(_DWORD *)(*((_DWORD *)this + 0x115) + 4 * v6);
        *a5 = sub_775090(v8, *a5);
      }
    }
  }
  return i;
}
