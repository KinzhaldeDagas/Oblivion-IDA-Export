double __usercall sub_54C9C0@<st0>(
        int a1@<edi>,
        double result@<st0>,
        int a3,
        BSTextureManager *a4,
        BSTextureManager *a5)
{
  NiTPointerList_Node_void *i; // edi
  int data; // esi
  NiTPointerList_Node_void *start; // ebp
  void *v10; // esi
  int v11; // edi
  float retaddr; // [esp+30h] [ebp+0h]
  int v13; // [esp+34h] [ebp+4h]
  int v14; // [esp+38h] [ebp+8h]

  if ( a3 )
  {
    if ( a4 )
    {
      if ( a4->unk00.numItems )
      {
        if ( a5 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 0xC))(a3, a1);
          retaddr = result;
          *(float *)&v14 = 0.0 - retaddr;
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 0x10))(a3, 0.0);
          for ( i = a5->unk00.start; i; i = i->next )
          {
            data = (int)i->data;
            if ( data )
            {
              *(float *)&v14 = ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)data + 0xC))(i->data)
                             + *(float *)&v14;
              sub_54C810(*(float *)&v14, a3, a4, data, 1);
            }
          }
          result = retaddr;
          (*(void (__thiscall **)(int, float))(*(_DWORD *)a3 + 0x10))(a3, COERCE_FLOAT(LODWORD(retaddr)));
          start = a4->unk00.start;
          (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 0xC))(a3);
          for ( *(float *)&v13 = 0.0; start; start = start->next )
          {
            v10 = start->data;
            if ( v10 )
            {
              v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)v10 + 0x24))(start->data);
              if ( v11 )
              {
                (*(void (__thiscall **)(void *))(*(_DWORD *)v10 + 0xC))(v10);
                *(float *)&v13 = result + *(float *)&v13;
                sub_54C810(*(float *)&v13, a3, a5, v11, 0);
                result = 1.0;
                (*(void (__thiscall **)(int, void *, _DWORD, int, _DWORD))(*(_DWORD *)v11 + 0x1C))(v11, v10, 1.0, 1, 0);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
