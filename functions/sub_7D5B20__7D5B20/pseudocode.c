int __stdcall sub_7D5B20(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  float v7; // ecx
  float v8; // edx
  double v9; // st7
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  double v13; // st7
  float v14; // ecx
  float v15; // edx
  float v16; // eax
  int v17; // edx
  int v18; // eax
  double v19; // st7
  float v21; // [esp+10h] [ebp-18Ch]
  float v22; // [esp+10h] [ebp-18Ch]
  float v23; // [esp+10h] [ebp-18Ch]
  float v24; // [esp+10h] [ebp-18Ch]
  int v25; // [esp+10h] [ebp-18Ch]
  float v26; // [esp+10h] [ebp-18Ch]
  float v27; // [esp+14h] [ebp-188h]
  float v28; // [esp+14h] [ebp-188h]
  float v29; // [esp+14h] [ebp-188h]
  int v30; // [esp+14h] [ebp-188h]
  int v31; // [esp+14h] [ebp-188h]
  float v32; // [esp+14h] [ebp-188h]
  float v33; // [esp+18h] [ebp-184h] BYREF
  float v34; // [esp+1Ch] [ebp-180h]
  float v35; // [esp+20h] [ebp-17Ch]
  float v36; // [esp+24h] [ebp-178h]
  float v37; // [esp+28h] [ebp-174h] BYREF
  float v38; // [esp+2Ch] [ebp-170h]
  float v39; // [esp+30h] [ebp-16Ch]
  int v40; // [esp+34h] [ebp-168h] BYREF
  float v41; // [esp+38h] [ebp-164h]
  float v42; // [esp+3Ch] [ebp-160h]

  switch ( (__int16)a6 )
  {
    case 0:
      v36 = -*(float *)&dword_B258D0;
      v21 = -*(float *)&dword_B258D4;
      v27 = -*(float *)&dword_B258D8;
      v37 = v36;
      v6 = LODWORD(v36);
      v38 = v21;
      v7 = v21;
      v39 = v27;
      v8 = v27;
      v28 = -*(float *)&dword_B258DC;
      v22 = -*(float *)&qword_B258E0;
      v9 = *((float *)&qword_B258E0 + 1);
      goto LABEL_3;
    case 1:
      v10 = dword_B258D0;
      v11 = dword_B258D4;
      v12 = dword_B258D8;
      goto LABEL_5;
    case 2:
      *(float *)&v30 = -*(float *)&dword_B258DC;
      v24 = -*(float *)&qword_B258E0;
      v36 = -*((float *)&qword_B258E0 + 1);
      v33 = *(float *)&v30;
      v40 = v30;
      v14 = *(float *)&dword_B258E8;
      v34 = v24;
      v35 = v36;
      v41 = v24;
      v15 = *(float *)&dword_B258EC;
      v42 = v36;
      v16 = *(float *)&dword_B258F0;
      goto LABEL_10;
    case 3:
      v6 = dword_B258DC;
      v7 = *(float *)&qword_B258E0;
      v8 = *((float *)&qword_B258E0 + 1);
      v28 = -*(float *)&dword_B258E8;
      v22 = -*(float *)&dword_B258EC;
      v9 = *(float *)&dword_B258F0;
LABEL_3:
      v40 = v6;
      v36 = -v9;
      v41 = v7;
      v42 = v8;
      v33 = v28;
      v37 = v28;
      v34 = v22;
      v35 = v36;
      v38 = v22;
      v39 = v36;
      sub_498FE0((float *)&v40, &v33, &v37);
      break;
    case 4:
      *(float *)&v31 = -*(float *)&dword_B258E8;
      *(float *)&v25 = -*(float *)&dword_B258EC;
      v36 = -*(float *)&dword_B258F0;
      v33 = *(float *)&v31;
      v10 = v31;
      v34 = *(float *)&v25;
      v11 = v25;
      v35 = v36;
      v12 = LODWORD(v36);
LABEL_5:
      v13 = *(float *)&dword_B258DC;
      v40 = v10;
      v41 = *(float *)&v11;
      v29 = -v13;
      v42 = *(float *)&v12;
      v23 = -*(float *)&qword_B258E0;
      v36 = -*((float *)&qword_B258E0 + 1);
      v33 = v29;
      v37 = v29;
      v34 = v23;
      v35 = v36;
      v38 = v23;
      v39 = v36;
      sub_498FE0((float *)&v40, &v33, &v37);
      break;
    case 5:
      v17 = dword_B258EC;
      v18 = dword_B258F0;
      v32 = -*(float *)&dword_B258DC;
      v19 = *(float *)&qword_B258E0;
      v40 = dword_B258E8;
      v41 = *(float *)&v17;
      v26 = -v19;
      v42 = *(float *)&v18;
      v36 = -*((float *)&qword_B258E0 + 1);
      v33 = v32;
      v14 = v32;
      v34 = v26;
      v15 = v26;
      v35 = v36;
      v16 = v36;
LABEL_10:
      v37 = v14;
      v38 = v15;
      v39 = v16;
      sub_498FE0((float *)&v40, &v33, &v37);
      break;
    default:
      JUMPOUT(0x7D5E16);
  }
  return def_7D5B69(a1, a2, a3, a4, a5, a6);
}
