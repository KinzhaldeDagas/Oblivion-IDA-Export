// NiNode selected downward: flags+18 choose controllers/world update; child flags bit1 and bit4 choose synchronous vfunc+64/+68 at 70A215/70A210. Child bounds merge before RET 4. No queue/dispatch in this body. Full-call observer may fence same-thread descendants, not asynchronous work.
void __thiscall sub_70A190(int this, float applicationTime)
{
  unsigned int v3; // ebx
  bool v4; // zf
  int *v5; // esi
  __int16 v6; // ax
  int v7; // eax

  NiAVObject_UpdatePropertiesAndControllers((NiAVObject *)this, applicationTime, (*(_BYTE *)(this + 0x18) & 8) != 0); /*0x70a1a9*/
  if ( (*(_BYTE *)(this + 0x18) & 4) != 0 ) /*0x70a1b7*/
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x74))(this); /*0x70a1c0*/
  v3 = 0; /*0x70a1c4*/
  v4 = *(_WORD *)(this + 0xB6) == 0; /*0x70a1c6*/
  *(float *)(this + 0x2C) = 0.0; /*0x70a1cd*/
  if ( !v4 ) /*0x70a1d0*/
  {
    do /*0x70a266*/
    {
      v5 = *(int **)(*(_DWORD *)(this + 0xB0) + 4 * v3); /*0x70a1e6*/
      if ( v5 ) /*0x70a1eb*/
      {
        v6 = *((_WORD *)v5 + 0xC); /*0x70a1ed*/
        if ( (v6 & 2) != 0 ) /*0x70a1f8*/
        {
          v4 = (v6 & 0x10) == 0; /*0x70a202*/
          v7 = *v5; /*0x70a207*/
          if ( v4 ) /*0x70a20b*/
            (*(void (__stdcall **)(_DWORD))(v7 + 0x64))(LODWORD(applicationTime)); /*0x70a215*/
          else
            (*(void (__stdcall **)(_DWORD))(v7 + 0x68))(LODWORD(applicationTime)); /*0x70a210*/
        }
        if ( 0.0 != *((float *)v5 + 0xB) ) /*0x70a221*/
        {
          if ( 0.0 == *(float *)(this + 0x2C) ) /*0x70a22b*/
          {
            *(_DWORD *)(this + 0x20) = v5[8]; /*0x70a233*/
            *(_DWORD *)(this + 0x24) = v5[9]; /*0x70a239*/
            *(_DWORD *)(this + 0x28) = v5[0xA]; /*0x70a23f*/
            *(_DWORD *)(this + 0x2C) = v5[0xB]; /*0x70a245*/
          }
          else
          {
            NiSphere_Merge((float *)(this + 0x20), (float *)v5 + 8); /*0x70a251*/
          }
        }
      }
      ++v3; /*0x70a261*/
    }
    while ( v3 < *(unsigned __int16 *)(this + 0xB6) ); /*0x70a266*/
  }
}
