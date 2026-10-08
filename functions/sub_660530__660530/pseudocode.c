int __thiscall sub_660530(TESObjectREFR *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  Actor **v5; // eax
  int v6; // ecx

  v2 = *((_DWORD **)this + 0x16B); /*0x660533*/
  if ( v2 ) /*0x66053b*/
  {
    v3 = 0; /*0x66053d*/
    do /*0x66054d*/
    {
      if ( *v2 ) /*0x660540*/
        ++v3; /*0x660545*/
      v2 = (_DWORD *)v2[1]; /*0x660548*/
    }
    while ( v2 ); /*0x66054d*/
    *((_DWORD *)this + 0x1E8) = v3; /*0x66054f*/
    return v3; /*0x660555*/
  }
  else
  {
    v5 = sub_6758E0((ActorProcessManager *)&qword_B3BB2C[0x75], this, 0xC, 0); /*0x660563*/
    if ( v5 ) /*0x66056a*/
    {
      v6 = 0; /*0x66056c*/
      do /*0x66057d*/
      {
        if ( *v5 ) /*0x660570*/
          ++v6; /*0x660575*/
        v5 = (Actor **)v5[1]; /*0x660578*/
      }
      while ( v5 ); /*0x66057d*/
      *((_DWORD *)this + 0x1E8) = v6; /*0x66057f*/
      return v6; /*0x660585*/
    }
    else
    {
      *((_DWORD *)this + 0x1E8) = 0; /*0x660589*/
      return *((_DWORD *)this + 0x1E8); /*0x660593*/
    }
  }
}
