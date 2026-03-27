char __thiscall sub_739420(NiRenderTargetGroup *this, int a2)
{
  unsigned int v3; // eax
  unsigned int i; // edi
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // ecx

  LOBYTE(v3) = sub_707AB0(this, a2);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x97); ++i )
  {
    v3 = *((_DWORD *)this + 0x4A);
    v5 = *(_DWORD *)(v3 + 4 * i);
    if ( v5 )
      LOBYTE(v3) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x38))(v5, a2);
  }
  v6 = 0;
  if ( *((_WORD *)this + 0x9F) )
  {
    do
    {
      v7 = *(_DWORD *)(*((_DWORD *)this + 0x4E) + 4 * v6);
      if ( v7 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x38))(v7, a2);
      v3 = *((unsigned __int16 *)this + 0x9F);
      ++v6;
    }
    while ( v6 < v3 );
  }
  return v3;
}
