char __userpurge sub_943900@<al>(int *a1@<ecx>, int a2@<ebx>, int *a3, unsigned __int8 *a4)
{
  bool v4; // zf
  int *v5; // ebp
  int v6; // eax
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // edi
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // edi
  int v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  unsigned __int8 *v28; // ebx
  int v29; // edx
  int v30; // ecx
  int v31; // ecx
  int v32; // ebp
  int v33; // ebp
  int v34; // edi
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // ebp
  int v43; // esi
  int v45[4]; // [esp+0h] [ebp-3B8h]
  int v46[4]; // [esp+10h] [ebp-3A8h]
  int v47[77]; // [esp+20h] [ebp-398h]
  int *v48; // [esp+178h] [ebp-240h]
  _DWORD v49[10]; // [esp+17Ch] [ebp-23Ch] BYREF
  int v50; // [esp+1A4h] [ebp-214h]
  int v51; // [esp+1A8h] [ebp-210h]
  int *v52[3]; // [esp+1ACh] [ebp-20Ch] BYREF
  char v53[512]; // [esp+1B8h] [ebp-200h] BYREF

  v4 = unk_BA94E4 == 0; /*0x94390b*/
  v5 = a1; /*0x943910*/
  v48 = a1; /*0x943913*/
  if ( !v4 || (LOBYTE(v6) = sub_9246E0(a2, 4), (unk_BA94E4 = v6) != 0) ) /*0x94392a*/
  {
    while ( 1 ) /*0x943957*/
    {
      v6 = *a4; /*0x943944*/
      switch ( *a4 ) /*0x943957*/
      {
        case 0u: /*0x943957*/
          return v6;
        case 1u: /*0x943957*/
        case 2u: /*0x943957*/
        case 3u: /*0x943957*/
        case 4u: /*0x943957*/
          v32 = v5[4]; /*0x943c13*/
          v49[8] = a3[8] - v6; /*0x943c18*/
          v49[4] = (a3[4] + a4[1]) << v6; /*0x943c2b*/
          v49[0] = (v32 >> SLOBYTE(v49[8])) - v49[4]; /*0x943c31*/
          v33 = v48[5] >> SLOBYTE(v49[8]); /*0x943c49*/
          v49[5] = (a3[5] + a4[2]) << v6; /*0x943c4b*/
          v49[1] = v33 - v49[5]; /*0x943c51*/
          v5 = v48; /*0x943c5c*/
          v34 = (a3[6] + a4[3]) << v6; /*0x943c67*/
          v35 = v48[6] >> SLOBYTE(v49[8]); /*0x943c6b*/
          v49[6] = v34; /*0x943c6d*/
          v49[2] = v35 - v34; /*0x943c73*/
          v49[3] = (v48[7] >> SLOBYTE(v49[8])) + 1; /*0x943c7d*/
          v49[7] = a3[7]; /*0x943c84*/
          v49[9] = a3[9]; /*0x943c8b*/
          a3 = v49; /*0x943c8f*/
          a4 += 4; /*0x943c93*/
          continue; /*0x943c96*/
        case 5u: /*0x943957*/
          a4 += a4[1] + 2; /*0x943bd2*/
          continue; /*0x943bd6*/
        case 6u: /*0x943957*/
          a4 += 0x100 * a4[1] + a4[2] + 3; /*0x943be8*/
          continue; /*0x943bec*/
        case 7u: /*0x943957*/
          a4 += 0x100 * (a4[2] + (a4[1] << 8)) + a4[3] + 4; /*0x943c07*/
          continue; /*0x943c0b*/
        case 9u: /*0x943957*/
          v36 = a4[1]; /*0x943c9b*/
          if ( a3 != v49 ) /*0x943ca5*/
          {
            qmemcpy(v49, a3, sizeof(v49)); /*0x943cb0*/
            a3 = v49; /*0x943cb2*/
          }
          v49[7] += v36; /*0x943cb6*/
          a4 += 2; /*0x943cba*/
          continue; /*0x943cbd*/
        case 0xAu: /*0x943957*/
          v37 = a4[2] + (a4[1] << 8); /*0x943cd1*/
          if ( a3 != v49 ) /*0x943cd5*/
          {
            qmemcpy(v49, a3, sizeof(v49)); /*0x943ce0*/
            a3 = v49; /*0x943ce2*/
          }
          v49[7] += v37; /*0x943ce6*/
          a4 += 3; /*0x943cea*/
          continue; /*0x943ced*/
        case 0xBu: /*0x943957*/
          v38 = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8); /*0x943d13*/
          if ( a3 != v49 ) /*0x943d17*/
          {
            qmemcpy(v49, a3, sizeof(v49)); /*0x943d22*/
            a3 = v49; /*0x943d24*/
          }
          v49[7] = v38; /*0x943d28*/
          a4 += 5; /*0x943d2c*/
          continue; /*0x943d2f*/
        case 0x10u: /*0x943957*/
        case 0x11u: /*0x943957*/
        case 0x12u: /*0x943957*/
          v10 = a4[1]; /*0x943a5e*/
          v11 = a4[2]; /*0x943a62*/
          v9 = a3[v6 - 0x10]; /*0x943a66*/
          v12 = a3[3]; /*0x943a6a*/
          goto LABEL_21; /*0x943a6a*/
        case 0x13u: /*0x943957*/
          v9 = a3[1] + a3[2]; /*0x94396c*/
          v10 = 2 * a4[1]; /*0x943973*/
          v11 = 2 * a4[2]; /*0x943975*/
          v12 = a3[3] + (a3[3] >> 1) + 1; /*0x943979*/
          goto LABEL_21; /*0x94397d*/
        case 0x14u: /*0x943957*/
          v13 = a3[1]; /*0x943982*/
          v14 = a3[2]; /*0x943985*/
          goto LABEL_13; /*0x943988*/
        case 0x15u: /*0x943957*/
          v9 = *a3 + a3[2]; /*0x943997*/
          v10 = 2 * a4[1]; /*0x94399e*/
          v11 = 2 * a4[2]; /*0x9439a0*/
          v12 = a3[3] + (a3[3] >> 1) + 1; /*0x9439a4*/
          goto LABEL_21; /*0x9439a8*/
        case 0x16u: /*0x943957*/
          v14 = a3[2]; /*0x9439ad*/
          goto LABEL_12; /*0x9439b0*/
        case 0x17u: /*0x943957*/
          v9 = *a3 + a3[1]; /*0x9439bf*/
          v10 = 2 * a4[1]; /*0x9439c6*/
          v11 = 2 * a4[2]; /*0x9439c8*/
          v12 = a3[3] + (a3[3] >> 1) + 1; /*0x9439cc*/
          goto LABEL_21; /*0x9439d0*/
        case 0x18u: /*0x943957*/
          v14 = a3[1]; /*0x9439d5*/
LABEL_12:
          v13 = *a3; /*0x9439d8*/
LABEL_13:
          v10 = 2 * a4[1]; /*0x9439da*/
          v11 = 2 * a4[2]; /*0x9439eb*/
          v9 = v13 - v14 + 0xFF; /*0x9439ed*/
          v12 = a3[3] + (a3[3] >> 1) + 1; /*0x9439f4*/
          goto LABEL_21; /*0x9439f8*/
        case 0x19u: /*0x943957*/
          v9 = *a3 + a3[1] + a3[2]; /*0x943a04*/
          goto LABEL_18; /*0x943a06*/
        case 0x1Au: /*0x943957*/
          v15 = a3[1]; /*0x943a08*/
          v16 = a3[2]; /*0x943a0b*/
          goto LABEL_17; /*0x943a0e*/
        case 0x1Bu: /*0x943957*/
          v15 = a3[2]; /*0x943a10*/
          v16 = a3[1]; /*0x943a13*/
LABEL_17:
          v9 = v15 - v16 + *a3 + 0xFF; /*0x943a16*/
LABEL_18:
          v10 = 3 * a4[1]; /*0x943a21*/
          v11 = 3 * a4[2]; /*0x943a2f*/
          v12 = 4 * a3[3]; /*0x943a32*/
          goto LABEL_21; /*0x943a35*/
        case 0x1Cu: /*0x943957*/
          v9 = *a3 - a3[2] - a3[1] + 0x1FE; /*0x943a4e*/
          v10 = 3 * a4[1]; /*0x943a53*/
          v11 = 3 * a4[2]; /*0x943a56*/
          v12 = 4 * a3[3]; /*0x943a59*/
LABEL_21:
          a4 += 4; /*0x943a6d*/
          if ( v12 + v9 < v11 || (v17 = a4[0xFFFFFFFF], a4 += v17, v9 > v10 + v12) ) /*0x943a85*/
          {
            v5 = v48; /*0x943940*/
          }
          else
          {
            v5 = v48; /*0x943a8b*/
            sub_943900(v48, (int)a4, a3, &a4[-v17]); /*0x943a97*/
          }
          continue; /*0x943a9c*/
        case 0x20u: /*0x943957*/
        case 0x21u: /*0x943957*/
        case 0x22u: /*0x943957*/
          v18 = a4[1]; /*0x943aa1*/
          v19 = a3[3]; /*0x943aa5*/
          v20 = a3[v6 - 0x20]; /*0x943aa8*/
          a4 += 3; /*0x943aaf*/
          if ( v19 + v20 >= v18 ) /*0x943ab4*/
          {
            v21 = a4[0xFFFFFFFF]; /*0x943aba*/
            a4 += v21; /*0x943ac2*/
            if ( v20 <= v19 + v18 + 1 ) /*0x943ac6*/
              sub_943900(v5, (int)a4, a3, &a4[-v21]); /*0x943ad4*/
          }
          continue; /*0x943ad9*/
        case 0x23u: /*0x943957*/
        case 0x24u: /*0x943957*/
        case 0x25u: /*0x943957*/
          v22 = a4[4]; /*0x943ae2*/
          v23 = a3[v6 - 0x23]; /*0x943ae6*/
          v24 = a4[2]; /*0x943aed*/
          v51 = a4[1]; /*0x943af1*/
          v25 = a4[3] << 8; /*0x943af9*/
          v50 = v23; /*0x943afc*/
          v26 = a3[3]; /*0x943b00*/
          v27 = v22 + v25; /*0x943b03*/
          v28 = a4 + 7; /*0x943b0b*/
          if ( v26 + v50 >= v24 ) /*0x943b10*/
          {
            v29 = v28[0xFFFFFFFF] + (v28[0xFFFFFFFE] << 8); /*0x943b24*/
            a4 = &v28[v29]; /*0x943b30*/
            if ( v50 <= v51 + v26 ) /*0x943b34*/
              sub_943900(v5, (int)a4, a3, &a4[v27 - v29]); /*0x943b42*/
          }
          else
          {
            a4 = &v28[v27]; /*0x943b12*/
          }
          continue; /*0x943b14*/
        case 0x26u: /*0x943957*/
        case 0x27u: /*0x943957*/
        case 0x28u: /*0x943957*/
          v6 = a3[v6 - 0x26]; /*0x943b4c*/
          v30 = a3[3]; /*0x943b53*/
          if ( v30 + v6 < a4[1] || v6 > v30 + a4[2] ) /*0x943b6d*/
            return v6; /*0x943b6d*/
          a4 += 3; /*0x943b73*/
          continue; /*0x943b76*/
        case 0x29u: /*0x943957*/
        case 0x2Au: /*0x943957*/
        case 0x2Bu: /*0x943957*/
          v6 = v5[v6 - 0x25]; /*0x943b83*/
          v31 = v5[7]; /*0x943b8a*/
          if ( v31 + v6 < a4[3] + ((a4[2] + (a4[1] << 8)) << 8) || v6 > v31 + ((a4[5] + (a4[4] << 8)) << 8) + a4[6] ) /*0x943bc0*/
            return v6; /*0x943bc0*/
          a4 += 7; /*0x943bc6*/
          continue; /*0x943bc9*/
        case 0x30u: /*0x943957*/
        case 0x31u: /*0x943957*/
        case 0x32u: /*0x943957*/
        case 0x33u: /*0x943957*/
        case 0x34u: /*0x943957*/
        case 0x35u: /*0x943957*/
        case 0x36u: /*0x943957*/
        case 0x37u: /*0x943957*/
        case 0x38u: /*0x943957*/
        case 0x39u: /*0x943957*/
        case 0x3Au: /*0x943957*/
        case 0x3Bu: /*0x943957*/
        case 0x3Cu: /*0x943957*/
        case 0x3Du: /*0x943957*/
        case 0x3Eu: /*0x943957*/
        case 0x3Fu: /*0x943957*/
        case 0x40u: /*0x943957*/
        case 0x41u: /*0x943957*/
        case 0x42u: /*0x943957*/
        case 0x43u: /*0x943957*/
        case 0x44u: /*0x943957*/
        case 0x45u: /*0x943957*/
        case 0x46u: /*0x943957*/
        case 0x47u: /*0x943957*/
        case 0x48u: /*0x943957*/
        case 0x49u: /*0x943957*/
        case 0x4Au: /*0x943957*/
        case 0x4Bu: /*0x943957*/
        case 0x4Cu: /*0x943957*/
        case 0x4Du: /*0x943957*/
        case 0x4Eu: /*0x943957*/
        case 0x4Fu: /*0x943957*/
          v41 = v6 - 0x30; /*0x943e4a*/
          goto LABEL_62; /*0x943e4a*/
        case 0x50u: /*0x943957*/
          v41 = a4[1]; /*0x943dfc*/
          goto LABEL_62; /*0x943e00*/
        case 0x51u: /*0x943957*/
          v41 = a4[2] + (a4[1] << 8); /*0x943e0d*/
          goto LABEL_62; /*0x943e0f*/
        case 0x52u: /*0x943957*/
          v41 = a4[3] + ((a4[2] + (a4[1] << 8)) << 8); /*0x943e25*/
          goto LABEL_62; /*0x943e27*/
        case 0x53u: /*0x943957*/
          v41 = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8); /*0x943e46*/
LABEL_62:
          v42 = *v5; /*0x943e4d*/
          v43 = v41 + a3[7]; /*0x943e56*/
          v6 = *(_DWORD *)(v42 + 8) & 0x3FFFFFFF; /*0x943e5b*/
          if ( *(_DWORD *)(v42 + 4) == v6 ) /*0x943e62*/
            LOBYTE(v6) = sub_8A6EE0((const void **)v42, 4); /*0x943e67*/
          *(_DWORD *)(*(_DWORD *)v42 + 4 * (*(_DWORD *)(v42 + 4))++) = v43; /*0x943e75*/
          return v6; /*0x943e78*/
        case 0x60u: /*0x943957*/
        case 0x61u: /*0x943957*/
        case 0x62u: /*0x943957*/
        case 0x63u: /*0x943957*/
          v39 = a4[1]; /*0x943d34*/
          a4 += 2; /*0x943d38*/
          v47[v6] = v39; /*0x943d3b*/
          goto LABEL_53; /*0x943d42*/
        case 0x64u: /*0x943957*/
        case 0x65u: /*0x943957*/
        case 0x66u: /*0x943957*/
        case 0x67u: /*0x943957*/
          v46[v6] = a4[2] + (a4[1] << 8); /*0x943d51*/
          a4 += 3; /*0x943d58*/
          goto LABEL_53; /*0x943d5b*/
        case 0x68u: /*0x943957*/
        case 0x69u: /*0x943957*/
        case 0x6Au: /*0x943957*/
        case 0x6Bu: /*0x943957*/
          v45[v6] = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8); /*0x943d7c*/
          a4 += 5; /*0x943d83*/
LABEL_53:
          v40 = v49[9]; /*0x943d86*/
          if ( a3 != v49 ) /*0x943d90*/
          {
            qmemcpy(v49, a3, sizeof(v49)); /*0x943d99*/
            a3 = v49; /*0x943d9b*/
          }
          v49[9] = v40; /*0x943d9d*/
          break; /*0x943da1*/
        default:
          sub_8BBFB0((int)v52, (int)a4, v53, 0x200u, 1); /*0x943dba*/
          sub_8BBDB0(v52, "Unknown command.\n"); /*0x943dc8*/
          (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x943deb*/
            unk_BA7FB0,
            3,
            0x1298FEDD,
            v53,
            ".\\collide\\mopp\\machine\\hkMoppSphereVirtualMachine.cpp",
            0x124);
          sub_8BC000(v52); /*0x943df2*/
          continue; /*0x943df7*/
      }
    }
  }
  return v6; /*0x943e7b*/
}
