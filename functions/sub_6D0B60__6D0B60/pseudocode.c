// Samples every morph-target interpolator and writes the resulting floats into morphWeights (+0x40; data +0x44, size +0x4A). Although the ABI consumes one float stack argument (retn 4), the native body does not read it: interpolation uses the controller's cached time at NiTimeController +0x28. Callers pass that same cached value. This is controller time, not a direct morph weight.
void __thiscall NiGeomMorpherController_SampleInterpolators(NiGeomMorpherController *this, float unusedControllerTime)
{
  unsigned int v3; // ebx
  unsigned int i; // edi
  int v5; // eax
  unsigned int size; // ecx
  unsigned int v7; // eax
  float v8; // [esp+1Ch] [ebp-8h] BYREF
  float v9; // [esp+20h] [ebp-4h] BYREF

  v3 = *((_DWORD *)this->morphData + 2); /*0x6d0b6a*/
  for ( i = 0; i < v3; ++i ) /*0x6d0b72*/
  {
    v5 = ((int (__thiscall *)(NiGeomMorpherController *, unsigned int))this->super.vtbl[1].super.Unk_03)(this, i); /*0x6d0b8b*/
    size = this->morphWeights.size; /*0x6d0b8f*/
    v9 = 0.0; /*0x6d0b93*/
    if ( i < size ) /*0x6d0b99*/
      v9 = this->morphWeights.data[i]; /*0x6d0ba1*/
    v8 = v9; /*0x6d0bab*/
    if ( i || !*((_BYTE *)this->morphData + 0x14) ) /*0x6d0bb4*/
    {
      if ( !v5 /*0x6d0bed*/
        || !(*(unsigned __int8 (__thiscall **)(int, float, NiNode *, float *))(*(_DWORD *)v5 + 0x5C))(
              v5,
              this->super.members.cachedScaledTime,
              this->super.members.m_pTarget,
              &v8) )
      {
        continue; /*0x6d0bf1*/
      }
    }
    else if ( this->leaveTargetBaseIntact ) /*0x6d0bba*/
    {
      v8 = 0.0; /*0x6d0bc0*/
    }
    else
    {
      v8 = 1.0; /*0x6d0bca*/
    }
    v7 = this->morphWeights.size; /*0x6d0bf3*/
    v9 = v8; /*0x6d0bfd*/
    if ( i < v7 ) /*0x6d0c01*/
      sub_4CA210((int)&this->morphWeights, i, &v9); /*0x6d0c0c*/
  }
}
