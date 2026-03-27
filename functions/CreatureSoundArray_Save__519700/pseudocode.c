void __thiscall CreatureSoundArray_Save(_DWORD *this)
{
  int i; // ebx
  int **v3; // esi
  int *v4; // edi
  int v5; // ecx
  int v6; // eax
  size_t v7; // [esp-Ch] [ebp-1Ch]

  for ( i = 0; i < 0xA; ++i )
  {
    v3 = 0;
    if ( (unsigned int)i <= 9 )
      v3 = (int **)*(this + i);
    if ( v3 )
    {
      if ( v3[1] || *v3 )
      {
        TESForm_PutCurrentChunkData4(0x54445343, i);
        do
        {
          if ( !v3[1] && !*v3 )
            break;
          v4 = *v3;
          v5 = **v3;
          v6 = 0;
          if ( v5 )
            v6 = *(_DWORD *)(v5 + 0xC);
          TESForm_PutCurrentChunkData4(0x49445343, v6);
          LODWORD(v7) = 1;
          TESForm_PutFormRecordChunkData(0x43445343, v4 + 1, v7);
          v3 = (int **)v3[1];
        }
        while ( v3 );
      }
    }
  }
}
