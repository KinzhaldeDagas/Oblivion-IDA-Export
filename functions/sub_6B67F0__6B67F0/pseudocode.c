unsigned int __thiscall sub_6B67F0(char *this, int (__stdcall ***a2)(_DWORD, void *, char *))
{
  char *v3; // edi
  int v4; // esi
  unsigned int result; // eax

  if ( !a2 ) /*0x6b67f9*/
    return 0x80004005; /*0x6b6999*/
  v3 = this + 0x50; /*0x6b6805*/
  v4 = (**a2)(a2, &CLSID_IDirectSoundBuffer8, this + 0x50); /*0x6b6814*/
  if ( *((_DWORD *)this + 0x14) ) /*0x6b6811*/
  {
    if ( (*this & 2) != 0 ) /*0x6b681b*/
      v4 = (***(int (__stdcall ****)(_DWORD, GUID *, char *))v3)( /*0x6b682f*/
             *(_DWORD *)v3,
             &CLSID_IDirectSound3DBuffer,
             this + 0x54);
  }
  if ( v4 >= 0 ) /*0x6b6833*/
  {
    (*(void (__stdcall **)(_DWORD, char *))(**(_DWORD **)v3 + 0x20))(*(_DWORD *)v3, this + 0x40); /*0x6b698f*/
    return v4; /*0x6b6996*/
  }
  if ( v4 <= (int)0x8878001E ) /*0x6b683f*/
  {
    if ( v4 == 0x8878001E ) /*0x6b6845*/
    {
      printf("DSERR_CONTROLUNAVAIL"); /*0x6b68eb*/
      return 0x8878001E; /*0x6b68f8*/
    }
    if ( v4 > (int)0x8007000E ) /*0x6b6851*/
    {
      if ( v4 == 0x80070057 ) /*0x6b68ae*/
      {
        printf("DSERR_INVALIDPARAM"); /*0x6b68d6*/
        return 0x80070057; /*0x6b68e3*/
      }
      if ( v4 == 0x8878000A ) /*0x6b68b6*/
      {
        printf("DSERR_ALLOCATED"); /*0x6b68c1*/
        return 0x8878000A; /*0x6b68ce*/
      }
    }
    else
    {
      switch ( v4 ) /*0x6b6853*/
      {
        case 0x8007000E: /*0x6b6853*/
          printf("DSERR_OUTOFMEMORY"); /*0x6b6898*/
          return 0x8007000E; /*0x6b68a5*/
        case 0x80004001: /*0x6b6853*/
          printf("DSERR_UNSUPPORTED"); /*0x6b6883*/
          return 0x80004001; /*0x6b6890*/
        case 0x80040110: /*0x6b6853*/
          printf("DSERR_NOAGGREGATION"); /*0x6b686e*/
          return 0x80040110; /*0x6b687b*/
      }
    }
    return v4; /*0x6b6863*/
  }
  switch ( v4 ) /*0x6b6913*/
  {
    case 0x88780032: /*0x6b6913*/
      printf("DSERR_INVALIDCALL"); /*0x6b695e*/
      result = v4; /*0x6b6967*/
      break; /*0x6b696b*/
    case 0x88780064: /*0x6b6913*/
      printf("DSERR_BADFORMAT"); /*0x6b691f*/
      result = v4; /*0x6b6928*/
      break; /*0x6b692c*/
    case 0x887800AA: /*0x6b6913*/
      printf("DSERR_UNINITIALIZED"); /*0x6b6973*/
      result = v4; /*0x6b697c*/
      break; /*0x6b6980*/
    case 0x887800B4: /*0x6b6913*/
      printf("DSERR_BUFFERTOOSMALL"); /*0x6b6934*/
      result = v4; /*0x6b693d*/
      break; /*0x6b6941*/
    case 0x887800BE: /*0x6b6913*/
      printf("DSERR_DS8_REQUIRED"); /*0x6b6949*/
      result = v4; /*0x6b6952*/
      break; /*0x6b6956*/
    default:
      return v4;
  }
  return result; /*0x6b687a*/
}
