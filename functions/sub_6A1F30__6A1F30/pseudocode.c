double __thiscall sub_6A1F30(void *this, int a2)
{
  int *v2; // eax
  int *v3; // ecx
  int v4; // eax

  v2 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  if ( v2 )
  {
    do
    {
      v3 = (int *)v2[1];
      if ( !v3 && !*v2 )
        break;
      v4 = *v2;
      if ( v4 && **(_DWORD **)(v4 + 0xC) == a2 )
        return *(float *)(v4 + 0x18);
      v2 = v3;
    }
    while ( v3 );
  }
  return 0.0;
}
