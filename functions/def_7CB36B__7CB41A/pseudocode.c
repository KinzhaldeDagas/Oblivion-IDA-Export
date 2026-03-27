// jumptable 007CB36B default case
// jumptable 007CB3E9 default case
int __usercall def_7CB36B@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3,
        __int16 a4,
        int a5,
        float a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        float a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        float a26,
        int a27,
        float a28)
{
  _DWORD *v28; // ecx
  double v29; // st7
  _DWORD *v30; // ecx
  int v31; // esi
  int v32; // esi
  int v33; // eax
  _DWORD *v34; // esi
  _DWORD *v35; // eax
  float v36; // eax
  NiDX9Renderer *v37; // ecx
  int v38; // eax
  double v39; // st7
  int v40; // esi
  double v41; // st7
  double v42; // st7
  double v43; // st7
  double v44; // st6
  double v45; // st7
  int v46; // eax
  double v47; // st7
  double v48; // st6
  double v49; // st7
  int v50; // eax
  double v51; // st7
  double v52; // st7
  double v53; // st7
  int v54; // esi
  NiDX9Renderer *v55; // eax
  int v56; // ebp
  int v58; // [esp-8h] [ebp-24h]
  int v59; // [esp-4h] [ebp-20h]
  char v60; // [esp+0h] [ebp-1Ch]

  sub_76C730(*(_DWORD **)(4 * a2 + 0xB455A0), 0x19, 1, 0);
  sub_76C730(*(_DWORD **)(4 * a2 + 0xB455A0), 0x17, 4, 0);
  sub_76C730(*(_DWORD **)(4 * a2 + 0xB455A0), v58, v59, v60);
  if ( a1 && (*(_DWORD *)(a1 + 0x1C) & 0x80000) != 0 )
  {
    v28 = *(_DWORD **)(4 * a2 + 0xB455A0);
    a26 = 1.0;
    sub_76C730(v28, 0xAF, COERCE_INT(1.0), 0);
    v29 = flt_A906F8;
LABEL_6:
    v30 = *(_DWORD **)(4 * a2 + 0xB455A0);
    a26 = v29;
    sub_76C730(v30, 0xC3, SLODWORD(a26), 0);
    goto LABEL_12;
  }
  a26 = 0.0;
  if ( (unsigned int)(a2 - 0x177) <= 3 )
  {
    sub_76C730(*(_DWORD **)(4 * a2 + 0xB455A0), 0xAF, SLODWORD(a26), 0);
    v29 = flt_A906F4;
    goto LABEL_6;
  }
  v31 = *(_DWORD *)(4 * a2 + 0xB455A0);
  if ( !*(_DWORD *)(v31 + 0x30) )
    *(_DWORD *)(v31 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v31 + 0x30), 0xAF, SLODWORD(a26), 0);
  v32 = *(_DWORD *)(4 * a2 + 0xB455A0);
  a26 = 0.0;
  if ( !*(_DWORD *)(v32 + 0x30) )
    *(_DWORD *)(v32 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v32 + 0x30), 0xC3, SLODWORD(a26), 0);
LABEL_12:
  v33 = dword_B42EB8;
  if ( dword_B42EB8 )
  {
    if ( !*(_BYTE *)(v33 + 7) )
      flt_B4668C = 0.0;
  }
  if ( (unsigned int)(a2 - 0x123) <= 6 && byte_B43076 )
  {
    v34 = **(_DWORD ***)(v33 + 0xC);
    v35 = (_DWORD *)*sub_405AD0(v34, &a26);
    a13 = v35[0x22];
    a14 = v35[0x23];
    a15 = v35[0x24];
    sub_7016A0((NiD3DVertexShader *)&a26);
    a16 = *(float *)(*sub_405AD0(v34, &a26) + 0xF8) * dbl_A43310;
    sub_7016A0((NiD3DVertexShader *)&a26);
    sub_70C720(dword_B43124, (float *)&a13, (float *)&a9, (float *)&a5, flt_A3C778);
    v36 = COERCE_FLOAT(sub_701640(dword_B43104));
    v37 = dword_B43104;
    a26 = v36;
    *(float *)&v38 = COERCE_FLOAT(sub_701670(v37));
    v39 = *(float *)&a9 + dbl_A2F928;
    v40 = v38;
    a25 = v38;
    v41 = v39 * dbl_A2FAA0;
    if ( v41 <= 0.0 )
      v41 = 0.0;
    a26 = (float)SLODWORD(a26);
    a28 = v41 * a26;
    v42 = FloatFloor(a28);
    a17 = Double_To_SInt32(v42);
    v43 = 1.0;
    v44 = (a6 + 1.0) * dbl_A2FAA0;
    if ( v44 < 1.0 )
      v43 = v44;
    a28 = (float)a25;
    *(float *)&a25 = v43 * a28;
    v45 = sub_484370(*(float *)&a25);
    v46 = Double_To_SInt32(v45);
    v47 = 1.0;
    a18 = v40 - v46;
    v48 = (*(float *)&a5 + 1.0) * dbl_A2FAA0;
    if ( v48 < 1.0 )
      v47 = v48;
    a26 = v47 * a26;
    v49 = sub_484370(a26);
    v50 = Double_To_SInt32(v49);
    v51 = a10 + dbl_A2F928;
    a19 = v50;
    v52 = v51 * dbl_A2FAA0;
    if ( v52 <= 0.0 )
      v52 = 0.0;
    a26 = v52 * a28;
    v53 = FloatFloor(a26);
    v54 = v40 - Double_To_SInt32(v53);
    v55 = dword_B43104;
    a20 = v54;
    ((void (__cdecl *)(IDirect3DDevice9 *, int *))v55->member.device->lpVtbl->SetScissorRect)(v55->member.device, &a17);
  }
  else
  {
    v56 = *(_DWORD *)(4 * a2 + 0xB455A0);
    if ( !*(_DWORD *)(v56 + 0x30) )
      *(_DWORD *)(v56 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v56 + 0x30), 0xAE, 0, 0);
  }
  return 0;
}
