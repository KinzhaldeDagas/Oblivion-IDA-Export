void __thiscall sub_5DE920(_DWORD *this)
{
  char *v2; // eax
  char v3[4]; // [esp+4h] [ebp-4h] BYREF

  _sprintf(v3, (const char *)&off_A6DD20, *(this + 0x3F));
  v2 = v3;
  if ( !*(this + 0x3F) )
    v2 = (char *)dword_B38D80;
  Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB3, v2);
}
