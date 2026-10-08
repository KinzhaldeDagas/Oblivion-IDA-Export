char __thiscall sub_764630(NiDX9Renderer *this)
{
  NiDX9Renderer *v1; // esi
  unsigned int v2; // ebp
  NiPixelData **DefaultTextureData; // ebx
  NiPixelData *v4; // edi
  int v5; // eax
  int v6; // ecx
  NiPixelData *v7; // eax
  NiPixelData *v8; // esi
  _DWORD v11[6]; // [esp+14h] [ebp-18h]

  v1 = this; /*0x764636*/
  v2 = 0; /*0x764638*/
  v11[0] = 1; /*0x76463f*/
  v11[1] = 0; /*0x764647*/
  v11[2] = 2; /*0x76464b*/
  v11[3] = 4; /*0x764653*/
  v11[4] = 3; /*0x76465b*/
  v11[5] = 5; /*0x764663*/
  DefaultTextureData = this->member.DefaultTextureData; /*0x76466b*/
  do /*0x764731*/
  {
    v4 = 0; /*0x764671*/
    DefaultTextureData[0xFFFFFFFC] = 0; /*0x764673*/
    v5 = 0; /*0x764676*/
    while ( 1 ) /*0x764680*/
    {
      v6 = v11[v5]; /*0x764680*/
      if ( *(&v1->member.unk6F4[0].unk00 + v6 + v2) ) /*0x76468b*/
        break; /*0x76468b*/
      if ( (unsigned int)++v5 >= 6 ) /*0x764696*/
        goto LABEL_7; /*0x764696*/
    }
    DefaultTextureData[0xFFFFFFFC] = (NiPixelData *)*(&v1->member.unk6F4[0].unk00 + v6 + v2); /*0x7646a4*/
LABEL_7:
    if ( DefaultTextureData[0xFFFFFFFC] ) /*0x7646a7*/
    {
      v7 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x7646ae*/
      if ( v7 ) /*0x7646b8*/
        v4 = NiPixelData::NiPixelData(v7, 4u, 4u, (int)DefaultTextureData[0xFFFFFFFC], 1u, 1); /*0x7646cd*/
      v8 = *DefaultTextureData; /*0x7646cf*/
      if ( *DefaultTextureData != v4 ) /*0x7646d3*/
      {
        if ( v8 ) /*0x7646d7*/
        {
          if ( !InterlockedDecrement((volatile LONG *)v8 + 1) ) /*0x7646dd*/
            (**(void (__thiscall ***)(NiPixelData *, int))v8)(v8, 1); /*0x7646f3*/
        }
        *DefaultTextureData = v4; /*0x7646f7*/
        if ( v4 ) /*0x7646f9*/
          InterlockedIncrement((volatile LONG *)v4 + 1); /*0x7646ff*/
      }
      _memset( /*0x76471c*/
        *((_DWORD *)*DefaultTextureData + 0x14) + **((_DWORD **)*DefaultTextureData + 0x17),
        0xFF,
        0x10 * *((_DWORD *)*DefaultTextureData + 0x19));
      v1 = this; /*0x764721*/
    }
    v2 += 0x16; /*0x764728*/
    ++DefaultTextureData; /*0x76472b*/
  }
  while ( v2 < 0x58 ); /*0x764731*/
  if ( !v1->member.DefaultTextureFormat[0] ) /*0x764737*/
    return 0; /*0x764744*/
  sub_7013A0((const void *)v1->member.DefaultTextureFormat[0]); /*0x76474c*/
  v1->member.unk874 = *(_DWORD *)(v1->member.DefaultTextureFormat[0] + 0x10); /*0x76475e*/
  return 1; /*0x764741*/
}
