char **__thiscall sub_46DE60(unsigned int *this, char **a2, Data *a1)
{
  UInt32 length; // esi
  int *v5; // ebx
  int v6; // eax
  int v7; // esi
  char **result; // eax
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // esi
  TESForm *v13; // eax
  char *v15; // [esp-4h] [ebp-24h]
  int v16[3]; // [esp+0h] [ebp-20h] BYREF
  int *v17; // [esp+Ch] [ebp-14h]
  int *v18; // [esp+10h] [ebp-10h]
  char *modelPath; // [esp+14h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-8h]

  sub_46DE10(this); /*0x46de75*/
  length = a1->currentChunk.length; /*0x46de7d*/
  _alloca_(v16[0]); /*0x46de85*/
  v5 = v16; /*0x46de8d*/
  v18 = v16; /*0x46de91*/
  TESFile_GetChunkData(a1, (char *)v16, length); /*0x46de94*/
  v6 = v16[0]; /*0x46de99*/
  v7 = 4; /*0x46de9d*/
  *this = v16[0]; /*0x46dea2*/
  *(this + 1) = FormHeapAlloc((unsigned __int64)(unsigned int)v6 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v6);
  result = a2 + 1; /*0x46debe*/
  v9 = *this == 0; /*0x46dec0*/
  v20 = 0; /*0x46dec3*/
  if ( !v9 ) /*0x46deca*/
  {
    while ( 1 ) /*0x46deda*/
    {
      modelPath = 0; /*0x46deda*/
      if ( result ) /*0x46dee1*/
        modelPath = *result; /*0x46dee5*/
      v17 = (int *)result[1]; /*0x46deed*/
      v10 = FormHeapAlloc(8u); /*0x46def0*/
      if ( v10 ) /*0x46defa*/
      {
        *(_BYTE *)v10 = 0; /*0x46defc*/
        *(_DWORD *)(v10 + 4) = 0; /*0x46deff*/
      }
      else
      {
        v10 = 0; /*0x46df08*/
      }
      *(_DWORD *)(*(this + 1) + 4 * v20) = v10; /*0x46df10*/
      v11 = *((unsigned __int8 *)v5 + v7); /*0x46df19*/
      v15 = modelPath; /*0x46df1f*/
      v12 = v7 + 1; /*0x46df2f*/
      v13 = (TESForm *)OblivionDynamicCast( /*0x46df32*/
                         a2,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESModelList `RTTI Type Descriptor',
                         (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
                         0);
      TESModel_ReplaceTextureHashEntries( /*0x46df4c*/
        *(TESTextureList **)(*(this + 1) + 4 * v20),
        (TextureHashEntry24 *)((char *)v18 + v12),
        v11,
        v13,
        v15);
      v7 = v12 + 0x18 * v11; /*0x46df54*/
      result = (char **)(v20 + 1); /*0x46df5a*/
      if ( ++v20 >= *this ) /*0x46df5d*/
        break; /*0x46df62*/
      result = (char **)v17; /*0x46ded2*/
      v5 = v18; /*0x46ded5*/
    }
  }
  return result; /*0x46df6b*/
}
