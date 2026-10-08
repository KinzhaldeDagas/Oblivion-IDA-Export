void __thiscall sub_52B610(int *this, int a2)
{
  bool v2; // zf
  int *v3; // ecx
  int *v4; // eax
  int v5; // edx

  if ( a2 ) /*0x52b617*/
  {
    v2 = this + 0x2A == 0; /*0x52b619*/
    v3 = this + 0x2A; /*0x52b619*/
    v4 = v3; /*0x52b623*/
    if ( !v2 ) /*0x52b625*/
    {
      do /*0x52b627*/
      {
        v5 = *v4; /*0x52b627*/
        if ( !*v4 ) /*0x52b627*/
          break; /*0x52b627*/
        if ( *(_DWORD *)(v5 + 0xC) == *(_DWORD *)(a2 + 0xC) ) /*0x52b630*/
        {
          if ( v5 ) /*0x52b646*/
            return; /*0x52b646*/
          break; /*0x52b646*/
        }
        v4 = (int *)v4[1]; /*0x52b632*/
      }
      while ( v4 ); /*0x52b627*/
    }
    BSSimpleList_PushBack(v3, a2); /*0x52b648*/
  }
}
