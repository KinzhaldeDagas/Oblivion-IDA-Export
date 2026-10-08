int __thiscall sub_748670(char *Src, int a2, int a3)
{
  char *v4; // edi
  unsigned int v5; // kr00_4
  char v6; // dl
  rsize_t v8; // [esp-8h] [ebp-118h]
  rsize_t v9; // [esp-8h] [ebp-118h]
  const char *v10; // [esp+0h] [ebp-110h]
  const char *v11; // [esp+0h] [ebp-110h]
  char Dst[256]; // [esp+Ch] [ebp-104h] BYREF

  v4 = Src + 0x303; /*0x748697*/
  if ( !*(Src + 0x303) ) /*0x74868f*/
    return sub_9853B2(a2, (int)(Src + 0x100), (unsigned __int8 *)Src, (int)(Src + 0x203), (int)(Src + 0x103)); /*0x748733*/
  HIDWORD(v8) = Src; /*0x74869f*/
  LODWORD(v8) = 0x100; /*0x7486a4*/
  Dst[0] = 0; /*0x7486aa*/
  strcat_s(Dst, v8, v10); /*0x7486af*/
  v5 = strlen(Dst); /*0x7486b4*/
  if ( v5 ) /*0x7486cb*/
  {
    v6 = Dst[v5 - 1]; /*0x7486cd*/
    if ( v6 != 0x5C && v6 != 0x2F ) /*0x7486dd*/
    {
      Dst[v5 + 1] = 0; /*0x7486df*/
      Dst[v5] = 0x5C; /*0x7486e4*/
    }
  }
  HIDWORD(v9) = v4; /*0x7486e7*/
  LODWORD(v9) = 0x100; /*0x7486ec*/
  strcat_s(Dst, v9, v11); /*0x7486f2*/
  return sub_9853B2(a2, (int)(Src + 0x100), (unsigned __int8 *)Dst, (int)(Src + 0x203), (int)(Src + 0x103)); /*0x74873b*/
}
