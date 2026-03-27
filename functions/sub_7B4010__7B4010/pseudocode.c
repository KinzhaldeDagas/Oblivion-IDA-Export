NiTPointerList_Node_void *__cdecl sub_7B4010(int a1, void *a2, int a3, NiAVObject **a4, int a5, int a6, int a7)
{
  __int16 v7; // bp
  int v8; // edi
  int v9; // ebx
  NiTPointerList_Node_void *result; // eax
  float *v11; // esi
  bool v12; // zf
  int v13; // [esp-8h] [ebp-2Ch]
  int v14; // [esp+10h] [ebp-14h]
  float v15[4]; // [esp+14h] [ebp-10h] BYREF

  v7 = a7;
  dword_B42D60 += (unsigned __int16)a7;
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      a7 = 0;
      result = (NiTPointerList_Node_void *)(unsigned __int16)sub_7B3BE0(a4, a1, (NiAVObject **)&a7);
      if ( !a7 )
        break;
      v14 = (unsigned __int16)result;
      if ( (_WORD)result )
      {
        v11 = (float *)(a5 + 0xC * v9 + 8);
        do
        {
          if ( !v7 )
            break;
          v15[0] = v11[0xFFFFFFFE];
          v15[1] = v11[0xFFFFFFFF];
          v15[2] = *v11;
          v15[3] = *(float *)(a6 + 4 * v9);
          sub_812510(a7, v15, (int)a2);
          ++v8;
          --v7;
          ++v9;
          v11 += 3;
        }
        while ( v8 < v14 );
      }
      sub_802AE0(a7);
      v8 = 0;
      if ( !v7 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 0x78))(a3);
    v13 = (int)a4[2];
    a7 = 0;
    NiTMap_GetAt(&off_B2C33C, v13, &a7);
    result = *(NiTPointerList_Node_void **)(a7 + 0x24);
    if ( result )
    {
      while ( 1 )
      {
        v12 = a2 == result->data;
        result = result->next;
        if ( v12 )
          break;
        if ( !result )
          return sub_5B1E20((BSTextureManager *)(a7 + 0x20), &a2);
      }
    }
    else
    {
      return sub_5B1E20((BSTextureManager *)(a7 + 0x20), &a2);
    }
  }
  return result;
}
