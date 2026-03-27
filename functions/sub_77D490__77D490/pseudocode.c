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

  for ( i = 0; i < (unsigned __int16)*(this + 0x13); ++i )
  {
    if ( i < (unsigned __int16)*(this + 0x13) )
    {
      v3 = *((_DWORD *)this + 8);
      v4 = *(_DWORD **)(v3 + 4 * i);
      *(_DWORD *)(v3 + 4 * i) = 0;
      if ( v4 )
        --*(this + 0x14);
      v5 = *(this + 0x13);
      if ( i == v5 - 1 )
        *(this + 0x13) = v5 - 1;
      if ( v4 )
      {
        v6 = v4[2];
        if ( v6 )
        {
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 8))(v4[2]);
          v4[2] = 0;
        }
        sub_77D390(v4);
        v7 = v4[0xF];
        v8 = v4[0x10];
        if ( v7 )
          *(_DWORD *)(v7 + 0x40) = v8;
        if ( v8 )
          *(_DWORD *)(v8 + 0x3C) = v7;
        v9 = dword_B4289C;
        if ( dword_B4289C )
        {
          *(_DWORD *)(v9 + 0x40) = v4;
          v9 = dword_B4289C;
        }
        v4[0xF] = v9;
        v4[0x10] = 0;
        dword_B4289C = (int)v4;
      }
    }
  }
  v10 = *((_DWORD *)this + 4);
  if ( v10 )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10 + 8))(*((_DWORD *)this + 4));
  *((_DWORD *)this + 4) = 0;
  v11 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 7) = &NiTArray<NiVBBlock *>::`vftable';
  FormHeapFree(v11);
}
