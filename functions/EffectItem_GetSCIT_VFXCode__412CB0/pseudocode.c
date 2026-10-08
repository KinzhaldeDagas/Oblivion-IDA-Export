int __thiscall EffectItem_GetSCIT_VFXCode(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 6); /*0x412cb0*/
  if ( v1 ) /*0x412cb5*/
    return *(_DWORD *)(v1 + 0x10); /*0x412cb7*/
  else
    return 0; /*0x412cbb*/
}
