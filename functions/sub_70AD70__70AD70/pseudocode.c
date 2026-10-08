char __thiscall sub_70AD70(NiNode *this, int a2)
{
  char result; // al
  unsigned int end; // ebp
  unsigned int v5; // esi
  NiAVObject *v6; // ecx
  NiObject *v7; // eax
  UInt32 numItems; // eax
  NiTList_Entry *head; // esi
  _DWORD *v10; // edi
  void *data; // ecx
  int *v12; // eax
  int v13; // eax

  result = sub_707B50(this, a2); /*0x70ad79*/
  if ( result ) /*0x70ad80*/
  {
    end = this->members.children.end; /*0x70ad8f*/
    if ( end == *(unsigned __int16 *)(a2 + 0xB6) ) /*0x70ad98*/
    {
      v5 = 0; /*0x70ada3*/
      if ( this->members.children.end ) /*0x70ad8f*/
      {
        do /*0x70adb0*/
        {
          if ( this->members.children.end > v5 ) /*0x70adb9*/
            v6 = this->members.children.data[v5]; /*0x70adc5*/
          else
            v6 = 0; /*0x70adbb*/
          if ( *(unsigned __int16 *)(a2 + 0xB6) > v5 ) /*0x70add1*/
            v7 = *(NiObject **)(*(_DWORD *)(a2 + 0xB0) + 4 * v5); /*0x70addd*/
          else
            v7 = 0; /*0x70add3*/
          if ( v6 ) /*0x70ade2*/
          {
            if ( !v7 || !v6->vtbl->super.Compare((NiObject *)v6, v7) ) /*0x70adee*/
              return 0; /*0x70adf2*/
          }
          else if ( v7 ) /*0x70ae52*/
          {
            return 0; /*0x70ae52*/
          }
          ++v5; /*0x70adf4*/
        }
        while ( v5 < end ); /*0x70adb0*/
      }
      numItems = this->members.effects.numItems; /*0x70adfb*/
      if ( numItems == *(_DWORD *)(a2 + 0xC8) ) /*0x70ae07*/
      {
        if ( numItems ) /*0x70ae0b*/
        {
          head = this->members.effects.head; /*0x70ae0d*/
          v10 = *(_DWORD **)(a2 + 0xC0); /*0x70ae15*/
          while ( head ) /*0x70ae1b*/
          {
            data = head->data; /*0x70ae20*/
            head = head->next; /*0x70ae28*/
            v12 = v10 + 2; /*0x70ae2a*/
            v10 = (_DWORD *)*v10; /*0x70ae2d*/
            v13 = *v12; /*0x70ae2f*/
            if ( data ) /*0x70ae31*/
            {
              if ( !v13 || !(*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)data + 0x2C))(data, v13) ) /*0x70ae3d*/
                return 0; /*0x70ae41*/
            }
            else if ( v13 ) /*0x70ae5f*/
            {
              return 0; /*0x70ae5f*/
            }
          }
        }
        return 1; /*0x70ae47*/
      }
      else
      {
        return 0; /*0x70ae54*/
      }
    }
    else
    {
      return 0; /*0x70ad9c*/
    }
  }
  return result; /*0x70ad82*/
}
