// positive sp value has been detected, the output may be wrong!
int __userpurge def_575A58@<eax>(
        unsigned __int8 a1@<al>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        _DWORD *a5,
        int a6,
        int a7,
        double a8,
        double a9,
        int a10)
{
  float v11; // [esp-1Ch] [ebp-1Ch] BYREF

  sub_573F10((float *)(*(_DWORD *)(a3 + 0x38) + 0x38 * a1 + 0x128), a10, a2, &v11, a5); /*0x575a9b*/
  *(_DWORD *)HIDWORD(a8) = Double_To_SInt32(v11); /*0x575ad1*/
  if ( *(_BYTE *)((*(_DWORD *)LODWORD(a8) != 0 ? a4 + 1 : 0) + *(_DWORD *)LODWORD(a8)) )
    JUMPOUT(0x5759C6); /*0x5759c6*/
  NiSphere_ComputeFromVertices( /*0x575b14*/
    (NiSphere *)(*(_DWORD *)(a2 + 0xB4) + 0xC),
    *(unsigned __int16 *)(*(_DWORD *)(a2 + 0xB4) + 8),
    *(const NiPoint3 **)(*(_DWORD *)(a2 + 0xB4) + 0x1C));
  return a2; /*0x575b22*/
}
