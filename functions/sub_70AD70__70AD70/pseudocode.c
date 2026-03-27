char __thiscall sub_70AD70(NiNode *this, int a2)
{
  char result; // al
  unsigned int end; // ebp
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // eax
  UInt32 numItems; // eax
  NiTList_Entry *head; // esi
  _DWORD *v10; // edi
  void *data; // ecx
  int *v12; // eax
  int v13; // eax

  result = sub_707B50(this, a2);
  if ( result )
  {
    end = this->members.children.end;
    if ( end == *(unsigned __int16 *)(a2 + 0xB6) )
    {
      v5 = 0;
      if ( this->members.children.end )
      {
        do
        {
          if ( this->members.children.end > v5 )
            v6 = *((_DWORD *)&this->members.children.data->vtbl + v5);
          else
            v6 = 0;
          if ( *(unsigned __int16 *)(a2 + 0xB6) > v5 )
            v7 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * v5);
          else
            v7 = 0;
          if ( v6 )
          {
            if ( !v7 || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x2C))(v6, v7) )
              return 0;
          }
          else if ( v7 )
          {
            return 0;
          }
          ++v5;
        }
        while ( v5 < end );
      }
      numItems = this->members.effects.numItems;
      if ( numItems == *(_DWORD *)(a2 + 0xC8) )
      {
        if ( numItems )
        {
          head = this->members.effects.head;
          v10 = *(_DWORD **)(a2 + 0xC0);
          while ( head )
          {
            data = head->data;
            head = head->next;
            v12 = v10 + 2;
            v10 = (_DWORD *)*v10;
            v13 = *v12;
            if ( data )
            {
              if ( !v13 || !(*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)data + 0x2C))(data, v13) )
                return 0;
            }
            else if ( v13 )
            {
              return 0;
            }
          }
        }
        return 1;
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
  return result;
}
