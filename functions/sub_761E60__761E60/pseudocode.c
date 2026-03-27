char __userpurge sub_761E60@<al>(
        _DWORD *this@<ecx>,
        unsigned int a2@<ebp>,
        unsigned int a3@<edi>,
        int a4,
        int a5,
        int a6,
        char a7,
        unsigned int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int *a15)
{
  _DWORD *v16; // ecx
  bool v17; // zf
  unsigned int v18; // esi
  signed int v19; // eax
  void *v20; // ecx
  signed int v22; // eax
  int v23; // ebp
  int v24; // edi
  void *v25; // ecx
  int v26; // eax
  int *v27; // edi
  void *v28; // ecx
  unsigned int v29; // eax
  int v30; // ebp
  void *v31; // ecx
  void *v32; // ecx
  rsize_t v33; // [esp-8h] [ebp-2Ch]
  rsize_t v34; // [esp+0h] [ebp-24h]
  rsize_t v35; // [esp+4h] [ebp-20h]
  rsize_t v36; // [esp+Ch] [ebp-18h]
  signed int v38; // [esp+18h] [ebp-Ch]
  unsigned int v39; // [esp+1Ch] [ebp-8h] BYREF
  _DWORD *v40; // [esp+20h] [ebp-4h]
  unsigned __int8 v41; // [esp+34h] [ebp+10h]
  signed int v42; // [esp+3Ch] [ebp+18h]

  v16 = (_DWORD *)*(this + 0x174);
  v17 = (a7 & 0x10) == 0;
  v41 = (a7 & 4) == 0;
  v40 = v16;
  v18 = 0x20;
  if ( !v17 )
    v18 = 0x10;
  v19 = a9;
  if ( !a9 )
  {
    v19 = sub_7751F0(v16, v41, v18);
    if ( !v19 )
    {
      HIDWORD(v34) = "Creation failed: Could not find desired framebuffer format";
      LODWORD(v34) = 0x100;
      strncpy_s(&byte_B3F828, v34, (const char *)0xFF, v36);
      TESTexture::ClearComponentReferences(v20);
      return 0;
    }
  }
  v35 = __PAIR64__(a2, a3);
  v22 = sub_4979E0(v19);
  v23 = a10;
  v24 = v22;
  v38 = v22;
  if ( !a10 )
  {
    v23 = sub_775280((_DWORD *)*(this + 0x174), v22, v22, v18, a7 & 8);
    if ( !v23 )
    {
      HIDWORD(v33) = "Creation failed: Could not find desired depth/stencil format";
      LODWORD(v33) = 0x100;
      strncpy_s(&byte_B3F828, v33, (const char *)0xFF, v35);
      TESTexture::ClearComponentReferences(v25);
      return 0;
    }
  }
  _memset(a15, 0, 0x38);
  a15[2] = v24;
  *a15 = a5;
  a15[1] = a6;
  v42 = sub_761CE0(a8);
  a15[4] = v42;
  if ( v42 == 1 )
    a15[5] = a8 & 0x7FFFFFFF;
  else
    a15[5] = 0;
  a15[0xA] = v23;
  a15[3] = a11;
  a15[9] = (a7 & 1) == 0;
  a15[8] = v41;
  if ( a8 <= 1 && a12 != 1 )
  {
    if ( a12 == 2 )
    {
      v26 = 2;
      goto LABEL_19;
    }
    if ( a12 == 3 )
    {
      v26 = 3;
      goto LABEL_19;
    }
  }
  v26 = 1;
LABEL_19:
  a15[6] = v26;
  v27 = a15 + 0xC;
  a15[0xC] = a13;
  a15[7] = a4;
  a15[0xB] = a8 == 1;
  a15[0xD] = sub_761DA0(a14);
  if ( (*(int (__stdcall **)(int, _DWORD, _DWORD, signed int, _DWORD, signed int, unsigned int *))(*(_DWORD *)dword_B42154
                                                                                                 + 0x2C))(
         dword_B42154,
         *(this + 0x16F),
         *(this + 0x170),
         v38,
         v41,
         v42,
         &v39) >= 0 )
  {
    if ( v39 <= a15[5] )
      a15[5] = v39 - 1;
  }
  else
  {
    TESTexture::ClearComponentReferences(v28);
    a15[4] = 0;
  }
  v29 = a15[3];
  if ( v29 )
  {
    if ( v29 > 3 )
      a15[3] = 3;
  }
  else
  {
    a15[3] = 1;
  }
  v30 = *v27;
  if ( a15[8] )
  {
    *v27 = 0;
  }
  else
  {
    if ( !sub_775320((_WORD *)*(this + 0x173), a15[2], *a15, a15[1], a15 + 0xC) )
    {
      sub_761A90("Creation failed: Could not match desired fullscreen mode");
      TESTexture::ClearComponentReferences(v32);
      return 0;
    }
    if ( v30 != *v27 )
      TESTexture::ClearComponentReferences(v31);
  }
  if ( a15[8] )
  {
    a15[0xD] = 0x80000000;
    return 1;
  }
  else
  {
    if ( (v40[6] & a15[0xD]) == 0 )
      a15[0xD] = 1;
    return 1;
  }
}
