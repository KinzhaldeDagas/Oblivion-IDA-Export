char __thiscall sub_749710(_BYTE *this, unsigned int keyOut)
{
  unsigned int v2; // ebx
  _DWORD *v5; // edi
  _DWORD *v6; // ebx
  int *v7; // esi
  char v8; // al
  _DWORD *v9; // edi
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-Ch] BYREF
  void *valueOut; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  v2 = keyOut; /*0x749714*/
  if ( !sub_722710((int *)this, keyOut) || *(this + 0xC0) != *(_BYTE *)(v2 + 0xC0) ) /*0x74973b*/
    return 0; /*0x74972c*/
  v5 = *((_DWORD **)this + 0x32); /*0x74973f*/
  if ( v5 )
  {
    v6 = (_DWORD *)(v2 + 0xD4); /*0x749749*/
    while ( 1 )
    {
      v7 = (int *)v5[2]; /*0x749750*/
      v5 = (_DWORD *)*v5; /*0x749759*/
      v8 = NiTMap_GetAt(v6, v7[2], &position); /*0x749763*/
      if ( !(*(unsigned __int8 (__thiscall **)(int *, MEF_U32PointerMapEntry32 *))(*v7 + 0x2C))(
              v7,
              v8 != 0 ? position : 0) )
        break; /*0x749778*/
      if ( !v5 ) /*0x749780*/
        goto LABEL_8; /*0x749780*/
    }
  }
  else
  {
LABEL_8:
    position = (MEF_U32PointerMapEntry32 *)NiTMapBase_GetFirstNode((unsigned int *)this + 0x35); /*0x749782*/
    if ( !position ) /*0x749795*/
      return 1; /*0x7497f0*/
    v9 = (_DWORD *)(keyOut + 0xD4); /*0x74979b*/
    while ( 1 ) /*0x7497b2*/
    {
      NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)(this + 0xD4), &position, &keyOut, &valueOut); /*0x7497b2*/
      if ( !NiTMap_GetAt(v9, keyOut, &v12) /*0x7497da*/
        || !(*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)valueOut + 0x2C))(valueOut, v12) )
      {
        break; /*0x7497da*/
      }
      if ( !position ) /*0x7497e5*/
        return 1; /*0x7497e5*/
    }
  }
  return 0; /*0x749725*/
}
