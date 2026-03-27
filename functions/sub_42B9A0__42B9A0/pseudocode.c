void *__thiscall sub_42B9A0(int *this)
{
  int v1; // edx
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  void *result; // eax
  size_t v10; // [esp-4h] [ebp-20h] BYREF
  int v11; // [esp+4h] [ebp-18h]
  int v12; // [esp+8h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-10h]
  int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  v1 = *this;
  if ( *this )
  {
    HIDWORD(v10) = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v2 = *(_DWORD *)(v1 + 0xC);
    v3 = *(this + 1);
    HIDWORD(v10) = v2;
    v4 = *(this + 2);
    v11 = v3;
    v5 = *(this + 3);
    v12 = v4;
    v6 = *(this + 4);
    v13 = v5;
    v7 = *(this + 5);
    v14 = v6;
    v8 = *(this + 6);
    LODWORD(v10) = 0x1C;
    v15 = v7;
    v16 = v8;
    return TESForm_PutFormRecordChunkData(0x4C455458, (char *)&v10 + 4, v10);
  }
  return result;
}
