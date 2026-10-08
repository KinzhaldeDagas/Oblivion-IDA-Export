// Verified (Oblivion): updates the ParticleShaderProperty particleInstanceBuffer_6C using elapsed time, currentParticleLevel_80 and fParticleLifetime_84; it retires expired slots, increments/decrements activeParticleCount_7C, and dispatches new particles by emitterType_70. Each Oblivion record is 0x20 bytes. Fallout's UpdateParticles uses 0x30-byte ParticleData records and different field offsets.
void __thiscall ParticleShaderProperty_UpdateParticles(
        ParticleShaderProperty *this,
        float elapsedSeconds,
        bool applyWorldOffset,
        bool allowEmission)
{
  signed int SlotCapacity; // ebx
  int v6; // eax
  int v7; // eax
  float *v8; // ecx
  double v9; // st7
  signed int v10; // edi
  double v11; // st7
  int v12; // esi
  double v13; // st6
  ParticleShaderInstanceData *v14; // ecx
  ParticleShaderEmitterType emitterType_70; // eax
  __int32 v16; // eax
  int v17; // [esp+0h] [ebp-28h]
  int v18; // [esp+4h] [ebp-24h]
  float v19; // [esp+8h] [ebp-20h]
  float v20; // [esp+8h] [ebp-20h]
  float v21; // [esp+Ch] [ebp-1Ch]
  __int64 v22; // [esp+10h] [ebp-18h]
  float z; // [esp+18h] [ebp-10h]
  __int64 v24; // [esp+1Ch] [ebp-Ch]
  float v25; // [esp+24h] [ebp-4h]

  v19 = elapsedSeconds - this->simulationTime_F8; /*0x7e5203*/
  v20 = fabs(v19); /*0x7e520d*/
  SlotCapacity = ParticleShaderProperty_GetSlotCapacity(); /*0x7e5224*/
  v6 = Double_To_SInt32(this->currentParticleLevel_80 * (double)SlotCapacity); /*0x7e522e*/
  v17 = SlotCapacity; /*0x7e5235*/
  if ( SlotCapacity >= v6 )                     // Verified (Oblivion): currentParticleLevel_80 multiplied by slotCapacity sets the desired maximum active-particle count. /*0x7e5239*/
    v17 = v6; /*0x7e523b*/
  v18 = Double_To_SInt32(v20 / this->fParticleLifetime_84 * (double)v17); /*0x7e5263*/
  v22 = *(_QWORD *)&g_zeroNiPoint3.x; /*0x7e526c*/
  z = g_zeroNiPoint3.z; /*0x7e5274*/
  if ( applyWorldOffset ) /*0x7e5278*/
  {
    v7 = *((_DWORD *)this->geometry_120 + 7);   // Verified (Oblivion): when applyWorldOffset is enabled, UpdateParticles follows geometry_120's parent/node hierarchy and searches for Bip01 to compute the coordinate offset. /*0x7e5280*/
    if ( v7 ) /*0x7e5285*/
    {
      while ( strcmp(*(const char **)(v7 + 8), "Bip01") ) /*0x7e52a1*/
      {
        v7 = *(_DWORD *)(v7 + 0x1C); /*0x7e52a3*/
        if ( !v7 ) /*0x7e52a8*/
          goto LABEL_9; /*0x7e52a8*/
      }
      v8 = *(float **)(v7 + 0x1C); /*0x7e52ac*/
      v9 = *(float *)(v7 + 0x88) - v8[0x22]; /*0x7e52b5*/
      v8 += 0x22; /*0x7e52bb*/
      *(float *)&v24 = v9; /*0x7e52c1*/
      *((float *)&v24 + 1) = *(float *)(v7 + 0x8C) - v8[1]; /*0x7e52ce*/
      v22 = v24; /*0x7e52e3*/
      v25 = *(float *)(v7 + 0x90) - v8[2]; /*0x7e52eb*/
      z = v25; /*0x7e52f3*/
    }
  }
LABEL_9:
  v10 = 0; /*0x7e52f7*/
  if ( SlotCapacity > 0 ) /*0x7e52fb*/
  {
    v11 = 0.0; /*0x7e5301*/
    v12 = 0; /*0x7e5303*/
    v13 = flt_A32048; /*0x7e5305*/
    while ( 1 ) /*0x7e531b*/
    {
      v14 = &this->particleInstanceBuffer_6C[v12]; /*0x7e531b*/
      v21 = elapsedSeconds - v14->birthTime_0C; /*0x7e531e*/
      if ( v21 >= v11 && this->fParticleLifetime_84 >= v21 * v14->lifetimeRandomFactor_1C ) /*0x7e533f*/
        goto LABEL_28;                          // Verified (Oblivion): particle slots expire when elapsedSeconds - birthTime exceeds fParticleLifetime_84 scaled by lifetimeRandomFactor_1C. /*0x7e533f*/
      if ( v14->position_00.x != dbl_A3A5B0 ) /*0x7e5356*/
      {
        v14->position_00.x = v13; /*0x7e5358*/
        this->particleInstanceBuffer_6C[v12].position_00.y = v13; /*0x7e535d*/
        this->particleInstanceBuffer_6C[v12].position_00.z = v13; /*0x7e5364*/
        this->particleInstanceBuffer_6C[v12].birthTime_0C = flt_A91F98; /*0x7e5371*/
        this->particleInstanceBuffer_6C[v12].directionOrNormal_10.x = v11; /*0x7e537a*/
        this->particleInstanceBuffer_6C[v12].directionOrNormal_10.y = v11; /*0x7e5381*/
        this->particleInstanceBuffer_6C[v12].directionOrNormal_10.z = v11; /*0x7e5388*/
        --this->activeParticleCount_7C;         // Verified (Oblivion): expiring an active particle clears its slot and decrements activeParticleCount_7C. /*0x7e538c*/
      }
      if ( !allowEmission || v18 <= 0 || (signed int)this->activeParticleCount_7C >= v17 ) /*0x7e53af*/
        goto LABEL_28; /*0x7e53af*/
      emitterType_70 = this->emitterType_70; /*0x7e53b1*/
      if ( emitterType_70 == kParticleShaderEmitter_Geometry )// Verified (Oblivion): emitterType_70 value 0 dispatches to GenerateFromGeometry. /*0x7e53b9*/
      {
        ParticleShaderProperty_GenerateFromGeometry(this, v10); /*0x7e53e0*/
        goto LABEL_24; /*0x7e53e0*/
      }
      v16 = emitterType_70 - 1; /*0x7e53bb*/
      if ( !v16 ) /*0x7e53bd*/
        break;                                  // Verified (Oblivion): emitterType_70 value 1 dispatches to GenerateFromSkinnedGeometry, which samples NiGeometry with skinData. Fallout labels its homolog GenerateFromCollisionBones; that terminology is a Probable correspondence. /*0x7e53bd*/
      if ( v16 == 1 )                           // Verified (Oblivion): emitterType_70 value 2 dispatches to GenerateFromRay. /*0x7e53c1*/
      {
        ParticleShaderProperty_GenerateFromRay(this, v10); /*0x7e53c8*/
LABEL_24:
        v11 = 0.0; /*0x7e53e5*/
      }
      --v18; /*0x7e53e7*/
      ++this->activeParticleCount_7C;           // Verified (Oblivion): successful emission increments activeParticleCount_7C. /*0x7e53eb*/
      if ( applyWorldOffset ) /*0x7e53f3*/
      {
        this->particleInstanceBuffer_6C[v12].position_00.x = this->particleInstanceBuffer_6C[v12].position_00.x /*0x7e5402*/
                                                           - *(float *)&v22;
        this->particleInstanceBuffer_6C[v12].position_00.y = this->particleInstanceBuffer_6C[v12].position_00.y /*0x7e5413*/
                                                           - *((float *)&v22 + 1);
        this->particleInstanceBuffer_6C[v12].position_00.z = this->particleInstanceBuffer_6C[v12].position_00.z - z; /*0x7e5424*/
      }
      v13 = flt_A32048; /*0x7e5426*/
LABEL_28:
      ++v10; /*0x7e542c*/
      ++v12; /*0x7e542e*/
      if ( v10 >= SlotCapacity ) /*0x7e5435*/
        goto LABEL_29;                          // Verified (Oblivion): UpdateParticles iterates particle slots with a 0x20-byte stride, unlike Fallout's 0x30-byte ParticleData stride. /*0x7e5435*/
    }
    ParticleShaderProperty_GenerateFromSkinnedGeometry(this, v10); /*0x7e53d4*/
    goto LABEL_24; /*0x7e53d9*/
  }
LABEL_29:
  this->simulationTime_F8 = elapsedSeconds; /*0x7e543f*/
}
