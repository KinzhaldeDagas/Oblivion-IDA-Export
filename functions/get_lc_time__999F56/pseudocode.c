unsigned int __usercall _get_lc_time@<eax>(int a1@<eax>, int a2@<esi>)
{
  LCID v2; // ecx
  LCID v3; // edx
  unsigned int result; // eax
  unsigned int v5; // edi
  unsigned int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // edi
  unsigned int v21; // edi
  unsigned int v22; // edi
  unsigned int v23; // edi
  unsigned int v24; // edi
  unsigned int v25; // edi
  unsigned int v26; // edi
  unsigned int v27; // edi
  unsigned int v28; // edi
  unsigned int v29; // edi
  unsigned int v30; // edi
  unsigned int v31; // edi
  unsigned int v32; // edi
  unsigned int v33; // edi
  unsigned int v34; // edi
  unsigned int v35; // edi
  unsigned int v36; // edi
  unsigned int v37; // edi
  unsigned int v38; // edi
  unsigned int v39; // edi
  unsigned int v40; // edi
  unsigned int v41; // edi
  unsigned int v42; // edi
  unsigned int v43; // edi
  unsigned int v44; // edi
  unsigned int v45; // edi
  unsigned int v46; // edi
  unsigned int v47; // edi
  LCID v48; // ebx
  struct localeinfo_struct v49; // [esp+0h] [ebp-10h] BYREF
  LCID v50; // [esp+8h] [ebp-8h]
  LCID v51; // [esp+Ch] [ebp-4h]

  v2 = *(unsigned __int16 *)(a1 + 0x42); /*0x999f5e*/
  v3 = *(unsigned __int16 *)(a1 + 0x44); /*0x999f62*/
  v51 = v2; /*0x999f66*/
  v50 = v3; /*0x999f69*/
  if ( !a2 ) /*0x999f6c*/
    return 0xFFFFFFFF; /*0x999f6e*/
  v49.mbcinfo = 0; /*0x999f73*/
  v49.locinfo = (pthreadlocinfo)a1; /*0x999f79*/
  v5 = unknown_libname_90(&v49, 1, v2, 0x31u, (_BYTE *)(a2 + 4)); /*0x999f90*/
  v6 = unknown_libname_90(&v49, 1, v51, 0x32u, (_BYTE *)(a2 + 8)) | v5; /*0x999fa5*/
  v7 = unknown_libname_90(&v49, 1, v51, 0x33u, (_BYTE *)(a2 + 0xC)) | v6; /*0x999fba*/
  v8 = unknown_libname_90(&v49, 1, v51, 0x34u, (_BYTE *)(a2 + 0x10)) | v7; /*0x999fd2*/
  v9 = unknown_libname_90(&v49, 1, v51, 0x35u, (_BYTE *)(a2 + 0x14)) | v8; /*0x999fe7*/
  v10 = unknown_libname_90(&v49, 1, v51, 0x36u, (_BYTE *)(a2 + 0x18)) | v9; /*0x99a002*/
  v11 = unknown_libname_90(&v49, 1, v51, 0x37u, (_BYTE *)a2) | v10; /*0x99a00e*/
  v12 = unknown_libname_90(&v49, 1, v51, 0x2Au, (_BYTE *)(a2 + 0x20)) | v11; /*0x99a026*/
  v13 = unknown_libname_90(&v49, 1, v51, 0x2Bu, (_BYTE *)(a2 + 0x24)) | v12; /*0x99a03b*/
  v14 = unknown_libname_90(&v49, 1, v51, 0x2Cu, (_BYTE *)(a2 + 0x28)) | v13; /*0x99a050*/
  v15 = unknown_libname_90(&v49, 1, v51, 0x2Du, (_BYTE *)(a2 + 0x2C)) | v14; /*0x99a065*/
  v16 = unknown_libname_90(&v49, 1, v51, 0x2Eu, (_BYTE *)(a2 + 0x30)) | v15; /*0x99a07d*/
  v17 = unknown_libname_90(&v49, 1, v51, 0x2Fu, (_BYTE *)(a2 + 0x34)) | v16; /*0x99a092*/
  v18 = unknown_libname_90(&v49, 1, v51, 0x30u, (_BYTE *)(a2 + 0x1C)) | v17; /*0x99a0a7*/
  v19 = unknown_libname_90(&v49, 1, v51, 0x44u, (_BYTE *)(a2 + 0x38)) | v18; /*0x99a0bc*/
  v20 = unknown_libname_90(&v49, 1, v51, 0x45u, (_BYTE *)(a2 + 0x3C)) | v19; /*0x99a0d4*/
  v21 = unknown_libname_90(&v49, 1, v51, 0x46u, (_BYTE *)(a2 + 0x40)) | v20; /*0x99a0e9*/
  v22 = unknown_libname_90(&v49, 1, v51, 0x47u, (_BYTE *)(a2 + 0x44)) | v21; /*0x99a0fe*/
  v23 = unknown_libname_90(&v49, 1, v51, 0x48u, (_BYTE *)(a2 + 0x48)) | v22; /*0x99a113*/
  v24 = unknown_libname_90(&v49, 1, v51, 0x49u, (_BYTE *)(a2 + 0x4C)) | v23; /*0x99a12b*/
  v25 = unknown_libname_90(&v49, 1, v51, 0x4Au, (_BYTE *)(a2 + 0x50)) | v24; /*0x99a140*/
  v26 = unknown_libname_90(&v49, 1, v51, 0x4Bu, (_BYTE *)(a2 + 0x54)) | v25; /*0x99a155*/
  v27 = unknown_libname_90(&v49, 1, v51, 0x4Cu, (_BYTE *)(a2 + 0x58)) | v26; /*0x99a16a*/
  v28 = unknown_libname_90(&v49, 1, v51, 0x4Du, (_BYTE *)(a2 + 0x5C)) | v27; /*0x99a182*/
  v29 = unknown_libname_90(&v49, 1, v51, 0x4Eu, (_BYTE *)(a2 + 0x60)) | v28; /*0x99a197*/
  v30 = unknown_libname_90(&v49, 1, v51, 0x4Fu, (_BYTE *)(a2 + 0x64)) | v29; /*0x99a1ac*/
  v31 = unknown_libname_90(&v49, 1, v51, 0x38u, (_BYTE *)(a2 + 0x68)) | v30; /*0x99a1c1*/
  v32 = unknown_libname_90(&v49, 1, v51, 0x39u, (_BYTE *)(a2 + 0x6C)) | v31; /*0x99a1d9*/
  v33 = unknown_libname_90(&v49, 1, v51, 0x3Au, (_BYTE *)(a2 + 0x70)) | v32; /*0x99a1ee*/
  v34 = unknown_libname_90(&v49, 1, v51, 0x3Bu, (_BYTE *)(a2 + 0x74)) | v33; /*0x99a203*/
  v35 = unknown_libname_90(&v49, 1, v51, 0x3Cu, (_BYTE *)(a2 + 0x78)) | v34; /*0x99a218*/
  v36 = unknown_libname_90(&v49, 1, v51, 0x3Du, (_BYTE *)(a2 + 0x7C)) | v35; /*0x99a230*/
  v37 = unknown_libname_90(&v49, 1, v51, 0x3Eu, (_BYTE *)(a2 + 0x80)) | v36; /*0x99a248*/
  v38 = unknown_libname_90(&v49, 1, v51, 0x3Fu, (_BYTE *)(a2 + 0x84)) | v37; /*0x99a260*/
  v39 = unknown_libname_90(&v49, 1, v51, 0x40u, (_BYTE *)(a2 + 0x88)) | v38; /*0x99a278*/
  v40 = unknown_libname_90(&v49, 1, v51, 0x41u, (_BYTE *)(a2 + 0x8C)) | v39; /*0x99a293*/
  v41 = unknown_libname_90(&v49, 1, v51, 0x42u, (_BYTE *)(a2 + 0x90)) | v40; /*0x99a2ab*/
  v42 = unknown_libname_90(&v49, 1, v51, 0x43u, (_BYTE *)(a2 + 0x94)) | v41; /*0x99a2c3*/
  v43 = unknown_libname_90(&v49, 1, v51, 0x28u, (_BYTE *)(a2 + 0x98)) | v42; /*0x99a2db*/
  v44 = unknown_libname_90(&v49, 1, v51, 0x29u, (_BYTE *)(a2 + 0x9C)) | v43; /*0x99a2f6*/
  v45 = unknown_libname_90(&v49, 1, v50, 0x1Fu, (_BYTE *)(a2 + 0xA0)) | v44; /*0x99a30e*/
  v46 = unknown_libname_90(&v49, 1, v50, 0x20u, (_BYTE *)(a2 + 0xA4)) | v45; /*0x99a326*/
  v47 = unknown_libname_90(&v49, 1, v50, 0x1003u, (_BYTE *)(a2 + 0xA8)) | v46; /*0x99a341*/
  v48 = v50; /*0x99a34f*/
  result = unknown_libname_90(&v49, 0, v50, 0x1009u, (_BYTE *)(a2 + 0xB0)) | v47; /*0x99a363*/
  *(_DWORD *)(a2 + 0xAC) = v48; /*0x99a366*/
  return result; /*0x999f71*/
}
