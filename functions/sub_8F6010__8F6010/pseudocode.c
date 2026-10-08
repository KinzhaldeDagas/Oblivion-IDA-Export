int __stdcall sub_8F6010(int a1, int a2, int (__cdecl *a3)(const char *, int), int a4)
{
  HANDLE CurrentProcess; // esi
  int v5; // ebx
  int v6; // ebp
  int v7; // edx
  __int16 v8; // ax
  size_t v10; // [esp-14h] [ebp-1044h]
  int v11; // [esp+10h] [ebp-1020h] BYREF
  HANDLE i; // [esp+14h] [ebp-101Ch]
  _DWORD v13[2]; // [esp+18h] [ebp-1018h] BYREF
  int v14; // [esp+20h] [ebp-1010h]
  char *Format; // [esp+24h] [ebp-100Ch]
  int v16; // [esp+28h] [ebp-1008h]
  _DWORD v17[5]; // [esp+2Ch] [ebp-1004h] BYREF
  _DWORD v18[2]; // [esp+40h] [ebp-FF0h] BYREF
  __int16 v19; // [esp+48h] [ebp-FE8h]
  char Dest[2048]; // [esp+82Ch] [ebp-804h] BYREF

  CurrentProcess = GetCurrentProcess(); /*0x8f602e*/
  v5 = 0; /*0x8f6037*/
  for ( i = CurrentProcess; v5 < a2; ++v5 ) /*0x8f603f*/
  {
    v6 = *(_DWORD *)(a1 + 4 * v5); /*0x8f6057*/
    memset(&v17[1], 0, 0xC); /*0x8f6060*/
    v18[0] = 0; /*0x8f607c*/
    v17[0] = 0x18; /*0x8f6080*/
    v17[4] = 0x7E8; /*0x8f6088*/
    v11 = 0; /*0x8f6090*/
    if ( unk_BA81B4(CurrentProcess, v6, &v11, v17) ) /*0x8f6094*/
    {
      if ( !strcmp((const char *)v18, "WinMain") ) /*0x8f60d1*/
        return a3("-------------------------------------------------------------------\n\n", a4); /*0x8f60d1*/
      CurrentProcess = i; /*0x8f60d7*/
    }
    else
    {
      v7 = dword_A32074; /*0x8f60a4*/
      v8 = word_A32078; /*0x8f60aa*/
      v18[0] = dword_A32070; /*0x8f60b0*/
      v18[1] = v7; /*0x8f60b4*/
      v19 = v8; /*0x8f60b8*/
    }
    v13[1] = 0; /*0x8f60e6*/
    v14 = 0; /*0x8f60ef*/
    Format = 0; /*0x8f60f4*/
    v16 = 0; /*0x8f60f9*/
    v13[0] = 0x14; /*0x8f60fd*/
    unk_BA81A4(CurrentProcess, v6, &v11, v13); /*0x8f6105*/
    HIDWORD(v10) = "%s(%i):'%s'\n"; /*0x8f611a*/
    LODWORD(v10) = 0x800; /*0x8f6126*/
    _snprintf(Dest, v10, Format, v14, v18); /*0x8f612c*/
    a3(Dest, a4); /*0x8f6141*/
  }
  return a3("-------------------------------------------------------------------\n\n", a4); /*0x8f617b*/
}
