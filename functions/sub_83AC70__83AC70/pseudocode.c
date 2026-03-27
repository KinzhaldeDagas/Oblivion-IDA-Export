int __cdecl sub_83AC70(unsigned __int16 a1)
{
  int result; // eax

  sub_849020(a1);
  if ( (unsigned __int16)(a1 - 0x18A) > 1u )
  {
    if ( ShaderPackage >= 2 )
    {
      *(_BYTE *)(dword_B44F8C + 8) = 0;
      *(_BYTE *)(dword_B45084 + 8) = 0;
      *(_BYTE *)(dword_B44F88 + 8) = 0;
      *(_BYTE *)(dword_B45060 + 8) = 0;
      *(_BYTE *)(dword_B45550 + 8) = 0;
    }
  }
  else
  {
    if ( ShaderPackage >= 2 )
    {
      *(_BYTE *)(dword_B44F8C + 8) = 1;
      *(_BYTE *)(dword_B45084 + 8) = 1;
      *(_BYTE *)(dword_B44F88 + 8) = 1;
    }
    *(_BYTE *)(dword_B45060 + 8) = 1;
    *(_BYTE *)(dword_B45550 + 8) = 1;
  }
  *(_BYTE *)(dword_B45554 + 8) = a1 == 0xE0 || a1 == 0xE1;
  result = dword_B45538;
  if ( dword_B45538 )
    *(_BYTE *)(result + 8) = 0;
  return result;
}
