int __cdecl sub_69FBF0(const char *a1)
{
  void *ModelData; // esi
  int v2; // eax
  int v3; // ebp
  bool v4; // zf
  void (__thiscall ***v6)(_DWORD, int); // [esp+10h] [ebp-28h] BYREF
  void (__thiscall ***v7)(_DWORD, int); // [esp+14h] [ebp-24h]
  float v8; // [esp+20h] [ebp-18h]
  float v9; // [esp+24h] [ebp-14h]
  float v10; // [esp+28h] [ebp-10h]
  unsigned int v11; // [esp+34h] [ebp-4h]
  float v12; // [esp+3Ch] [ebp+4h]

  if ( !a1 ) /*0x69fc1e*/
    return 0; /*0x69fc1e*/
  if ( !*a1 ) /*0x69fc24*/
    return 0; /*0x69fc24*/
  ModelData = (void *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], a1, 0, 0, 1); /*0x69fc3d*/
  if ( !ModelData ) /*0x69fc41*/
    return 0; /*0x69fd03*/
  OB_NiCloningProcess_ctor(&v6); /*0x69fc4b*/
  v10 = 1.0; /*0x69fc52*/
  v9 = 1.0; /*0x69fc56*/
  v8 = 1.0; /*0x69fc5a*/
  v11 = 0; /*0x69fc65*/
  v2 = sub_700610(ModelData, (int)&v6); /*0x69fc69*/
  v3 = v2; /*0x69fc6e*/
  if ( v2 ) /*0x69fc72*/
  {
    *(_WORD *)(v2 + 0x18) &= ~1u; /*0x69fc76*/
    v4 = *(_DWORD *)(v2 + 0x1C) == 0; /*0x69fc7c*/
    v12 = fabs(1.0); /*0x69fc82*/
    *(float *)(v2 + 0x60) = v12; /*0x69fc92*/
    qmemcpy((void *)(v2 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x69fc9a*/
    *(float *)(v2 + 0x54) = g_zeroNiPoint3.x; /*0x69fca2*/
    *(float *)(v2 + 0x58) = g_zeroNiPoint3.y; /*0x69fcab*/
    *(float *)(v2 + 0x5C) = g_zeroNiPoint3.z; /*0x69fcb3*/
    if ( !v4 ) /*0x69fcb6*/
      *(_DWORD *)(v2 + 0x1C) = 0; /*0x69fcb8*/
    NiAVObject_InitializePropertyState((NiAVObject *)v2); /*0x69fcc1*/
  }
  v11 = 0xFFFFFFFF; /*0x69fccc*/
  if ( v6 ) /*0x69fcd4*/
    (**v6)(v6, 1); /*0x69fcdc*/
  if ( v7 ) /*0x69fce4*/
    (**v7)(v7, 1); /*0x69fcec*/
  return v3; /*0x69fcf0*/
}
