int **__thiscall sub_74AAF0(int **this, char a2)
{
  int *v3; // ecx

  v3 = *(this + 1); /*0x74aaf3*/
  *this = (int *)&NiTArray<NiPointer<NiPSysMeshEmitter::NiSkinnedEmitterData>>::`vftable'; /*0x74aaf8*/
  if ( v3 ) /*0x74aafe*/
    sub_74A000(v3, 3); /*0x74ab02*/
  if ( (a2 & 1) != 0 ) /*0x74ab0c*/
    FormHeapFree((unsigned int)this); /*0x74ab0f*/
  return this; /*0x74ab19*/
}
