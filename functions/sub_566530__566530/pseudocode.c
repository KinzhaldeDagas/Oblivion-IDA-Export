char __thiscall sub_566530(TESForm *this, Data *a1)
{
  signed int ChunkType; // eax
  int length; // eax
  signed int v6; // edx
  signed int v7; // edx
  bool v8; // zf
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // eax
  int v13[4]; // [esp+0h] [ebp-6Ch] BYREF
  unsigned __int8 v14[12]; // [esp+10h] [ebp-5Ch] BYREF
  _DWORD v15[3]; // [esp+1Ch] [ebp-50h] BYREF
  char v16[8]; // [esp+28h] [ebp-44h] BYREF
  char v17[4]; // [esp+30h] [ebp-3Ch] BYREF
  int v18; // [esp+34h] [ebp-38h]
  int v19; // [esp+38h] [ebp-34h]
  char v20[4]; // [esp+3Ch] [ebp-30h] BYREF
  int v21; // [esp+40h] [ebp-2Ch]
  int v22; // [esp+44h] [ebp-28h]
  char v23[4]; // [esp+48h] [ebp-24h] BYREF
  int v24; // [esp+4Ch] [ebp-20h]
  char v25[4]; // [esp+50h] [ebp-1Ch] BYREF
  int v26; // [esp+54h] [ebp-18h]
  char Dst[4]; // [esp+58h] [ebp-14h] BYREF
  int v28; // [esp+68h] [ebp-4h]

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x3D )
    return 0;
  TESFile_InitializeFormFromRecord(a1, this, v13[0], v13[1]);
  do
  {
    ChunkType = TESFile_GetChunkType(a1);
    if ( ChunkType > 0x54444C50 )
    {
      v11 = ChunkType - 0x54445350;
      if ( v11 )
      {
        v12 = v11 - 0xF3;
        if ( !v12 )
          goto LABEL_25;
        if ( v12 == 0xD )
        {
          *(_DWORD *)v20 = 0;
          v21 = 0;
          v22 = 0;
          TESFile_GetChunkData(a1, v20, 0xCu);
          sub_56A0A0(v14, (unsigned __int8 *)v20);
          v28 = 8;
          TESPackage_SetTarget(this, v14);
          v28 = 0xFFFFFFFF;
          TESTexture::ClearComponentReferences(v14);
        }
      }
      else
      {
        *(_DWORD *)v23 = 0;
        v24 = 0;
        TESFile_GetChunkData(a1, v23, 8u);
        sub_569D80(v16, (int)v23);
        v28 = 7;
        sub_565F80(this, (UInt32)v16);
        v28 = 0xFFFFFFFF;
        TESTexture::ClearComponentReferences(v16);
      }
    }
    else
    {
      switch ( ChunkType )
      {
        case 0x54444C50:
          *(_DWORD *)v17 = 0;
          v18 = 0;
          v19 = 0;
          TESFile_GetChunkData(a1, v17, 0xCu);
          sub_5696C0((char *)v15, v17);
          v28 = 6;
          TESPackage_SetLocation(this, (char *)v15);
          v28 = 0xFFFFFFFF;
          TESPackage_LocationData_destr(v15);
          break;
        case 0x41445443:
LABEL_25:
          ConditionList_LoadCondition((int *)a1);
          break;
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a1, (char *)v13, 0x200u);
          this->vtbl->SetEditorID(this, (const char *)v13);
          break;
        case 0x54444B50:
          length = a1->currentChunk.length;
          if ( length == 4 )
          {
            *(_DWORD *)Dst = 0;
            TESFile_GetChunkData(a1, Dst, 4u);
            v6 = Dst[2];
            *((_DWORD *)this + 7) = *(unsigned __int16 *)Dst;
            TESPackage_SetType_((TESPackage *)this, v6);
            break;
          }
          if ( length == 8 )
          {
            *(_DWORD *)v25 = 0;
            v26 = 0;
            TESFile_GetChunkData(a1, v25, 8u);
            v7 = (char)v26;
            *((_DWORD *)this + 7) = *(_DWORD *)v25;
            TESPackage_SetType_((TESPackage *)this, v7);
            break;
          }
          PrintError("File '%s' contains package data of unrecognized type.", a1->name);
          v8 = *((_BYTE *)this + 0x20) == 0;
          *((_DWORD *)this + 7) = 0;
          if ( !v8 )
          {
            if ( !*((_DWORD *)this + 0xA) )
            {
              v9 = (_DWORD *)FormHeapAlloc(0xCu);
              *(_DWORD *)Dst = v9;
              v28 = 4;
              if ( v9 )
              {
                v10 = TESPackage_TargetData_constr(v9);
                v28 = 0xFFFFFFFF;
                *((_DWORD *)this + 0xA) = v10;
                *((_BYTE *)this + 0x20) = 0;
                break;
              }
              v28 = 0xFFFFFFFF;
              *((_DWORD *)this + 0xA) = 0;
            }
            *((_BYTE *)this + 0x20) = 0;
          }
          break;
        default:
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(a1) );
  TESForm_SetIsLinked(this, 0);
  return 1;
}
