// XTEL loader: verifies current type, zero-initializes 28-byte scratch every call, bounded-read max 28, then copies all seven dwords to TeleportData. Empty therefore clears all; short is prefix+zero; oversized is 27 bytes plus forced final zero; repeats replace rather than prefix-overlay prior data.
void __thiscall TeleportData_LoadXTEL(TeleportData *this, Data *tesFile)
{
  float v3; // edx
  float v4; // eax
  float v5; // ecx
  float v6; // edx
  float v7; // eax
  float v8; // ecx
  char Dst[4]; // [esp+8h] [ebp-1Ch] BYREF
  float v10; // [esp+Ch] [ebp-18h]
  float v11; // [esp+10h] [ebp-14h]
  float v12; // [esp+14h] [ebp-10h]
  float v13; // [esp+18h] [ebp-Ch]
  float v14; // [esp+1Ch] [ebp-8h]
  float v15; // [esp+20h] [ebp-4h]

  if ( tesFile ) /*0x42b67d*/
  {
    if ( TESFile_GetChunkType(tesFile) == 0x4C455458 ) /*0x42b68b*/
    {
      *(_DWORD *)Dst = 0; /*0x42b68f*/
      v10 = 0.0; /*0x42b693*/
      v11 = 0.0; /*0x42b697*/
      v12 = 0.0; /*0x42b69b*/
      v13 = 0.0; /*0x42b69f*/
      v14 = 0.0; /*0x42b6a3*/
      v15 = 0.0; /*0x42b6a7*/
      TESFile_GetChunkData(tesFile, Dst, 0x1Cu); /*0x42b6b4*/
      v3 = v10; /*0x42b6bd*/
      v4 = v11; /*0x42b6c1*/
      this->linkedDoor = *(TESObjectREFR **)Dst; /*0x42b6c5*/
      v5 = v12; /*0x42b6c7*/
      this->x = v3; /*0x42b6cb*/
      v6 = v13; /*0x42b6ce*/
      this->y = v4; /*0x42b6d2*/
      v7 = v14; /*0x42b6d5*/
      this->z = v5; /*0x42b6d9*/
      v8 = v15; /*0x42b6dc*/
      this->xRot = v6; /*0x42b6e0*/
      this->yRot = v7; /*0x42b6e3*/
      this->zRot = v8; /*0x42b6e6*/
    }
  }
}
