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

  v56 = a3[2];
  *(_DWORD *)(a4 - 0xC) = a1;
  a18 = v56 + a25;
  *(float *)(a4 - 0x24) = a16;
  *(float *)(a4 - 0x20) = a17;
  *(float *)(a4 - 0x1C) = a18;
  *(float *)(a4 - 0x18) = a7;
  *(float *)(a4 - 0x14) = a6;
  *(float *)(a4 - 0x10) = a8;
  *(float *)(a4 - 8) = a9;
  *(float *)(a4 - 4) = a5;
  v74 = retaddr + *a3;
  v58 = a10 + a3[1];
  LODWORD(v71) += 4;
  v72 += 4;
  a19 += 4;
  v75 = v58;
  v59 = a4 + 0x24;
  v60 = a3[2];
  *(_DWORD *)(v59 - 0xC) = a1;
  a15 = v60 + a11;
  *(float *)(v59 - 0x24) = v74;
  *(float *)(v59 - 0x20) = v75;
  *(float *)(v59 - 0x1C) = a15;
  *(float *)(v59 - 0x18) = a7;
  *(float *)(v59 - 0x14) = a6;
  *(float *)(v59 - 0x10) = a8;
  *(float *)(v59 - 8) = a5;
  *(float *)(v59 - 4) = a5;
  if ( a12 != 1 )
    JUMPOUT(0x765FB0);
  v61 = a37;
  sub_776D80(*(_DWORD *)(a2 + 0x8B0), *(_DWORD *)(LODWORD(a37) + 8));
  v62 = a56;
  result = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int *, float *))(**(_DWORD **)(a2 + 0xA94)
                                                                                              + 0x28))(
             *(_DWORD *)(a2 + 0xA94),
             0,
             0,
             a56,
             *(_DWORD *)(a2 + 0xC),
             *(_DWORD *)(a2 + 0x10),
             &a43,
             &a29);
  if ( !result )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, float *, float *))(**(_DWORD **)(a2 + 0xA94)
                                                                                          + 0x2C))(
      *(_DWORD *)(a2 + 0xA94),
      0,
      0,
      v62,
      *(_DWORD *)(a2 + 0xC),
      *(_DWORD *)(a2 + 0x10),
      &a36,
      &a22);
    v64 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0xA94) + 0x48))(*(_DWORD *)(a2 + 0xA94));
    if ( *(_DWORD *)(v62 + 0x1C) )
      v65 = **(_DWORD **)(v62 + 0x20);
    else
      v65 = 0;
    (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(a2 + 0x280) + 0x190))(
      *(_DWORD *)(a2 + 0x280),
      0,
      *(_DWORD *)(LODWORD(v61) + 8),
      0,
      v65);
    (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(a2 + 0x280) + 0x1A0))(*(_DWORD *)(a2 + 0x280), a38);
    if ( v64 )
    {
      do
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, float *, int *))(**(_DWORD **)(a2 + 0xA94)
                                                                                            + 0x30))(
          *(_DWORD *)(a2 + 0xA94),
          0,
          0,
          v62,
          *(_DWORD *)(a2 + 0xC),
          *(_DWORD *)(a2 + 0x10),
          &a22,
          &v72);
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, float *, int *))(**(_DWORD **)(a2 + 0xA94) + 0x38))(
          *(_DWORD *)(a2 + 0xA94),
          0,
          0,
          0,
          v62,
          *(_DWORD *)(a2 + 0xC),
          *(_DWORD *)(a2 + 0x10),
          &a15,
          &v70);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a2 + 0x8AC) + 0xFF0) + 4))(*(_DWORD *)(*(_DWORD *)(a2 + 0x8AC) + 0xFF0));
        (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 0x280) + 0x148))(
          *(_DWORD *)(a2 + 0x280),
          *(_DWORD *)(v62 + 0x38),
          *(_DWORD *)(v62 + 0x34),
          0,
          *(_DWORD *)(v62 + 0x14),
          0,
          *(_DWORD *)(v62 + 0x3C));
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int *, int *))(**(_DWORD **)(a2 + 0xA94)
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
      while ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0xA94) + 0x4C))(*(_DWORD *)(a2 + 0xA94)) );
    }
    return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int *, int *))(**(_DWORD **)(a2 + 0xA94)
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
  return result;
}
