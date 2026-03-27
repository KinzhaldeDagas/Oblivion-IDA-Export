int *__thiscall sub_74D830(int this, unsigned int a2, void *a3)
{
  int *result; // eax
  int v4; // ebx
  unsigned int v5; // edi
  void *v6; // ebp
  int v7; // eax
  int v8; // esi

  result = (int *)a2;
  if ( a2 < *(unsigned __int16 *)(this + 0x7E) )
  {
    result = (int *)(*(_DWORD *)(this + 0x78) + 4 * a2);
    if ( *result )
    {
      v4 = *result;
      v5 = 0;
      if ( *(_WORD *)(*result + 8) )
      {
        v6 = a3;
        do
        {
          v7 = sub_700900(v6);
          v8 = v7;
          a2 = v7;
          if ( v7 )
            InterlockedIncrement((volatile LONG *)(v7 + 4));
          result = (int *)sub_4B34E0((_DWORD *)v4, v5, (LONG *)&a2);
          if ( v8 )
          {
            result = (int *)InterlockedDecrement((volatile LONG *)(v8 + 4));
            if ( !result )
              result = (int *)(**(int (__thiscall ***)(int, int))v8)(v8, 1);
          }
          ++v5;
        }
        while ( v5 < *(unsigned __int16 *)(v4 + 8) );
      }
    }
  }
  return result;
}
