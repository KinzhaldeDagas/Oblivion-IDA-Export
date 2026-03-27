int __thiscall sub_720DB0(NiSourceTexture *this, unsigned int *a2)
{
  unsigned int *v2; // esi
  unsigned int v4; // eax
  void (__cdecl *v5)(unsigned int, unsigned int **, int, int *, int); // eax
  char **v6; // ebx
  int v7; // ebp
  int v8; // ebx
  unsigned int i; // ebx
  void (__cdecl *v10)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v11)(unsigned int, int *, int, int *, int); // edx
  void (__cdecl *v12)(unsigned int, int *, int, int *, int); // eax
  UInt8 loadDirectToRender; // dl
  unsigned int v14; // esi
  void (__cdecl *v15)(unsigned int, UInt8 *, int, int *, int); // edx
  int result; // eax
  unsigned int v17; // [esp-44h] [ebp-70h]
  unsigned int v18; // [esp-30h] [ebp-5Ch]
  unsigned int v19; // [esp-1Ch] [ebp-48h]
  unsigned int v20; // [esp-1Ch] [ebp-48h]
  UInt8 v21; // [esp+Bh] [ebp-21h] BYREF
  int v22; // [esp+Ch] [ebp-20h] BYREF
  int v23; // [esp+10h] [ebp-1Ch] BYREF
  char *v24; // [esp+14h] [ebp-18h] BYREF
  char *v25; // [esp+18h] [ebp-14h]
  char *v26; // [esp+1Ch] [ebp-10h]
  char *v27; // [esp+20h] [ebp-Ch]
  char *v28; // [esp+24h] [ebp-8h]
  char *v29; // [esp+28h] [ebp-4h]

  v2 = a2;
  if ( a2[0x36] >= 0xA030006 )
    return sub_7023E0((char *)this, a2);
  sub_700FC0((int *)this, a2);
  InterlockedIncrement((volatile LONG *)&this->members);
  v4 = v2[0x87];
  LOBYTE(a2) = 0;
  v19 = v4;
  v5 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v4 + 4);
  v22 = 1;
  v5(v19, &a2, 1, &v22, 1);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v6 = &v24;
  v7 = 6;
  do
  {
    sub_713620(v2, (int)v6++);
    --v7;
  }
  while ( v7 );
  sub_712BC0(v2, 6);
  v8 = 6;
  do
  {
    sub_712A20(v2);
    --v8;
  }
  while ( v8 );
  if ( (_BYTE)a2 )
    sub_720B40(this, v24, v25, v26, v27, v28, v29, (char *)v2[0x7A]);
  for ( i = 0; i < 6; ++i )
    FormHeapFree((unsigned int)(&v24)[i]);
  v20 = v2[0x87];
  v10 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v20 + 4);
  v22 = 4;
  v10(v20, &v23, 4, &v22, 1);
  this->members.super.formatPrefs.pixelLayout = v23;
  v11 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v2[0x87] + 4);
  v18 = v2[0x87];
  v23 = 4;
  v11(v18, &v22, 4, &v23, 1);
  this->members.super.formatPrefs.mipmapFormat = v22;
  v17 = v2[0x87];
  v12 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v17 + 4);
  v23 = 4;
  v12(v17, &v22, 4, &v23, 1);
  loadDirectToRender = this->members.loadDirectToRender;
  this->members.super.formatPrefs.alphaFormat = v22;
  v14 = v2[0x87];
  v21 = loadDirectToRender;
  v15 = *(void (__cdecl **)(unsigned int, UInt8 *, int, int *, int))(v14 + 4);
  v23 = 1;
  v15(v14, &v21, 1, &v23, 1);
  this->members.loadDirectToRender = v21 != 0;
  result = InterlockedDecrement((volatile LONG *)&this->members);
  if ( !result )
    return ((int (__thiscall *)(NiSourceTexture *, int))this->vtbl->super.super.super.Destructor)(this, 1);
  return result;
}
