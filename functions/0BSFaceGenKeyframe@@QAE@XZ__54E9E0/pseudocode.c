BSFaceGenKeyframe *__thiscall BSFaceGenKeyframe::BSFaceGenKeyframe(BSFaceGenKeyframe *this, char a2)
{
  *(_DWORD *)this = &BSFaceGenKeyframe::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
