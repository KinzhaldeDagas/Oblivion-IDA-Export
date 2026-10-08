char __cdecl sub_4F8200(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f820c*/
  if ( a2 ) /*0x4f820e*/
  {
    if ( (*(_BYTE *)(a2 + 0x34) & 0x20) != 0 ) /*0x4f8219*/
      *a4 = 1.0; /*0x4f821d*/
  }
  if ( !MEMORY[0xB361AC] ) /*0x4f821f*/
    return 1; /*0x4f8253*/
  if ( 0.0 == *a4 ) /*0x4f822f*/
    Interface_ConsolePrint("PC did not attack a faction member."); /*0x4f8246*/
  else
    Interface_ConsolePrint("PC attacked a faction member."); /*0x4f8236*/
  return 1; /*0x4f8240*/
}
