void __userpurge AbsorbEffect::AbsorbEffect(
        int a1@<ebx>,
        _DWORD *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10)
{
  a2[0xF] = a1; /*0x68cddd*/
  a2[0x10] = a1; /*0x68cde0*/
  a2[0x11] = a1; /*0x68cde3*/
  a2[0x12] = a1; /*0x68cde6*/
  JUMPOUT(0x68CE15); /*0x68ce15*/
}
