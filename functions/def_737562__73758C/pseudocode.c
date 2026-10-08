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
  unsigned int v47; // [esp-6Ch] [ebp-6Ch]
  int v48; // [esp-68h] [ebp-68h]
  _RTL_CRITICAL_SECTION_0 *v49; // [esp-64h] [ebp-64h]
  int *v50; // [esp-54h] [ebp-54h]
  _BYTE v51[80]; // [esp-50h] [ebp-50h] BYREF

  v5 = 0; /*0x73758e*/
  if ( a5 ) /*0x737597*/
  {
    do /*0x7376ac*/
    {
      v6 = a2[0x111]; /*0x7375a0*/
      switch ( v6 ) /*0x7375a8*/
      {
        case 0x10u: /*0x7375a8*/
          v46 = a2[0x10C]; /*0x73765a*/
          v45 = 0; /*0x73765b*/
          v44 = v5; /*0x73765c*/
          v50 = &v27; /*0x737669*/
          sub_70F010(&v27, v51); /*0x737671*/
          v50 = &v10; /*0x737681*/
          sub_70F010(&v10, a2 + 0x110); /*0x737689*/
          sub_736EB0( /*0x737697*/
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
        case 0x18u: /*0x7375a8*/
          v46 = a2[0x10C]; /*0x73760f*/
          v45 = 0; /*0x737610*/
          v44 = v5; /*0x737611*/
          v50 = &v27; /*0x73761e*/
          sub_70F010(&v27, v51); /*0x737626*/
          v50 = &v10; /*0x737636*/
          sub_70F010(&v10, a2 + 0x110); /*0x73763e*/
          sub_736950( /*0x73764c*/
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
        case 0x20u: /*0x7375a8*/
          v46 = a2[0x10C]; /*0x7375c1*/
          v45 = 0; /*0x7375c2*/
          v44 = v5; /*0x7375c3*/
          v50 = &v27; /*0x7375d0*/
          sub_70F010(&v27, v51); /*0x7375d8*/
          v50 = &v10; /*0x7375e8*/
          sub_70F010(&v10, a2 + 0x110); /*0x7375f0*/
          sub_736A20( /*0x7375fe*/
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
            v45);
          break;
      }
      ++v5; /*0x7376a2*/
    }
    while ( v5 < a5 ); /*0x7376ac*/
    a1 = v48; /*0x7376b2*/
  }
  v48 = a1 + 1; /*0x7376c0*/
  if ( a1 + 2 < v47 ) /*0x7376c4*/
    JUMPOUT(0x73755D); /*0x73755d*/
  v7 = v49; /*0x7376ca*/
  if ( HIDWORD(v49[3].SpinCount)-- == 1 ) /*0x7376ce*/
    LODWORD(v7[3].SpinCount) = 0; /*0x7376d4*/
  LeaveCriticalSection(v7); /*0x7376dc*/
  return a3; /*0x7376f7*/
}
