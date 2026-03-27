void *__thiscall sub_4A3560(_BYTE *this)
{
  int v2; // eax
  char v3; // cl
  size_t v5; // [esp-4h] [ebp-10h]
  int Src; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h]

  Src = 0;
  v7 = 0;
  v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0xC))(this);
  v3 = *(this + 6);
  LODWORD(v5) = 8;
  Src = v2;
  LOBYTE(v7) = *(this + 4);
  BYTE1(v7) = v3;
  return TESForm_PutFormRecordChunkData(0x54414452, &Src, v5);
}
