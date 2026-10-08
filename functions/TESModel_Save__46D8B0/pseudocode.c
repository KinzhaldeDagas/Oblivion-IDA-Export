int __thiscall TESModel_Save(void *this, int a2, int a3, int a4)
{
  int result; // eax
  unsigned int v6; // eax
  void *v7; // eax
  size_t v8; // [esp+0h] [ebp-8h]

  LOWORD(result) = *((_WORD *)this + 4); /*0x46d8b3*/
  if ( (_WORD)result == 0xFFFF ) /*0x46d8bb*/
    result = strlen(*((const char **)this + 1)); /*0x46d8c0*/
  else
    result = (unsigned __int16)result; /*0x46d8d0*/
  if ( result ) /*0x46d8d5*/
  {
    LOWORD(v6) = *((_WORD *)this + 4); /*0x46d8d7*/
    if ( (_WORD)v6 == 0xFFFF ) /*0x46d8df*/
      v6 = strlen(*((const char **)this + 1)); /*0x46d8e4*/
    else
      v6 = (unsigned __int16)v6; /*0x46d8f4*/
    LODWORD(v8) = v6 + 1; /*0x46d8fa*/
    v7 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x14))(this); /*0x46d902*/
    TESForm_PutFormRecordChunkData(a2, v7, v8); /*0x46d90a*/
    TESForm_PutCurrentChunkData4(a3, COERCE_INT(*((float *)this + 3))); /*0x46d91e*/
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x14))(this); /*0x46d92d*/
  }
  return result; /*0x46d92f*/
}
