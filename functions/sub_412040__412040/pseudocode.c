void *__thiscall sub_412040(_DWORD *this, int Src)
{
  int i; // eax
  void *result; // eax
  size_t v5; // [esp-4h] [ebp-8h]
  size_t v6; // [esp-4h] [ebp-8h]
  size_t v7; // [esp-4h] [ebp-8h]

  LODWORD(v5) = 0x20;
  SaveLoad_SaveData(this + 1, v5);
  if ( !(_BYTE)Src )
  {
    Src = 1;
    for ( i = *(this + 0xA); i; i = *(_DWORD *)(i + 0x28) )
      ++Src;
    LODWORD(v6) = 2;
    SaveLoad_SaveData(&Src, v6);
  }
  LODWORD(v6) = 1;
  SaveLoad_SaveData(this + 9, v6);
  LODWORD(v7) = 1;
  result = (void *)SaveLoad_SaveData((char *)this + 0x25, v7);
  if ( *(this + 0xA) )
    return (*(void *(__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 0xA) + 0xC))(*(this + 0xA), 1);
  return result;
}
