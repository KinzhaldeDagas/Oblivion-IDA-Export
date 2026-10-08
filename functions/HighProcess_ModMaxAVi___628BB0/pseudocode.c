void __thiscall HighProcess_ModMaxAVi_(MiddleLowProcess *this, int context, int actorValue, signed int delta)
{
  MiddleProcess_ModAViMax(this, context, actorValue, delta); /*0x628bc5*/
  if ( actorValue == 0xB ) /*0x628bcd*/
  {
    *((float *)this + 0xA5) = kTerrainLODQuadRayDirectionZ; /*0x628be9*/
  }
  else if ( actorValue == 0x30 ) /*0x628bd2*/
  {
    *((_DWORD *)this + 0xA6) = 0xFFFFFFFF; /*0x628bd5*/
  }
}
