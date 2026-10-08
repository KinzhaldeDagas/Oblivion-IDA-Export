int __thiscall sub_720DB0(NiSourceTexture *this, unsigned int *a2)
{
  unsigned int *v2; // esi
  unsigned int v4; // eax
  void (__cdecl *v5)(unsigned int, unsigned int **, int, int *, int); // eax
  char **v6; // ebx
  int v7; // ebp
  int v8; // ebx
  unsigned int i; // ebx
  void (__cdecl *v10)(unsigned int, PixelLayout *, int, int *, int); // eax
  void (__cdecl *v11)(unsigned int, int *, int, PixelLayout *, int); // edx
  void (__cdecl *v12)(unsigned int, int *, int, PixelLayout *, int); // eax
  UInt8 loadDirectToRender; // dl
  unsigned int v14; // esi
  void (__cdecl *v15)(unsigned int, UInt8 *, int, PixelLayout *, int); // edx
  int result; // eax
  unsigned int v17; // [esp-44h] [ebp-70h]
  unsigned int v18; // [esp-30h] [ebp-5Ch]
  unsigned int v19; // [esp-1Ch] [ebp-48h]
  unsigned int v20; // [esp-1Ch] [ebp-48h]
  UInt8 v21; // [esp+Bh] [ebp-21h] BYREF
  int v22; // [esp+Ch] [ebp-20h] BYREF
  PixelLayout v23; // [esp+10h] [ebp-1Ch] BYREF
  char *v24; // [esp+14h] [ebp-18h] BYREF
  char *v25; // [esp+18h] [ebp-14h]
  char *v26; // [esp+1Ch] [ebp-10h]
  char *v27; // [esp+20h] [ebp-Ch]
  char *v28; // [esp+24h] [ebp-8h]
  char *v29; // [esp+28h] [ebp-4h]

  v2 = a2; /*0x720db4*/
  if ( a2[0x36] >= 0xA030006 ) /*0x720dc5*/
    return sub_7023E0((char *)this, a2); /*0x720f71*/
  sub_700FC0((NiRenderer *)this, a2); /*0x720dce*/
  InterlockedIncrement((volatile LONG *)&this->members); /*0x720dd7*/
  v4 = v2[0x87]; /*0x720ddd*/
  LOBYTE(a2) = 0; /*0x720df1*/
  v19 = v4; /*0x720df6*/
  v5 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v4 + 4); /*0x720df7*/
  v22 = 1; /*0x720dfa*/
  v5(v19, &a2, 1, &v22, 1); /*0x720e02*/
  v24 = 0; /*0x720e09*/
  v25 = 0; /*0x720e0d*/
  v26 = 0; /*0x720e11*/
  v27 = 0; /*0x720e15*/
  v28 = 0; /*0x720e19*/
  v29 = 0; /*0x720e1d*/
  v6 = &v24; /*0x720e21*/
  v7 = 6; /*0x720e25*/
  do /*0x720e3e*/
  {
    sub_713620(v2, (int)v6++); /*0x720e33*/
    --v7; /*0x720e3b*/
  }
  while ( v7 ); /*0x720e3e*/
  sub_712BC0(v2, 6); /*0x720e44*/
  v8 = 6; /*0x720e49*/
  do /*0x720e5a*/
  {
    sub_712A20(v2); /*0x720e52*/
    --v8; /*0x720e57*/
  }
  while ( v8 ); /*0x720e5a*/
  if ( (_BYTE)a2 ) /*0x720e61*/
    sub_720B40(this, v24, v25, v26, v27, v28, v29, (char *)v2[0x7A]); /*0x720e8a*/
  for ( i = 0; i < 6; ++i ) /*0x720e8f*/
    FormHeapFree((unsigned int)(&v24)[i]); /*0x720e96*/
  v20 = v2[0x87]; /*0x720ebe*/
  v10 = *(void (__cdecl **)(unsigned int, PixelLayout *, int, int *, int))(v20 + 4); /*0x720ebf*/
  v22 = 4; /*0x720ec2*/
  v10(v20, &v23, 4, &v22, 1); /*0x720ec6*/
  this->members.super.formatPrefs.pixelLayout = v23; /*0x720ed3*/
  v11 = *(void (__cdecl **)(unsigned int, int *, int, PixelLayout *, int))(v2[0x87] + 4); /*0x720edc*/
  v18 = v2[0x87]; /*0x720ee5*/
  v23 = kPixelLayout_Bumpmap; /*0x720ee6*/
  v11(v18, &v22, 4, &v23, 1); /*0x720eea*/
  this->members.super.formatPrefs.mipmapFormat = v22; /*0x720ef7*/
  v17 = v2[0x87]; /*0x720f06*/
  v12 = *(void (__cdecl **)(unsigned int, int *, int, PixelLayout *, int))(v17 + 4); /*0x720f07*/
  v23 = kPixelLayout_Bumpmap; /*0x720f0a*/
  v12(v17, &v22, 4, &v23, 1); /*0x720f0e*/
  loadDirectToRender = this->members.loadDirectToRender; /*0x720f14*/
  this->members.super.formatPrefs.alphaFormat = v22; /*0x720f1e*/
  v14 = v2[0x87]; /*0x720f21*/
  v21 = loadDirectToRender; /*0x720f2e*/
  v15 = *(void (__cdecl **)(unsigned int, UInt8 *, int, PixelLayout *, int))(v14 + 4); /*0x720f32*/
  v23 = kPixelLayout_HighColor16; /*0x720f36*/
  v15(v14, &v21, 1, &v23, 1); /*0x720f3e*/
  this->members.loadDirectToRender = v21 != 0; /*0x720f4b*/
  result = InterlockedDecrement((volatile LONG *)&this->members); /*0x720f52*/
  if ( !result ) /*0x720f5c*/
    return ((int (__thiscall *)(NiSourceTexture *, int))this->vtbl->super.super.super.Destructor)(this, 1); /*0x720f66*/
  return result; /*0x720f68*/
}
