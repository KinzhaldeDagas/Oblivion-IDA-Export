void __thiscall sub_6C6A50(_DWORD *this, char a2)
{
  int v2; // ebp
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // edx
  unsigned int i; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < *(this + 3); ++i )
  {
    v4 = *(this + 5);
    v5 = *(_DWORD *)(v4 + v2);
    v6 = v2 + v4;
    if ( v5 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( v7 )
      {
        LOBYTE(v8) = *(_BYTE *)(v6 + 0xD);
        if ( (_BYTE)v8 == 0xFF )
          v8 = a2;
        else
          v8 = (unsigned __int8)v8;
        *(_BYTE *)(v6 + 0xC) = (*(int (__thiscall **)(int, int, _DWORD, int, _DWORD))(*(_DWORD *)v7 + 0x98))(
                                 v7,
                                 v5,
                                 0.0,
                                 v8,
                                 1.0);
      }
    }
    v2 += 0x10;
  }
}
