// positive sp value has been detected, the output may be wrong!
_DWORD *__userpurge def_737562@<eax>(
        int a1@<eax>,
        unsigned __int8 *a2@<ebp>,
        _DWORD *a3@<edi>,
        int a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  unsigned __int8 v6; // al
  _RTL_CRITICAL_SECTION_0 *v7; // esi
  int v10; // [esp-118h] [ebp-118h] BYREF
  int v11; // [esp-114h] [ebp-114h]
  int v12; // [esp-110h] [ebp-110h]
  int v13; // [esp-10Ch] [ebp-10Ch]
  int v14; // [esp-108h] [ebp-108h]
  int v15; // [esp-104h] [ebp-104h]
  int v16; // [esp-100h] [ebp-100h]
  int v17; // [esp-FCh] [ebp-FCh]
  int v18; // [esp-F8h] [ebp-F8h]
  int v19; // [esp-F4h] [ebp-F4h]
  int v20; // [esp-F0h] [ebp-F0h]
  int v21; // [esp-ECh] [ebp-ECh]
  int v22; // [esp-E8h] [ebp-E8h]
  int v23; // [esp-E4h] [ebp-E4h]
  int v24; // [esp-E0h] [ebp-E0h]
  int v25; // [esp-DCh] [ebp-DCh]
  int v26; // [esp-D8h] [ebp-D8h]
  int v27; // [esp-D4h] [ebp-D4h] BYREF
  int v28; // [esp-D0h] [ebp-D0h]
  int v29; // [esp-CCh] [ebp-CCh]
  int v30; // [esp-C8h] [ebp-C8h]
  int v31; // [esp-C4h] [ebp-C4h]
  int v32; // [esp-C0h] [ebp-C0h]
  int v33; // [esp-BCh] [ebp-BCh]
  int v34; // [esp-B8h] [ebp-B8h]
  int v35; // [esp-B4h] [ebp-B4h]
  int v36; // [esp-B0h] [ebp-B0h]
  int v37; // [esp-ACh] [ebp-ACh]
  int v38; // [esp-A8h] [ebp-A8h]
  int v39; // [esp-A4h] [ebp-A4h]
  int v40; // [esp-A0h] [ebp-A0h]
  int v41; // [esp-9Ch] [ebp-9Ch]
  int v42; // [esp-98h] [ebp-98h]
  int v43; // [esp-94h] [ebp-94h]
  unsigned int v44; // [esp-90h] [ebp-90h]
  int v45; // [esp-8Ch] [ebp-8Ch]
  int v46; // [esp-88h] [ebp-88h]
  int v47; // [esp-84h] [ebp-84h]
  int v48; // [esp-80h] [ebp-80h]
  int v49; // [esp-7Ch] [ebp-7Ch]
  int v50; // [esp-78h] [ebp-78h]
  int v51; // [esp-74h] [ebp-74h]
  int v52; // [esp-70h] [ebp-70h]
  unsigned int v53; // [esp-6Ch] [ebp-6Ch]
  int v54; // [esp-68h] [ebp-68h]
  _RTL_CRITICAL_SECTION_0 *v55; // [esp-64h] [ebp-64h]
  int v56; // [esp-60h] [ebp-60h]
  int v57; // [esp-5Ch] [ebp-5Ch]
  int v58; // [esp-58h] [ebp-58h]
  int *v59; // [esp-54h] [ebp-54h]
  int v60[20]; // [esp-50h] [ebp-50h] BYREF

  v5 = 0;
  if ( a5 )
  {
    do
    {
      v6 = a2[0x111];
      switch ( v6 )
      {
        case 0x10u:
          v46 = a2[0x10C];
          v45 = 0;
          v44 = v5;
          v59 = &v27;
          sub_70F010(&v27, v60);
          v59 = &v10;
          sub_70F010(&v10, a2 + 0x110);
          sub_736EB0(
            a4,
            a3,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
          break;
        case 0x18u:
          v46 = a2[0x10C];
          v45 = 0;
          v44 = v5;
          v59 = &v27;
          sub_70F010(&v27, v60);
          v59 = &v10;
          sub_70F010(&v10, a2 + 0x110);
          sub_736950(
            a4,
            (int)a3,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
          break;
        case 0x20u:
          v46 = a2[0x10C];
          v45 = 0;
          v44 = v5;
          v59 = &v27;
          sub_70F010(&v27, v60);
          v59 = &v10;
          sub_70F010(&v10, a2 + 0x110);
          sub_736A20(
            a4,
            (signed int)a3,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            (int)v55,
            v56,
            v57,
            v58,
            (int)v59,
            v60[0],
            v60[1],
            v60[2],
            v60[3],
            v60[4],
            v60[5],
            v60[6]);
          break;
      }
      ++v5;
    }
    while ( v5 < a5 );
    a1 = v54;
  }
  v54 = a1 + 1;
  if ( a1 + 2 < v53 )
    JUMPOUT(0x73755D);
  v7 = v55;
  if ( HIDWORD(v55[3].SpinCount)-- == 1 )
    LODWORD(v7[3].SpinCount) = 0;
  LeaveCriticalSection(v7);
  return a3;
}
