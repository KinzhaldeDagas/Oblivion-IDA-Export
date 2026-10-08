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

  LOBYTE(v4) = unk_BA94E5; /*0x944060*/
  if ( unk_BA94E5 || (LOBYTE(v4) = sub_9246E0(a2, 4), (unk_BA94E5 = v4) != 0) ) /*0x944086*/
  {
    while ( 1 ) /*0x9440b3*/
    {
      v8 = *a4; /*0x9440a0*/
      switch ( *a4 ) /*0x9440b3*/
      {
        case 0u: /*0x9440b3*/
          return v4;
        case 1u: /*0x9440b3*/
        case 2u: /*0x9440b3*/
        case 3u: /*0x9440b3*/
        case 4u: /*0x9440b3*/
          v32[8] = (a3[8] + a4[1]) << v8; /*0x94441f*/
          v32[9] = (a3[9] + a4[2]) << v8; /*0x94442c*/
          v32[0xA] = (a3[0xA] + a4[3]) << v8; /*0x944439*/
          v32[0xC] = v8 + a3[0xC]; /*0x944442*/
          v32[4] = (a1[8] >> (0x10 - LOBYTE(v32[0xC]))) - v32[8]; /*0x944454*/
          v32[5] = (a1[9] >> (0x10 - LOBYTE(v32[0xC]))) - v32[9]; /*0x94445f*/
          v32[6] = (a1[0xA] >> (0x10 - LOBYTE(v32[0xC]))) - v32[0xA]; /*0x94446c*/
          v21 = a1[5] >> (0x10 - LOBYTE(v32[0xC])); /*0x94447b*/
          v32[0] = (a1[4] >> (0x10 - LOBYTE(v32[0xC]))) + 1 - v32[8]; /*0x94447d*/
          v32[1] = v21 + 1 - v32[9]; /*0x944484*/
          v32[2] = (a1[6] >> (0x10 - LOBYTE(v32[0xC]))) + 1 - v32[0xA]; /*0x944494*/
          v4 = a3[0xD]; /*0x944498*/
          v32[0xD] = v4; /*0x94449b*/
          v32[0xB] = a3[0xB]; /*0x9444a2*/
          a3 = v32; /*0x9444a6*/
          a4 += 4; /*0x9444aa*/
          continue; /*0x9444ad*/
        case 5u: /*0x9440b3*/
          v4 = a4[1]; /*0x9443d4*/
          a4 += v4 + 2; /*0x9443d8*/
          continue; /*0x9443dc*/
        case 6u: /*0x9440b3*/
          a4 += 0x100 * a4[1] + a4[2] + 3; /*0x9443ee*/
          continue; /*0x9443f2*/
        case 7u: /*0x9440b3*/
          v4 = (a4[2] + (a4[1] << 8)) << 8; /*0x944408*/
          a4 += a4[3] + v4 + 4; /*0x94440d*/
          continue; /*0x944411*/
        case 9u: /*0x9440b3*/
          v4 = a4[1]; /*0x9444b2*/
          if ( a3 != v32 ) /*0x9444bc*/
          {
            qmemcpy(v32, a3, sizeof(v32)); /*0x9444c5*/
            a3 = v32; /*0x9444c7*/
          }
          v32[0xB] += v4; /*0x9444c9*/
          a4 += 2; /*0x9444cd*/
          continue; /*0x9444d0*/
        case 0xAu: /*0x9440b3*/
          v4 = a4[2] + (a4[1] << 8); /*0x9444e4*/
          if ( a3 != v32 ) /*0x9444e8*/
          {
            qmemcpy(v32, a3, sizeof(v32)); /*0x9444f1*/
            a3 = v32; /*0x9444f3*/
          }
          v32[0xB] += v4; /*0x9444f5*/
          a4 += 3; /*0x9444f9*/
          continue; /*0x9444fc*/
        case 0xBu: /*0x9440b3*/
          v4 = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8); /*0x944522*/
          if ( a3 != v32 ) /*0x944526*/
          {
            qmemcpy(v32, a3, sizeof(v32)); /*0x94452f*/
            a3 = v32; /*0x944531*/
          }
          v32[0xB] = v4; /*0x944533*/
          a4 += 5; /*0x944537*/
          continue; /*0x94453a*/
        case 0x10u: /*0x9440b3*/
        case 0x11u: /*0x9440b3*/
        case 0x12u: /*0x9440b3*/
          v4 = a4[2]; /*0x944266*/
          v14 = a4[1]; /*0x94426a*/
          v15 = a3[v8 - 0xC]; /*0x94426e*/
          a4 += 4; /*0x944272*/
          if ( a3[v8 - 0x10] > v4 ) /*0x944279*/
          {
            v4 = a4[0xFFFFFFFF]; /*0x944290*/
            a4 += v4; /*0x944294*/
            if ( v15 < v14 ) /*0x944298*/
LABEL_25:
              LOBYTE(v4) = sub_944060(a1, (int)a4, a3, &a4[-v4]); /*0x94429e*/
          }
          else if ( v15 >= v14 ) /*0x94427d*/
          {
            return v4; /*0x94427d*/
          }
          continue; /*0x94427d*/
        case 0x13u: /*0x9440b3*/
          v4 = a3[5] + a3[6]; /*0x9440c8*/
          v9 = 2 * a4[1]; /*0x9440cd*/
          v10 = 2 * a4[2]; /*0x9440cf*/
          v11 = a3[1] + a3[2]; /*0x9440d1*/
          goto LABEL_15; /*0x9440d4*/
        case 0x14u: /*0x9440b3*/
          v4 = a3[5] - a3[2]; /*0x9440e7*/
          v11 = a3[1] - a3[6]; /*0x9440ec*/
          v9 = 2 * a4[1] - 0xFF; /*0x9440ef*/
          v10 = 2 * a4[2] - 0xFF; /*0x9440f6*/
          goto LABEL_15; /*0x9440fd*/
        case 0x15u: /*0x9440b3*/
          v4 = a3[4] + a3[6]; /*0x944110*/
          v9 = 2 * a4[1]; /*0x944115*/
          v10 = 2 * a4[2]; /*0x944117*/
          v11 = *a3 + a3[2]; /*0x944119*/
          goto LABEL_15; /*0x94411b*/
        case 0x16u: /*0x9440b3*/
          v4 = a3[4] - a3[2]; /*0x94412e*/
          v11 = *a3 - a3[6]; /*0x944132*/
          v9 = 2 * a4[1] - 0xFF; /*0x944135*/
          v10 = 2 * a4[2] - 0xFF; /*0x94413c*/
          goto LABEL_15; /*0x944143*/
        case 0x17u: /*0x9440b3*/
          v4 = a3[4] + a3[5]; /*0x944156*/
          v9 = 2 * a4[1]; /*0x94415b*/
          v10 = 2 * a4[2]; /*0x94415d*/
          v11 = *a3 + a3[1]; /*0x94415f*/
          goto LABEL_15; /*0x944161*/
        case 0x18u: /*0x9440b3*/
          v4 = a3[4] - a3[1]; /*0x944174*/
          v12 = *a3; /*0x944176*/
          v9 = 2 * a4[1] - 0xFF; /*0x944178*/
          v10 = 2 * a4[2] - 0xFF; /*0x94417f*/
          goto LABEL_14; /*0x944186*/
        case 0x19u: /*0x9440b3*/
          v9 = 3 * a4[1]; /*0x944192*/
          v10 = 3 * a4[2]; /*0x944199*/
          v4 = a3[4] + a3[5] + a3[6]; /*0x9441a1*/
          v11 = *a3 + a3[1] + a3[2]; /*0x9441aa*/
          goto LABEL_15; /*0x9441ac*/
        case 0x1Au: /*0x9440b3*/
          v9 = 3 * (a4[1] - 0x55); /*0x9441b8*/
          v10 = 3 * (a4[2] - 0x55); /*0x9441c2*/
          v4 = a3[4] + a3[5] - a3[2]; /*0x9441ca*/
          v11 = *a3 + a3[1] - a3[6]; /*0x9441d3*/
          goto LABEL_15; /*0x9441d5*/
        case 0x1Bu: /*0x9440b3*/
          v9 = 3 * (a4[1] - 0x55); /*0x9441e1*/
          v10 = 3 * (a4[2] - 0x55); /*0x9441eb*/
          v4 = a3[4] + a3[6] - a3[1]; /*0x9441f3*/
          v11 = *a3 + a3[2] - a3[5]; /*0x9441fc*/
          goto LABEL_15; /*0x9441fe*/
        case 0x1Cu: /*0x9440b3*/
          v9 = 3 * (a4[1] - 0xAA); /*0x94420c*/
          v10 = 3 * (a4[2] - 0xAA); /*0x944218*/
          v4 = a3[4] - a3[2] - a3[1]; /*0x944220*/
          v12 = *a3 - a3[6]; /*0x944225*/
LABEL_14:
          v11 = v12 - a3[5]; /*0x944228*/
LABEL_15:
          a4 += 4; /*0x94422b*/
          if ( v11 > v10 ) /*0x944230*/
          {
            v13 = a4[0xFFFFFFFF]; /*0x944249*/
            if ( v4 < v9 ) /*0x94424d*/
              LOBYTE(v4) = sub_944060(a1, (int)a4, a3, a4); /*0x94425a*/
            a4 += v13; /*0x94424f*/
          }
          else if ( v4 >= v9 ) /*0x944234*/
          {
            return v4; /*0x944234*/
          }
          continue; /*0x944234*/
        case 0x20u: /*0x9440b3*/
        case 0x21u: /*0x9440b3*/
        case 0x22u: /*0x9440b3*/
          v16 = a4[1]; /*0x9442b0*/
          v4 = a3[v8 - 0x20]; /*0x9442b4*/
          a4 += 3; /*0x9442b8*/
          if ( v4 <= v16 ) /*0x9442bd*/
            continue; /*0x9442bd*/
          v4 = a4[0xFFFFFFFF]; /*0x9442c3*/
          a4 += v4; /*0x9442cb*/
          if ( a3[v8 - 0x1C] > v16 ) /*0x9442cf*/
            continue; /*0x9442cf*/
          goto LABEL_25; /*0x9442cf*/
        case 0x23u: /*0x9440b3*/
        case 0x24u: /*0x9440b3*/
        case 0x25u: /*0x9440b3*/
          v17 = a4[4]; /*0x9442eb*/
          v18 = a4[2]; /*0x9442ef*/
          v31 = a4[1]; /*0x9442f3*/
          v30 = a3[v8 - 0x1F]; /*0x9442fb*/
          v4 = v17 + (a4[3] << 8); /*0x944306*/
          v19 = a4 + 7; /*0x94430f*/
          if ( a3[v8 - 0x23] > v18 ) /*0x944314*/
          {
            v20 = v19[0xFFFFFFFF] + (v19[0xFFFFFFFE] << 8); /*0x94433a*/
            a4 = &v19[v20]; /*0x944340*/
            if ( v30 < v31 ) /*0x944344*/
              LOBYTE(v4) = sub_944060(a1, (int)a4, a3, &a4[v4 - v20]); /*0x944352*/
          }
          else
          {
            if ( v30 >= v31 ) /*0x94431e*/
              return v4; /*0x94431e*/
            a4 = &v19[v4]; /*0x944324*/
          }
          break; /*0x944326*/
        case 0x26u: /*0x9440b3*/
        case 0x27u: /*0x9440b3*/
        case 0x28u: /*0x9440b3*/
          v4 = a4[1]; /*0x94435c*/
          if ( a3[v8 - 0x26] < v4 || a3[v8 - 0x22] >= a4[2] ) /*0x944378*/
            return v4; /*0x944378*/
          a4 += 3; /*0x94437e*/
          continue; /*0x944381*/
        case 0x29u: /*0x9440b3*/
        case 0x2Au: /*0x9440b3*/
        case 0x2Bu: /*0x9440b3*/
          v4 = a4[3] + ((a4[2] + (a4[1] << 8)) << 8); /*0x94439a*/
          if ( a1[v8 - 0x25] < v4 ) /*0x9443a3*/
            return v4; /*0x9443a3*/
          v4 = a4[6] + (((a4[4] << 8) + a4[5]) << 8); /*0x9443bd*/
          if ( a1[v8 - 0x21] > v4 ) /*0x9443c6*/
            return v4; /*0x9443c6*/
          a4 += 7; /*0x9443cc*/
          continue; /*0x9443cf*/
        case 0x30u: /*0x9440b3*/
        case 0x31u: /*0x9440b3*/
        case 0x32u: /*0x9440b3*/
        case 0x33u: /*0x9440b3*/
        case 0x34u: /*0x9440b3*/
        case 0x35u: /*0x9440b3*/
        case 0x36u: /*0x9440b3*/
        case 0x37u: /*0x9440b3*/
        case 0x38u: /*0x9440b3*/
        case 0x39u: /*0x9440b3*/
        case 0x3Au: /*0x9440b3*/
        case 0x3Bu: /*0x9440b3*/
        case 0x3Cu: /*0x9440b3*/
        case 0x3Du: /*0x9440b3*/
        case 0x3Eu: /*0x9440b3*/
        case 0x3Fu: /*0x9440b3*/
        case 0x40u: /*0x9440b3*/
        case 0x41u: /*0x9440b3*/
        case 0x42u: /*0x9440b3*/
        case 0x43u: /*0x9440b3*/
        case 0x44u: /*0x9440b3*/
        case 0x45u: /*0x9440b3*/
        case 0x46u: /*0x9440b3*/
        case 0x47u: /*0x9440b3*/
        case 0x48u: /*0x9440b3*/
        case 0x49u: /*0x9440b3*/
        case 0x4Au: /*0x9440b3*/
        case 0x4Bu: /*0x9440b3*/
        case 0x4Cu: /*0x9440b3*/
        case 0x4Du: /*0x9440b3*/
        case 0x4Eu: /*0x9440b3*/
        case 0x4Fu: /*0x9440b3*/
          v23 = v8 - 0x30; /*0x944659*/
          goto LABEL_65; /*0x944659*/
        case 0x50u: /*0x9440b3*/
          v23 = a4[1]; /*0x94460b*/
          goto LABEL_65; /*0x94460f*/
        case 0x51u: /*0x9440b3*/
          v23 = a4[2] + (a4[1] << 8); /*0x94461c*/
          goto LABEL_65; /*0x94461e*/
        case 0x52u: /*0x9440b3*/
          v23 = a4[3] + ((a4[2] + (a4[1] << 8)) << 8); /*0x944634*/
          goto LABEL_65; /*0x944636*/
        case 0x53u: /*0x9440b3*/
          v23 = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8); /*0x944655*/
LABEL_65:
          v24 = *a1; /*0x94465c*/
          v25 = v23 + a3[0xB]; /*0x944665*/
          v4 = *(_DWORD *)(v24 + 8) & 0x3FFFFFFF; /*0x94466a*/
          if ( *(_DWORD *)(v24 + 4) == v4 ) /*0x944671*/
            LOBYTE(v4) = sub_8A6EE0((const void **)v24, 4); /*0x944676*/
          *(_DWORD *)(*(_DWORD *)v24 + 4 * (*(_DWORD *)(v24 + 4))++) = v25; /*0x944684*/
          return v4; /*0x944687*/
        case 0x60u: /*0x9440b3*/
        case 0x61u: /*0x9440b3*/
        case 0x62u: /*0x9440b3*/
        case 0x63u: /*0x9440b3*/
          v22 = a4[1]; /*0x94453f*/
          a4 += 2; /*0x944543*/
          v29[v8] = v22; /*0x944546*/
          goto LABEL_56; /*0x94454d*/
        case 0x64u: /*0x9440b3*/
        case 0x65u: /*0x9440b3*/
        case 0x66u: /*0x9440b3*/
        case 0x67u: /*0x9440b3*/
          v28[v8] = a4[2] + (a4[1] << 8); /*0x94455c*/
          a4 += 3; /*0x944563*/
          goto LABEL_56; /*0x944566*/
        case 0x68u: /*0x9440b3*/
        case 0x69u: /*0x9440b3*/
        case 0x6Au: /*0x9440b3*/
        case 0x6Bu: /*0x9440b3*/
          v27[v8] = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8); /*0x944587*/
          a4 += 5; /*0x94458e*/
LABEL_56:
          v4 = v32[0xD]; /*0x944591*/
          if ( a3 != v32 ) /*0x94459b*/
          {
            qmemcpy(v32, a3, sizeof(v32)); /*0x9445a6*/
            a3 = v32; /*0x9445a8*/
          }
          v32[0xD] = v4; /*0x9445ac*/
          continue; /*0x9445b0*/
        default:
          sub_8BBFB0((int)v33, (int)a4, v34, 0x200u, 1); /*0x9445c9*/
          sub_8BBDB0(v33, "Unknown command.\n"); /*0x9445d7*/
          (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x9445fa*/
            unk_BA7FB0,
            3,
            0x1298FEDD,
            v34,
            ".\\collide\\mopp\\machine\\hkMoppObbVirtualMachine.cpp",
            0x173);
          LOBYTE(v4) = sub_8BC000(v33); /*0x944601*/
          continue; /*0x944606*/
      }
    }
  }
  return v4; /*0x94423a*/
}
