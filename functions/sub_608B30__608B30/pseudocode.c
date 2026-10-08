// Character proxy collision-filter helper used by native movement ground probes. Returns high-word collision filter/layer from charProxy+0x364 path; ground probe builds FilterInfo=(return<<16)|0x1B.
int __thiscall sub_608B30(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  v1 = *(this + 0xD9); /*0x608b30*/
  if ( !v1 ) /*0x608b38*/
    return 0; /*0x608b53*/
  v2 = *(_DWORD *)(v1 + 8); /*0x608b3a*/
  if ( v2 && (v3 = v2 + 0x14) != 0 ) /*0x608b44*/
    return HIWORD(*(_DWORD *)(v3 + 0x1C)); /*0x608b49*/
  else
    return 0; /*0x608b4f*/
}
