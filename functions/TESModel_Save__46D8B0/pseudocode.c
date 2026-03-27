int __thiscall TESModel_Save(void *this, int a2, int a3, int a4)
{
  int result; // eax
  unsigned int v6; // eax
  void *v7; // eax
  size_t v8; // [esp+0h] [ebp-8h]

  LOWORD(result) = *((_WORD *)this + 4);
  if ( (_WORD)result == 0xFFFF )
    result = strlen(*((const char **)this + 1));
  else
    result = (unsigned __int16)result;
  if ( result )
  {
    LOWORD(v6) = *((_WORD *)this + 4);
    if ( (_WORD)v6 == 0xFFFF )
      v6 = strlen(*((const char **)this + 1));
    else
      v6 = (unsigned __int16)v6;
    LODWORD(v8) = v6 + 1;
    v7 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x14))(this);
    TESForm_PutFormRecordChunkData(a2, v7, v8);
    TESForm_PutCurrentChunkData4(a3, COERCE_INT(*((float *)this + 3)));
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x14))(this);
  }
  return result;
}
