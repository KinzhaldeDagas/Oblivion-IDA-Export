// Verified Oblivion base-object distant-instance record carries position XYZ, rotationAnglesXYZ, scalePercent, and a cellLODBuffer; the queued task builds NiAVObject transform as BaseRotation * RxTransposed * Ry * Rz and applies abs(floor(scalePercent)/100). Fallout's inspected DistantLODShaderProperty::AddDistantLOD feeds DistantLODGroup::DistantLODInstanceData with position XYZ plus one fScaleColor float and no rotation-angle array. This is a renderer/layout divergence, not an offset match.
void __thiscall TESBoundObject_UpdateDistantLODInstances(
        TESBoundObject *this,
        NiPoint3 *positions,
        NiPoint3 *rotationAnglesXYZ,
        float *scalePercent,
        unsigned int recordCount,
        unsigned int cellChunk,
        unsigned int packedCellLabel,
        NiNode *instancedLODNode,
        Ni2DBuffer *cellLODBuffer)
{
  NiPoint3 *v10; // ebx
  float *p_z; // edi
  DistantLODQueuedInstanceData *v12; // eax
  DistantLODQueuedInstanceData *queuedInstanceData; // esi
  float v14; // [esp+20h] [ebp-128h]
  float v15; // [esp+20h] [ebp-128h]
  float v16; // [esp+20h] [ebp-128h]
  float v17; // [esp+20h] [ebp-128h]
  unsigned int v18; // [esp+24h] [ebp-124h]
  TESTextureList *textureHashCache; // [esp+2Ch] [ebp-11Ch]
  char Str[268]; // [esp+38h] [ebp-110h] BYREF

  if ( cellLODBuffer ) /*0x4b305c*/
  {
    if ( positions ) /*0x4b3066*/
    {
      v10 = rotationAnglesXYZ; /*0x4b306c*/
      if ( rotationAnglesXYZ ) /*0x4b3071*/
      {
        if ( scalePercent ) /*0x4b307b*/
        {
          if ( recordCount ) /*0x4b3086*/
          {
            sub_46D540(Str, (char *)this); /*0x4b3092*/
            if ( Str[0] ) /*0x4b309f*/
            {
              textureHashCache = TESBoundObject_GetTextureHashCache(this); /*0x4b30ae*/
              v18 = 0; /*0x4b30b2*/
              p_z = &positions->z; /*0x4b30c7*/
              do /*0x4b3198*/
              {
                v12 = (DistantLODQueuedInstanceData *)FormHeapAlloc(0x20u);// Verified: allocates a 0x20-byte DistantLODQueuedInstanceData record: position (+0), rotationAngles (+0x0C), normalized scale (+0x18), cellLODBuffer (+0x1C). /*0x4b30d0*/
                queuedInstanceData = 0; /*0x4b30d5*/
                if ( v12 ) /*0x4b30dc*/
                {
                  v12->cellLODBuffer = 0; /*0x4b30de*/
                  queuedInstanceData = v12; /*0x4b30e1*/
                }
                NiSmartPointer_Set__(&queuedInstanceData->cellLODBuffer, cellLODBuffer);// Verified: stores and retains cellLODBuffer in DistantLODQueuedInstanceData+0x1C; the queued task destructor later releases it. /*0x4b30eb*/
                v14 = floor(scalePercent[v18]); /*0x4b3105*/
                queuedInstanceData->scale = v14 / fCostant_100;// Verified: converts scalePercent to a normalized value by flooring then dividing by 100; QueuedDistantLOD_ApplyTransform later applies abs(normalizedValue) to the cloned NiAVObject transform scale. /*0x4b3113*/
                v15 = floor(p_z[0xFFFFFFFE]); /*0x4b3121*/
                queuedInstanceData->position.x = v15; /*0x4b3129*/
                v16 = floor(p_z[0xFFFFFFFF]); /*0x4b3136*/
                queuedInstanceData->position.y = v16; /*0x4b313e*/
                v17 = floor(*p_z); /*0x4b314b*/
                queuedInstanceData->position.z = v17; /*0x4b315b*/
                queuedInstanceData->rotationAnglesXYZ.x = v10->x; /*0x4b3163*/
                queuedInstanceData->rotationAnglesXYZ.y = v10->y; /*0x4b316b*/
                queuedInstanceData->rotationAnglesXYZ.z = *(float *)((char *)p_z /*0x4b3176*/
                                                                   + (char *)rotationAnglesXYZ
                                                                   - (char *)positions);
                QueuedDistantLOD_CreateAndQueue(Str, queuedInstanceData, textureHashCache); /*0x4b317f*/
                p_z += 3; /*0x4b318b*/
                ++v10; /*0x4b318e*/
                ++v18; /*0x4b3194*/
              }
              while ( v18 < recordCount ); /*0x4b3198*/
              DistantLOD_AddModelUsage(this, recordCount, packedCellLabel); /*0x4b31ab*/
            }
          }
        }
      }
    }
  }
}
