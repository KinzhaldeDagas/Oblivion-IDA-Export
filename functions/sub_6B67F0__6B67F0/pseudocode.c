unsigned int __thiscall sub_6B67F0(char *this, int (__stdcall ***a2)(_DWORD, void *, char *))
{
  char *v3; // edi
  int v4; // esi
  unsigned int result; // eax

  if ( !a2 )
    return 0x80004005;
  v3 = this + 0x50;
  v4 = (**a2)(a2, &CLSID_IDirectSoundBuffer8, this + 0x50);
  if ( *((_DWORD *)this + 0x14) )
  {
    if ( (*this & 2) != 0 )
      v4 = (***(int (__stdcall ****)(_DWORD, GUID *, char *))v3)(
             *(_DWORD *)v3,
             &CLSID_IDirectSound3DBuffer,
             this + 0x54);
  }
  if ( v4 >= 0 )
  {
    (*(void (__stdcall **)(_DWORD, char *))(**(_DWORD **)v3 + 0x20))(*(_DWORD *)v3, this + 0x40);
    return v4;
  }
  if ( v4 <= (int)0x8878001E )
  {
    if ( v4 == 0x8878001E )
    {
      printf("DSERR_CONTROLUNAVAIL");
      return 0x8878001E;
    }
    if ( v4 > (int)0x8007000E )
    {
      if ( v4 == 0x80070057 )
      {
        printf("DSERR_INVALIDPARAM");
        return 0x80070057;
      }
      if ( v4 == 0x8878000A )
      {
        printf("DSERR_ALLOCATED");
        return 0x8878000A;
      }
    }
    else
    {
      switch ( v4 )
      {
        case 0x8007000E:
          printf("DSERR_OUTOFMEMORY");
          return 0x8007000E;
        case 0x80004001:
          printf("DSERR_UNSUPPORTED");
          return 0x80004001;
        case 0x80040110:
          printf("DSERR_NOAGGREGATION");
          return 0x80040110;
      }
    }
    return v4;
  }
  switch ( v4 )
  {
    case 0x88780032:
      printf("DSERR_INVALIDCALL");
      result = v4;
      break;
    case 0x88780064:
      printf("DSERR_BADFORMAT");
      result = v4;
      break;
    case 0x887800AA:
      printf("DSERR_UNINITIALIZED");
      result = v4;
      break;
    case 0x887800B4:
      printf("DSERR_BUFFERTOOSMALL");
      result = v4;
      break;
    case 0x887800BE:
      printf("DSERR_DS8_REQUIRED");
      result = v4;
      break;
    default:
      return v4;
  }
  return result;
}
