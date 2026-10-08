NiTPointerList_Node_void *__cdecl sub_7B4010(int a1, void *a2, int a3, NiAVObject **a4, int a5, int a6, int a7)
{
  __int16 v7; // bp
  int v8; // edi
  int v9; // ebx
  NiTPointerList_Node_void *result; // eax
  float *v11; // esi
  bool v12; // zf
  NiAVObject *v13; // [esp-8h] [ebp-2Ch]
  int v14; // [esp+10h] [ebp-14h]
  float v15[4]; // [esp+14h] [ebp-10h] BYREF

  v7 = a7; /*0x7b4015*/
  unk_B42D60 += (unsigned __int16)a7; /*0x7b401d*/
  v8 = 0; /*0x7b4024*/
  v9 = 0; /*0x7b4026*/
  if ( v7 ) /*0x7b402b*/
  {
    while ( 1 ) /*0x7b4045*/
    {
      a7 = 0; /*0x7b4045*/
      result = (NiTPointerList_Node_void *)(unsigned __int16)sub_7B3BE0(a4, a1, (NiAVObject **)&a7); /*0x7b4055*/
      if ( !a7 ) /*0x7b4058*/
        break; /*0x7b4058*/
      v14 = (unsigned __int16)result; /*0x7b4063*/
      if ( (_WORD)result ) /*0x7b4067*/
      {
        v11 = (float *)(a5 + 0xC * v9 + 8); /*0x7b4070*/
        do /*0x7b40be*/
        {
          if ( !v7 ) /*0x7b4077*/
            break; /*0x7b4077*/
          v15[0] = v11[0xFFFFFFFE]; /*0x7b4084*/
          v15[1] = v11[0xFFFFFFFF]; /*0x7b408c*/
          v15[2] = *v11; /*0x7b4097*/
          v15[3] = *(float *)(a6 + 4 * v9); /*0x7b40a2*/
          sub_812510(a7, v15, (int)a2); /*0x7b40a6*/
          ++v8; /*0x7b40ab*/
          --v7; /*0x7b40ae*/
          ++v9; /*0x7b40b4*/
          v11 += 3; /*0x7b40b7*/
        }
        while ( v8 < v14 ); /*0x7b40be*/
      }
      sub_802AE0(a7); /*0x7b40c4*/
      v8 = 0; /*0x7b40c9*/
      if ( !v7 ) /*0x7b40ce*/
        goto LABEL_8; /*0x7b40ce*/
    }
  }
  else
  {
LABEL_8:
    (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 0x78))(a3); /*0x7b40d4*/
    v13 = a4[2]; /*0x7b40eb*/
    a7 = 0; /*0x7b40f1*/
    NiTMap_GetAt(&stru_B2C33C, (int)v13, &a7); /*0x7b40f5*/
    result = *(NiTPointerList_Node_void **)(a7 + 0x24); /*0x7b40fe*/
    if ( result ) /*0x7b4103*/
    {
      while ( 1 ) /*0x7b4109*/
      {
        v12 = a2 == result->data; /*0x7b4109*/
        result = result->next; /*0x7b4111*/
        if ( v12 ) /*0x7b4113*/
          break; /*0x7b4113*/
        if ( !result ) /*0x7b4117*/
          return NiTPointerList__AddTail((BSTextureManager *)(a7 + 0x20), &a2); /*0x7b4117*/
      }
    }
    else
    {
      return NiTPointerList__AddTail((BSTextureManager *)(a7 + 0x20), &a2); /*0x7b4132*/
    }
  }
  return result; /*0x7b4126*/
}
