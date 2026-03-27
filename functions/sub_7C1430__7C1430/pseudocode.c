BSRenderedTexture *__thiscall sub_7C1430(BSTextureManager *this, int a2, int a3, int a4, int a5, int a6, __int16 a7)
{
  int i; // eax
  BSRenderedTexture *v8; // ebx
  void *unk40; // edi
  bool v10; // zf
  int v11; // esi
  int v12; // edx
  NiObjectNET *v13; // esi
  BSRenderedTexture *v14; // eax
  BSRenderedTexture *v15; // eax
  NiObjectVtbl **v17[3]; // [esp+14h] [ebp-18h] BYREF
  unsigned int v18; // [esp+28h] [ebp-4h]

  i = a3;
  v8 = 0;
  unk40 = 0;
  v10 = byte_B42E96 == 0;
  v17[2] = (NiObjectVtbl **)2;
  if ( v10 )
  {
    v12 = a4;
    if ( a3 > a4 )
      v12 = a3;
    for ( i = 1; i < v12; i *= 2 )
      ;
    v11 = i;
  }
  else
  {
    v11 = a4;
  }
  v17[0] = (NiObjectVtbl **)2;
  v17[1] = (NiObjectVtbl **)2;
  if ( a5 )
  {
    byte_B3FF00 = 1;
    dword_B2752C = a5;
  }
  if ( (a7 & 8) != 0 )
    byte_B27530 = 0;
  if ( (a7 & 0x80) != 0 )
    dword_B294EC = 0;
  if ( (a7 & 0x100) == 0 )
    unk40 = this->unk40;
  if ( (a7 & 0x10) != 0 )
  {
    v13 = sub_9A1CE0(i, (int)dword_B43104, v17);
    if ( !v13 )
      goto LABEL_24;
    v14 = (BSRenderedTexture *)FormHeapAlloc(0x24u);
    v18 = 0;
    if ( v14 )
      v15 = BSRenderedTexture::BSRenderedTexture(v14, (NiRenderedTexture *)v13, 1, (int)unk40);
    else
      v15 = 0;
    v18 = 0xFFFFFFFF;
  }
  else
  {
    v15 = sub_7D6F40(i, v11, v17, (a7 & 4) == 0, (int)unk40);
  }
  v8 = v15;
LABEL_24:
  if ( a5 )
    byte_B3FF00 = 0;
  if ( (a7 & 8) != 0 )
    byte_B27530 = 1;
  if ( (a7 & 0x80) != 0 )
    dword_B294EC = 1;
  if ( !v8 )
  {
    if ( dword_B42E8C )
      dword_B42E8C("Unable to create rendered texture", 0);
  }
  return v8;
}
