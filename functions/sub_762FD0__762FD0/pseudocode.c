UInt32 __thiscall sub_762FD0(NiDX9Renderer *this)
{
  UInt32 result; // eax
  UInt32 v2; // edx
  int v3; // esi

  result = this->member.pad624[0]; /*0x762fd0*/
  if ( result ) /*0x762fdb*/
  {
    do /*0x762ff5*/
    {
      v2 = *(_DWORD *)(result + 0xC); /*0x762fe0*/
      v3 = unk_B42164; /*0x762fe5*/
      unk_B42164 = result; /*0x762feb*/
      *(_DWORD *)(result + 0xC) = v3; /*0x762ff0*/
      result = v2; /*0x762ff3*/
    }
    while ( v2 ); /*0x762ff5*/
  }
  this->member.pad624[1] = 0; /*0x762ff8*/
  this->member.pad624[0] = 0; /*0x762ffe*/
  return result; /*0x763004*/
}
