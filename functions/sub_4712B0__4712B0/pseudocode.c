// Counts pending KFModel installs represented by the ActorAnimData +0xB4 head and +0xB8 linked continuation. The debug animation-state command prints this as Anims Loading.
unsigned int __thiscall ActorAnimData_GetPendingKFModelCount(ActorAnimData *this)
{
  unsigned int result; // eax
  void **p_modelB4; // ecx

  result = 0; /*0x4712b0*/
  p_modelB4 = &this->modelB4; /*0x4712b2*/
  if ( p_modelB4[1] || *p_modelB4 ) /*0x4712bd*/
  {
    for ( ; p_modelB4; ++result ) /*0x4712c3*/
      p_modelB4 = (void **)p_modelB4[1]; /*0x4712c5*/
  }
  return result; /*0x4712cf*/
}
