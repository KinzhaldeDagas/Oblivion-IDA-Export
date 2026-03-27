char __thiscall sub_4BC570(TESForm *this, Data *a1)
{
  UInt32 i; // eax
  int v5; // edx
  int v6; // eax
  double v7; // st7
  double v8; // rt0
  int v9[3]; // [esp+0h] [ebp-24h] BYREF
  char Dst[4]; // [esp+Ch] [ebp-18h] BYREF
  float v11; // [esp+10h] [ebp-14h]
  float v12; // [esp+14h] [ebp-10h]
  float v13; // [esp+1Ch] [ebp-8h]

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x29 )
    return 0;
  TESFile_InitializeFormFromRecord(a1, this, v9[0], v9[1]);
  TESForm_SetIsLinked(this, 0);
  for ( i = TESFile_GetChunkType(a1); i; i = TESFile_GetChunkType(a1) )
  {
    if ( i == 0x44494445 )
    {
      _alloca_();
      TESFile_GetChunkData(a1, (char *)v9, 0x200u);
      this->vtbl->SetEditorID(this, (const char *)v9);
    }
    else if ( i == 0x4D414E44 )
    {
      TESFile_GetChunkData(a1, Dst, 0xCu);
      *((_WORD *)this + 0x12) = (int)*(float *)Dst;
      *((_WORD *)this + 0x13) = (int)v11;
      LODWORD(v13) = (int)v12;
      *((_WORD *)this + 0x14) = LOWORD(v13);
    }
    if ( !TESFile_GetNextChunk(a1) )
      break;
  }
  v5 = *((unsigned __int16 *)this + 0x13);
  v6 = *((unsigned __int16 *)this + 0x14);
  LODWORD(v13) = *((unsigned __int16 *)this + 0x12);
  v7 = (double)SLODWORD(v13);
  v13 = *(float *)&v5;
  v8 = dbl_A2FAA0;
  *(float *)Dst = v7 * v8;
  v11 = (double)v5 * v8;
  v12 = v8 * (double)v6;
  v13 = *(float *)Dst * *(float *)Dst + v11 * v11 + v12 * v12;
  v13 = sqrt(v13);
  *((float *)this + 0xB) = v13;
  return 1;
}
