void __thiscall CreatureSoundArray_Save(_DWORD *this)
{
  int i; // ebx
  int **v3; // esi
  int *v4; // edi
  int v5; // ecx
  int v6; // eax
  size_t v7; // [esp-Ch] [ebp-1Ch]

  for ( i = 0; i < 0xA; ++i ) /*0x519706*/
  {
    v3 = 0; /*0x519708*/
    if ( (unsigned int)i <= 9 ) /*0x51970d*/
      v3 = (int **)*(this + i); /*0x51970f*/
    if ( v3 ) /*0x519715*/
    {
      if ( v3[1] || *v3 ) /*0x51971d*/
      {
        TESForm_PutCurrentChunkData4(0x54445343, i); /*0x519728*/
        do /*0x51976b*/
        {
          if ( !v3[1] && !*v3 ) /*0x519736*/
            break; /*0x519739*/
          v4 = *v3; /*0x51973b*/
          v5 = **v3; /*0x51973d*/
          v6 = 0; /*0x51973f*/
          if ( v5 ) /*0x519743*/
            v6 = *(_DWORD *)(v5 + 0xC); /*0x519745*/
          TESForm_PutCurrentChunkData4(0x49445343, v6); /*0x51974e*/
          LODWORD(v7) = 1; /*0x519753*/
          TESForm_PutFormRecordChunkData(0x43445343, v4 + 1, v7); /*0x51975e*/
          v3 = (int **)v3[1]; /*0x519763*/
        }
        while ( v3 ); /*0x51976b*/
      }
    }
  }
}
