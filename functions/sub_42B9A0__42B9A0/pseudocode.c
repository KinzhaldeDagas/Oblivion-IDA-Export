// XTEL writer: if linkedDoor is non-null, writes exact 28 bytes as linked door FormID plus six floats; if null, emits nothing.
void *__thiscall TeleportData_SaveXTEL(TeleportData *this)
{
  TESObjectREFR *linkedDoor; // edx
  UInt32 refID; // eax
  float x; // edx
  float y; // eax
  float z; // edx
  float xRot; // eax
  float yRot; // edx
  float zRot; // eax
  void *result; // eax
  size_t v10; // [esp-4h] [ebp-20h] BYREF
  float v11; // [esp+4h] [ebp-18h]
  float v12; // [esp+8h] [ebp-14h]
  float v13; // [esp+Ch] [ebp-10h]
  float v14; // [esp+10h] [ebp-Ch]
  float v15; // [esp+14h] [ebp-8h]
  float v16; // [esp+18h] [ebp-4h]

  linkedDoor = this->linkedDoor; /*0x42b9a0*/
  if ( this->linkedDoor ) /*0x42b9a0*/
  {
    HIDWORD(v10) = 0; /*0x42b9ab*/
    v11 = 0.0; /*0x42b9ae*/
    v12 = 0.0; /*0x42b9b2*/
    v13 = 0.0; /*0x42b9b6*/
    v14 = 0.0; /*0x42b9ba*/
    v15 = 0.0; /*0x42b9be*/
    v16 = 0.0; /*0x42b9c2*/
    refID = linkedDoor->member.super.refID; /*0x42b9c6*/
    x = this->x; /*0x42b9c9*/
    HIDWORD(v10) = refID; /*0x42b9cc*/
    y = this->y; /*0x42b9cf*/
    v11 = x; /*0x42b9d2*/
    z = this->z; /*0x42b9d6*/
    v12 = y; /*0x42b9d9*/
    xRot = this->xRot; /*0x42b9dd*/
    v13 = z; /*0x42b9e0*/
    yRot = this->yRot; /*0x42b9e4*/
    v14 = xRot; /*0x42b9e7*/
    zRot = this->zRot; /*0x42b9eb*/
    LODWORD(v10) = 0x1C; /*0x42b9ee*/
    v15 = yRot; /*0x42b9fa*/
    v16 = zRot; /*0x42b9fe*/
    return TESForm_PutFormRecordChunkData(0x4C455458, (char *)&v10 + 4, v10); /*0x42ba02*/
  }
  return result; /*0x42ba0a*/
}
