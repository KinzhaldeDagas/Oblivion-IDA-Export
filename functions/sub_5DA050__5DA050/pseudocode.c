void __userpurge sub_5DA050(_DWORD *a1@<ecx>, double st6_0@<st1>, double a3@<st0>, int a4, int a5)
{
  Tile *v6; // esi
  int v7; // eax
  Tile **Singleton; // eax
  float a2; // [esp+0h] [ebp-14h]
  int v10; // [esp+10h] [ebp-4h]
  float v11; // [esp+10h] [ebp-4h]

  if ( Tile_GetFloat((_DWORD *)a1[0xC], 0xFA1) == fConstant_1 ) /*0x5da06f*/
  {
    if ( Tile_GetFloat((_DWORD *)a1[0xD], 0xFA1) == fConstant_1 ) /*0x5da08e*/
    {
      if ( Tile_GetFloat((_DWORD *)a1[0xE], 0xFA1) == fConstant_1 ) /*0x5da0ad*/
        return; /*0x5da0ad*/
      v6 = (Tile *)a1[0x14]; /*0x5da0b3*/
    }
    else
    {
      v6 = (Tile *)a1[0x12]; /*0x5da090*/
    }
  }
  else
  {
    v6 = (Tile *)a1[0x10]; /*0x5da071*/
  }
  if ( v6 ) /*0x5da0b8*/
  {
    Tile_GetFloat(v6, 0xFB5); /*0x5da0c5*/
    v10 = Double_To_SInt32(a3); /*0x5da0d3*/
    InterfaceManager_GetSingleton(0, 1); /*0x5da0d7*/
    v7 = Double_To_SInt32(a3); /*0x5da0df*/
    a2 = (float)(int)(((int)(((unsigned __int64)(0x77777777LL * v7) >> 0x20) - v7) >> 6) /*0x5da106*/
                    + ((unsigned int)(((unsigned __int64)(0x77777777LL * v7) >> 0x20) - v7) >> 0x1F));
    Tile_SetFloat(v6, 0xFB3u, a2); /*0x5da10e*/
    Tile_SetFloat(v6, 0xFB3u, 0.0); /*0x5da120*/
    v11 = (float)v10; /*0x5da130*/
    if ( v11 != Tile_GetFloat(v6, 0xFB5) ) /*0x5da144*/
    {
      (*(void (__usercall **)(_DWORD *@<ecx>, int, int, double@<st0>, double@<st1>))(*a1 + 0x14))(a1, a4, a5, a3, st6_0); /*0x5da157*/
      Singleton = (Tile **)InterfaceManager_GetSingleton(0, 1); /*0x5da15f*/
      sub_57D730(Singleton, 0); /*0x5da169*/
    }
  }
}
