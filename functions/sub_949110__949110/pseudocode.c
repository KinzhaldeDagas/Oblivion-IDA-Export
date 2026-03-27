int __thiscall sub_949110(_DWORD *this)
{
  int result; // eax

  result = *(this + 3) & 0x3FFFFFFF;
  if ( result > *(this + 2) + 0x46 )
  {
    result = sub_948DF0((int)(this + 1), 0);
    *(_BYTE *)result = 0x70;
    *(_BYTE *)(result + 1) = 0;
    *(_WORD *)(result + 2) = 0;
    *(_WORD *)(result + 4) = 0;
  }
  return result;
}
