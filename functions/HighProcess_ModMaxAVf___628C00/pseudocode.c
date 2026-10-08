void __thiscall HighProcess_ModMaxAVf_(MiddleLowProcess *this, int context, int actorValue, float delta)
{
  MiddleProcess_ModAVfMax(this, context, actorValue, delta); /*0x628c16*/
  if ( actorValue == 0xB ) /*0x628c1e*/
  {
    *((float *)this + 0xA5) = kTerrainLODQuadRayDirectionZ; /*0x628c3a*/
  }
  else if ( actorValue == 0x30 ) /*0x628c23*/
  {
    *((_DWORD *)this + 0xA6) = 0xFFFFFFFF; /*0x628c26*/
  }
}
