void __thiscall sub_77D490(_WORD *this)
{
  unsigned int i; // ebx
  int v3; // ecx
  _DWORD *v4; // esi
  unsigned __int16 v5; // ax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // [esp-4h] [ebp-10h]

  for ( i = 0; i < (unsigned __int16)*(this + 0x13); ++i ) /*0x77d499*/
  {
    if ( i < (unsigned __int16)*(this + 0x13) ) /*0x77d4aa*/
    {
      v3 = *((_DWORD *)this + 8); /*0x77d4ac*/
      v4 = *(_DWORD **)(v3 + 4 * i); /*0x77d4af*/
      *(_DWORD *)(v3 + 4 * i) = 0; /*0x77d4b7*/
      if ( v4 ) /*0x77d4b9*/
        --*(this + 0x14); /*0x77d4bb*/
      v5 = *(this + 0x13); /*0x77d4c1*/
      if ( i == v5 - 1 ) /*0x77d4cd*/
        *(this + 0x13) = v5 - 1; /*0x77d4d2*/
      if ( v4 ) /*0x77d4d8*/
      {
        v6 = v4[2]; /*0x77d4da*/
        if ( v6 ) /*0x77d4df*/
        {
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 8))(v4[2]); /*0x77d4e7*/
          v4[2] = 0; /*0x77d4e9*/
        }
        sub_77D390(v4); /*0x77d4ee*/
        v7 = v4[0xF]; /*0x77d4f3*/
        v8 = v4[0x10]; /*0x77d4f8*/
        if ( v7 ) /*0x77d4fb*/
          *(_DWORD *)(v7 + 0x40) = v8; /*0x77d4fd*/
        if ( v8 ) /*0x77d502*/
          *(_DWORD *)(v8 + 0x3C) = v7; /*0x77d504*/
        v9 = unk_B4289C; /*0x77d507*/
        if ( unk_B4289C ) /*0x77d507*/
        {
          *(_DWORD *)(v9 + 0x40) = v4; /*0x77d510*/
          v9 = unk_B4289C; /*0x77d513*/
        }
        v4[0xF] = v9; /*0x77d518*/
        v4[0x10] = 0; /*0x77d51b*/
        unk_B4289C = (int)v4; /*0x77d51e*/
      }
    }
  }
  v10 = *((_DWORD *)this + 4); /*0x77d534*/
  if ( v10 ) /*0x77d539*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10 + 8))(*((_DWORD *)this + 4)); /*0x77d541*/
  *((_DWORD *)this + 4) = 0; /*0x77d543*/
  v11 = *((_DWORD *)this + 8); /*0x77d549*/
  *((_DWORD *)this + 7) = &NiTArray<NiVBBlock *>::`vftable'; /*0x77d54a*/
  FormHeapFree(v11); /*0x77d551*/
}
