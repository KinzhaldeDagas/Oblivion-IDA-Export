// positive sp value has been detected, the output may be wrong!
int __userpurge def_576929@<eax>(
        unsigned __int8 a1@<al>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4,
        int *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _DWORD *a11,
        int a12)
{
  unsigned int v13; // [esp-5Ch] [ebp-5Ch]
  float v14; // [esp-40h] [ebp-40h] BYREF
  unsigned int v15; // [esp-34h] [ebp-34h] BYREF
  char v16; // [esp-4h] [ebp-4h]

  sub_573F10((float *)(*(_DWORD *)(a3 + 0x38) + 0x38 * a1 + 0x128), a12, a2, &v14, a11); /*0x576972*/
  *a5 = Double_To_SInt32(v14); /*0x5769ab*/
  if ( *(_BYTE *)((v13 != 0 ? a4 + 1 : 0) + v13) )
    JUMPOUT(0x576816); /*0x576816*/
  NiSphere_ComputeFromVertices( /*0x5769e6*/
    (NiSphere *)(*(_DWORD *)(a2 + 0xB4) + 0xC),
    *(unsigned __int16 *)(*(_DWORD *)(a2 + 0xB4) + 8),
    *(const NiPoint3 **)(*(_DWORD *)(a2 + 0xB4) + 0x1C));
  v16 = 0; /*0x5769ef*/
  sub_5756A0(&v15); /*0x5769f4*/
  FormHeapFree(v13); /*0x5769fa*/
  return a2; /*0x576a17*/
}
