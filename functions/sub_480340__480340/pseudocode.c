int __cdecl sub_480340(int a1)
{
  int result; // eax
  int v2; // eax
  int v3; // edi
  unsigned int v4; // ebp
  unsigned int v5; // esi
  int v6; // eax

  result = 0;
  if ( a1 )
  {
    result = sub_47FAC0(a1);
    if ( !result )
    {
      v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
      v3 = v2;
      if ( v2 )
      {
        v4 = *(unsigned __int16 *)(v2 + 0xB6);
        v5 = 0;
        if ( *(_WORD *)(v2 + 0xB6) )
        {
          do
          {
            if ( *(unsigned __int16 *)(v3 + 0xB6) > v5 )
              v6 = *(_DWORD *)(*(_DWORD *)(v3 + 0xB0) + 4 * v5);
            else
              v6 = 0;
            result = sub_480340(v6);
            if ( result )
              break;
            ++v5;
          }
          while ( v5 < v4 );
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
