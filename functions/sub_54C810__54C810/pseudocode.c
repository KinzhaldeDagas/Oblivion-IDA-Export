void __cdecl sub_54C810(float a1, int a2, BSTextureManager *a3, int a4, char a5)
{
  int data; // esi
  int v6; // ebx
  NiTPointerList_Node_void *start; // edi
  double v8; // st7
  int v9; // ebp
  void (__thiscall **v10)(int, int, int, _DWORD); // ebp
  int v11; // ebp
  float v12; // [esp+24h] [ebp-10h]
  double v13; // [esp+24h] [ebp-10h]
  float v14; // [esp+2Ch] [ebp-8h]
  float v15; // [esp+2Ch] [ebp-8h]
  double v16; // [esp+2Ch] [ebp-8h]
  float v17; // [esp+3Ch] [ebp+8h]
  float v18; // [esp+3Ch] [ebp+8h]
  float v19; // [esp+3Ch] [ebp+8h]

  data = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v6 = a4;
      if ( a4 )
      {
        if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 0xC))(a2) <= a1 )
        {
          v14 = 0.0;
          v12 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 0xC))(a2);
          start = a3->unk00.start;
          v8 = v12;
          if ( !start )
            goto LABEL_16;
          while ( 1 )
          {
            v9 = data;
            data = (int)start->data;
            if ( data )
            {
              v14 = v8;
              v12 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)data + 0xC))(data) + v12;
              v8 = v12;
            }
            if ( a1 <= v8 )
              break;
            start = start->next;
            if ( !start )
              goto LABEL_16;
          }
          if ( data )
          {
            if ( v9 )
              a2 = v9;
            v13 = a1 - v14;
            v10 = (void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v6 + 0x18);
            v15 = v13 / ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)data + 0xC))(data);
            (*v10)(v6, a2, data, LODWORD(v15));
            if ( !a5 )
            {
              v17 = v13;
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x10))(v6, LODWORD(v17));
              v11 = *(_DWORD *)data;
              v16 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)data + 0xC))(data);
              v18 = v16 - ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 0xC))(v6);
              (*(void (__thiscall **)(int, _DWORD))(v11 + 0x10))(data, LODWORD(v18));
              sub_589640(a3, (int)start, &a4);
            }
          }
          else
          {
LABEL_16:
            if ( !a5 )
            {
              v19 = a1 - v8;
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x10))(v6, LODWORD(v19));
              sub_5B1E20(a3, (void **)&a4);
            }
          }
        }
      }
    }
  }
}
