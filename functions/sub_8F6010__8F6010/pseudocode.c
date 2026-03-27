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

  CurrentProcess = GetCurrentProcess();
  v5 = 0;
  for ( i = CurrentProcess; v5 < a2; ++v5 )
  {
    v6 = *(_DWORD *)(a1 + 4 * v5);
    memset(&v17[1], 0, 0xC);
    v18[0] = 0;
    v17[0] = 0x18;
    v17[4] = 0x7E8;
    v11 = 0;
    if ( dword_BA81B4(CurrentProcess, v6, &v11, v17) )
    {
      if ( !strcmp((const char *)v18, "WinMain") )
        return a3("-------------------------------------------------------------------\n\n", a4);
      CurrentProcess = i;
    }
    else
    {
      v7 = dword_A32074;
      v8 = word_A32078;
      v18[0] = dword_A32070;
      v18[1] = v7;
      v19 = v8;
    }
    v13[1] = 0;
    v14 = 0;
    Format = 0;
    v16 = 0;
    v13[0] = 0x14;
    dword_BA81A4(CurrentProcess, v6, &v11, v13);
    HIDWORD(v10) = "%s(%i):'%s'\n";
    LODWORD(v10) = 0x800;
    _snprintf(Dest, v10, Format, v14, v18);
    a3(Dest, a4);
  }
  return a3("-------------------------------------------------------------------\n\n", a4);
}
