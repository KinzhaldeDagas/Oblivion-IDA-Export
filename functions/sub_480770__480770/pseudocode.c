char __cdecl sub_480770(int a1)
{
  int v1; // ebp
  unsigned int i; // ebx
  _DWORD *v3; // esi
  char *v4; // edi
  void (__thiscall ***v6)(_DWORD, int); // esi
  size_t v7; // [esp-4h] [ebp-14h]

  v1 = a1;
  if ( a1 )
  {
LABEL_2:
    for ( i = 0; *(unsigned __int16 *)(v1 + 0xB6) > i; ++i )
    {
      v3 = *(_DWORD **)(*(_DWORD *)(v1 + 0xB0) + 4 * i);
      if ( v3 )
      {
        v4 = (char *)v3[2];
        if ( v4 )
        {
          if ( !_strcmp(v4, off_A3CE0C) )
          {
            (*(void (__thiscall **)(int, int *, unsigned int))(*(_DWORD *)v1 + 0x8C))(v1, &a1, i);
            v6 = (void (__thiscall ***)(_DWORD, int))a1;
            if ( a1 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(a1 + 4)) )
              {
                if ( v6 )
                  (**v6)(v6, 1);
              }
            }
            return 1;
          }
          LODWORD(v7) = 9;
          if ( !_strnicmp(v4, "FadeNode ", v7) )
          {
            v1 = (*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
            if ( v1 )
              goto LABEL_2;
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
