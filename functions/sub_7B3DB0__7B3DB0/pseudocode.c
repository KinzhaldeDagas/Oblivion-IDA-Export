int sub_7B3DB0()
{
  int v0; // eax
  int v1; // ecx
  NiTMap_Entry_TESCELL *v2; // eax
  bool v3; // zf
  TESObjectCELL *v4; // esi
  int result; // eax
  TESObjectCELL *v6; // [esp+0h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v7; // [esp+4h] [ebp-8h] BYREF
  void *v8; // [esp+8h] [ebp-4h] BYREF

  v0 = 0; /*0x7b3db9*/
  if ( MEMORY[0xB2C340] ) /*0x7b3db0*/
  {
    v1 = MEMORY[0xB2C344]; /*0x7b3dbf*/
    while ( !*(_DWORD *)(v1 + 4 * v0) ) /*0x7b3dc9*/
    {
      if ( ++v0 >= (unsigned int)MEMORY[0xB2C340] ) /*0x7b3dd4*/
        goto LABEL_5; /*0x7b3dd4*/
    }
    v2 = *(NiTMap_Entry_TESCELL **)(v1 + 4 * v0); /*0x7b3e4c*/
  }
  else
  {
LABEL_5:
    v2 = 0; /*0x7b3dd6*/
  }
  v3 = MEMORY[0xB2C348] == 0; /*0x7b3dd8*/
  v7 = v2; /*0x7b3ddf*/
  v6 = 0; /*0x7b3de3*/
  if ( !v3 ) /*0x7b3dea*/
  {
    if ( v2 ) /*0x7b3dee*/
    {
      do /*0x7b3e27*/
      {
        NiTMap_U32Pointer_GetNextEntry((NiTMap_TESCELL *)&stru_B2C33C, &v7, &v8, &v6); /*0x7b3e05*/
        v4 = v6; /*0x7b3e0a*/
        if ( v6 ) /*0x7b3e10*/
        {
          sub_7B3940(v6); /*0x7b3e14*/
          FormHeapFree((unsigned int)v4); /*0x7b3e1a*/
        }
      }
      while ( v7 ); /*0x7b3e27*/
    }
  }
  result = NiTMap_Clear(&stru_B2C33C); /*0x7b3e2f*/
  unk_B42D5C = 0; /*0x7b3e34*/
  unk_B42D60 = 0; /*0x7b3e3e*/
  return result; /*0x7b3e48*/
}
