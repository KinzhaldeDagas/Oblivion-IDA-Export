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

  v4 = byte_BA94E4 == 0;
  v5 = a1;
  v48 = a1;
  if ( !v4 || (LOBYTE(v6) = sub_9246E0(a2, 4), (byte_BA94E4 = v6) != 0) )
  {
    while ( 1 )
    {
      v6 = *a4;
      switch ( *a4 )
      {
        case 0u:
          return v6;
        case 1u:
        case 2u:
        case 3u:
        case 4u:
          v32 = v5[4];
          v49[8] = a3[8] - v6;
          v49[4] = (a3[4] + a4[1]) << v6;
          v49[0] = (v32 >> SLOBYTE(v49[8])) - v49[4];
          v33 = v48[5] >> SLOBYTE(v49[8]);
          v49[5] = (a3[5] + a4[2]) << v6;
          v49[1] = v33 - v49[5];
          v5 = v48;
          v34 = (a3[6] + a4[3]) << v6;
          v35 = v48[6] >> SLOBYTE(v49[8]);
          v49[6] = v34;
          v49[2] = v35 - v34;
          v49[3] = (v48[7] >> SLOBYTE(v49[8])) + 1;
          v49[7] = a3[7];
          v49[9] = a3[9];
          a3 = v49;
          a4 += 4;
          continue;
        case 5u:
          a4 += a4[1] + 2;
          continue;
        case 6u:
          a4 += 0x100 * a4[1] + a4[2] + 3;
          continue;
        case 7u:
          a4 += 0x100 * (a4[2] + (a4[1] << 8)) + a4[3] + 4;
          continue;
        case 9u:
          v36 = a4[1];
          if ( a3 != v49 )
          {
            qmemcpy(v49, a3, sizeof(v49));
            a3 = v49;
          }
          v49[7] += v36;
          a4 += 2;
          continue;
        case 0xAu:
          v37 = a4[2] + (a4[1] << 8);
          if ( a3 != v49 )
          {
            qmemcpy(v49, a3, sizeof(v49));
            a3 = v49;
          }
          v49[7] += v37;
          a4 += 3;
          continue;
        case 0xBu:
          v38 = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8);
          if ( a3 != v49 )
          {
            qmemcpy(v49, a3, sizeof(v49));
            a3 = v49;
          }
          v49[7] = v38;
          a4 += 5;
          continue;
        case 0x10u:
        case 0x11u:
        case 0x12u:
          v10 = a4[1];
          v11 = a4[2];
          v9 = a3[v6 - 0x10];
          v12 = a3[3];
          goto LABEL_21;
        case 0x13u:
          v9 = a3[1] + a3[2];
          v10 = 2 * a4[1];
          v11 = 2 * a4[2];
          v12 = a3[3] + (a3[3] >> 1) + 1;
          goto LABEL_21;
        case 0x14u:
          v13 = a3[1];
          v14 = a3[2];
          goto LABEL_13;
        case 0x15u:
          v9 = *a3 + a3[2];
          v10 = 2 * a4[1];
          v11 = 2 * a4[2];
          v12 = a3[3] + (a3[3] >> 1) + 1;
          goto LABEL_21;
        case 0x16u:
          v14 = a3[2];
          goto LABEL_12;
        case 0x17u:
          v9 = *a3 + a3[1];
          v10 = 2 * a4[1];
          v11 = 2 * a4[2];
          v12 = a3[3] + (a3[3] >> 1) + 1;
          goto LABEL_21;
        case 0x18u:
          v14 = a3[1];
LABEL_12:
          v13 = *a3;
LABEL_13:
          v10 = 2 * a4[1];
          v11 = 2 * a4[2];
          v9 = v13 - v14 + 0xFF;
          v12 = a3[3] + (a3[3] >> 1) + 1;
          goto LABEL_21;
        case 0x19u:
          v9 = *a3 + a3[1] + a3[2];
          goto LABEL_18;
        case 0x1Au:
          v15 = a3[1];
          v16 = a3[2];
          goto LABEL_17;
        case 0x1Bu:
          v15 = a3[2];
          v16 = a3[1];
LABEL_17:
          v9 = v15 - v16 + *a3 + 0xFF;
LABEL_18:
          v10 = 3 * a4[1];
          v11 = 3 * a4[2];
          v12 = 4 * a3[3];
          goto LABEL_21;
        case 0x1Cu:
          v9 = *a3 - a3[2] - a3[1] + 0x1FE;
          v10 = 3 * a4[1];
          v11 = 3 * a4[2];
          v12 = 4 * a3[3];
LABEL_21:
          a4 += 4;
          if ( v12 + v9 < v11 || (v17 = a4[0xFFFFFFFF], a4 += v17, v9 > v10 + v12) )
          {
            v5 = v48;
          }
          else
          {
            v5 = v48;
            sub_943900(a3, &a4[-v17]);
          }
          continue;
        case 0x20u:
        case 0x21u:
        case 0x22u:
          v18 = a4[1];
          v19 = a3[3];
          v20 = a3[v6 - 0x20];
          a4 += 3;
          if ( v19 + v20 >= v18 )
          {
            v21 = a4[0xFFFFFFFF];
            a4 += v21;
            if ( v20 <= v19 + v18 + 1 )
              sub_943900(a3, &a4[-v21]);
          }
          continue;
        case 0x23u:
        case 0x24u:
        case 0x25u:
          v22 = a4[4];
          v23 = a3[v6 - 0x23];
          v24 = a4[2];
          v51 = a4[1];
          v25 = a4[3] << 8;
          v50 = v23;
          v26 = a3[3];
          v27 = v22 + v25;
          v28 = a4 + 7;
          if ( v26 + v50 >= v24 )
          {
            v29 = v28[0xFFFFFFFF] + (v28[0xFFFFFFFE] << 8);
            a4 = &v28[v29];
            if ( v50 <= v51 + v26 )
              sub_943900(a3, &a4[v27 - v29]);
          }
          else
          {
            a4 = &v28[v27];
          }
          continue;
        case 0x26u:
        case 0x27u:
        case 0x28u:
          v6 = a3[v6 - 0x26];
          v30 = a3[3];
          if ( v30 + v6 < a4[1] || v6 > v30 + a4[2] )
            return v6;
          a4 += 3;
          continue;
        case 0x29u:
        case 0x2Au:
        case 0x2Bu:
          v6 = v5[v6 - 0x25];
          v31 = v5[7];
          if ( v31 + v6 < a4[3] + ((a4[2] + (a4[1] << 8)) << 8) || v6 > v31 + ((a4[5] + (a4[4] << 8)) << 8) + a4[6] )
            return v6;
          a4 += 7;
          continue;
        case 0x30u:
        case 0x31u:
        case 0x32u:
        case 0x33u:
        case 0x34u:
        case 0x35u:
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x39u:
        case 0x3Au:
        case 0x3Bu:
        case 0x3Cu:
        case 0x3Du:
        case 0x3Eu:
        case 0x3Fu:
        case 0x40u:
        case 0x41u:
        case 0x42u:
        case 0x43u:
        case 0x44u:
        case 0x45u:
        case 0x46u:
        case 0x47u:
        case 0x48u:
        case 0x49u:
        case 0x4Au:
        case 0x4Bu:
        case 0x4Cu:
        case 0x4Du:
        case 0x4Eu:
        case 0x4Fu:
          v41 = v6 - 0x30;
          goto LABEL_62;
        case 0x50u:
          v41 = a4[1];
          goto LABEL_62;
        case 0x51u:
          v41 = a4[2] + (a4[1] << 8);
          goto LABEL_62;
        case 0x52u:
          v41 = a4[3] + ((a4[2] + (a4[1] << 8)) << 8);
          goto LABEL_62;
        case 0x53u:
          v41 = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8);
LABEL_62:
          v42 = *v5;
          v43 = v41 + a3[7];
          v6 = *(_DWORD *)(v42 + 8) & 0x3FFFFFFF;
          if ( *(_DWORD *)(v42 + 4) == v6 )
            LOBYTE(v6) = sub_8A6EE0((const void **)v42, 4);
          *(_DWORD *)(*(_DWORD *)v42 + 4 * (*(_DWORD *)(v42 + 4))++) = v43;
          return v6;
        case 0x60u:
        case 0x61u:
        case 0x62u:
        case 0x63u:
          v39 = a4[1];
          a4 += 2;
          v47[v6] = v39;
          goto LABEL_53;
        case 0x64u:
        case 0x65u:
        case 0x66u:
        case 0x67u:
          v46[v6] = a4[2] + (a4[1] << 8);
          a4 += 3;
          goto LABEL_53;
        case 0x68u:
        case 0x69u:
        case 0x6Au:
        case 0x6Bu:
          v45[v6] = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8);
          a4 += 5;
LABEL_53:
          v40 = v49[9];
          if ( a3 != v49 )
          {
            qmemcpy(v49, a3, sizeof(v49));
            a3 = v49;
          }
          v49[9] = v40;
          break;
        default:
          sub_8BBFB0((int)v52, (int)a4, v53, 0x200u, 1);
          sub_8BBDB0(v52, "Unknown command.\n");
          (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
            dword_BA7FB0,
            3,
            0x1298FEDD,
            v53,
            ".\\collide\\mopp\\machine\\hkMoppSphereVirtualMachine.cpp",
            0x124);
          sub_8BC000(v52);
          continue;
      }
    }
  }
  return v6;
}
