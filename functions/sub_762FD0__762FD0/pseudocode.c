UInt32 __thiscall sub_762FD0(NiDX9Renderer *this)
{
  UInt32 result; // eax
  UInt32 v2; // edx
  int v3; // esi

  result = this->member.pad624[0];
  if ( result )
  {
    do
    {
      v2 = *(_DWORD *)(result + 0xC);
      v3 = dword_B42164;
      dword_B42164 = result;
      *(_DWORD *)(result + 0xC) = v3;
      result = v2;
    }
    while ( v2 );
  }
  this->member.pad624[1] = 0;
  this->member.pad624[0] = 0;
  return result;
}
