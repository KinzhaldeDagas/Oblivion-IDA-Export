// 2026-05-19 payload-retention pass: stock collision getter exports type, position, and dimensions only. Supplemental 73000 rotations are not exposed by this ABI and must be applied later at the Havok consumer boundary if retained sidecar data is present.
void __thiscall CSpeedTreeRT__GetCollisionObject(
        OB_CSpeedTreeRT_010201A0 *this,
        unsigned int index,
        int *typeOut,
        float *positionOut3,
        float *dimensionsOut3)
{
  _DWORD *collisionObjectVector; // ecx
  int v7; // eax
  int collisionObjectCount; // eax
  OB_stString28_010201A0 *formattedError; // eax
  bool usesInlineStorage; // cf
  const char *inlineData; // edx
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // eax
  int v15; // edx
  OB_stString28_010201A0 formattedMessage; // [esp+10h] [ebp-28h] BYREF
  int v17; // [esp+34h] [ebp-4h]

  collisionObjectVector = this->collisionObjects; /*0x789d68*/
  if ( collisionObjectVector ) /*0x789d6d*/
  {
    v7 = collisionObjectVector[1]; /*0x789d73*/
    if ( v7 && index < (collisionObjectVector[2] - v7) / 0x1C ) /*0x789d98*/
    {
      *typeOut = *(_DWORD *)OB_stVector_CollisionObject_At_010201A0(collisionObjectVector, (int)this, index); /*0x789e3f*/
      v12 = OB_stVector_CollisionObject_At_010201A0((_DWORD *)this->collisionObjects, (int)this, index); /*0x789e45*/
      v13 = *(_DWORD *)(v12 + 4); /*0x789e4a*/
      v12 += 4; /*0x789e51*/
      *(_DWORD *)positionOut3 = v13; /*0x789e54*/
      positionOut3[1] = *(float *)(v12 + 4); /*0x789e59*/
      positionOut3[2] = *(float *)(v12 + 8); /*0x789e5f*/
      v14 = OB_stVector_CollisionObject_At_010201A0((_DWORD *)this->collisionObjects, (int)this, index); /*0x789e66*/
      v15 = *(_DWORD *)(v14 + 0x10); /*0x789e6b*/
      v14 += 0x10; /*0x789e72*/
      *(_DWORD *)dimensionsOut3 = v15; /*0x789e75*/
      dimensionsOut3[1] = *(float *)(v14 + 4); /*0x789e7a*/
      dimensionsOut3[2] = *(float *)(v14 + 8); /*0x789e80*/
    }
    else
    {
      collisionObjectCount = collisionObjectVector[1]; /*0x789d9e*/
      if ( collisionObjectCount ) /*0x789da3*/
        collisionObjectCount = (collisionObjectVector[2] - collisionObjectCount) / 0x1C; /*0x789dbb*/
      formattedError = OB_IdvFormatString_010201A0( /*0x789dc8*/
                         &formattedMessage,
                         "collision object index (%d) exceeds maximum index (%d)",
                         index,
                         collisionObjectCount); // Out-of-range collision diagnostics construct a temporary 28-byte string through OB_IdvFormatString, pass its bytes to CSpeedTreeRT::SetError, then destroy temporary heap storage when SSO capacity is exceeded.
      usesInlineStorage = formattedError->capacity < 0x10; /*0x789dd5*/
      v17 = 0; /*0x789dd8*/
      if ( usesInlineStorage ) /*0x789de0*/
        inlineData = formattedError->storage.inlineData; /*0x789de7*/
      else
        inlineData = formattedError->storage.heapData; /*0x789de2*/
      OB_stString28_AssignBytes_010201A0(&OB_g_strError_010201A0, inlineData, strlen(inlineData)); /*0x789e02*/
      if ( formattedMessage.capacity >= 0x10 ) /*0x789e0b*/
        FormHeapFree((unsigned int)formattedMessage.storage.heapData); /*0x789e16*/
    }
  }
  else
  {
    OB_stString28_AssignBytes_010201A0(&OB_g_strError_010201A0, "no collision objects are stored with this tree", 0x2Eu); /*0x789ea4*/
  }
}
