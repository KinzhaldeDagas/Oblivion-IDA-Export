void __thiscall BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(BSFaceGenKeyframeMultiple *this)
{
  unsigned int v2; // eax

  *(_DWORD *)this = &BSFaceGenKeyframeMultiple::`vftable';
  if ( *((_DWORD *)this + 4) )
  {
    if ( *((_DWORD *)this + 3) )
    {
      FormHeapFree(*((_DWORD *)this + 3));
      *((_DWORD *)this + 3) = 0;
    }
    *((_DWORD *)this + 4) = 0;
  }
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    sub_54F630(*((void **)this + 3), v2, 1);
  *(_DWORD *)this = &BSFaceGenKeyframe::`vftable';
}
