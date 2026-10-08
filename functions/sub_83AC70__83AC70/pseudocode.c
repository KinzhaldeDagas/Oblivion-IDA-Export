int __cdecl sub_83AC70(unsigned __int16 a1)
{
  int result; // eax

  sub_849020(a1); /*0x83ac76*/
  if ( (unsigned __int16)(a1 - 0x18A) > 1u ) /*0x83ac8e*/
  {
    if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x83accf*/
    {
      *(_BYTE *)(dword_B44F8C + 8) = 0; /*0x83acd7*/
      *(_BYTE *)(dword_B45084 + 8) = 0; /*0x83ace0*/
      *(_BYTE *)(dword_B44F88 + 8) = 0; /*0x83ace9*/
      *(_BYTE *)(unk_B45060 + 8) = 0; /*0x83acf2*/
      *(_BYTE *)(dword_B45550 + 8) = 0; /*0x83acfb*/
    }
  }
  else
  {
    if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x83ac97*/
    {
      *(_BYTE *)(dword_B44F8C + 8) = 1; /*0x83ac9f*/
      *(_BYTE *)(dword_B45084 + 8) = 1; /*0x83aca8*/
      *(_BYTE *)(dword_B44F88 + 8) = 1; /*0x83acb1*/
    }
    *(_BYTE *)(unk_B45060 + 8) = 1; /*0x83acba*/
    *(_BYTE *)(dword_B45550 + 8) = 1; /*0x83acc3*/
  }
  *(_BYTE *)(dword_B45554 + 8) = a1 == 0xE0 || a1 == 0xE1; /*0x83ad1c*/
  result = unk_B45538; /*0x83ad1f*/
  if ( unk_B45538 ) /*0x83ad1f*/
    *(_BYTE *)(result + 8) = 0; /*0x83ad29*/
  return result; /*0x83ad26*/
}
