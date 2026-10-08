// Oblivion-authoritative: builds the 0x38-byte D3DPRESENT_PARAMETERS block. Chooses framebuffer/depth formats, multisample type/quality, swap effect/backbuffer count, windowed/fullscreen mode, refresh rate, and presentation interval; degrades unsupported requests.
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

  v16 = (_DWORD *)*(this + 0x174); /*0x761e73*/
  v17 = (a7 & 0x10) == 0; /*0x761e7b*/
  v41 = (a7 & 4) == 0; /*0x761e7f*/
  v40 = v16; /*0x761e83*/
  v18 = 0x20; /*0x761e87*/
  if ( !v17 ) /*0x761e8c*/
    v18 = 0x10; /*0x761e8e*/
  v19 = a9; /*0x761e93*/
  if ( !a9 )
  {
    v19 = sub_7751F0(v16, v41, v18); /*0x761ea1*/
    if ( !v19 )
    {
      HIDWORD(v34) = "Creation failed: Could not find desired framebuffer format";
      LODWORD(v34) = 0x100; /*0x761eb4*/
      strncpy_s(&unk_B3F828, v34, (const char *)0xFF, v36); /*0x761ebe*/
      Shared_NoOpVirtual_60D0A0(v20); /*0x761ec8*/
      return 0; /*0x761ed7*/
    }
  }
  v35 = __PAIR64__(a2, a3); /*0x761edb*/
  v22 = sub_4979E0(v19); /*0x761edd*/
  v23 = a10; /*0x761ee2*/
  v24 = v22; /*0x761eeb*/
  v38 = v22; /*0x761eed*/
  if ( !a10 )
  {
    v23 = NiDX9DeviceDesc_SelectCompatibleDepthStencilFormat((_DWORD *)*(this + 0x174), v22, v22, v18, a7 & 8); /*0x761f0b*/
    if ( !v23 )
    {
      HIDWORD(v33) = "Creation failed: Could not find desired depth/stencil format";
      LODWORD(v33) = 0x100; /*0x761f1b*/
      strncpy_s(&unk_B3F828, v33, (const char *)0xFF, v35); /*0x761f25*/
      Shared_NoOpVirtual_60D0A0(v25); /*0x761f2f*/
      return 0; /*0x761f40*/
    }
  }
  _memset((int)a15, 0, 0x38u); /*0x761f4c*/
  a15[2] = v24; /*0x761f59*/
  *a15 = a5; /*0x761f61*/
  a15[1] = a6; /*0x761f63*/
  v42 = sub_761CE0(a8); /*0x761f71*/
  a15[4] = v42; /*0x761f75*/
  if ( v42 == 1 ) /*0x761f78*/
    a15[5] = a8 & 0x7FFFFFFF; /*0x761f82*/
  else
    a15[5] = 0; /*0x761f87*/
  a15[0xA] = v23; /*0x761f94*/
  a15[3] = a11; /*0x761f97*/
  a15[9] = (a7 & 1) == 0; /*0x761f9f*/
  a15[8] = v41; /*0x761fa7*/
  if ( a8 <= 1 && a12 != 1 ) /*0x761fb8*/
  {
    if ( a12 == 2 ) /*0x761fbd*/
    {
      v26 = 2; /*0x761fcb*/
      goto LABEL_19; /*0x761fd0*/
    }
    if ( a12 == 3 ) /*0x761fc2*/
    {
      v26 = 3; /*0x761fc4*/
      goto LABEL_19; /*0x761fc9*/
    }
  }
  v26 = 1; /*0x761fd2*/
LABEL_19:
  a15[6] = v26; /*0x761fd7*/
  v27 = a15 + 0xC; /*0x761fea*/
  a15[0xC] = a13; /*0x761fed*/
  a15[7] = a4; /*0x761ff4*/
  a15[0xB] = a8 == 1; /*0x761ff7*/
  a15[0xD] = sub_761DA0(a14); /*0x762015*/
  if ( (*(int (__stdcall **)(int, _DWORD, _DWORD, signed int, _DWORD, signed int, unsigned int *))(*(_DWORD *)g_Direct3D9 /*0x762036*/
                                                                                                 + 0x2C))(
         g_Direct3D9,
         *(this + 0x16F),
         *(this + 0x170),
         v38,
         v41,
         v42,
         &v39) >= 0 )
  {
    if ( v39 <= a15[5] ) /*0x762055*/
      a15[5] = v39 - 1; /*0x76205a*/
  }
  else
  {
    Shared_NoOpVirtual_60D0A0(v28); /*0x76203d*/
    a15[4] = 0; /*0x762045*/
  }
  v29 = a15[3]; /*0x76205d*/
  if ( v29 ) /*0x762062*/
  {
    if ( v29 > 3 ) /*0x762070*/
      a15[3] = 3; /*0x762072*/
  }
  else
  {
    a15[3] = 1; /*0x762064*/
  }
  v30 = *v27; /*0x76207d*/
  if ( a15[8] )
  {
    *v27 = 0; /*0x762081*/
  }
  else
  {
    if ( !sub_775320((_WORD *)*(this + 0x173), a15[2], *a15, a15[1], a15 + 0xC) )
    {
      sub_761A90("Creation failed: Could not match desired fullscreen mode");
      Shared_NoOpVirtual_60D0A0(v32); /*0x7620b3*/
      return 0; /*0x7620c4*/
    }
    if ( v30 != *v27 ) /*0x7620c9*/
      Shared_NoOpVirtual_60D0A0(v31); /*0x7620d0*/
  }
  if ( a15[8] ) /*0x7620d8*/
  {
    a15[0xD] = 0x80000000; /*0x7620e0*/
    return 1; /*0x7620e8*/
  }
  else
  {
    if ( (v40[6] & a15[0xD]) == 0 ) /*0x7620fb*/
      a15[0xD] = 1; /*0x7620fd*/
    return 1; /*0x762107*/
  }
}
