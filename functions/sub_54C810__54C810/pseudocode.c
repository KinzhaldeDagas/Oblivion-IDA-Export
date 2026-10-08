void __cdecl sub_54C810(float a1, int a2, BSTextureManager *a3, int a4, char a5)
{
  int *data; // esi
  int v6; // ebx
  NiTPointerList_Node_void *start; // edi
  double v8; // st7
  int v9; // ebp
  void (__thiscall **v10)(int, int, void *, _DWORD); // ebp
  int v11; // ebp
  float v12; // [esp+24h] [ebp-10h]
  double v13; // [esp+24h] [ebp-10h]
  float v14; // [esp+2Ch] [ebp-8h]
  float v15; // [esp+2Ch] [ebp-8h]
  double v16; // [esp+2Ch] [ebp-8h]
  float v17; // [esp+3Ch] [ebp+8h]
  float v18; // [esp+3Ch] [ebp+8h]
  float v19; // [esp+3Ch] [ebp+8h]

  data = 0; /*0x54c819*/
  if ( a2 ) /*0x54c81d*/
  {
    if ( a3 ) /*0x54c82a*/
    {
      v6 = a4; /*0x54c831*/
      if ( a4 ) /*0x54c837*/
      {
        if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 0xC))(a2) <= a1 ) /*0x54c857*/
        {
          v14 = 0.0; /*0x54c864*/
          v12 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 0xC))(a2); /*0x54c86c*/
          start = a3->unk00.start; /*0x54c870*/
          v8 = v12; /*0x54c873*/
          if ( !start ) /*0x54c879*/
            goto LABEL_16; /*0x54c879*/
          while ( 1 ) /*0x54c87f*/
          {
            v9 = (int)data; /*0x54c87f*/
            data = (int *)start->data; /*0x54c881*/
            if ( data ) /*0x54c886*/
            {
              v14 = v8; /*0x54c88a*/
              v12 = ((double (__thiscall *)(int *))*(_DWORD *)(*data + 0xC))(data) + v12; /*0x54c899*/
              v8 = v12; /*0x54c89d*/
            }
            if ( a1 <= v8 ) /*0x54c8ac*/
              break; /*0x54c8ac*/
            start = start->next; /*0x54c8ae*/
            if ( !start ) /*0x54c8b4*/
              goto LABEL_16; /*0x54c8b4*/
          }
          if ( data ) /*0x54c8bd*/
          {
            if ( v9 ) /*0x54c8c7*/
              a2 = v9; /*0x54c8c9*/
            v13 = a1 - v14; /*0x54c8e4*/
            v10 = (void (__thiscall **)(int, int, void *, _DWORD))(*(_DWORD *)v6 + 0x18); /*0x54c8e8*/
            v15 = v13 / ((double (__thiscall *)(int *))*(_DWORD *)(*data + 0xC))(data); /*0x54c8f9*/
            (*v10)(v6, a2, data, LODWORD(v15)); /*0x54c908*/
            if ( !a5 ) /*0x54c90f*/
            {
              v17 = v13; /*0x54c91e*/
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x10))(v6, LODWORD(v17)); /*0x54c92c*/
              v11 = *data; /*0x54c92e*/
              v16 = ((double (__thiscall *)(int *))*(_DWORD *)(*data + 0xC))(data); /*0x54c937*/
              v18 = v16 - ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 0xC))(v6); /*0x54c94c*/
              (*(void (__thiscall **)(int *, _DWORD))(v11 + 0x10))(data, LODWORD(v18)); /*0x54c959*/
              NiTPointerList__InsertBeforePosition(a3, (int)start, &a4); /*0x54c965*/
            }
          }
          else
          {
LABEL_16:
            if ( !a5 ) /*0x54c979*/
            {
              v19 = a1 - v8; /*0x54c985*/
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x10))(v6, LODWORD(v19)); /*0x54c992*/
              NiTPointerList__AddTail(a3, (void **)&a4); /*0x54c99d*/
            }
          }
        }
      }
    }
  }
}
