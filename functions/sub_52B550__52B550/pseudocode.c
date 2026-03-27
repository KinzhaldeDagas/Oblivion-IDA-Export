void __thiscall sub_52B550(int *this, int a2)
{
  bool v2; // zf
  int *v3; // ecx
  int *v4; // eax
  int v5; // edx

  if ( a2 )
  {
    v2 = this + 0x23 == 0;
    v3 = this + 0x23;
    v4 = v3;
    if ( !v2 )
    {
      do
      {
        v5 = *v4;
        if ( !*v4 )
          break;
        if ( *(_DWORD *)(v5 + 0xC) == *(_DWORD *)(a2 + 0xC) )
        {
          if ( v5 )
            return;
          break;
        }
        v4 = (int *)v4[1];
      }
      while ( v4 );
    }
    BSSimpleList_PushBack(v3, a2);
  }
}
