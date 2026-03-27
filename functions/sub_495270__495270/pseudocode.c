int __stdcall sub_495270(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax

  if ( !a2 )
    JUMPOUT(0x495464);
  v2 = FormHeapAlloc(0x10u);
  v3 = 0;
  if ( v2 )
  {
    *(_WORD *)(v2 + 8) = 0x80;
    *(_WORD *)(v2 + 0xE) = 0x80;
    *(_WORD *)(v2 + 0xA) = 0;
    *(_WORD *)(v2 + 0xC) = 0;
    LOBYTE(v3) = 0;
    *(_DWORD *)v2 = &NiTArray<char *>::`vftable';
    *(_DWORD *)(v2 + 4) = FormHeapAlloc(-v3 | 0x200);
  }
  switch ( *(_DWORD *)(a2 + 0x44) )
  {
    case 0:
      result = def_495342("INACTIVE", a1, a2);
      break;
    case 1:
      result = def_495342("ANIMATING", a1, a2);
      break;
    case 2:
      result = def_495342("EASEIN", a1, a2);
      break;
    case 3:
      result = def_495342("EASEOUT", a1, a2);
      break;
    case 4:
      result = def_495342("TRANSSOURCE", a1, a2);
      break;
    case 5:
      result = def_495342("TRANSDEST", a1, a2);
      break;
    case 6:
      result = def_495342("MORPHSOURCE", a1, a2);
      break;
    default:
      JUMPOUT(0x495378);
  }
  return result;
}
