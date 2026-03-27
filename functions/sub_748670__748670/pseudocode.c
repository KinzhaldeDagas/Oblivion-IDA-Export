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

  v4 = Src + 0x303;
  if ( !*(Src + 0x303) )
    return sub_9853B2(a2, (int)(Src + 0x100), (unsigned __int8 *)Src, (int)(Src + 0x203), (int)(Src + 0x103));
  HIDWORD(v8) = Src;
  LODWORD(v8) = 0x100;
  Dst[0] = 0;
  strcat_s(Dst, v8, v10);
  v5 = strlen(Dst);
  if ( v5 )
  {
    v6 = Dst[v5 - 1];
    if ( v6 != 0x5C && v6 != 0x2F )
    {
      Dst[v5 + 1] = 0;
      Dst[v5] = 0x5C;
    }
  }
  HIDWORD(v9) = v4;
  LODWORD(v9) = 0x100;
  strcat_s(Dst, v9, v11);
  return sub_9853B2(a2, (int)(Src + 0x100), (unsigned __int8 *)Dst, (int)(Src + 0x203), (int)(Src + 0x103));
}
