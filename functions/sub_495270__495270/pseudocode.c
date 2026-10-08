int __thiscall sub_495270(void *this, int a2, int a3)
{
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int result; // eax

  if ( !a3 ) /*0x4952bd*/
    JUMPOUT(0x495464); /*0x495464*/
  v4 = FormHeapAlloc(0x10u); /*0x4952c5*/
  v5 = v4; /*0x4952ca*/
  v6 = 0; /*0x4952d3*/
  if ( v4 ) /*0x4952de*/
  {
    *(_WORD *)(v4 + 8) = 0x80; /*0x4952e5*/
    *(_WORD *)(v4 + 0xE) = 0x80; /*0x4952e9*/
    *(_WORD *)(v4 + 0xA) = 0; /*0x4952f4*/
    *(_WORD *)(v4 + 0xC) = 0; /*0x4952f8*/
    LOBYTE(v6) = 0; /*0x4952fc*/
    *(_DWORD *)v4 = &NiTArray<char *>::`vftable'; /*0x4952ff*/
    *(_DWORD *)(v4 + 4) = FormHeapAlloc(-v6 | 0x200); /*0x495312*/
  }
  else
  {
    v5 = 0; /*0x495319*/
  }
  switch ( *(_DWORD *)(a3 + 0x44) ) /*0x495342*/
  {
    case 0: /*0x495342*/
      result = def_495342("INACTIVE", a2, (int)this, a3, v5, a2, a3); /*0x49534e*/
      break; /*0x49534e*/
    case 1: /*0x495342*/
      result = def_495342("ANIMATING", a2, (int)this, a3, v5, a2, a3); /*0x495355*/
      break; /*0x495355*/
    case 2: /*0x495342*/
      result = def_495342("EASEIN", a2, (int)this, a3, v5, a2, a3); /*0x49535c*/
      break; /*0x49535c*/
    case 3: /*0x495342*/
      result = def_495342("EASEOUT", a2, (int)this, a3, v5, a2, a3); /*0x495363*/
      break; /*0x495363*/
    case 4: /*0x495342*/
      result = def_495342("TRANSSOURCE", a2, (int)this, a3, v5, a2, a3); /*0x49536a*/
      break; /*0x49536a*/
    case 5: /*0x495342*/
      result = def_495342("TRANSDEST", a2, (int)this, a3, v5, a2, a3); /*0x495371*/
      break; /*0x495371*/
    case 6: /*0x495342*/
      result = def_495342("MORPHSOURCE", a2, (int)this, a3, v5, a2, a3); /*0x495374*/
      break; /*0x495374*/
    default:
      JUMPOUT(0x495378); /*0x495378*/
  }
  return result; /*0x49530f*/
}
