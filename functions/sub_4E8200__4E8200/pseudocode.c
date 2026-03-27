void __thiscall sub_4E8200(unsigned int *this)
{
  unsigned int v2; // edi
  int v4; // edi
  LONG (__stdcall *v5)(volatile LONG *); // ebx
  int v6; // edi

  if ( *(this + 9) )
  {
    do
    {
      v2 = *(_DWORD *)(*(this + 9) + 4);
      FormHeapFree(*(this + 9));
      *(this + 9) = v2;
    }
    while ( v2 );
  }
  *(this + 8) = 0;
  sub_4E8190(this);
  if ( dword_B36080-- == 1 )
  {
    v4 = dword_B36084;
    v5 = InterlockedDecrement;
    if ( dword_B36084 )
    {
      if ( !v5((volatile LONG *)(v4 + 4)) )
      {
        if ( v4 )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      dword_B36084 = 0;
    }
    v6 = dword_B36088;
    if ( dword_B36088 )
    {
      if ( !v5((volatile LONG *)(v6 + 4)) )
      {
        if ( v6 )
          (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      }
      dword_B36088 = 0;
    }
  }
  TESTexture::ClearComponentReferences(this);
}
