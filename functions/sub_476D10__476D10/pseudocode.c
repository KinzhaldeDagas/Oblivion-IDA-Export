int __userpurge sub_476D10@<eax>(
        AnimSequenceSingle *this@<ecx>,
        int edi0@<edi>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        int a6,
        float a7,
        float a8)
{
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // ecx
  TESObjectREFR *v12; // ebx
  int **v13; // ebx
  int v14; // edi
  int *v15; // eax
  int v16; // ecx
  NiAVObject *v17; // ecx
  bool v18; // zf
  double v19; // st4
  int i; // edi
  int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // ecx
  int v27; // edi
  double v28; // st4
  int v29; // eax
  int v30; // ecx
  double v31; // st4
  int v32; // ecx
  double v33; // st4
  double v34; // st4
  bool v35; // c0
  bool v36; // c3
  int v37; // eax
  int v38; // ecx
  double v39; // st4
  int v40; // ecx
  double v41; // st4
  double v42; // st4
  int v43; // eax
  int v44; // ecx
  double v45; // st4
  int v46; // ecx
  double v47; // st4
  int v48; // ecx
  double v49; // st4
  int v50; // ecx
  double v51; // st4
  double v52; // st4
  double v53; // st4
  int v54; // eax
  int v55; // ecx
  double v56; // st4
  int v57; // ecx
  double v58; // st4
  double v59; // st4
  double v60; // st4
  __int16 a2a; // [esp+4h] [ebp-90h]
  int a2; // [esp+4h] [ebp-90h]
  int a2b; // [esp+4h] [ebp-90h]
  int v64; // [esp+1Ch] [ebp-78h]
  int v65; // [esp+20h] [ebp-74h]
  float v66; // [esp+24h] [ebp-70h]
  double v67[10]; // [esp+28h] [ebp-6Ch] BYREF
  int v68[6]; // [esp+7Ch] [ebp-18h]

  if ( *((_DWORD *)this + 0x2E) || *((_DWORD *)this + 0x2D) )
  {
    while ( dword_B33C28 < (unsigned int)dword_B06548 )
    {
      AnimSequenceSingle::AnimSequenceSingle(this, *((_DWORD *)this + 0x2D), 0);
      v9 = *((_DWORD **)this + 0x2E);
      if ( v9 )
      {
        *((_DWORD *)this + 0x2E) = v9[1];
        *((_DWORD *)this + 0x2D) = *v9;
        FormHeapFree((unsigned int)v9);
      }
      else
      {
        *((_DWORD *)this + 0x2D) = 0;
      }
      if ( !sub_471730(this) )
        break;
      ++dword_B33C28;
    }
  }
  else
  {
    v10 = *((_DWORD *)this + 0x32);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 0x58);
      if ( v11 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x2D0))(v11) == 0xFFFFFFFF && !*((_DWORD *)this + 0x2B) )
        {
          v12 = *((TESObjectREFR **)this + 0x32);
          *((_DWORD *)this + 0x32) = 0;
          sub_471990(this);
          sub_476410(this, edi0, st5_0, st6_0, st7_0, v12, 1);
        }
      }
    }
  }
  v13 = (int **)((char *)this + 0xD4);
  v14 = 2;
  do
  {
    v15 = *v13;
    if ( !*v13 )
      goto LABEL_21;
    v16 = v15[4];
    if ( v16 )
    {
      if ( *(_DWORD *)(v16 + 0x44) )
        goto LABEL_21;
    }
    else if ( !*v15 )
    {
      goto LABEL_21;
    }
    sub_472ED0(this, v13);
LABEL_21:
    ++v13;
    --v14;
  }
  while ( v14 );
  v17 = *((NiAVObject **)this + 1);
  if ( !v17 )
    JUMPOUT(0x477B2E);
  v18 = *((_BYTE *)this + 0x90) == 5;
  *(_DWORD *)this = 1;
  *((float *)this + 3) = Vector3_InitValue_;
  *((float *)this + 4) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 5) = dword_B3F9B0;
  if ( !v18 )
  {
    for ( i = 0; i < 5; ++i )
    {
      v22 = sub_51AA00(*((_WORD *)this + i + 0x1E));
      v23 = sub_51AA00(*((_WORD *)this + i + 0x38));
      if ( v22 == 0xFF && v23 != 0xFF )
      {
        *((_DWORD *)this + i + 0x17) = *((_DWORD *)this + i + 0x1F);
        v24 = *((unsigned __int16 *)this + i + 0x38);
        if ( (_WORD)v24 != 0xFF )
        {
          if ( sub_470960(*((_DWORD **)this + 0x27), v24, (_DWORD *)v67 + 1) )
          {
            v25 = (*(int (__usercall **)@<eax>(_DWORD@<ecx>, unsigned int, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)HIDWORD(v67[0]) + 0x10))(
                    HIDWORD(v67[0]),
                    0xFFFFFFFF,
                    st7_0,
                    st6_0,
                    st5_0);
            sub_474530(this, v25, *(float *)&v24, 0xFFFFFFFF);
          }
        }
        a2a = *((_WORD *)this + i + 0x1E);
        *((_WORD *)this + i + 0x38) = 0xFF;
        v22 = sub_51AA00(a2a);
      }
      v26 = *((_DWORD *)this + i + 0x28);
      *((float *)&v67[8] + i) = 0.0;
      v68[i] = v26;
      if ( v22 != 0xFF )
      {
        if ( v26 )
          *((float *)&v67[8] + i) = sub_49F4A0(v26, *((float *)this + 0x25));
      }
    }
    if ( a8 != flt_A30634 )
    {
      *((float *)this + 0x25) = a8;
      return NiAVObject_UpdateNiAVObject(*((NiAVObject **)this + 1), a8, 1);
    }
    *((float *)this + 0x25) = *((float *)this + 0x25) + a7;
    v27 = *((_DWORD *)this + 0x28);
    v65 = sub_51AA00(*((_WORD *)this + 0x1E));
    v64 = sub_51AA00(*((_WORD *)this + 0x38));
    if ( v65 == 0xFF || !v27 )
      goto LABEL_96;
    if ( *((_BYTE *)this + 0x90) == 5 || *((_BYTE *)this + 0x90) != 6 && !*((_BYTE *)this + 0x90) )
    {
      *(float *)v67 = *(float *)(v27 + 0x48) - *(float *)(v27 + 0x2C);
      *(float *)v67 = *(float *)v67 - a7;
      *(float *)(v27 + 0x48) = *(float *)v67 + *(float *)(v27 + 0x2C);
      return def_4770CD(a6, LODWORD(a7), LODWORD(a8));
    }
    if ( *(_DWORD *)(v27 + 0x44) != 1 )
      goto LABEL_96;
    if ( (unsigned int)(v65 - 3) > 0xD )
    {
      if ( (unsigned int)(v65 - 0x11) > 9 )
      {
LABEL_53:
        switch ( *(_DWORD *)(0x24 * v65 + 0xB102EC) )
        {
          case 0:
          case 1:
            if ( *(_DWORD *)(v27 + 0x24) )
            {
              if ( !*((_DWORD *)this + 0x12) )
              {
                v57 = *(_DWORD *)(v27 + 0x68);
                *(float *)v67 = *(float *)(v27 + 0x48) + *((float *)this + 0x25);
                v67[0] = *(float *)v67;
                v58 = sub_51AE20(v57, 0);
                if ( v58 < v67[0] )
                  *((_DWORD *)this + 0x12) = 1;
              }
              v46 = *(_DWORD *)(v27 + 0x68);
              a2 = 1;
              *(float *)v67 = *(float *)(v27 + 0x48) + *((float *)this + 0x25);
              if ( v64 != 0xFF )
              {
LABEL_91:
                v67[0] = *(float *)v67;
                v59 = sub_51AE20(v46, a2);
                if ( v59 > v67[0] )
                  goto LABEL_96;
LABEL_92:
                *((_DWORD *)this + 0x17) = *((_DWORD *)this + 0x1F);
                sub_476260((_DWORD **)this, (_DWORD *)*((unsigned __int16 *)this + 0x38), 0xFFFFFFFF);
                *((_WORD *)this + 0x38) = 0xFF;
                return def_4770CD(a6, LODWORD(a7), LODWORD(a8));
              }
              v67[0] = *(float *)v67;
              v60 = sub_51AE20(v46, 1);
              v35 = v60 < v67[0];
              v36 = v60 == v67[0];
            }
            else
            {
              while ( *((int *)this + 0x12) < 1 )
              {
                v48 = *(_DWORD *)(v27 + 0x68);
                a2b = *((_DWORD *)this + 0x12);
                *(float *)v67 = *(float *)(v27 + 0x48) + *((float *)this + 0x25);
                v67[0] = *(float *)v67;
                v49 = sub_51AE20(v48, a2b);
                if ( v49 >= v67[0] )
                  break;
                if ( *((_DWORD *)this + 0x12) <= 1u )
                  *((_DWORD *)this + 0x12) = 1;
              }
              v50 = *(_DWORD *)(v27 + 0x68);
              *(float *)v67 = *(float *)(v27 + 0x48) + *((float *)this + 0x25);
              if ( v64 != 0xFF )
              {
                v67[0] = *(float *)v67;
                v51 = sub_51AE20(v50, 1);
                if ( v51 <= v67[0] )
                  goto LABEL_92;
LABEL_96:
                JUMPOUT(0x4774BD);
              }
              v67[0] = *(float *)v67;
              v52 = sub_51AE20(v50, 1);
              if ( v52 <= v67[0] && *((_DWORD *)this + 0x17) )
              {
                *((_DWORD *)this + 0x12) = 0;
                *(float *)v67 = -(*(float *)(v27 + 0x30) - *(float *)(v27 + 0x2C));
                v53 = *(float *)v67;
                *(float *)v67 = *(float *)(v27 + 0x48) - *(float *)(v27 + 0x2C);
                *(float *)v67 = v53 + *(float *)v67;
                *(float *)(v27 + 0x48) = *(float *)v67 + *(float *)(v27 + 0x2C);
                v54 = *((_DWORD *)this + 0x17);
                if ( v54 != 0xFFFFFFFF )
                {
                  *((_DWORD *)this + 0x17) = v54 - 1;
                  return def_4770CD(a6, LODWORD(a7), LODWORD(a8));
                }
                goto LABEL_96;
              }
              v55 = *(_DWORD *)(v27 + 0x68);
              *(float *)v67 = *(float *)(v27 + 0x48) + *((float *)this + 0x25);
              v67[0] = *(float *)v67;
              v56 = sub_51AE20(v55, 1);
              v35 = v56 < v67[0];
              v36 = v56 == v67[0];
            }
LABEL_94:
            if ( v35 || v36 )
            {
              sub_4733A0((int)this, 0);
              return def_4770CD(a6, LODWORD(a7), LODWORD(a8));
            }
            goto LABEL_96;
          case 2:
          case 3:
          case 5:
          case 6:
            v43 = *((_DWORD *)this + 0x12);
            if ( v43 < 2 )
            {
              v44 = *(_DWORD *)(v27 + 0x68);
              *(float *)v67 = *(float *)(v27 + 0x48) + *((float *)this + 0x25);
              v67[0] = *(float *)v67;
              v45 = sub_51AE20(v44, v43 + 1);
              if ( v45 < v67[0] )
                ++*((_DWORD *)this + 0x12);
            }
            v46 = *(_DWORD *)(v27 + 0x68);
            a2 = 2;
            *(float *)v67 = *(float *)(v27 + 0x48) + *((float *)this + 0x25);
            if ( v64 != 0xFF )
              goto LABEL_91;
            v67[0] = *(float *)v67;
            v47 = sub_51AE20(v46, 2);
            v35 = v47 < v67[0];
            v36 = v47 == v67[0];
            goto LABEL_94;
          case 4:
            v29 = *((_DWORD *)this + 0x12);
            if ( v29 < 3 )
            {
              v30 = *(_DWORD *)(v27 + 0x68);
              *(float *)v67 = *(float *)(v27 + 0x48) + *((float *)this + 0x25);
              v67[0] = *(float *)v67;
              v31 = sub_51AE20(v30, v29 + 1);
              if ( v31 < v67[0] )
                ++*((_DWORD *)this + 0x12);
            }
            v32 = *(_DWORD *)(v27 + 0x68);
            *(float *)v67 = *(float *)(v27 + 0x48) + *((float *)this + 0x25);
            if ( v64 == 0xFF )
            {
              v67[0] = *(float *)v67;
              v34 = sub_51AE20(v32, 3);
              v35 = v34 < v67[0];
              v36 = v34 == v67[0];
              goto LABEL_94;
            }
            v67[0] = *(float *)v67;
            v33 = sub_51AE20(v32, 3);
            if ( v33 > v67[0] )
              goto LABEL_96;
            goto LABEL_92;
          case 7:
            v37 = *((_DWORD *)this + 0x12);
            if ( v37 < 4 )
            {
              v38 = *(_DWORD *)(v27 + 0x68);
              *(float *)v67 = *(float *)(v27 + 0x48) + *((float *)this + 0x25);
              v67[0] = *(float *)v67;
              v39 = sub_51AE20(v38, v37 + 1);
              if ( v39 < v67[0] )
                ++*((_DWORD *)this + 0x12);
            }
            v40 = *(_DWORD *)(v27 + 0x68);
            *(float *)v67 = *(float *)(v27 + 0x48) + *((float *)this + 0x25);
            if ( v64 == 0xFF )
            {
              v67[0] = *(float *)v67;
              v42 = sub_51AE20(v40, 4);
              v35 = v42 < v67[0];
              v36 = v42 == v67[0];
              goto LABEL_94;
            }
            v67[0] = *(float *)v67;
            v41 = sub_51AE20(v40, 4);
            if ( v41 > v67[0] )
              goto LABEL_96;
            goto LABEL_92;
          default:
            goto LABEL_96;
        }
      }
      *(float *)v67 = *(float *)(v27 + 0x48) - *(float *)(v27 + 0x2C);
      *(float *)v67 = *((float *)this + 0x30) * a7 - a7 + *(float *)v67;
      v28 = *(float *)v67;
    }
    else
    {
      *(float *)v67 = *(float *)(v27 + 0x48) - *(float *)(v27 + 0x2C);
      *(float *)v67 = *((float *)this + 0x2F) * a7 - a7 + *(float *)v67;
      v28 = *(float *)v67;
    }
    *(float *)(v27 + 0x48) = v28 + *(float *)(v27 + 0x2C);
    goto LABEL_53;
  }
  v19 = a8;
  if ( a8 == flt_A30634 )
    v19 = *((float *)this + 0x25);
  v66 = v19;
  return NiAVObject_UpdateNiAVObject(v17, v66, 1);
}
