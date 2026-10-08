char __cdecl sub_9A66F0(
        float *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        float *a11,
        float *a12)
{
  char result; // al
  float *v13; // eax
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  float *v17; // eax
  unsigned int v18; // ecx
  bool v19; // zf
  float *v20; // eax
  unsigned int v21; // ecx
  NiTransform *v22; // eax
  float *v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  float *v27; // eax
  float v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // eax
  NiTransform *v31; // eax
  double v32; // st6
  float *v33; // eax
  float *v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // edx
  float *v37; // eax
  float v38; // edx
  float v39; // eax
  float v40; // ecx
  int v41; // eax
  NiTransform *v42; // [esp-4h] [ebp-230h]
  float v43; // [esp+0h] [ebp-22Ch]
  NiTransform v44; // [esp+Ch] [ebp-220h] BYREF
  float v45; // [esp+40h] [ebp-1ECh]
  int v46[3]; // [esp+44h] [ebp-1E8h] BYREF
  float v47; // [esp+50h] [ebp-1DCh]
  float v48; // [esp+60h] [ebp-1CCh]
  float v49; // [esp+70h] [ebp-1BCh]
  float v50; // [esp+80h] [ebp-1ACh]
  NiTransform parent; // [esp+84h] [ebp-1A8h] BYREF
  float v52; // [esp+C0h] [ebp-16Ch]
  float v53[3]; // [esp+C4h] [ebp-168h] BYREF
  _BYTE v54[64]; // [esp+D0h] [ebp-15Ch] BYREF
  NiTransform local; // [esp+110h] [ebp-11Ch] BYREF
  NiTransform v56; // [esp+144h] [ebp-E8h] BYREF
  float v57[3]; // [esp+180h] [ebp-ACh] BYREF
  float v58[9]; // [esp+18Ch] [ebp-A0h] BYREF
  float v59[9]; // [esp+1B0h] [ebp-7Ch] BYREF
  float v60[9]; // [esp+1D4h] [ebp-58h] BYREF
  NiTransform out; // [esp+1F8h] [ebp-34h] BYREF

  _memset((int)v54, 0, sizeof(v54)); /*0x9a6704*/
  *(float *)&v54[0x3C] = 1.0; /*0x9a6712*/
  *(float *)&v54[0x28] = 1.0; /*0x9a671c*/
  *(float *)&v54[0x14] = 1.0; /*0x9a6726*/
  *(float *)v54 = 1.0; /*0x9a6730*/
  switch ( a3 ) /*0x9a673d*/
  {
    case 1: /*0x9a673d*/
      if ( !a4 ) /*0x9a674f*/
        goto LABEL_92; /*0x9a674f*/
      *a1 = *(float *)(a4 + 0xDC); /*0x9a6762*/
      a1[1] = 0.0; /*0x9a6768*/
      a1[2] = 0.0; /*0x9a676b*/
      a1[3] = 0.0; /*0x9a676e*/
      return 1; /*0x9a6779*/
    case 2: /*0x9a673d*/
      v13 = a1; /*0x9a6783*/
      if ( !a4 ) /*0x9a678a*/
        goto LABEL_6; /*0x9a678a*/
      *a1 = *(float *)(a4 + 0xE0); /*0x9a6793*/
      a1[1] = *(float *)(a4 + 0xE4); /*0x9a679c*/
      a1[2] = *(float *)(a4 + 0xE8); /*0x9a67a5*/
      a1[3] = 1.0; /*0x9a67a8*/
      return 1; /*0x9a67b3*/
    case 3: /*0x9a673d*/
      v13 = a1; /*0x9a67d5*/
      if ( !a4 ) /*0x9a67dc*/
        goto LABEL_6; /*0x9a67dc*/
      *a1 = *(float *)(a4 + 0xEC); /*0x9a67e5*/
      a1[1] = *(float *)(a4 + 0xF0); /*0x9a67ee*/
      a1[2] = *(float *)(a4 + 0xF4); /*0x9a67f7*/
      a1[3] = 1.0; /*0x9a67fa*/
      return 1; /*0x9a6805*/
    case 4: /*0x9a673d*/
      v13 = a1; /*0x9a680f*/
      if ( !a4 ) /*0x9a6816*/
        goto LABEL_6; /*0x9a6816*/
      *a1 = *(float *)(a4 + 0xF8); /*0x9a681f*/
      a1[1] = *(float *)(a4 + 0xFC); /*0x9a6828*/
      a1[2] = *(float *)(a4 + 0x100); /*0x9a6831*/
      a1[3] = 1.0; /*0x9a6834*/
      return 1; /*0x9a683f*/
    case 5: /*0x9a673d*/
      v14 = a4; /*0x9a6840*/
      if ( !a4 ) /*0x9a6849*/
        goto LABEL_17; /*0x9a6849*/
      v15 = *(_DWORD *)(a4 + 0xE4); /*0x9a6851*/
      v44.rot.data[0][0] = *(float *)(a4 + 0xE0); /*0x9a6857*/
      v16 = *(_DWORD *)(a4 + 0xE8); /*0x9a685b*/
      goto LABEL_13; /*0x9a685b*/
    case 6: /*0x9a673d*/
      v14 = a4; /*0x9a68c8*/
      if ( !a4 ) /*0x9a68d1*/
        goto LABEL_17; /*0x9a68d1*/
      v18 = *(_DWORD *)(a4 + 0xF0); /*0x9a68d9*/
      v44.rot.data[0][0] = *(float *)(a4 + 0xEC); /*0x9a68df*/
      *(_QWORD *)&v44.rot.data[0][1] = __PAIR64__(*(_DWORD *)(a4 + 0xF4), v18); /*0x9a68e9*/
      goto LABEL_14; /*0x9a68f1*/
    case 7: /*0x9a673d*/
      v14 = a4; /*0x9a68f6*/
      if ( !a4 ) /*0x9a68ff*/
        goto LABEL_17; /*0x9a68ff*/
      v15 = *(_DWORD *)(a4 + 0xFC); /*0x9a6907*/
      v44.rot.data[0][0] = *(float *)(a4 + 0xF8); /*0x9a690d*/
      v16 = *(_DWORD *)(a4 + 0x100); /*0x9a6911*/
LABEL_13:
      *(_QWORD *)&v44.rot.data[0][1] = __PAIR64__(v16, v15); /*0x9a6861*/
LABEL_14:
      NiPoint3::MutliplyByValue((NiPoint3 *)&v44, *(float *)(v14 + 0xDC)); /*0x9a6869*/
      goto LABEL_15; /*0x9a6879*/
    case 8: /*0x9a673d*/
      if ( !a4 ) /*0x9a6925*/
        goto LABEL_17; /*0x9a6925*/
      v19 = !sub_435CC0((int)&stru_B3FCFC, a4); /*0x9a6937*/
      v17 = a1; /*0x9a6939*/
      if ( !v19 ) /*0x9a6940*/
      {
        v44.rot.data[0][0] = *(float *)(a4 + 0x108) * -1048576.0; /*0x9a6952*/
        v44.rot.data[0][1] = *(float *)(a4 + 0x10C) * -1048576.0; /*0x9a695e*/
        v44.rot.data[0][2] = -1048576.0 * *(float *)(a4 + 0x110); /*0x9a6968*/
        goto LABEL_16; /*0x9a696c*/
      }
      *a1 = *(float *)(a4 + 0x88); /*0x9a6978*/
      a1[1] = *(float *)(a4 + 0x8C); /*0x9a6980*/
      a1[2] = *(float *)(a4 + 0x90); /*0x9a698a*/
      a1[3] = 1.0; /*0x9a698f*/
      return 1; /*0x9a699a*/
    case 9: /*0x9a673d*/
      if ( !a4 ) /*0x9a69a4*/
        goto LABEL_17; /*0x9a69a4*/
      sub_718A80(a11, &local); /*0x9a69bb*/
      if ( sub_435CC0((int)&stru_B3FCFC, a4) ) /*0x9a69c6*/
      {
        v44.rot.data[1][1] = *(float *)(a4 + 0x108) * -1048576.0; /*0x9a69f6*/
        v44.rot.data[1][2] = *(float *)(a4 + 0x10C) * -1048576.0; /*0x9a6a02*/
        v44.rot.data[2][0] = -1048576.0 * *(float *)(a4 + 0x110); /*0x9a6a0c*/
        v20 = NiTransform_TransformPoint(&local, v57, (NiPoint3 *)&v44.rot.data[1][1]); /*0x9a6a10*/
        v21 = *((_DWORD *)v20 + 1); /*0x9a6a17*/
        v44.rot.data[0][0] = *v20; /*0x9a6a1a*/
        *(_QWORD *)&v44.rot.data[0][1] = __PAIR64__(*((_DWORD *)v20 + 2), v21); /*0x9a6a21*/
        goto LABEL_15; /*0x9a6a29*/
      }
      v22 = (NiTransform *)NiTransform_TransformPoint(&local, v56.rot.data[2], (NiPoint3 *)(a4 + 0x88)); /*0x9a6a44*/
      goto LABEL_30; /*0x9a6a44*/
    case 0xA: /*0x9a673d*/
      if ( !a4 ) /*0x9a6a6b*/
        goto LABEL_38; /*0x9a6a6b*/
      if ( sub_435CC0((int)&stru_B3FD80, a4) ) /*0x9a6a79*/
      {
        v23 = sub_4121A0(a12, v56.rot.data[1], (float *)(a4 + 0x88)); /*0x9a6a9b*/
        v24 = *((_DWORD *)v23 + 1); /*0x9a6aa2*/
        v44.rot.data[0][0] = *v23; /*0x9a6aa5*/
        *(_QWORD *)&v44.rot.data[0][1] = __PAIR64__(*((_DWORD *)v23 + 2), v24); /*0x9a6aac*/
        Vector3_NormalizeInPlace((float *)&v44); /*0x9a6ab8*/
      }
      else
      {
        if ( sub_435CC0((int)&stru_B3FCFC, a4) ) /*0x9a6aca*/
        {
          v25 = *(_DWORD *)(a4 + 0x108); /*0x9a6ad6*/
          v26 = *(_DWORD *)(a4 + 0x10C); /*0x9a6adc*/
          v44.rot.data[0][2] = *(float *)(a4 + 0x110); /*0x9a6ae8*/
        }
        else
        {
          v25 = *(_DWORD *)(a4 + 0x114); /*0x9a6af9*/
          v26 = *(_DWORD *)(a4 + 0x118); /*0x9a6aff*/
          v44.rot.data[0][2] = *(float *)(a4 + 0x11C); /*0x9a6b0b*/
        }
        *(_QWORD *)&v44.rot.data[0][0] = __PAIR64__(v26, v25); /*0x9a6af0*/
      }
      goto LABEL_15; /*0x9a6abf*/
    case 0xB: /*0x9a673d*/
      if ( !a4 ) /*0x9a6b44*/
      {
LABEL_38:
        *a1 = 1.0; /*0x9a6b1c*/
        a1[1] = 0.0; /*0x9a6b29*/
        a1[2] = 0.0; /*0x9a6b2c*/
        a1[3] = 1.0; /*0x9a6b2f*/
        return 0; /*0x9a6b3a*/
      }
      if ( sub_435CC0((int)&stru_B3FD80, a4) ) /*0x9a6b4e*/
      {
        v27 = sub_4121A0(a12, &v56.pos.x, (float *)(a4 + 0x88)); /*0x9a6b70*/
        *(_QWORD *)&v44.rot.data[0][0] = *(_QWORD *)v27; /*0x9a6b77*/
        v44.rot.data[0][2] = v27[2]; /*0x9a6b89*/
        Vector3_NormalizeInPlace((float *)&v44); /*0x9a6b8d*/
      }
      else
      {
        if ( sub_435CC0((int)&stru_B3FCFC, a4) ) /*0x9a6b9c*/
        {
          v28 = *(float *)(a4 + 0x108); /*0x9a6ba8*/
          v29 = *(_DWORD *)(a4 + 0x10C); /*0x9a6bae*/
          v30 = *(_DWORD *)(a4 + 0x110); /*0x9a6bb4*/
        }
        else
        {
          v28 = *(float *)(a4 + 0x114); /*0x9a6bbc*/
          v29 = *(_DWORD *)(a4 + 0x118); /*0x9a6bc2*/
          v30 = *(_DWORD *)(a4 + 0x11C); /*0x9a6bc8*/
        }
        *(_QWORD *)&v44.rot.data[0][1] = __PAIR64__(v30, v29); /*0x9a6bd2*/
        v44.rot.data[0][0] = v28; /*0x9a6bd6*/
      }
      v31 = (NiTransform *)sub_710400(a11, v59); /*0x9a6bf6*/
      v22 = sub_7101F0(v31, &v56, (NiPoint3 *)&v44); /*0x9a6bfd*/
LABEL_30:
      *(_QWORD *)&v44.rot.data[0][0] = *(_QWORD *)&v22->rot.data[0][0]; /*0x9a6a49*/
      v44.rot.data[0][2] = v22->rot.data[0][2]; /*0x9a6a59*/
      goto LABEL_15; /*0x9a6a5d*/
    case 0xC: /*0x9a673d*/
      if ( !a4 ) /*0x9a6c10*/
        goto LABEL_58; /*0x9a6c10*/
      parent.pos.z = 0.0; /*0x9a6c19*/
      parent.rot.data[2][1] = 0.0; /*0x9a6c25*/
      parent.rot.data[1][0] = 0.0; /*0x9a6c2c*/
      v52 = 1.0; /*0x9a6c33*/
      if ( sub_435CC0((int)&stru_B3FCFC, a4) ) /*0x9a6c3a*/
      {
        v44.rot.data[1][1] = *(float *)(a4 + 0x108) * -1048576.0; /*0x9a6c65*/
        v44.rot.data[1][2] = *(float *)(a4 + 0x10C) * -1048576.0; /*0x9a6c71*/
        v44.rot.data[2][0] = -1048576.0 * *(float *)(a4 + 0x110); /*0x9a6c7b*/
        sub_761AE0((float *)&parent, (float *)(a4 + 0x64), &v44.rot.data[1][1], *(float *)(a4 + 0x94)); /*0x9a6c88*/
        sub_9A4770((float *)&parent, a1); /*0x9a6c9e*/
      }
      else
      {
        sub_7640A0((float *)&parent, (float *)(a4 + 0x64)); /*0x9a6cba*/
        sub_9A4770((float *)&parent, a1); /*0x9a6cd0*/
      }
      return 1; /*0x9a6cad*/
    case 0xD: /*0x9a673d*/
      if ( !a4 ) /*0x9a6d0c*/
        goto LABEL_58; /*0x9a6d0c*/
      sub_718A80(a11, &parent); /*0x9a6d21*/
      v49 = 0.0; /*0x9a6d28*/
      v48 = 0.0; /*0x9a6d2d*/
      v47 = 0.0; /*0x9a6d36*/
      v50 = 1.0; /*0x9a6d3c*/
      if ( sub_435CC0((int)&stru_B3FCFC, a4) ) /*0x9a6d43*/
      {
        v32 = *(float *)(a4 + 0x108) * -1048576.0; /*0x9a6d70*/
        qmemcpy(&local, (const void *)(a4 + 0x64), sizeof(local)); /*0x9a6d72*/
        v44.rot.data[0][0] = v32; /*0x9a6d74*/
        v44.rot.data[0][1] = *(float *)(a4 + 0x10C) * -1048576.0; /*0x9a6d80*/
        v44.rot.data[0][2] = -1048576.0 * *(float *)(a4 + 0x110); /*0x9a6d92*/
        local.pos = *(NiPoint3 *)&v44.rot.data[0][0]; /*0x9a6d9a*/
        v42 = NiTransform_Compose(&parent, &out, &local); /*0x9a6dcb*/
      }
      else
      {
        v42 = NiTransform_Compose(&parent, (NiTransform *)v54, (const NiTransform *)(a4 + 0x64)); /*0x9a6deb*/
      }
      sub_7640A0((float *)v46, (float *)v42); /*0x9a6dd1*/
      sub_9A4770((float *)v46, a1); /*0x9a6e04*/
      return 1; /*0x9a6e14*/
    case 0xE: /*0x9a673d*/
      if ( a4 ) /*0x9a6e3f*/
      {
        if ( sub_435CC0((int)&stru_B40190, a4) ) /*0x9a6e4b*/
        {
          *a1 = 1.0; /*0x9a6e60*/
          v44.rot.data[1][0] = *(float *)(a4 + 0x120) * unk_B3F9A4 / 180.0; /*0x9a6e74*/
          v44.rot.data[1][0] = cos(v44.rot.data[1][0]); /*0x9a6e81*/
          a1[1] = v44.rot.data[1][0]; /*0x9a6e8b*/
          a1[2] = *(float *)(a4 + 0x124); /*0x9a6e95*/
        }
        else
        {
          *a1 = -1.0; /*0x9a6eb2*/
          a1[1] = -1.0; /*0x9a6eb5*/
          a1[2] = 0.0; /*0x9a6ebb*/
        }
        a1[3] = 0.0; /*0x9a6e9a*/
        return 1; /*0x9a6e89*/
      }
      else
      {
        *a1 = -1.0; /*0x9a6ed7*/
        a1[1] = -1.0; /*0x9a6eda*/
        a1[2] = 0.0; /*0x9a6ee0*/
        a1[3] = 0.0; /*0x9a6ee3*/
        return 0; /*0x9a6ee6*/
      }
    case 0xF: /*0x9a673d*/
      if ( !a4 ) /*0x9a6ef8*/
        goto LABEL_70; /*0x9a6ef8*/
      if ( NiRTTI::IsObjectOfRTTIType(&stru_B3FD80, (NiObject *)a4) ) /*0x9a6f02*/
      {
        *a1 = *(float *)(a4 + 0x108); /*0x9a6f1c*/
        a1[1] = *(float *)(a4 + 0x10C); /*0x9a6f24*/
        a1[2] = *(float *)(a4 + 0x110); /*0x9a6f2e*/
      }
      else
      {
        *a1 = 1.0; /*0x9a6f42*/
        a1[1] = 0.0; /*0x9a6f47*/
        a1[2] = 0.0; /*0x9a6f4a*/
      }
      a1[3] = 0.0; /*0x9a6f33*/
      return 1; /*0x9a6f3e*/
    case 0x10: /*0x9a673d*/
      if ( !a4 ) /*0x9a6f81*/
        goto LABEL_58; /*0x9a6f81*/
      v49 = 0.0; /*0x9a6f8a*/
      v33 = (float *)(a4 + 0x10C); /*0x9a6f8e*/
      v48 = 0.0; /*0x9a6f93*/
      v47 = 0.0; /*0x9a6f97*/
      v50 = 1.0; /*0x9a6f9b*/
      v43 = 1.0; /*0x9a6fa2*/
      goto LABEL_73; /*0x9a6fa2*/
    case 0x11: /*0x9a673d*/
      if ( a4 ) /*0x9a6fdc*/
      {
        v49 = 0.0; /*0x9a6fec*/
        v48 = 0.0; /*0x9a6ff0*/
        v47 = 0.0; /*0x9a6ff9*/
        v50 = 1.0; /*0x9a7004*/
        v43 = 1.0; /*0x9a700b*/
        v34 = sub_710400(a11, v60); /*0x9a701d*/
        v33 = NiMAtrix33_Multiply(v34, v58, (float *)(a4 + 0x10C)); /*0x9a7024*/
LABEL_73:
        sub_761AE0((float *)v46, v33, &g_zeroNiPoint3.x, v43); /*0x9a6faa*/
        sub_9A4770((float *)v46, a1); /*0x9a6fc3*/
        return 1; /*0x9a6fc9*/
      }
      else
      {
LABEL_58:
        sub_9A4770((float *)v54, a1); /*0x9a6e15*/
        return 0; /*0x9a6e2a*/
      }
    case 0x12: /*0x9a673d*/
      v13 = a1; /*0x9a7037*/
      if ( a4 ) /*0x9a703e*/
      {
        *a1 = *(float *)(a4 + 0x130); /*0x9a704b*/
        a1[1] = *(float *)(a4 + 0x134); /*0x9a7054*/
        a1[2] = *(float *)(a4 + 0x138); /*0x9a705d*/
        a1[3] = 1.0; /*0x9a7060*/
        return 1; /*0x9a7063*/
      }
      else
      {
LABEL_6:
        *v13 = 0.0; /*0x9a67b4*/
        v13[1] = 0.0; /*0x9a67ba*/
        v13[2] = 0.0; /*0x9a67bd*/
        v13[3] = 1.0; /*0x9a67c0*/
        return 0; /*0x9a67c3*/
      }
    case 0x13: /*0x9a673d*/
      if ( a4 ) /*0x9a7075*/
      {
        sub_718A80(a11, &parent); /*0x9a708c*/
        v35 = *(_DWORD *)(a4 + 0x134); /*0x9a7097*/
        v36 = *(_DWORD *)(a4 + 0x138); /*0x9a709d*/
        v44.rot.data[0][0] = *(float *)(a4 + 0x130); /*0x9a70a3*/
        *(_QWORD *)&v44.rot.data[0][1] = __PAIR64__(v36, v35); /*0x9a70a7*/
        v37 = NiTransform_TransformPoint(&parent, &v56.scale, (NiPoint3 *)&v44); /*0x9a70c3*/
        *(_QWORD *)&v44.rot.data[0][0] = *(_QWORD *)v37; /*0x9a70ca*/
        v44.rot.data[0][2] = v37[2]; /*0x9a70d8*/
LABEL_15:
        v17 = a1; /*0x9a687e*/
LABEL_16:
        *v17 = v44.rot.data[0][0]; /*0x9a6885*/
        v17[1] = v44.rot.data[0][1]; /*0x9a6891*/
        v17[2] = v44.rot.data[0][2]; /*0x9a6898*/
        v17[3] = 1.0; /*0x9a689d*/
        return 1; /*0x9a68a0*/
      }
      else
      {
LABEL_17:
        *a1 = 0.0; /*0x9a68a9*/
        a1[1] = 0.0; /*0x9a68b5*/
        a1[2] = 0.0; /*0x9a68b9*/
        a1[3] = 1.0; /*0x9a68bc*/
        return 0; /*0x9a68bf*/
      }
    case 0x14: /*0x9a673d*/
      if ( !a4 ) /*0x9a70ea*/
        goto LABEL_70; /*0x9a70ea*/
      if ( !*(_BYTE *)(a4 + 0x150) ) /*0x9a70f9*/
        goto LABEL_83; /*0x9a70f9*/
      *a1 = *(float *)(a4 + 0x164); /*0x9a7108*/
      a1[1] = *(float *)(a4 + 0x168); /*0x9a7112*/
      a1[2] = *(float *)(a4 + 0x16C); /*0x9a711b*/
      a1[3] = *(float *)(a4 + 0x170); /*0x9a7126*/
      return 1; /*0x9a712f*/
    case 0x15: /*0x9a673d*/
      if ( a4 ) /*0x9a7158*/
      {
        if ( *(_BYTE *)(a4 + 0x150) ) /*0x9a715e*/
        {
          sub_718A80(a11, &parent); /*0x9a7178*/
          v38 = *(float *)(a4 + 0x168); /*0x9a717d*/
          v39 = *(float *)(a4 + 0x16C); /*0x9a7189*/
          v44.rot.data[2][1] = *(float *)(a4 + 0x164); /*0x9a718f*/
          v40 = *(float *)(a4 + 0x170); /*0x9a7193*/
          v44.rot.data[2][2] = v38; /*0x9a7199*/
          v44.pos.x = v39; /*0x9a71a1*/
          v44.pos.y = v40; /*0x9a71aa*/
          sub_7101F0(&parent, &v44, (NiPoint3 *)&v44.rot.data[2][1]); /*0x9a71b6*/
          v44.pos.z = v44.pos.y * v44.rot.data[2][1]; /*0x9a71d2*/
          v44.scale = v44.rot.data[2][2] * v44.pos.y; /*0x9a71e3*/
          v45 = v44.pos.y * v44.pos.x; /*0x9a71eb*/
          NiTransform_TransformPoint(&parent, v53, (NiPoint3 *)&v44.pos.z); /*0x9a71ef*/
          *a1 = v44.rot.data[0][0]; /*0x9a71ff*/
          a1[1] = v44.rot.data[0][1]; /*0x9a720d*/
          a1[2] = v44.rot.data[0][2]; /*0x9a7218*/
          a1[3] = sub_47D9E0((float *)&v44, v53); /*0x9a7221*/
          return 1; /*0x9a7224*/
        }
        else
        {
LABEL_83:
          *a1 = 0.0; /*0x9a7130*/
          a1[1] = 0.0; /*0x9a713c*/
          a1[2] = 0.0; /*0x9a7140*/
          a1[3] = 0.0; /*0x9a7143*/
          return 1; /*0x9a7146*/
        }
      }
      else
      {
LABEL_70:
        *a1 = 1.0; /*0x9a6f59*/
        a1[1] = 0.0; /*0x9a6f66*/
        a1[2] = 0.0; /*0x9a6f69*/
        a1[3] = 0.0; /*0x9a6f6c*/
        return 0; /*0x9a6f6f*/
      }
    case 0x16: /*0x9a673d*/
      if ( a4 ) /*0x9a7237*/
      {
        v41 = *(_DWORD *)(a4 + 0x14C); /*0x9a723f*/
        v44.rot.data[1][0] = 0.0; /*0x9a7248*/
        switch ( v41 ) /*0x9a7252*/
        {
          case 0: /*0x9a7252*/
          case 1: /*0x9a7252*/
            v44.rot.data[1][0] = 2.0; /*0x9a7269*/
            *a1 = 2.0; /*0x9a7272*/
            a1[1] = 0.0; /*0x9a7274*/
            a1[2] = 0.0; /*0x9a7277*/
            a1[3] = 0.0; /*0x9a727a*/
            result = 1; /*0x9a727d*/
            break; /*0x9a7285*/
          case 2: /*0x9a7252*/
          case 3: /*0x9a7252*/
            v44.rot.data[1][0] = 3.0; /*0x9a7296*/
            *a1 = 3.0; /*0x9a729f*/
            a1[1] = 0.0; /*0x9a72a1*/
            a1[2] = 0.0; /*0x9a72a4*/
            a1[3] = 0.0; /*0x9a72a7*/
            result = 1; /*0x9a72aa*/
            break; /*0x9a72b2*/
          case 4: /*0x9a7252*/
            v44.rot.data[1][0] = 1.0; /*0x9a72bc*/
            *a1 = 1.0; /*0x9a72c6*/
            a1[1] = 0.0; /*0x9a72c8*/
            a1[2] = 0.0; /*0x9a72cb*/
            a1[3] = 0.0; /*0x9a72ce*/
            result = 1; /*0x9a72d1*/
            break; /*0x9a72d9*/
          default:
            JUMPOUT(0x9A72DA); /*0x9a72da*/
        }
      }
      else
      {
LABEL_92:
        *a1 = 0.0; /*0x9a72ff*/
        a1[1] = 0.0; /*0x9a730b*/
        a1[2] = 0.0; /*0x9a730f*/
        a1[3] = 0.0; /*0x9a7312*/
        return 0; /*0x9a7315*/
      }
      return result; /*0x9a72d9*/
    default:
      JUMPOUT(0x9A731E); /*0x9a731e*/
  }
}
