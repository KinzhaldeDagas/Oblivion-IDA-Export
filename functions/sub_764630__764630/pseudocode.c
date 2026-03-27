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

  v1 = this;
  v2 = 0;
  v11[0] = 1;
  v11[1] = 0;
  v11[2] = 2;
  v11[3] = 4;
  v11[4] = 3;
  v11[5] = 5;
  DefaultTextureData = this->member.DefaultTextureData;
  do
  {
    v4 = 0;
    DefaultTextureData[0xFFFFFFFC] = 0;
    v5 = 0;
    while ( 1 )
    {
      v6 = v11[v5];
      if ( *(&v1->member.unk6F4[0].unk00 + v6 + v2) )
        break;
      if ( (unsigned int)++v5 >= 6 )
        goto LABEL_7;
    }
    DefaultTextureData[0xFFFFFFFC] = (NiPixelData *)*(&v1->member.unk6F4[0].unk00 + v6 + v2);
LABEL_7:
    if ( DefaultTextureData[0xFFFFFFFC] )
    {
      v7 = (NiPixelData *)FormHeapAlloc(0x70u);
      if ( v7 )
        v4 = NiPixelData::NiPixelData(v7, 4u, 4u, (int)DefaultTextureData[0xFFFFFFFC], 1u, 1);
      v8 = *DefaultTextureData;
      if ( *DefaultTextureData != v4 )
      {
        if ( v8 )
        {
          if ( !InterlockedDecrement((volatile LONG *)v8 + 1) )
            (**(void (__thiscall ***)(NiPixelData *, int))v8)(v8, 1);
        }
        *DefaultTextureData = v4;
        if ( v4 )
          InterlockedIncrement((volatile LONG *)v4 + 1);
      }
      _memset(
        *((_DWORD *)*DefaultTextureData + 0x14) + **((_DWORD **)*DefaultTextureData + 0x17),
        0xFF,
        0x10 * *((_DWORD *)*DefaultTextureData + 0x19));
      v1 = this;
    }
    v2 += 0x16;
    ++DefaultTextureData;
  }
  while ( v2 < 0x58 );
  if ( !v1->member.DefaultTextureFormat[0] )
    return 0;
  sub_7013A0((const void *)v1->member.DefaultTextureFormat[0]);
  v1->member.unk874 = *(_DWORD *)(v1->member.DefaultTextureFormat[0] + 0x10);
  return 1;
}
