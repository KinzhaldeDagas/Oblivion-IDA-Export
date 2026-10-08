void __thiscall sub_52B550(int *this, int a2)
{
  bool v2; // zf
  int *v3; // ecx
  int *v4; // eax
  int v5; // edx

  if ( a2 ) /*0x52b557*/
  {
    v2 = this + 0x23 == 0; /*0x52b559*/
    v3 = this + 0x23; /*0x52b559*/
    v4 = v3; /*0x52b563*/
    if ( !v2 ) /*0x52b565*/
    {
      do /*0x52b567*/
      {
        v5 = *v4; /*0x52b567*/
        if ( !*v4 ) /*0x52b567*/
          break; /*0x52b567*/
        if ( *(_DWORD *)(v5 + 0xC) == *(_DWORD *)(a2 + 0xC) ) /*0x52b570*/
        {
          if ( v5 ) /*0x52b586*/
            return; /*0x52b586*/
          break; /*0x52b586*/
        }
        v4 = (int *)v4[1]; /*0x52b572*/
      }
      while ( v4 ); /*0x52b567*/
    }
    BSSimpleList_PushBack(v3, a2); /*0x52b588*/
  }
}
