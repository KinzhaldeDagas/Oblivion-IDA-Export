// Verified (Oblivion): resets every 0x20-byte particle slot to the inactive sentinel, seeds per-slot lifetime factors from fParticleLifetime_84/fParticleLifeVar_88, sets activeParticleCount_7C to zero, and initializes simulationTime_F8 to newTime. Fallout's RewindTimer instead shifts birth times of already active particles; the lifecycle behavior diverges.
int __thiscall ParticleShaderProperty_ResetParticleStateAtTime(ParticleShaderProperty *this, float newTime)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  double v6; // st6
  float v7; // [esp+4h] [ebp-8h]
  float v8; // [esp+8h] [ebp-4h]
  float newTimea; // [esp+10h] [ebp+4h]
  float newTimeb; // [esp+10h] [ebp+4h]

  result = ParticleShaderProperty_GetSlotCapacity(); /*0x7e4806*/
  v7 = (this->fParticleLifeVar_88 + this->fParticleLifeVar_88) / this->fParticleLifetime_84; /*0x7e481b*/
  v8 = (this->fParticleLifetime_84 - this->fParticleLifeVar_88) / this->fParticleLifetime_84; /*0x7e4831*/
  this->simulationTime_F8 = newTime;            // Verified (Oblivion): simulationTime_F8 is initialized to the requested time; UpdateParticles uses it to calculate elapsed delta and stores the new time after each update. Fallout RewindTimer instead shifts active particle birth times. /*0x7e4839*/
  if ( result ) /*0x7e483f*/
  {
    v4 = 0; /*0x7e4847*/
    v5 = result; /*0x7e4849*/
    do /*0x7e48c8*/
    {
      v6 = flt_A32048; /*0x7e485b*/
      this->particleInstanceBuffer_6C[v4].position_00.x = flt_A32048; /*0x7e485d*/
      this->particleInstanceBuffer_6C[v4].position_00.y = v6; /*0x7e4863*/
      this->particleInstanceBuffer_6C[v4].position_00.z = v6; /*0x7e486a*/
      this->particleInstanceBuffer_6C[v4].birthTime_0C = flt_A91F98; /*0x7e4877*/
      this->particleInstanceBuffer_6C[v4].directionOrNormal_10.x = 0.0; /*0x7e487e*/
      this->particleInstanceBuffer_6C[v4].directionOrNormal_10.y = 0.0; /*0x7e4885*/
      this->particleInstanceBuffer_6C[v4].directionOrNormal_10.z = 0.0; /*0x7e488c*/
      result = rand(); /*0x7e4890*/
      ++v4; /*0x7e48a0*/
      --v5; /*0x7e48a3*/
      newTimea = (double)result / dbl_A3D5A8; /*0x7e48ac*/
      newTimeb = newTimea * v7 + v8; /*0x7e48bc*/
      this->particleInstanceBuffer_6C[v4 - 1].lifetimeRandomFactor_1C = newTimeb; /*0x7e48c4*/
    }
    while ( v5 ); /*0x7e48c8*/
  }
  this->activeParticleCount_7C = 0;             // Verified (Oblivion): ResetParticleStateAtTime clears activeParticleCount_7C after resetting every slot and random lifetime factor. /*0x7e48cc*/
  return result; /*0x7e48d3*/
}
