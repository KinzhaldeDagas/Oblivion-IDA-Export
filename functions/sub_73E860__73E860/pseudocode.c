//
// GPU static-world LOD audit 2026-09-27: forced screen level clamps signed input to [0,thresholdCount], including the extra far level at count.
int __thiscall sub_73E860(_DWORD *this, int a2)
{
  int result; // eax

  if ( a2 < 0 ) /*0x73e866*/
    return 0; /*0x73e868*/
  result = *(this + 0xA); /*0x73e86d*/
  if ( a2 < result ) /*0x73e872*/
    return a2; /*0x73e874*/
  return result; /*0x73e86a*/
}
