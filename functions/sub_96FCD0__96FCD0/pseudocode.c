double __cdecl sub_96FCD0(float *a1, float *a2, float *a3, float *a4)
{
  double v6; // st7
  double v7; // st5
  double v8; // st6
  double v9; // st4
  double v10; // st3
  double v11; // st2
  double v12; // st1
  double v14; // st2
  double v15; // st2
  double v16; // st2
  double v17; // st2
  double v18; // st7
  double v19; // st3
  double v20; // st4
  double v21; // st2
  float v22; // [esp+0h] [ebp-1Ch]
  float v23; // [esp+0h] [ebp-1Ch]
  float v24; // [esp+0h] [ebp-1Ch]
  float v25; // [esp+0h] [ebp-1Ch]
  float v26; // [esp+0h] [ebp-1Ch]
  float v27; // [esp+0h] [ebp-1Ch]
  float v28; // [esp+0h] [ebp-1Ch]
  float v29; // [esp+0h] [ebp-1Ch]
  float v30; // [esp+4h] [ebp-18h]
  float v31; // [esp+4h] [ebp-18h]
  float v32; // [esp+8h] [ebp-14h]
  float v33; // [esp+Ch] [ebp-10h]
  float v34; // [esp+Ch] [ebp-10h]
  float v35; // [esp+10h] [ebp-Ch]
  float v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  float v38; // [esp+14h] [ebp-8h]
  float v39; // [esp+18h] [ebp-4h]
  float v40; // [esp+18h] [ebp-4h]
  float v41; // [esp+20h] [ebp+4h]
  float v42; // [esp+20h] [ebp+4h]
  float v43; // [esp+20h] [ebp+4h]
  float v44; // [esp+20h] [ebp+4h]
  float v46; // [esp+20h] [ebp+4h]
  float v49; // [esp+20h] [ebp+4h]
  float v51; // [esp+20h] [ebp+4h]
  float v54; // [esp+20h] [ebp+4h]
  float v57; // [esp+20h] [ebp+4h]
  float v59; // [esp+20h] [ebp+4h]
  float v61; // [esp+20h] [ebp+4h]
  float v64; // [esp+24h] [ebp+8h]
  float v65; // [esp+24h] [ebp+8h]
  float v66; // [esp+24h] [ebp+8h]
  float v67; // [esp+24h] [ebp+8h]
  float v68; // [esp+24h] [ebp+8h]
  float v69; // [esp+24h] [ebp+8h]
  float v70; // [esp+24h] [ebp+8h]
  float v71; // [esp+24h] [ebp+8h]
  float v72; // [esp+24h] [ebp+8h]
  float v73; // [esp+24h] [ebp+8h]
  float v74; // [esp+24h] [ebp+8h]
  float v75; // [esp+24h] [ebp+8h]
  float v76; // [esp+24h] [ebp+8h]
  float v77; // [esp+24h] [ebp+8h]
  float v78; // [esp+24h] [ebp+8h]
  float v79; // [esp+24h] [ebp+8h]
  float v80; // [esp+24h] [ebp+8h]
  float v81; // [esp+24h] [ebp+8h]
  float v82; // [esp+24h] [ebp+8h]
  float v83; // [esp+24h] [ebp+8h]
  float v84; // [esp+24h] [ebp+8h]
  float v85; // [esp+24h] [ebp+8h]
  float v86; // [esp+24h] [ebp+8h]
  float v87; // [esp+24h] [ebp+8h]
  float v88; // [esp+24h] [ebp+8h]
  float v89; // [esp+24h] [ebp+8h]
  float v90; // [esp+24h] [ebp+8h]
  float v91; // [esp+24h] [ebp+8h]
  float v92; // [esp+24h] [ebp+8h]
  float v93; // [esp+24h] [ebp+8h]
  float v94; // [esp+24h] [ebp+8h]
  float v95; // [esp+24h] [ebp+8h]
  float v96; // [esp+24h] [ebp+8h]
  float v97; // [esp+24h] [ebp+8h]

  v35 = *a1 - *a2; /*0x96fcdf*/
  v37 = a1[1] - a2[1]; /*0x96fce9*/
  v39 = a1[2] - a2[2]; /*0x96fcf3*/
  v33 = a1[4] * a1[4] + a1[3] * a1[3] + a1[5] * a1[5]; /*0x96fd0d*/
  v41 = a2[4] * a1[4] + a2[3] * a1[3] + a2[5] * a1[5]; /*0x96fd27*/
  v64 = -v41; /*0x96fd31*/
  v32 = a2[4] * a2[4] + a2[3] * a2[3] + a2[5] * a2[5]; /*0x96fd4b*/
  v22 = a1[5] * v39 + a1[3] * v35 + a1[4] * v37; /*0x96fd78*/
  v42 = a2[4] * v37 + a2[3] * v35 + a2[5] * v39; /*0x96fd8e*/
  v30 = -v42; /*0x96fd98*/
  v43 = v39 * v39 + v37 * v37 + v35 * v35; /*0x96fdae*/
  v6 = v64; /*0x96fdb2*/
  v7 = v32; /*0x96fdb8*/
  v8 = v33; /*0x96fdce*/
  v65 = v32 * v33 - v64 * v64; /*0x96fdd0*/
  v66 = fabs(v65); /*0x96fdda*/
  v36 = a1[4] * a2[5] - a1[5] * a2[4]; /*0x96fdf4*/
  v38 = a2[3] * a1[5] - a1[3] * a2[5]; /*0x96fe06*/
  v40 = a1[3] * a2[4] - a2[3] * a1[4]; /*0x96fe18*/
  v34 = v38 * v38 + v36 * v36 + v40 * v40; /*0x96fe38*/
  if ( v34 <= (double)flt_A372CC ) /*0x96fe4b*/
  {
    v19 = v22; /*0x9706af*/
    if ( v6 <= 0.0 ) /*0x9706b5*/
    {
      v96 = -v19; /*0x9707da*/
      if ( v96 >= v8 ) /*0x9707e9*/
      {
        *a3 = 1.0; /*0x9707fb*/
        *a4 = 0.0; /*0x9707fd*/
        v59 = v8 + v19 + v19 + v43; /*0x970809*/
        return (float)fabs(v59); /*0x97081e*/
      }
      v21 = v22; /*0x97081f*/
      if ( v22 <= 0.0 ) /*0x97082c*/
      {
        *a3 = v96 / v8; /*0x97083c*/
        *a4 = 0.0; /*0x970840*/
        v61 = v21 * *a3 + v43; /*0x970848*/
        return (float)fabs(v61); /*0x97085d*/
      }
      *a3 = 0.0; /*0x970862*/
      if ( -v6 > v21 ) /*0x970871*/
      {
        v97 = v96 / v6; /*0x9708ab*/
        *a4 = v97; /*0x9708b3*/
        v43 = (v7 * v97 + v30 + v30) * v97 + v43; /*0x9708c7*/
      }
      else
      {
        *a4 = 1.0; /*0x97087d*/
        v43 = v7 + v30 + v30 + v43; /*0x97088b*/
      }
    }
    else
    {
      if ( v19 >= 0.0 ) /*0x9706c2*/
      {
        *a3 = 0.0; /*0x9706d4*/
        *a4 = 0.0; /*0x9706d6*/
        return (float)fabs(v43); /*0x9706e9*/
      }
      v93 = -v19; /*0x9706ee*/
      if ( v93 <= v8 ) /*0x970701*/
      {
        *a3 = v93 / v8; /*0x970711*/
        *a4 = 0.0; /*0x970713*/
        v57 = v19 * *a3 + v43; /*0x97071b*/
        return (float)fabs(v57); /*0x970730*/
      }
      v20 = v22; /*0x970733*/
      *a3 = 1.0; /*0x970737*/
      v29 = v22 + v8; /*0x97073d*/
      v94 = -v29; /*0x970745*/
      if ( v94 < v6 ) /*0x970754*/
      {
        v95 = v94 / v6; /*0x970792*/
        *a4 = v95; /*0x97079a*/
        v43 = (v7 * v95 + (v6 + v30) * dbl_A3D0C0) * v95 + v8 + dbl_A3D0C0 * v20 + v43; /*0x9707c0*/
      }
      else
      {
        *a4 = 1.0; /*0x97075c*/
        v43 = v6 + v20 + v30 + v6 + v20 + v30 + v8 + v7 + v43; /*0x970774*/
      }
    }
  }
  else
  {
    v9 = v30; /*0x96fe51*/
    v10 = v22; /*0x96fe6a*/
    *a3 = v30 * v6 - v22 * v7; /*0x96fe6c*/
    v31 = v22 * v6 - v30 * v8; /*0x96fe78*/
    v11 = v31; /*0x96fe7c*/
    *a4 = v31; /*0x96fe80*/
    if ( *a3 < 0.0 ) /*0x96fe8b*/
    {
      if ( v11 < 0.0 ) /*0x9703da*/
      {
        if ( v10 < 0.0 ) /*0x9705ae*/
        {
          *a4 = 0.0; /*0x9705b6*/
          v89 = -v10; /*0x9705bc*/
          if ( v89 < v8 ) /*0x9705cb*/
          {
            v90 = v89 / v8; /*0x9705f5*/
            *a3 = v90; /*0x9705fd*/
            v43 = v10 * v90 + v43; /*0x970605*/
          }
          else
          {
            *a3 = 1.0; /*0x9705d1*/
            v43 = v8 + v10 + v10 + v43; /*0x9705dd*/
          }
          return (float)fabs(v43); /*0x9705e7*/
        }
        *a3 = 0.0; /*0x970621*/
        if ( v9 < 0.0 ) /*0x97062a*/
        {
          v91 = -v9; /*0x97064a*/
          if ( v91 < v7 ) /*0x970659*/
          {
            v92 = v91 / v7; /*0x970683*/
            *a4 = v92; /*0x97068b*/
            v43 = v9 * v92 + v43; /*0x970693*/
          }
          else
          {
            *a4 = 1.0; /*0x97065f*/
            v43 = v7 + v9 + v9 + v43; /*0x970669*/
          }
          return (float)fabs(v43); /*0x970673*/
        }
      }
      else
      {
        if ( v66 < v11 ) /*0x9703ed*/
        {
          v28 = v6 + v10; /*0x970489*/
          if ( v28 >= 0.0 ) /*0x970496*/
          {
            *a3 = 0.0; /*0x970517*/
            v87 = v9 + v7; /*0x97051d*/
            if ( v87 <= 0.0 ) /*0x97052c*/
            {
              *a4 = 1.0; /*0x970532*/
              v54 = v7 + v9 + v9 + v43; /*0x97053c*/
              return (float)fabs(v54); /*0x970551*/
            }
            if ( v9 < 0.0 ) /*0x970559*/
            {
              v88 = -v9 / v7; /*0x97057d*/
              *a4 = v88; /*0x970585*/
              v43 = v9 * v88 + v43; /*0x97058d*/
            }
            else
            {
              *a4 = 0.0; /*0x97055f*/
            }
          }
          else
          {
            v18 = v28; /*0x970498*/
            *a4 = 1.0; /*0x97049c*/
            v85 = -v28; /*0x9704a2*/
            if ( v85 < v8 ) /*0x9704b1*/
            {
              v86 = v85 / v8; /*0x9704e5*/
              *a3 = v86; /*0x9704ed*/
              v43 = v18 * v86 + v7 + v9 + v9 + v43; /*0x9704fb*/
            }
            else
            {
              *a3 = 1.0; /*0x9704b5*/
              v43 = v8 + v7 + v43 + v18 + v9 + v18 + v9; /*0x9704c9*/
            }
          }
          return (float)fabs(v43); /*0x9704d3*/
        }
        *a3 = 0.0; /*0x9703fb*/
        if ( v9 < 0.0 ) /*0x970404*/
        {
          v83 = -v9; /*0x970424*/
          if ( v83 < v7 ) /*0x970433*/
          {
            v84 = v83 / v7; /*0x97045d*/
            *a4 = v84; /*0x970465*/
            v43 = v9 * v84 + v43; /*0x97046d*/
          }
          else
          {
            *a4 = 1.0; /*0x970439*/
            v43 = v7 + v9 + v9 + v43; /*0x970445*/
          }
          return (float)fabs(v43); /*0x97044f*/
        }
      }
      *a4 = 0.0; /*0x97040a*/
      return (float)fabs(v43); /*0x97041d*/
    }
    v12 = v31; /*0x96fe9d*/
    if ( v66 >= (double)*a3 ) /*0x96fea8*/
    {
      if ( v31 < 0.0 ) /*0x96feb1*/
      {
        *a4 = 0.0; /*0x96fff6*/
        if ( v10 >= 0.0 ) /*0x96ffff*/
        {
          *a3 = 0.0; /*0x970005*/
          return (float)fabs(v43); /*0x970018*/
        }
        v71 = -v10; /*0x97001f*/
        if ( v71 < v8 ) /*0x97002e*/
        {
          v72 = v71 / v8; /*0x970058*/
          *a3 = v72; /*0x970060*/
          v43 = v10 * v72 + v43; /*0x970068*/
        }
        else
        {
          *a3 = 1.0; /*0x970034*/
          v43 = v8 + v10 + v10 + v43; /*0x970040*/
        }
      }
      else
      {
        if ( v66 >= v12 ) /*0x96fec2*/
        {
          v67 = 1.0 / v66; /*0x96fece*/
          *a3 = *a3 * v67; /*0x96fede*/
          v68 = v67 * *a4; /*0x96fee2*/
          *a4 = v68; /*0x96feea*/
          v44 = (v6 * *a4 + v8 * *a3 + dbl_A3D0C0 * v10) * *a3 + (v9 * dbl_A3D0C0 + v7 * v68 + *a3 * v6) * v68 + v43; /*0x96ff20*/
          return (float)fabs(v44); /*0x96ff35*/
        }
        *a4 = 1.0; /*0x96ff38*/
        v23 = v6 + v10; /*0x96ff40*/
        if ( v23 >= 0.0 ) /*0x96ff4d*/
        {
          *a3 = 0.0; /*0x96ff57*/
          v46 = v7 + v9 + v9 + v43; /*0x96ff61*/
          return (float)fabs(v46); /*0x96ff76*/
        }
        v14 = v23; /*0x96ff43*/
        v69 = -v23; /*0x96ff7d*/
        if ( v69 < v8 ) /*0x96ff8c*/
        {
          v70 = v69 / v8; /*0x96ffc0*/
          *a3 = v70; /*0x96ffc8*/
          v43 = v14 * v70 + v7 + v9 + v9 + v43; /*0x96ffd6*/
        }
        else
        {
          *a3 = 1.0; /*0x96ff90*/
          v43 = v8 + v7 + v43 + v14 + v9 + v14 + v9; /*0x96ffa4*/
        }
      }
      return (float)fabs(v43); /*0x96ffae*/
    }
    if ( v31 < 0.0 ) /*0x970081*/
    {
      v79 = -v10; /*0x9702ad*/
      if ( v79 >= v8 ) /*0x9702bc*/
      {
        *a3 = 1.0; /*0x970315*/
        v27 = v6 + v9; /*0x97031d*/
        if ( v27 >= 0.0 ) /*0x97032a*/
          goto LABEL_20; /*0x97032a*/
        v17 = v27; /*0x970320*/
        v81 = -v27; /*0x97035c*/
        if ( v81 < v7 ) /*0x97036b*/
        {
          v82 = v81 / v7; /*0x9703a3*/
          *a4 = v82; /*0x9703ab*/
          v43 = v8 + v17 * v82 + v10 + v10 + v43; /*0x9703bd*/
        }
        else
        {
          *a4 = 1.0; /*0x970371*/
          v43 = v8 + v7 + v43 + v17 + v10 + v17 + v10; /*0x970385*/
        }
      }
      else
      {
        *a4 = 0.0; /*0x9702c4*/
        if ( v10 < 0.0 ) /*0x9702cd*/
        {
          v80 = v79 / v8; /*0x9702ed*/
          *a3 = v80; /*0x9702f5*/
          v43 = v10 * v80 + v43; /*0x9702fd*/
        }
        else
        {
          *a3 = 0.0; /*0x9702d3*/
        }
      }
    }
    else
    {
      if ( v66 < v12 ) /*0x970092*/
      {
        v25 = v10 + v6; /*0x97015c*/
        v75 = -v25; /*0x970164*/
        if ( v75 > v8 ) /*0x970173*/
        {
          *a3 = 1.0; /*0x9701e7*/
          v26 = v6 + v9; /*0x9701ef*/
          v16 = v26; /*0x9701f2*/
          v77 = -v26; /*0x9701f9*/
          if ( v77 >= v7 ) /*0x970208*/
          {
            *a4 = 1.0; /*0x97020e*/
            v51 = v8 + v7 + v43 + v16 + v10 + v16 + v10; /*0x970222*/
            return (float)fabs(v51); /*0x970237*/
          }
          if ( v16 <= 0.0 ) /*0x970243*/
          {
            v78 = v77 / v7; /*0x970277*/
            *a4 = v78; /*0x97027f*/
            v43 = v8 + v16 * v78 + v10 + v10 + v43; /*0x970291*/
          }
          else
          {
            *a4 = 0.0; /*0x97024b*/
            v43 = v8 + v10 + v10 + v43; /*0x970257*/
          }
        }
        else
        {
          *a4 = 1.0; /*0x97017b*/
          if ( v25 < 0.0 ) /*0x970187*/
          {
            v76 = v75 / v8; /*0x9701b9*/
            *a3 = v76; /*0x9701c1*/
            v43 = v25 * v76 + v7 + v9 + v9 + v43; /*0x9701cf*/
          }
          else
          {
            *a3 = 0.0; /*0x97018f*/
            v43 = v7 + v9 + v9 + v43; /*0x970199*/
          }
        }
        return (float)fabs(v43); /*0x9701a3*/
      }
      *a3 = 1.0; /*0x97009a*/
      v24 = v6 + v9; /*0x9700a2*/
      if ( v24 >= 0.0 ) /*0x9700af*/
      {
LABEL_20:
        *a4 = 0.0; /*0x9700b1*/
        v49 = v8 + v10 + v10 + v43; /*0x9700c5*/
        return (float)fabs(v49); /*0x9700da*/
      }
      v15 = v24; /*0x9700a5*/
      v73 = -v24; /*0x9700e1*/
      if ( v73 < v7 ) /*0x9700f0*/
      {
        v74 = v73 / v7; /*0x970128*/
        *a4 = v74; /*0x970130*/
        v43 = v8 + v15 * v74 + v10 + v10 + v43; /*0x970142*/
      }
      else
      {
        *a4 = 1.0; /*0x9700f6*/
        v43 = v8 + v7 + v43 + v15 + v10 + v15 + v10; /*0x97010a*/
      }
    }
  }
  return (float)fabs(v43); /*0x96ff32*/
}
