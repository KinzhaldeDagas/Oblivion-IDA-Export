float *__cdecl sub_579640(float *a1)
{
  InterfaceManager *v1; // eax
  InterfaceManager *Singleton; // eax
  UInt32 v3; // edx
  UInt32 v4; // eax
  float y; // edx
  float z; // ecx

  if ( InterfaceManager_GetSingleton(0, 1) /*0x57969a*/
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (v1 = InterfaceManager_GetSingleton(0, 1), Tile_GetFloat(v1->menuRoot, 0xFAE) == fConstant_2) )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5796a0*/
    *a1 = *(float *)&Singleton->unk0C0[4]; /*0x5796af*/
    v3 = Singleton->unk0C0[5]; /*0x5796b1*/
    v4 = Singleton->unk0C0[6]; /*0x5796b7*/
    *((_DWORD *)a1 + 1) = v3; /*0x5796bd*/
    *((_DWORD *)a1 + 2) = v4; /*0x5796c0*/
    return a1; /*0x5796c6*/
  }
  else
  {
    y = g_zeroNiPoint3.y; /*0x5796d3*/
    *a1 = g_zeroNiPoint3.x; /*0x5796d9*/
    z = g_zeroNiPoint3.z; /*0x5796db*/
    a1[1] = y; /*0x5796e1*/
    a1[2] = z; /*0x5796e4*/
    return a1; /*0x5796c9*/
  }
}
