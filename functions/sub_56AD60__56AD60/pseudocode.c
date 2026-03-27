void *__thiscall sub_56AD60(int *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ebx
  signed int i; // edi
  int v10; // eax
  int v11; // esi
  size_t v13; // [esp-4h] [ebp-28h]
  int Src; // [esp+Ch] [ebp-18h] BYREF
  int v15; // [esp+10h] [ebp-14h]
  int v16; // [esp+14h] [ebp-10h]
  _DWORD v17[3]; // [esp+18h] [ebp-Ch]

  v2 = *this;
  v3 = *(this + 1);
  v4 = *(this + 2);
  Src = v2;
  v17[0] = *(this + 3);
  v5 = *((unsigned __int16 *)this + 4);
  v15 = v3;
  v6 = *(this + 4);
  v16 = v4;
  v7 = *(this + 5);
  v17[1] = v6;
  v17[2] = v7;
  v8 = sub_56B170(v5);
  for ( i = 0; i < v8; ++i )
  {
    if ( sub_56B190(*((unsigned __int16 *)this + 4), i) )
    {
      v10 = v17[i];
      if ( v10 )
        v17[i] = *(_DWORD *)(v10 + 0xC);
    }
  }
  if ( (*(_BYTE *)this & 4) != 0 )
  {
    v11 = *(this + 1);
    if ( v11 )
      v15 = *(_DWORD *)(v11 + 0xC);
  }
  LODWORD(v13) = 0x18;
  return TESForm_PutFormRecordChunkData(0x41445443, &Src, v13);
}
