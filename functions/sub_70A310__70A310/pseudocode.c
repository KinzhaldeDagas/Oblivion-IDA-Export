//
// GPU static-world lifecycle audit 2026-09-27: node controllers-only entry calls NiAVObject_UpdatePropertiesAndControllers(this,time,1), then visits non-null children through virtual +4C. Plain update traversal should not globally invalidate unrelated static records; concrete controller/property dependencies remain required.
void __thiscall sub_70A310(NiAVObject *this, float applicationTime)
{
  unsigned int i; // edi
  int v4; // ecx

  NiAVObject_UpdatePropertiesAndControllers(this, applicationTime, 1); /*0x70a31e*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x5B); ++i ) /*0x70a325*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * i); /*0x70a336*/
    if ( v4 ) /*0x70a33b*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 0x4C))(LODWORD(applicationTime)); /*0x70a34a*/
  }
}
