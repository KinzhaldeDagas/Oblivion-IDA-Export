int *__thiscall sub_46DE60(unsigned int *this, int *a2, Data *a1)
{
  unsigned int length; // esi
  _DWORD *v5; // ebx
  unsigned int v6; // eax
  int v7; // esi
  int *result; // eax
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // esi
  _DWORD *v13; // eax
  const char *v15; // [esp-4h] [ebp-24h]
  _DWORD v16[3]; // [esp+0h] [ebp-20h] BYREF
  int *v17; // [esp+Ch] [ebp-14h]
  _DWORD *v18; // [esp+10h] [ebp-10h]
  const char *v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-8h]

  sub_46DE10(this);
  length = a1->currentChunk.length;
  _alloca_();
  v5 = v16;
  v18 = v16;
  TESFile_GetChunkData(a1, (char *)v16, length);
  v6 = v16[0];
  v7 = 4;
  *this = v16[0];
  *(this + 1) = FormHeapAlloc((unsigned __int64)v6 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v6);
  result = a2 + 1;
  v9 = *this == 0;
  v20 = 0;
  if ( !v9 )
  {
    while ( 1 )
    {
      v19 = 0;
      if ( result )
        v19 = (const char *)*result;
      v17 = (int *)result[1];
      v10 = FormHeapAlloc(8u);
      if ( v10 )
      {
        *(_BYTE *)v10 = 0;
        *(_DWORD *)(v10 + 4) = 0;
      }
      else
      {
        v10 = 0;
      }
      *(_DWORD *)(*(this + 1) + 4 * v20) = v10;
      v11 = *((unsigned __int8 *)v5 + v7);
      v15 = v19;
      v12 = v7 + 1;
      v13 = OblivionDynamicCast(
              a2,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESModelList `RTTI Type Descriptor',
              (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
              0);
      sub_46D610(*(_BYTE **)(*(this + 1) + 4 * v20), (int)v18 + v12, v11, v13, v15);
      v7 = v12 + 0x18 * v11;
      result = (int *)(v20 + 1);
      if ( ++v20 >= *this )
        break;
      result = v17;
      v5 = v18;
    }
  }
  return result;
}
