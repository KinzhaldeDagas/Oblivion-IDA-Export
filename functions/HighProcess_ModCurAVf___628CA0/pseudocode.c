void __thiscall HighProcess_ModCurAVf_(MiddleLowProcess *this, int context, int actorValue, float delta)
{
  MiddleProcess_ModAVfCur(this, context, actorValue, delta); /*0x628cb6*/
  if ( actorValue == 0xB ) /*0x628cbe*/
  {
    *((float *)this + 0xA5) = kTerrainLODQuadRayDirectionZ; /*0x628cda*/
  }
  else if ( actorValue == 0x30 ) /*0x628cc3*/
  {
    *((_DWORD *)this + 0xA6) = 0xFFFFFFFF; /*0x628cc6*/
  }
}
