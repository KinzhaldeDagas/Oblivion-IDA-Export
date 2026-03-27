char __userpurge sub_944060@<al>(int *a1@<ecx>, int a2@<ebx>, int *a3, unsigned __int8 *a4)
{
  int v4; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // edi
  int v14; // edx
  int v15; // edi
  int v16; // edx
  int v17; // edi
  int v18; // edx
  unsigned __int8 *v19; // ebx
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // ebp
  int v25; // esi
  int v27[4]; // [esp+0h] [ebp-3B0h]
  int v28[4]; // [esp+10h] [ebp-3A0h]
  int v29[72]; // [esp+20h] [ebp-390h]
  int v30; // [esp+164h] [ebp-24Ch]
  int v31; // [esp+168h] [ebp-248h]
  _DWORD v32[14]; // [esp+16Ch] [ebp-244h] BYREF
  int *v33[3]; // [esp+1A4h] [ebp-20Ch] BYREF
  char v34[512]; // [esp+1B0h] [ebp-200h] BYREF

  LOBYTE(v4) = byte_BA94E5;
  if ( byte_BA94E5 || (LOBYTE(v4) = sub_9246E0(a2, 4), (byte_BA94E5 = v4) != 0) )
  {
    while ( 1 )
    {
      v8 = *a4;
      switch ( *a4 )
      {
        case 0u:
          return v4;
        case 1u:
        case 2u:
        case 3u:
        case 4u:
          v32[8] = (a3[8] + a4[1]) << v8;
          v32[9] = (a3[9] + a4[2]) << v8;
          v32[0xA] = (a3[0xA] + a4[3]) << v8;
          v32[0xC] = v8 + a3[0xC];
          v32[4] = (a1[8] >> (0x10 - LOBYTE(v32[0xC]))) - v32[8];
          v32[5] = (a1[9] >> (0x10 - LOBYTE(v32[0xC]))) - v32[9];
          v32[6] = (a1[0xA] >> (0x10 - LOBYTE(v32[0xC]))) - v32[0xA];
          v21 = a1[5] >> (0x10 - LOBYTE(v32[0xC]));
          v32[0] = (a1[4] >> (0x10 - LOBYTE(v32[0xC]))) + 1 - v32[8];
          v32[1] = v21 + 1 - v32[9];
          v32[2] = (a1[6] >> (0x10 - LOBYTE(v32[0xC]))) + 1 - v32[0xA];
          v4 = a3[0xD];
          v32[0xD] = v4;
          v32[0xB] = a3[0xB];
          a3 = v32;
          a4 += 4;
          continue;
        case 5u:
          v4 = a4[1];
          a4 += v4 + 2;
          continue;
        case 6u:
          a4 += 0x100 * a4[1] + a4[2] + 3;
          continue;
        case 7u:
          v4 = (a4[2] + (a4[1] << 8)) << 8;
          a4 += a4[3] + v4 + 4;
          continue;
        case 9u:
          v4 = a4[1];
          if ( a3 != v32 )
          {
            qmemcpy(v32, a3, sizeof(v32));
            a3 = v32;
          }
          v32[0xB] += v4;
          a4 += 2;
          continue;
        case 0xAu:
          v4 = a4[2] + (a4[1] << 8);
          if ( a3 != v32 )
          {
            qmemcpy(v32, a3, sizeof(v32));
            a3 = v32;
          }
          v32[0xB] += v4;
          a4 += 3;
          continue;
        case 0xBu:
          v4 = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8);
          if ( a3 != v32 )
          {
            qmemcpy(v32, a3, sizeof(v32));
            a3 = v32;
          }
          v32[0xB] = v4;
          a4 += 5;
          continue;
        case 0x10u:
        case 0x11u:
        case 0x12u:
          v4 = a4[2];
          v14 = a4[1];
          v15 = a3[v8 - 0xC];
          a4 += 4;
          if ( a3[v8 - 0x10] > v4 )
          {
            v4 = a4[0xFFFFFFFF];
            a4 += v4;
            if ( v15 < v14 )
LABEL_25:
              LOBYTE(v4) = sub_944060((int)a1, (int)a4, a3, &a4[-v4]);
          }
          else if ( v15 >= v14 )
          {
            return v4;
          }
          continue;
        case 0x13u:
          v4 = a3[5] + a3[6];
          v9 = 2 * a4[1];
          v10 = 2 * a4[2];
          v11 = a3[1] + a3[2];
          goto LABEL_15;
        case 0x14u:
          v4 = a3[5] - a3[2];
          v11 = a3[1] - a3[6];
          v9 = 2 * a4[1] - 0xFF;
          v10 = 2 * a4[2] - 0xFF;
          goto LABEL_15;
        case 0x15u:
          v4 = a3[4] + a3[6];
          v9 = 2 * a4[1];
          v10 = 2 * a4[2];
          v11 = *a3 + a3[2];
          goto LABEL_15;
        case 0x16u:
          v4 = a3[4] - a3[2];
          v11 = *a3 - a3[6];
          v9 = 2 * a4[1] - 0xFF;
          v10 = 2 * a4[2] - 0xFF;
          goto LABEL_15;
        case 0x17u:
          v4 = a3[4] + a3[5];
          v9 = 2 * a4[1];
          v10 = 2 * a4[2];
          v11 = *a3 + a3[1];
          goto LABEL_15;
        case 0x18u:
          v4 = a3[4] - a3[1];
          v12 = *a3;
          v9 = 2 * a4[1] - 0xFF;
          v10 = 2 * a4[2] - 0xFF;
          goto LABEL_14;
        case 0x19u:
          v9 = 3 * a4[1];
          v10 = 3 * a4[2];
          v4 = a3[4] + a3[5] + a3[6];
          v11 = *a3 + a3[1] + a3[2];
          goto LABEL_15;
        case 0x1Au:
          v9 = 3 * (a4[1] - 0x55);
          v10 = 3 * (a4[2] - 0x55);
          v4 = a3[4] + a3[5] - a3[2];
          v11 = *a3 + a3[1] - a3[6];
          goto LABEL_15;
        case 0x1Bu:
          v9 = 3 * (a4[1] - 0x55);
          v10 = 3 * (a4[2] - 0x55);
          v4 = a3[4] + a3[6] - a3[1];
          v11 = *a3 + a3[2] - a3[5];
          goto LABEL_15;
        case 0x1Cu:
          v9 = 3 * (a4[1] - 0xAA);
          v10 = 3 * (a4[2] - 0xAA);
          v4 = a3[4] - a3[2] - a3[1];
          v12 = *a3 - a3[6];
LABEL_14:
          v11 = v12 - a3[5];
LABEL_15:
          a4 += 4;
          if ( v11 > v10 )
          {
            v13 = a4[0xFFFFFFFF];
            if ( v4 < v9 )
              LOBYTE(v4) = sub_944060((int)a1, (int)a4, a3, a4);
            a4 += v13;
          }
          else if ( v4 >= v9 )
          {
            return v4;
          }
          continue;
        case 0x20u:
        case 0x21u:
        case 0x22u:
          v16 = a4[1];
          v4 = a3[v8 - 0x20];
          a4 += 3;
          if ( v4 <= v16 )
            continue;
          v4 = a4[0xFFFFFFFF];
          a4 += v4;
          if ( a3[v8 - 0x1C] > v16 )
            continue;
          goto LABEL_25;
        case 0x23u:
        case 0x24u:
        case 0x25u:
          v17 = a4[4];
          v18 = a4[2];
          v31 = a4[1];
          v30 = a3[v8 - 0x1F];
          v4 = v17 + (a4[3] << 8);
          v19 = a4 + 7;
          if ( a3[v8 - 0x23] > v18 )
          {
            v20 = v19[0xFFFFFFFF] + (v19[0xFFFFFFFE] << 8);
            a4 = &v19[v20];
            if ( v30 < v31 )
              LOBYTE(v4) = sub_944060((int)a1, (int)a4, a3, &a4[v4 - v20]);
          }
          else
          {
            if ( v30 >= v31 )
              return v4;
            a4 = &v19[v4];
          }
          break;
        case 0x26u:
        case 0x27u:
        case 0x28u:
          v4 = a4[1];
          if ( a3[v8 - 0x26] < v4 || a3[v8 - 0x22] >= a4[2] )
            return v4;
          a4 += 3;
          continue;
        case 0x29u:
        case 0x2Au:
        case 0x2Bu:
          v4 = a4[3] + ((a4[2] + (a4[1] << 8)) << 8);
          if ( a1[v8 - 0x25] < v4 )
            return v4;
          v4 = a4[6] + (((a4[4] << 8) + a4[5]) << 8);
          if ( a1[v8 - 0x21] > v4 )
            return v4;
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
          v23 = v8 - 0x30;
          goto LABEL_65;
        case 0x50u:
          v23 = a4[1];
          goto LABEL_65;
        case 0x51u:
          v23 = a4[2] + (a4[1] << 8);
          goto LABEL_65;
        case 0x52u:
          v23 = a4[3] + ((a4[2] + (a4[1] << 8)) << 8);
          goto LABEL_65;
        case 0x53u:
          v23 = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8);
LABEL_65:
          v24 = *a1;
          v25 = v23 + a3[0xB];
          v4 = *(_DWORD *)(v24 + 8) & 0x3FFFFFFF;
          if ( *(_DWORD *)(v24 + 4) == v4 )
            LOBYTE(v4) = sub_8A6EE0((const void **)v24, 4);
          *(_DWORD *)(*(_DWORD *)v24 + 4 * (*(_DWORD *)(v24 + 4))++) = v25;
          return v4;
        case 0x60u:
        case 0x61u:
        case 0x62u:
        case 0x63u:
          v22 = a4[1];
          a4 += 2;
          v29[v8] = v22;
          goto LABEL_56;
        case 0x64u:
        case 0x65u:
        case 0x66u:
        case 0x67u:
          v28[v8] = a4[2] + (a4[1] << 8);
          a4 += 3;
          goto LABEL_56;
        case 0x68u:
        case 0x69u:
        case 0x6Au:
        case 0x6Bu:
          v27[v8] = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8);
          a4 += 5;
LABEL_56:
          v4 = v32[0xD];
          if ( a3 != v32 )
          {
            qmemcpy(v32, a3, sizeof(v32));
            a3 = v32;
          }
          v32[0xD] = v4;
          continue;
        default:
          sub_8BBFB0((int)v33, (int)a4, v34, 0x200u, 1);
          sub_8BBDB0(v33, "Unknown command.\n");
          (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
            dword_BA7FB0,
            3,
            0x1298FEDD,
            v34,
            ".\\collide\\mopp\\machine\\hkMoppObbVirtualMachine.cpp",
            0x173);
          LOBYTE(v4) = sub_8BC000(v33);
          continue;
      }
    }
  }
  return v4;
}
