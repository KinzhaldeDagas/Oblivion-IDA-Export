char *__thiscall sub_74EAD0(NiNode *this, int a2)
{
  char *result; // eax
  UInt32 numItems; // ebp
  int v5; // esi
  unsigned int v6; // ebx
  unsigned int i; // edi
  int v8; // ecx
  unsigned int v9; // ebx
  unsigned int j; // edi
  int v11; // ecx

  sub_722FC0(this, a2);
  result = *(char **)&this->members.children.capacity;
  if ( result )
  {
    result = *((char **)result + 0x1A);
    if ( result )
      result = (char *)(*(int (__thiscall **)(char *, int))(*(_DWORD *)result + 0x80))(result, a2);
  }
  numItems = this->members.effects.numItems;
  while ( numItems )
  {
    v5 = *(_DWORD *)(numItems + 8);
    result = (char *)(numItems + 8);
    numItems = *(_DWORD *)numItems;
    if ( v5 )
    {
      result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
      if ( result )
      {
        while ( result != dword_B408C8 )
        {
          result = *((char **)result + 1);
          if ( !result )
            goto LABEL_9;
        }
        v6 = *(unsigned __int16 *)(v5 + 0x5C);
        for ( i = 0; i < v6; ++i )
        {
          if ( i < *(unsigned __int16 *)(v5 + 0x5C) )
          {
            v8 = *(_DWORD *)(*(_DWORD *)(v5 + 0x54) + 4 * i);
            if ( v8 )
              result = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x80))(v8, a2);
          }
        }
      }
      else
      {
LABEL_9:
        result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
        if ( result )
        {
          while ( result != dword_B40A28 )
          {
            result = *((char **)result + 1);
            if ( !result )
              goto LABEL_24;
          }
          v9 = *(unsigned __int16 *)(v5 + 0x22);
          for ( j = 0; j < v9; ++j )
          {
            if ( j < *(unsigned __int16 *)(v5 + 0x22) )
            {
              v11 = *(_DWORD *)(*(_DWORD *)(v5 + 0x1C) + 4 * j);
              if ( v11 )
                result = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x80))(v11, a2);
            }
          }
        }
      }
    }
LABEL_24:
    ;
  }
  return result;
}
