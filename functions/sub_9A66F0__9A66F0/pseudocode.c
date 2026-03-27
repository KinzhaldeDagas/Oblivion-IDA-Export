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
  NiTransform v51; // [esp+84h] [ebp-1A8h] BYREF
  float v52; // [esp+C0h] [ebp-16Ch]
  float v53[3]; // [esp+C4h] [ebp-168h] BYREF
  _BYTE v54[64]; // [esp+D0h] [ebp-15Ch] BYREF
  NiTransform v55; // [esp+110h] [ebp-11Ch] BYREF
  NiTransform v56; // [esp+144h] [ebp-E8h] BYREF
  float v57[3]; // [esp+180h] [ebp-ACh] BYREF
  float v58[9]; // [esp+18Ch] [ebp-A0h] BYREF
  float v59[9]; // [esp+1B0h] [ebp-7Ch] BYREF
  float v60[9]; // [esp+1D4h] [ebp-58h] BYREF
  NiTransform v61; // [esp+1F8h] [ebp-34h] BYREF

  _memset((int)v54, 0, sizeof(v54));
  *(float *)&v54[0x3C] = 1.0;
  *(float *)&v54[0x28] = 1.0;
  *(float *)&v54[0x14] = 1.0;
  *(float *)v54 = 1.0;
  switch ( a3 )
  {
    case 1:
      if ( !a4 )
        goto LABEL_92;
      *a1 = *(float *)(a4 + 0xDC);
      a1[1] = 0.0;
      a1[2] = 0.0;
      a1[3] = 0.0;
      return 1;
    case 2:
      v13 = a1;
      if ( !a4 )
        goto LABEL_6;
      *a1 = *(float *)(a4 + 0xE0);
      a1[1] = *(float *)(a4 + 0xE4);
      a1[2] = *(float *)(a4 + 0xE8);
      a1[3] = 1.0;
      return 1;
    case 3:
      v13 = a1;
      if ( !a4 )
        goto LABEL_6;
      *a1 = *(float *)(a4 + 0xEC);
      a1[1] = *(float *)(a4 + 0xF0);
      a1[2] = *(float *)(a4 + 0xF4);
      a1[3] = 1.0;
      return 1;
    case 4:
      v13 = a1;
      if ( !a4 )
        goto LABEL_6;
      *a1 = *(float *)(a4 + 0xF8);
      a1[1] = *(float *)(a4 + 0xFC);
      a1[2] = *(float *)(a4 + 0x100);
      a1[3] = 1.0;
      return 1;
    case 5:
      v14 = a4;
      if ( !a4 )
        goto LABEL_17;
      v15 = *(_DWORD *)(a4 + 0xE4);
      v44.rot.data[0][0] = *(float *)(a4 + 0xE0);
      v16 = *(_DWORD *)(a4 + 0xE8);
      goto LABEL_13;
    case 6:
      v14 = a4;
      if ( !a4 )
        goto LABEL_17;
      v18 = *(_DWORD *)(a4 + 0xF0);
      v44.rot.data[0][0] = *(float *)(a4 + 0xEC);
      *(_QWORD *)&v44.rot.data[0][1] = __PAIR64__(*(_DWORD *)(a4 + 0xF4), v18);
      goto LABEL_14;
    case 7:
      v14 = a4;
      if ( !a4 )
        goto LABEL_17;
      v15 = *(_DWORD *)(a4 + 0xFC);
      v44.rot.data[0][0] = *(float *)(a4 + 0xF8);
      v16 = *(_DWORD *)(a4 + 0x100);
LABEL_13:
      *(_QWORD *)&v44.rot.data[0][1] = __PAIR64__(v16, v15);
LABEL_14:
      NiPoint3::MutliplyByValue((NiPoint3 *)&v44, *(float *)(v14 + 0xDC));
      goto LABEL_15;
    case 8:
      if ( !a4 )
        goto LABEL_17;
      v19 = !sub_435CC0((int)dword_B3FCFC, a4);
      v17 = a1;
      if ( !v19 )
      {
        v44.rot.data[0][0] = *(float *)(a4 + 0x108) * -1048576.0;
        v44.rot.data[0][1] = *(float *)(a4 + 0x10C) * -1048576.0;
        v44.rot.data[0][2] = -1048576.0 * *(float *)(a4 + 0x110);
        goto LABEL_16;
      }
      *a1 = *(float *)(a4 + 0x88);
      a1[1] = *(float *)(a4 + 0x8C);
      a1[2] = *(float *)(a4 + 0x90);
      a1[3] = 1.0;
      return 1;
    case 9:
      if ( !a4 )
        goto LABEL_17;
      sub_718A80(a11, &v55);
      if ( sub_435CC0((int)dword_B3FCFC, a4) )
      {
        v44.rot.data[1][1] = *(float *)(a4 + 0x108) * -1048576.0;
        v44.rot.data[1][2] = *(float *)(a4 + 0x10C) * -1048576.0;
        v44.rot.data[2][0] = -1048576.0 * *(float *)(a4 + 0x110);
        v20 = sub_53D4B0(&v55, v57, (NiPoint3 *)&v44.rot.data[1][1]);
        v21 = *((_DWORD *)v20 + 1);
        v44.rot.data[0][0] = *v20;
        *(_QWORD *)&v44.rot.data[0][1] = __PAIR64__(*((_DWORD *)v20 + 2), v21);
        goto LABEL_15;
      }
      v22 = (NiTransform *)sub_53D4B0(&v55, v56.rot.data[2], (NiPoint3 *)(a4 + 0x88));
      goto LABEL_30;
    case 0xA:
      if ( !a4 )
        goto LABEL_38;
      if ( sub_435CC0((int)dword_B3FD80, a4) )
      {
        v23 = sub_4121A0(a12, v56.rot.data[1], (float *)(a4 + 0x88));
        v24 = *((_DWORD *)v23 + 1);
        v44.rot.data[0][0] = *v23;
        *(_QWORD *)&v44.rot.data[0][1] = __PAIR64__(*((_DWORD *)v23 + 2), v24);
        sub_43F350((float *)&v44);
      }
      else
      {
        if ( sub_435CC0((int)dword_B3FCFC, a4) )
        {
          v25 = *(_DWORD *)(a4 + 0x108);
          v26 = *(_DWORD *)(a4 + 0x10C);
          v44.rot.data[0][2] = *(float *)(a4 + 0x110);
        }
        else
        {
          v25 = *(_DWORD *)(a4 + 0x114);
          v26 = *(_DWORD *)(a4 + 0x118);
          v44.rot.data[0][2] = *(float *)(a4 + 0x11C);
        }
        *(_QWORD *)&v44.rot.data[0][0] = __PAIR64__(v26, v25);
      }
      goto LABEL_15;
    case 0xB:
      if ( !a4 )
      {
LABEL_38:
        *a1 = 1.0;
        a1[1] = 0.0;
        a1[2] = 0.0;
        a1[3] = 1.0;
        return 0;
      }
      if ( sub_435CC0((int)dword_B3FD80, a4) )
      {
        v27 = sub_4121A0(a12, &v56.pos.x, (float *)(a4 + 0x88));
        *(_QWORD *)&v44.rot.data[0][0] = *(_QWORD *)v27;
        v44.rot.data[0][2] = v27[2];
        sub_43F350((float *)&v44);
      }
      else
      {
        if ( sub_435CC0((int)dword_B3FCFC, a4) )
        {
          v28 = *(float *)(a4 + 0x108);
          v29 = *(_DWORD *)(a4 + 0x10C);
          v30 = *(_DWORD *)(a4 + 0x110);
        }
        else
        {
          v28 = *(float *)(a4 + 0x114);
          v29 = *(_DWORD *)(a4 + 0x118);
          v30 = *(_DWORD *)(a4 + 0x11C);
        }
        *(_QWORD *)&v44.rot.data[0][1] = __PAIR64__(v30, v29);
        v44.rot.data[0][0] = v28;
      }
      v31 = (NiTransform *)sub_710400(a11, v59);
      v22 = sub_7101F0(v31, &v56, (NiPoint3 *)&v44);
LABEL_30:
      *(_QWORD *)&v44.rot.data[0][0] = *(_QWORD *)&v22->rot.data[0][0];
      v44.rot.data[0][2] = v22->rot.data[0][2];
      goto LABEL_15;
    case 0xC:
      if ( !a4 )
        goto LABEL_58;
      v51.pos.z = 0.0;
      v51.rot.data[2][1] = 0.0;
      v51.rot.data[1][0] = 0.0;
      v52 = 1.0;
      if ( sub_435CC0((int)dword_B3FCFC, a4) )
      {
        v44.rot.data[1][1] = *(float *)(a4 + 0x108) * -1048576.0;
        v44.rot.data[1][2] = *(float *)(a4 + 0x10C) * -1048576.0;
        v44.rot.data[2][0] = -1048576.0 * *(float *)(a4 + 0x110);
        sub_761AE0((float *)&v51, (float *)(a4 + 0x64), &v44.rot.data[1][1], *(float *)(a4 + 0x94));
        sub_9A4770((float *)&v51, a1);
      }
      else
      {
        sub_7640A0((float *)&v51, (float *)(a4 + 0x64));
        sub_9A4770((float *)&v51, a1);
      }
      return 1;
    case 0xD:
      if ( !a4 )
        goto LABEL_58;
      sub_718A80(a11, &v51);
      v49 = 0.0;
      v48 = 0.0;
      v47 = 0.0;
      v50 = 1.0;
      if ( sub_435CC0((int)dword_B3FCFC, a4) )
      {
        v32 = *(float *)(a4 + 0x108) * -1048576.0;
        qmemcpy(&v55, (const void *)(a4 + 0x64), sizeof(v55));
        v44.rot.data[0][0] = v32;
        v44.rot.data[0][1] = *(float *)(a4 + 0x10C) * -1048576.0;
        v44.rot.data[0][2] = -1048576.0 * *(float *)(a4 + 0x110);
        v55.pos = *(NiPoint3 *)&v44.rot.data[0][0];
        v42 = sub_53D7A0(&v51, &v61, &v55);
      }
      else
      {
        v42 = sub_53D7A0(&v51, (NiTransform *)v54, (NiTransform *)(a4 + 0x64));
      }
      sub_7640A0((float *)v46, (float *)v42);
      sub_9A4770((float *)v46, a1);
      return 1;
    case 0xE:
      if ( a4 )
      {
        if ( sub_435CC0((int)dword_B40190, a4) )
        {
          *a1 = 1.0;
          v44.rot.data[1][0] = *(float *)(a4 + 0x120) * flt_B3F9A4 / 180.0;
          v44.rot.data[1][0] = cos(v44.rot.data[1][0]);
          a1[1] = v44.rot.data[1][0];
          a1[2] = *(float *)(a4 + 0x124);
        }
        else
        {
          *a1 = -1.0;
          a1[1] = -1.0;
          a1[2] = 0.0;
        }
        a1[3] = 0.0;
        return 1;
      }
      else
      {
        *a1 = -1.0;
        a1[1] = -1.0;
        a1[2] = 0.0;
        a1[3] = 0.0;
        return 0;
      }
    case 0xF:
      if ( !a4 )
        goto LABEL_70;
      if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3FD80, (NiObject *)a4) )
      {
        *a1 = *(float *)(a4 + 0x108);
        a1[1] = *(float *)(a4 + 0x10C);
        a1[2] = *(float *)(a4 + 0x110);
      }
      else
      {
        *a1 = 1.0;
        a1[1] = 0.0;
        a1[2] = 0.0;
      }
      a1[3] = 0.0;
      return 1;
    case 0x10:
      if ( !a4 )
        goto LABEL_58;
      v49 = 0.0;
      v33 = (float *)(a4 + 0x10C);
      v48 = 0.0;
      v47 = 0.0;
      v50 = 1.0;
      v43 = 1.0;
      goto LABEL_73;
    case 0x11:
      if ( a4 )
      {
        v49 = 0.0;
        v48 = 0.0;
        v47 = 0.0;
        v50 = 1.0;
        v43 = 1.0;
        v34 = sub_710400(a11, v60);
        v33 = NiMAtrix33_Multiply(v34, v58, (float *)(a4 + 0x10C));
LABEL_73:
        sub_761AE0((float *)v46, v33, &Vector3_InitValue_, v43);
        sub_9A4770((float *)v46, a1);
        return 1;
      }
      else
      {
LABEL_58:
        sub_9A4770((float *)v54, a1);
        return 0;
      }
    case 0x12:
      v13 = a1;
      if ( a4 )
      {
        *a1 = *(float *)(a4 + 0x130);
        a1[1] = *(float *)(a4 + 0x134);
        a1[2] = *(float *)(a4 + 0x138);
        a1[3] = 1.0;
        return 1;
      }
      else
      {
LABEL_6:
        *v13 = 0.0;
        v13[1] = 0.0;
        v13[2] = 0.0;
        v13[3] = 1.0;
        return 0;
      }
    case 0x13:
      if ( a4 )
      {
        sub_718A80(a11, &v51);
        v35 = *(_DWORD *)(a4 + 0x134);
        v36 = *(_DWORD *)(a4 + 0x138);
        v44.rot.data[0][0] = *(float *)(a4 + 0x130);
        *(_QWORD *)&v44.rot.data[0][1] = __PAIR64__(v36, v35);
        v37 = sub_53D4B0(&v51, &v56.scale, (NiPoint3 *)&v44);
        *(_QWORD *)&v44.rot.data[0][0] = *(_QWORD *)v37;
        v44.rot.data[0][2] = v37[2];
LABEL_15:
        v17 = a1;
LABEL_16:
        *v17 = v44.rot.data[0][0];
        v17[1] = v44.rot.data[0][1];
        v17[2] = v44.rot.data[0][2];
        v17[3] = 1.0;
        return 1;
      }
      else
      {
LABEL_17:
        *a1 = 0.0;
        a1[1] = 0.0;
        a1[2] = 0.0;
        a1[3] = 1.0;
        return 0;
      }
    case 0x14:
      if ( !a4 )
        goto LABEL_70;
      if ( !*(_BYTE *)(a4 + 0x150) )
        goto LABEL_83;
      *a1 = *(float *)(a4 + 0x164);
      a1[1] = *(float *)(a4 + 0x168);
      a1[2] = *(float *)(a4 + 0x16C);
      a1[3] = *(float *)(a4 + 0x170);
      return 1;
    case 0x15:
      if ( a4 )
      {
        if ( *(_BYTE *)(a4 + 0x150) )
        {
          sub_718A80(a11, &v51);
          v38 = *(float *)(a4 + 0x168);
          v39 = *(float *)(a4 + 0x16C);
          v44.rot.data[2][1] = *(float *)(a4 + 0x164);
          v40 = *(float *)(a4 + 0x170);
          v44.rot.data[2][2] = v38;
          v44.pos.x = v39;
          v44.pos.y = v40;
          sub_7101F0(&v51, &v44, (NiPoint3 *)&v44.rot.data[2][1]);
          v44.pos.z = v44.pos.y * v44.rot.data[2][1];
          v44.scale = v44.rot.data[2][2] * v44.pos.y;
          v45 = v44.pos.y * v44.pos.x;
          sub_53D4B0(&v51, v53, (NiPoint3 *)&v44.pos.z);
          *a1 = v44.rot.data[0][0];
          a1[1] = v44.rot.data[0][1];
          a1[2] = v44.rot.data[0][2];
          a1[3] = sub_47D9E0((float *)&v44, v53);
          return 1;
        }
        else
        {
LABEL_83:
          *a1 = 0.0;
          a1[1] = 0.0;
          a1[2] = 0.0;
          a1[3] = 0.0;
          return 1;
        }
      }
      else
      {
LABEL_70:
        *a1 = 1.0;
        a1[1] = 0.0;
        a1[2] = 0.0;
        a1[3] = 0.0;
        return 0;
      }
    case 0x16:
      if ( a4 )
      {
        v41 = *(_DWORD *)(a4 + 0x14C);
        v44.rot.data[1][0] = 0.0;
        switch ( v41 )
        {
          case 0:
          case 1:
            v44.rot.data[1][0] = 2.0;
            *a1 = 2.0;
            a1[1] = 0.0;
            a1[2] = 0.0;
            a1[3] = 0.0;
            result = 1;
            break;
          case 2:
          case 3:
            v44.rot.data[1][0] = 3.0;
            *a1 = 3.0;
            a1[1] = 0.0;
            a1[2] = 0.0;
            a1[3] = 0.0;
            result = 1;
            break;
          case 4:
            v44.rot.data[1][0] = 1.0;
            *a1 = 1.0;
            a1[1] = 0.0;
            a1[2] = 0.0;
            a1[3] = 0.0;
            result = 1;
            break;
          default:
            JUMPOUT(0x9A72DA);
        }
      }
      else
      {
LABEL_92:
        *a1 = 0.0;
        a1[1] = 0.0;
        a1[2] = 0.0;
        a1[3] = 0.0;
        return 0;
      }
      return result;
    default:
      JUMPOUT(0x9A731E);
  }
}
