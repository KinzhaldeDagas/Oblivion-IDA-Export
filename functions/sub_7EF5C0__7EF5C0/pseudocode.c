char __thiscall sub_7EF5C0(BSShader *this)
{
  char v1; // al
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  char v3; // bl
  int *v4; // edi
  int v5; // esi
  int *v6; // edi
  int v7; // esi
  NiD3DPass *v8; // eax

  v1 = sub_8025F0(this);
  v2 = InterlockedDecrement;
  v3 = v1;
  v4 = dword_B466E0;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      if ( !v2((volatile LONG *)(v5 + 4)) )
      {
        if ( v5 )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      *v4 = 0;
    }
    ++v4;
  }
  while ( (int)v4 < (int)&unk_B466F0 );
  v6 = dword_B46708;
  do
  {
    v7 = *v6;
    if ( *v6 )
    {
      if ( !v2((volatile LONG *)(v7 + 4)) )
      {
        if ( v7 )
          (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      }
      *v6 = 0;
    }
    ++v6;
  }
  while ( (int)v6 < (int)&dword_B46710 );
  v8 = (NiD3DPass *)dword_B46704;
  if ( dword_B46704 )
  {
    if ( v8->RefCount-- == 1 )
      sub_7604D0(v8);
    dword_B46704 = 0;
  }
  return v3;
}
