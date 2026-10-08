void __thiscall HighProcess_ModCurAVi_(MiddleLowProcess *this, int context, int actorValue, signed int delta)
{
  MiddleProcess_ModAViCur(this, context, actorValue, delta); /*0x628c65*/
  if ( actorValue == 0xB ) /*0x628c6d*/
  {
    *((float *)this + 0xA5) = kTerrainLODQuadRayDirectionZ; /*0x628c89*/
  }
  else if ( actorValue == 0x30 ) /*0x628c72*/
  {
    *((_DWORD *)this + 0xA6) = 0xFFFFFFFF; /*0x628c75*/
  }
}
