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

  if ( a3 ) /*0x54c9ca*/
  {
    if ( a4 ) /*0x54c9d6*/
    {
      if ( a4->unk00.numItems ) /*0x54c9dc*/
      {
        if ( a5 ) /*0x54c9ec*/
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 0xC))(a3, a1); /*0x54c9fa*/
          retaddr = result; /*0x54c9fc*/
          *(float *)&v14 = 0.0 - retaddr; /*0x54ca10*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 0x10))(a3, 0.0); /*0x54ca19*/
          for ( i = a5->unk00.start; i; i = i->next ) /*0x54ca20*/
          {
            data = (int)i->data; /*0x54ca22*/
            if ( data ) /*0x54ca27*/
            {
              *(float *)&v14 = ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)data + 0xC))(i->data) /*0x54ca3a*/
                             + *(float *)&v14;
              sub_54C810(*(float *)&v14, a3, a4, data, 1); /*0x54ca47*/
            }
          }
          result = retaddr; /*0x54ca57*/
          (*(void (__thiscall **)(int, float))(*(_DWORD *)a3 + 0x10))(a3, COERCE_FLOAT(LODWORD(retaddr))); /*0x54ca64*/
          start = a4->unk00.start; /*0x54ca6b*/
          (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 0xC))(a3); /*0x54ca70*/
          for ( *(float *)&v13 = 0.0; start; start = start->next ) /*0x54ca78*/
          {
            v10 = start->data; /*0x54ca80*/
            if ( v10 ) /*0x54ca85*/
            {
              v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)v10 + 0x24))(start->data); /*0x54ca90*/
              if ( v11 ) /*0x54ca94*/
              {
                (*(void (__thiscall **)(void *))(*(_DWORD *)v10 + 0xC))(v10); /*0x54ca9d*/
                *(float *)&v13 = result + *(float *)&v13; /*0x54caaa*/
                sub_54C810(*(float *)&v13, a3, a5, v11, 0); /*0x54cab8*/
                result = 1.0; /*0x54cabd*/
                (*(void (__thiscall **)(int, void *, _DWORD, int, _DWORD))(*(_DWORD *)v11 + 0x1C))(v11, v10, 1.0, 1, 0); /*0x54cad2*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x54cadc*/
}
