// positive sp value has been detected, the output may be wrong!
int __userpurge sub_766177@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        float *a3@<edi>,
        int a4@<esi>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        float a10,
        float a11,
        int a12,
        int a13,
        int a14,
        float a15,
        float a16,
        float a17,
        float a18,
        int a19,
        int a20,
        int a21,
        float a22,
        int a23,
        int a24,
        float a25,
        int a26,
        int a27,
        int a28,
        float a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        float a36,
        float a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56)
{
  double v56; // st2
  double v58; // st3
  int v59; // esi
  double v60; // st3
  float v61; // ebx
  int v62; // esi
  int result; // eax
  int v64; // edi
  int v65; // ecx
  int v66; // [esp-30h] [ebp-7Ch] BYREF
  int v67; // [esp-10h] [ebp-5Ch] BYREF
  int v68; // [esp+8h] [ebp-44h] BYREF
  int v69; // [esp+28h] [ebp-24h] BYREF
  int v70; // [esp+2Ch] [ebp-20h] BYREF
  float v71; // [esp+44h] [ebp-8h]
  int v72; // [esp+48h] [ebp-4h] BYREF
  float retaddr; // [esp+4Ch] [ebp+0h]
  float v74; // [esp+5Ch] [ebp+10h]
  float v75; // [esp+60h] [ebp+14h]

  v56 = a3[2]; /*0x766177*/
  *(_DWORD *)(a4 - 0xC) = a1; /*0x76617a*/
  a18 = v56 + a25; /*0x766181*/
  *(float *)(a4 - 0x24) = a16; /*0x766189*/
  *(float *)(a4 - 0x20) = a17; /*0x766190*/
  *(float *)(a4 - 0x1C) = a18; /*0x766197*/
  *(float *)(a4 - 0x18) = a7; /*0x76619c*/
  *(float *)(a4 - 0x14) = a6; /*0x7661a1*/
  *(float *)(a4 - 0x10) = a8; /*0x7661a6*/
  *(float *)(a4 - 8) = a9; /*0x7661ab*/
  *(float *)(a4 - 4) = a5; /*0x7661b0*/
  v74 = retaddr + *a3; /*0x7661b9*/
  v58 = a10 + a3[1]; /*0x7661c6*/
  LODWORD(v71) += 4; /*0x7661c9*/
  v72 += 4; /*0x7661cd*/
  a19 += 4; /*0x7661d1*/
  v75 = v58; /*0x7661d5*/
  v59 = a4 + 0x24; /*0x7661d9*/
  v60 = a3[2]; /*0x7661dc*/
  *(_DWORD *)(v59 - 0xC) = a1; /*0x7661df*/
  a15 = v60 + a11; /*0x7661ee*/
  *(float *)(v59 - 0x24) = v74; /*0x7661f6*/
  *(float *)(v59 - 0x20) = v75; /*0x7661fd*/
  *(float *)(v59 - 0x1C) = a15; /*0x766204*/
  *(float *)(v59 - 0x18) = a7; /*0x766209*/
  *(float *)(v59 - 0x14) = a6; /*0x76620e*/
  *(float *)(v59 - 0x10) = a8; /*0x766213*/
  *(float *)(v59 - 8) = a5; /*0x766216*/
  *(float *)(v59 - 4) = a5; /*0x766219*/
  if ( a12 != 1 ) /*0x76621c*/
    JUMPOUT(0x765FB0); /*0x765fb0*/
  v61 = a37; /*0x766695*/
  sub_776D80(*(_DWORD *)(a2 + 0x8B0), v59, *(_DWORD *)(LODWORD(a37) + 8)); /*0x7666a6*/
  v62 = a56; /*0x7666ab*/
  result = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int *, float *))(**(_DWORD **)(a2 + 0xA94) /*0x7666da*/
                                                                                              + 0x28))(
             *(_DWORD *)(a2 + 0xA94),
             0,
             0,
             a56,
             *(_DWORD *)(a2 + 0xC),
             *(_DWORD *)(a2 + 0x10),
             &a43,
             &a29);
  if ( !result ) /*0x7666de*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, float *, float *))(**(_DWORD **)(a2 + 0xA94) /*0x76670c*/
                                                                                          + 0x2C))(
      *(_DWORD *)(a2 + 0xA94),
      0,
      0,
      v62,
      *(_DWORD *)(a2 + 0xC),
      *(_DWORD *)(a2 + 0x10),
      &a36,
      &a22);
    v64 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0xA94) + 0x48))(*(_DWORD *)(a2 + 0xA94)); /*0x76671f*/
    if ( *(_DWORD *)(v62 + 0x1C) ) /*0x76671b*/
      v65 = **(_DWORD **)(v62 + 0x20); /*0x766726*/
    else
      v65 = 0; /*0x76672a*/
    (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(a2 + 0x280) + 0x190))( /*0x766744*/
      *(_DWORD *)(a2 + 0x280),
      0,
      *(_DWORD *)(LODWORD(v61) + 8),
      0,
      v65);
    (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(a2 + 0x280) + 0x1A0))(*(_DWORD *)(a2 + 0x280), a38); /*0x76675d*/
    if ( v64 ) /*0x766761*/
    {
      do /*0x766835*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, float *, int *))(**(_DWORD **)(a2 + 0xA94) /*0x766798*/
                                                                                            + 0x30))(
          *(_DWORD *)(a2 + 0xA94),
          0,
          0,
          v62,
          *(_DWORD *)(a2 + 0xC),
          *(_DWORD *)(a2 + 0x10),
          &a22,
          &v72);
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, float *, int *))(**(_DWORD **)(a2 + 0xA94) + 0x38))( /*0x7667c4*/
          *(_DWORD *)(a2 + 0xA94),
          0,
          0,
          0,
          v62,
          *(_DWORD *)(a2 + 0xC),
          *(_DWORD *)(a2 + 0x10),
          &a15,
          &v70);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a2 + 0x8AC) + 0xFF0) + 4))(*(_DWORD *)(*(_DWORD *)(a2 + 0x8AC) + 0xFF0)); /*0x7667d7*/
        (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 0x280) + 0x148))( /*0x7667fc*/
          *(_DWORD *)(a2 + 0x280),
          *(_DWORD *)(v62 + 0x38),
          *(_DWORD *)(v62 + 0x34),
          0,
          *(_DWORD *)(v62 + 0x14),
          0,
          *(_DWORD *)(v62 + 0x3C));
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int *, int *))(**(_DWORD **)(a2 + 0xA94) /*0x766828*/
                                                                                                  + 0x40))(
          *(_DWORD *)(a2 + 0xA94),
          0,
          0,
          0,
          v62,
          *(_DWORD *)(a2 + 0xC),
          *(_DWORD *)(a2 + 0x10),
          &v69,
          &v67);
      }
      while ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0xA94) + 0x4C))(*(_DWORD *)(a2 + 0xA94)) ); /*0x766835*/
    }
    return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int *, int *))(**(_DWORD **)(a2 + 0xA94) /*0x766867*/
                                                                                            + 0x44))(
             *(_DWORD *)(a2 + 0xA94),
             0,
             0,
             v62,
             *(_DWORD *)(a2 + 0xC),
             *(_DWORD *)(a2 + 0x10),
             &v68,
             &v66);
  }
  return result; /*0x766873*/
}
