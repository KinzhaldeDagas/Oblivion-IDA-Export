void sub_58BD50()
{
  int *v0; // ebp
  _DWORD *v1; // esi
  int *v2; // eax
  int v3; // ecx
  bool v4; // zf
  unsigned int v5; // edi

  v0 = (int *)&unk_B3B0BC;
  do
  {
    if ( *v0 )
    {
      v1 = v0 + 0xFFFFFFFD;
      do
      {
        v2 = (int *)v1[1];
        v3 = *v2;
        v4 = *v2 == 0;
        v1[1] = *v2;
        if ( v4 )
          v1[2] = 0;
        else
          *(_DWORD *)(v3 + 4) = 0;
        v5 = v2[2];
        (*(void (__thiscall **)(int *, int *))(*v1 + 8))(v0 + 0xFFFFFFFD, v2);
        --*v0;
        if ( v5 )
        {
          FormHeapFree(*(_DWORD *)(v5 + 8));
          *(_DWORD *)(v5 + 8) = 0;
          *(_WORD *)(v5 + 0xE) = 0;
          *(_WORD *)(v5 + 0xC) = 0;
          FormHeapFree(v5);
        }
      }
      while ( *v0 );
    }
    v0 += 4;
  }
  while ( (int)v0 < (int)&dword_B3B27C );
}
