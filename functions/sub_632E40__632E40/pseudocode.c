TESForm::ModReferenceList *__thiscall sub_632E40(float *this, int a2, void *a3)
{
  UInt32 v4; // eax
  double v5; // st6
  int v6; // eax
  char *v7; // ecx
  _DWORD *v8; // edi
  int v9; // ebp
  TESForm::ModReferenceList *result; // eax
  void *v11; // [esp+Ch] [ebp-4h]

  v11 = 0;
  if ( a3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a3 + 0x190))(a3) )
      v11 = a3;
  }
  sub_651880(this, a2, a3);
  v4 = SaveLoad_CurrentSavegame->unk030[5];
  if ( v4 == 0x1FFFF000 || v4 == 0x7FFFF000 )
  {
    *(this + 0xA5) = flt_A30634;
    *(this + 0xA6) = NAN;
    *(this + 0xA7) = NAN;
    *(this + 0x76) = 0.0;
    *(this + 0xA8) = NAN;
    *(this + 0x87) = 0.0;
    *(this + 0x24) = NAN;
    *(this + 0x8B) = 0.0;
    *((_BYTE *)this + 0x24C) = 0;
    *(this + 0x92) = 0.0;
    *((_BYTE *)this + 0x1D0) = 0;
    *(this + 0x8D) = 0.0;
    *((_BYTE *)this + 0x228) = 0;
    *(this + 0x7A) = 0.0;
    *((_BYTE *)this + 0x23C) = 1;
    *(this + 0x6D) = 0.0;
    *((_BYTE *)this + 0x244) = 0;
    *(this + 0x6C) = 0.0;
    *(this + 0x94) = 0.0;
    v5 = flt_A417B4;
    *((_BYTE *)this + 0x25C) = 0;
    *(this + 0x8E) = v5;
    *(this + 0x73) = 0.0;
    *((_BYTE *)this + 0x1E4) = 0;
    *((_BYTE *)this + 0x25D) = 0;
    *(this + 0x6A) = 0.0;
    *(this + 0x9D) = 0.0;
    *(this + 0x78) = 0.0;
    *((_BYTE *)this + 0x278) = 0;
    *(this + 0x90) = 0.0;
    *((_BYTE *)this + 0x290) = 0;
    *(this + 0x6E) = 0.0;
    *((_BYTE *)this + 0x2A8) = 0;
    *(this + 0x98) = 0.0;
    *((_BYTE *)this + 0x2A9) = 0;
    *(this + 0x99) = 0.0;
    *((_BYTE *)this + 0x2B8) = 0;
    *(this + 0xAD) = 0.0;
    *(this + 0x9B) = 1.0;
    *((_BYTE *)this + 0x2B9) = 0;
    *(this + 0x9C) = 0.0;
    *(this + 0xA3) = 0.0;
    *(this + 0x9F) = Vector3_InitValue_;
    *(this + 0xA0) = *(&Vector3_InitValue_ + 1);
    *(this + 0xA1) = dword_B3F9B0;
    v6 = 0;
    v7 = (char *)(this + 0xB2);
    do
    {
      *(_DWORD *)v7 = 0;
      *((_BYTE *)this + v6++ + 0x2DC) = 0;
      v7 += 4;
    }
    while ( v6 < 5 );
    v8 = *((_DWORD **)this + 0xA9);
    *(this + 0xAB) = 0.0;
    *(this + 0xAC) = 0.0;
    *(this + 0xB9) = 0.0;
    *((_BYTE *)this + 0x2E8) = 0;
    if ( v8 )
    {
      if ( v8[1] )
      {
        do
        {
          v9 = *(_DWORD *)(v8[1] + 4);
          FormHeapFree(v8[1]);
          v8[1] = v9;
        }
        while ( v9 );
      }
      *v8 = 0;
      *(this + 0xA9) = 0.0;
    }
    *(this + 0x6F) = 0.0;
    *(this + 0x70) = 0.0;
    *(this + 0x71) = 0.0;
    *(this + 0x72) = 0.0;
    if ( v11 )
      (*(void (__thiscall **)(float *, void *))(*(_DWORD *)this + 0x594))(this, v11);
  }
  result = (TESForm::ModReferenceList *)SaveLoad_CurrentSavegame->unk030[5];
  if ( result == (TESForm::ModReferenceList *)0x60000000 || result == (TESForm::ModReferenceList *)0x7FFFF000 )
    *((_BYTE *)this + 0xD0) = 0;
  return result;
}
