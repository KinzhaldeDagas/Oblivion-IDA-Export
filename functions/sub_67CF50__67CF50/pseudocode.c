_DWORD *__thiscall sub_67CF50(int ***this, int a2, int a3)
{
  _DWORD *result; // eax
  _DWORD *v5; // eax
  int *v6; // edi
  int *v7; // esi
  TESObjectREFR ****v8; // ecx
  bool v9; // bl
  int v10; // eax
  _DWORD *v11; // [esp+4h] [ebp-4h]

  if ( byte_B333B8 )
  {
    result = (_DWORD *)FormHeapAlloc(8u);
    if ( result )
    {
      *result = 0;
      result[1] = 0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v5 = (_DWORD *)FormHeapAlloc(8u);
    if ( v5 )
    {
      *v5 = 0;
      v5[1] = 0;
      v11 = v5;
    }
    else
    {
      v11 = 0;
    }
    v6 = (int *)*this;
    if ( *this )
    {
      do
      {
        if ( !v6[1] && !*v6 )
          break;
        v7 = (int *)*v6;
        v8 = (TESObjectREFR ****)*v6;
        v9 = v6 == (int *)*this;
        v6 = (int *)v6[1];
        if ( sub_67CC60(v8) )
        {
          if ( a2 == v7[3] )
          {
            v10 = *v7;
            if ( *v7 )
            {
              while ( *(_DWORD *)v10 )
              {
                if ( **(_DWORD **)v10 == a3 )
                {
                  BSSimpleList_PushFront(v11, (int)v7);
                  break;
                }
                v10 = *(_DWORD *)(v10 + 4);
                if ( !v10 )
                  break;
              }
            }
          }
        }
        else
        {
          BSSimpleList_Remove((int *)*this, (int)v7);
          if ( v7 )
          {
            sub_67B5F0(v7, (int)v6);
            FormHeapFree((unsigned int)v7);
          }
          if ( v9 )
            v6 = (int *)*this;
        }
      }
      while ( v6 );
    }
    return v11;
  }
  return result;
}
