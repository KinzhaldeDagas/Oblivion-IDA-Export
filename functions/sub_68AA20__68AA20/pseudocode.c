void __thiscall sub_68AA20(int *this, int a2)
{
  int *v2; // ebx
  int *v3; // esi
  _BYTE *v4; // eax
  _BYTE *v5; // edi
  int *v6; // eax

  sub_689A00(this);
  if ( a2 )
  {
    v2 = (int *)(a2 + 4);
    v3 = 0;
    if ( a2 != 0xFFFFFFFC )
    {
      do
      {
        if ( !v2[1] && !*v2 )
          break;
        v4 = (_BYTE *)FormHeapAlloc(8u);
        v5 = v4 ? sub_68B0C0(v4) : 0;
        sub_68B240(v5, *v2);
        if ( v3 )
        {
          BSSimpleList_PushBack(v3, (int)v5);
          v3 = (int *)v3[1];
        }
        else
        {
          v3 = this + 1;
          if ( v5 )
          {
            if ( *v3 )
            {
              v6 = (int *)FormHeapAlloc(8u);
              if ( v6 )
              {
                *v6 = *v3;
                v6[1] = 0;
              }
              else
              {
                v6 = 0;
              }
              v6[1] = *(this + 2);
              *(this + 2) = (int)v6;
            }
            *v3 = (int)v5;
          }
        }
        v2 = (int *)v2[1];
      }
      while ( v2 );
    }
  }
}
