int __thiscall TESTopic_GetTopicInfo__(int *this, int a2, char a3)
{
  int *v3; // edi
  int v4; // esi
  unsigned int v5; // edx
  unsigned int v6; // ecx
  int result; // eax
  int v8; // ecx

  v3 = this + 0xA;
  if ( this != (int *)0xFFFFFFD8 )
  {
    do
    {
      v4 = *v3;
      if ( !*v3 )
        break;
      v5 = *(_DWORD *)(v4 + 0x10);
      v3 = (int *)v3[1];
      if ( v5 )
      {
        if ( !a3 )
        {
          v8 = 0;
          while ( 1 )
          {
            result = *(_DWORD *)(*(_DWORD *)(v4 + 8) + 4 * v8);
            if ( result )
            {
              if ( *(_DWORD *)(result + 0xC) == a2 )
                return result;
            }
            if ( ++v8 >= v5 )
              goto LABEL_15;
          }
        }
        v6 = v5 - 1;
        if ( (int)(v5 - 1) >= 0 )
        {
          do
          {
            if ( v6 < v5 )
            {
              result = *(_DWORD *)(*(_DWORD *)(v4 + 8) + 4 * v6);
              if ( result )
              {
                if ( *(_DWORD *)(result + 0xC) == a2 )
                  return result;
              }
            }
          }
          while ( (int)--v6 >= 0 );
        }
      }
LABEL_15:
      ;
    }
    while ( v3 );
  }
  return 0;
}
