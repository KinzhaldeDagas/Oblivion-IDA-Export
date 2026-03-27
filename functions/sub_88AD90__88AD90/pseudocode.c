void __thiscall sub_88AD90(int *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // ebp
  unsigned int i; // edi
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int *v8; // ecx
  int v9; // ecx
  int v10; // [esp+4h] [ebp-8h] BYREF

  v2 = *(this + 0xD);
  if ( v2 )
  {
    if ( v2 >= 0xC8 )
      *(this + 0xD) = 0xC8;
    v3 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 0x58))(this);
    if ( v3 )
    {
      sub_89CD00(v3, *(this + 0xC), *(this + 0xD));
      for ( i = 0; i < *(this + 0xD); ++i )
      {
        v5 = *(this + 0xC);
        v6 = *(_DWORD *)(v5 + 4 * i);
        if ( v6 )
          v7 = *(_DWORD *)(v6 + 0xC);
        else
          v7 = 0;
        if ( v7 )
          *(_BYTE *)(v7 + 0x10) &= ~1u;
        else
          sub_899B30(v3, *(int (__stdcall ****)(signed int))(v5 + 4 * i));
        v8 = *(int **)(*(this + 0xC) + 4 * i);
        if ( v8 )
        {
          v9 = *sub_47F990(v8, &v10, (int)dword_BA7B80);
          if ( v9 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 0x50))(v9);
        }
        sub_8BC730(*(int (__stdcall ****)(signed int))(*(this + 0xC) + 4 * i));
      }
      _memset(*(this + 0xC), 0, 4 * *(this + 0xD));
      *(this + 0xD) = 0;
    }
  }
}
