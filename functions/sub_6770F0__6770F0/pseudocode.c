void __thiscall sub_6770F0(char *this)
{
  char *v2; // esi
  _DWORD *v3; // eax
  unsigned int i; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  _DWORD *j; // esi
  _DWORD *v8; // eax
  bool v9; // zf
  size_t v10; // [esp+0h] [ebp-34h]
  size_t v11; // [esp+0h] [ebp-34h]
  unsigned __int16 Dst; // [esp+18h] [ebp-1Ch] BYREF
  char *v13; // [esp+1Ch] [ebp-18h]
  int v14; // [esp+20h] [ebp-14h]
  _DWORD *v15; // [esp+24h] [ebp-10h]
  unsigned int v16; // [esp+30h] [ebp-4h]

  LODWORD(v10) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &flt_B3BCF0, v10);
  sub_673B10(0.0);
  v2 = this + 0x28;
  v13 = v2;
  v14 = 6;
  do
  {
    LODWORD(v11) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v11);
    if ( Dst )
    {
      if ( !*(_DWORD *)v2 )
      {
        v3 = (_DWORD *)FormHeapAlloc(8u);
        if ( v3 )
        {
          *v3 = 0;
          v3[1] = 0;
        }
        else
        {
          v3 = 0;
        }
        *(_DWORD *)v2 = v3;
      }
      for ( i = 0; i < Dst; ++i )
      {
        v5 = (_DWORD *)FormHeapAlloc(0x30u);
        v15 = v5;
        v16 = 0;
        if ( v5 )
          v6 = sub_605E50(v5);
        else
          v6 = 0;
        v16 = 0xFFFFFFFF;
        sub_606520(v6);
        if ( v6 )
        {
          for ( j = *(_DWORD **)v2; j[1]; j = (_DWORD *)j[1] )
            ;
          if ( *j )
          {
            v8 = (_DWORD *)FormHeapAlloc(8u);
            if ( v8 )
            {
              *v8 = v6;
              v8[1] = 0;
              j[1] = v8;
            }
            else
            {
              j[1] = 0;
            }
          }
          else
          {
            *j = v6;
          }
        }
        v2 = v13;
      }
    }
    v2 += 4;
    v9 = v14-- == 1;
    v13 = v2;
  }
  while ( !v9 );
}
