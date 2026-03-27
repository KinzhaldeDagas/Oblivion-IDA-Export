void __thiscall sub_46E650(char *this)
{
  char *v1; // esi
  _DWORD *v2; // eax
  int v3; // edx
  size_t v4; // [esp-4h] [ebp-10h]
  _DWORD Src[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = this + 4;
  if ( this != (char *)0xFFFFFFFC )
  {
    do
    {
      v2 = *(_DWORD **)v1;
      if ( !*(_DWORD *)v1 )
        break;
      if ( (*(_DWORD *)(*v2 + 8) & 0x20) == 0 )
      {
        v3 = v2[1];
        LODWORD(v4) = 8;
        Src[0] = *(_DWORD *)(*v2 + 0xC);
        Src[1] = v3;
        TESForm_PutFormRecordChunkData(0x4D414E58, Src, v4);
      }
      v1 = *((char **)v1 + 1);
    }
    while ( v1 );
  }
}
