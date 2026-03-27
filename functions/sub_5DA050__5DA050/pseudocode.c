void __userpurge sub_5DA050(_DWORD *a1@<ecx>, double st6_0@<st1>, double a3@<st0>, int a4, int a5)
{
  Tile *v8; // esi
  int v9; // eax
  Tile **Singleton; // eax
  float a2; // [esp+0h] [ebp-14h]
  int v12; // [esp+10h] [ebp-4h]
  float v13; // [esp+10h] [ebp-4h]

  if ( Tile_GetFloat((_DWORD *)a1[0xC], 0xFA1) == fConstant_1 )
  {
    if ( Tile_GetFloat((_DWORD *)a1[0xD], 0xFA1) == fConstant_1 )
    {
      if ( Tile_GetFloat((_DWORD *)a1[0xE], 0xFA1) == fConstant_1 )
        return;
      v8 = (Tile *)a1[0x14];
    }
    else
    {
      v8 = (Tile *)a1[0x12];
    }
  }
  else
  {
    v8 = (Tile *)a1[0x10];
  }
  if ( v8 )
  {
    Tile_GetFloat(v8, 0xFB5);
    v12 = Double_To_SInt32(a3);
    InterfaceManager_GetSingleton(0, 1);
    v9 = Double_To_SInt32(a3);
    a2 = (float)(int)(((int)(((unsigned __int64)(0x77777777LL * v9) >> 0x20) - v9) >> 6)
                    + ((unsigned int)(((unsigned __int64)(0x77777777LL * v9) >> 0x20) - v9) >> 0x1F));
    Tile_SetFloat(v8, (_DWORD *)0xFB3, a2);
    Tile_SetFloat(v8, (_DWORD *)0xFB3, 0.0);
    v13 = (float)v12;
    if ( v13 != Tile_GetFloat(v8, 0xFB5) )
    {
      (*(void (__usercall **)(_DWORD *@<ecx>, int, int, double@<st0>, double@<st1>))(*a1 + 0x14))(a1, a4, a5, a3, st6_0);
      Singleton = (Tile **)InterfaceManager_GetSingleton(0, 1);
      sub_57D730(Singleton, 0);
    }
  }
}
