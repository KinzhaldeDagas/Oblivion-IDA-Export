char __thiscall sub_566530(TESForm *this, Data *a1)
{
  signed int ChunkType; // eax
  UInt32 length; // eax
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

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x3D ) /*0x566569*/
    return 0; /*0x56656d*/
  TESFile_InitializeFormFromRecord(a1, this, v13[0], v13[1]); /*0x566575*/
  do /*0x5667b2*/
  {
    ChunkType = TESFile_GetChunkType(a1); /*0x566582*/
    if ( ChunkType > 0x54444C50 ) /*0x56658c*/
    {
      v11 = ChunkType - 0x54445350; /*0x566705*/
      if ( v11 ) /*0x56670a*/
      {
        v12 = v11 - 0xF3; /*0x56670c*/
        if ( !v12 ) /*0x566711*/
          goto LABEL_25; /*0x566711*/
        if ( v12 == 0xD ) /*0x566716*/
        {
          *(_DWORD *)v20 = 0; /*0x566726*/
          v21 = 0; /*0x566729*/
          v22 = 0; /*0x56672c*/
          TESFile_GetChunkData(a1, v20, 0xCu); /*0x56672f*/
          sub_56A0A0(v14, (unsigned __int8 *)v20); /*0x56673b*/
          v28 = 8; /*0x566746*/
          TESPackage_SetTarget(this, v14); /*0x56674d*/
          v28 = 0xFFFFFFFF; /*0x566755*/
          Shared_NoOpVirtual_60D0A0(v14); /*0x56675c*/
        }
      }
      else
      {
        *(_DWORD *)v23 = 0; /*0x566778*/
        v24 = 0; /*0x56677b*/
        TESFile_GetChunkData(a1, v23, 8u); /*0x56677e*/
        sub_569D80(v16, (int)v23); /*0x56678a*/
        v28 = 7; /*0x566795*/
        sub_565F80(this, (UInt32)v16); /*0x56679c*/
        v28 = 0xFFFFFFFF; /*0x5667a4*/
        Shared_NoOpVirtual_60D0A0(v16); /*0x5667ab*/
      }
    }
    else
    {
      switch ( ChunkType ) /*0x566592*/
      {
        case 0x54444C50: /*0x566592*/
          *(_DWORD *)v17 = 0; /*0x5666c5*/
          v18 = 0; /*0x5666c8*/
          v19 = 0; /*0x5666cb*/
          TESFile_GetChunkData(a1, v17, 0xCu); /*0x5666ce*/
          sub_5696C0((char *)v15, v17); /*0x5666da*/
          v28 = 6; /*0x5666e5*/
          TESPackage_SetLocation(this, (char *)v15); /*0x5666ec*/
          v28 = 0xFFFFFFFF; /*0x5666f4*/
          TESPackage_LocationData_destr(v15); /*0x5666fb*/
          break; /*0x566700*/
        case 0x41445443: /*0x566592*/
LABEL_25:
          ConditionList_LoadCondition((_DWORD *)this + 0xD, a1); /*0x566763*/
          break; /*0x56676c*/
        case 0x44494445: /*0x566592*/
          _alloca_(v13[0]); /*0x566695*/
          TESFile_GetChunkData(a1, (char *)v13, 0x200u); /*0x5666a4*/
          this->vtbl->SetEditorID(this, (const char *)v13); /*0x5666b4*/
          break;
        case 0x54444B50: /*0x566592*/
          length = a1->currentChunk.length; /*0x5665b9*/
          if ( length == 4 ) /*0x5665c2*/
          {
            *(_DWORD *)Dst = 0; /*0x5665cb*/
            TESFile_GetChunkData(a1, Dst, 4u); /*0x5665d2*/
            v6 = Dst[2]; /*0x5665db*/
            *((_DWORD *)this + 7) = *(unsigned __int16 *)Dst; /*0x5665df*/
            TESPackage_SetType_((TESPackage *)this, v6); /*0x5665e5*/
            break; /*0x5665ea*/
          }
          if ( length == 8 ) /*0x5665f2*/
          {
            *(_DWORD *)v25 = 0; /*0x5665f6*/
            v26 = 0; /*0x5665f9*/
            TESFile_GetChunkData(a1, v25, 8u); /*0x566604*/
            v7 = (char)v26; /*0x56660c*/
            *((_DWORD *)this + 7) = *(_DWORD *)v25; /*0x566610*/
            TESPackage_SetType_((TESPackage *)this, v7); /*0x566616*/
            break; /*0x56661b*/
          }
          PrintError("File '%s' contains package data of unrecognized type.", a1->name); /*0x566629*/
          v8 = *((_BYTE *)this + 0x20) == 0; /*0x566631*/
          *((_DWORD *)this + 7) = 0; /*0x566635*/
          if ( !v8 ) /*0x56663c*/
          {
            if ( !*((_DWORD *)this + 0xA) ) /*0x566642*/
            {
              v9 = (_DWORD *)FormHeapAlloc(0xCu); /*0x56664a*/
              *(_DWORD *)Dst = v9; /*0x566652*/
              v28 = 4; /*0x566657*/
              if ( v9 ) /*0x56665e*/
              {
                v10 = TESPackage_TargetData_constr(v9); /*0x566662*/
                v28 = 0xFFFFFFFF; /*0x566667*/
                *((_DWORD *)this + 0xA) = v10; /*0x56666e*/
                *((_BYTE *)this + 0x20) = 0; /*0x566671*/
                break; /*0x566675*/
              }
              v28 = 0xFFFFFFFF; /*0x56667c*/
              *((_DWORD *)this + 0xA) = 0; /*0x566683*/
            }
            *((_BYTE *)this + 0x20) = 0; /*0x566686*/
          }
          break;
        default:
          break; /*0x5665b3*/
      }
    }
  }
  while ( TESFile_GetNextChunk(a1) ); /*0x5667b2*/
  TESForm_SetIsLinked(this, 0); /*0x5667c3*/
  return 1; /*0x5667cd*/
}
