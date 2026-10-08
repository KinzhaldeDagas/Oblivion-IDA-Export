// Pass226: NiScreenTexture record capacity helper; reallocates/copies 0x1C-byte records. Stock xrefs are load/copy only and do not set +0x18.
void __thiscall sub_73DD70(unsigned int *this, int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  char *v5; // eax
  char *v6; // ebx
  unsigned int v7; // edx
  int v8; // eax

  v3 = a2; /*0x73dd97*/
  if ( a2 != *(this + 1) )
  {
    v4 = 0; /*0x73dda4*/
    if ( a2 )
    {
      v5 = (char *)FormHeapAlloc((0x1C * (unsigned __int64)(unsigned int)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * a2);
      v6 = v5; /*0x73ddc2*/
      if ( v5 ) /*0x73ddd1*/
        sub_401080(v5, 0x1C, a2, (void *(__thiscall *)(void *))sub_73DD40); /*0x73dddc*/
      else
        v6 = 0; /*0x73dde3*/
      v7 = 0; /*0x73dde5*/
      v4 = (unsigned int)v6; /*0x73ddea*/
      if ( *(this + 2) ) /*0x73dde7*/
      {
        v8 = 0; /*0x73ddf2*/
        do /*0x73de0c*/
        {
          ++v7; /*0x73de01*/
          qmemcpy(&v6[v8], (const void *)(v8 + *this), 0x1Cu); /*0x73de04*/
          v8 += 0x1C; /*0x73de06*/
        }
        while ( v7 < *(this + 2) ); /*0x73de0c*/
        v3 = a2; /*0x73de0e*/
        v4 = (unsigned int)v6; /*0x73de12*/
      }
    }
    FormHeapFree(*this); /*0x73de1a*/
    *this = v4; /*0x73de22*/
    *(this + 1) = v3; /*0x73de25*/
  }
}
