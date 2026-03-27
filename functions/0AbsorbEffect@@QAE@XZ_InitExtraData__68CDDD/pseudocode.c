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
  a2[0xF] = a1;
  a2[0x10] = a1;
  a2[0x11] = a1;
  a2[0x12] = a1;
  JUMPOUT(0x68CE15);
}
