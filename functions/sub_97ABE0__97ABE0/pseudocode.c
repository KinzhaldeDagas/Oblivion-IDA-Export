float *__thiscall sub_97ABE0(float *this, int a2, unsigned __int16 a3, int a4, int a5, int a6, int a7)
{
  signed int v7; // esi
  float *v8; // edi
  int v9; // eax
  int v10; // ebp
  unsigned __int16 v11; // cx
  int v12; // ebp
  unsigned __int16 v13; // di
  float *v14; // esi
  float *v15; // edi
  float *v16; // ebx
  bool v17; // zf
  double v18; // rt0
  int v19; // ebp
  int i; // eax
  int v21; // ebx
  int v23; // [esp+10h] [ebp-64h]
  int v24; // [esp+14h] [ebp-60h]
  int v25; // [esp+18h] [ebp-5Ch]
  unsigned int v26; // [esp+1Ch] [ebp-58h]
  float v27; // [esp+20h] [ebp-54h]
  float v28; // [esp+20h] [ebp-54h]
  int v30; // [esp+28h] [ebp-4Ch]
  float v31; // [esp+2Ch] [ebp-48h]
  float v32; // [esp+30h] [ebp-44h]
  float v33; // [esp+34h] [ebp-40h]
  float v34; // [esp+38h] [ebp-3Ch]
  float v35; // [esp+3Ch] [ebp-38h]
  float v36; // [esp+40h] [ebp-34h]
  float v37; // [esp+44h] [ebp-30h]
  float v38; // [esp+48h] [ebp-2Ch]
  float v39; // [esp+4Ch] [ebp-28h]
  float v40; // [esp+50h] [ebp-24h]
  float v41; // [esp+54h] [ebp-20h]
  float v42; // [esp+58h] [ebp-1Ch]
  float v43; // [esp+5Ch] [ebp-18h]
  float v44; // [esp+60h] [ebp-14h]
  float v45; // [esp+64h] [ebp-10h]
  float v46; // [esp+68h] [ebp-Ch]
  float v47; // [esp+6Ch] [ebp-8h]
  float v48; // [esp+70h] [ebp-4h]
  float *v49; // [esp+7Ch] [ebp+8h]

  v7 = a3; /*0x97abeb*/
  v8 = this; /*0x97abef*/
  *(_DWORD *)this = &NiOBBNode::`vftable'; /*0x97abff*/
  *(this + 0x1F) = 0.0; /*0x97ac09*/
  v30 = a3; /*0x97ac10*/
  v25 = FormHeapAlloc((unsigned __int64)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  v9 = FormHeapAlloc((0xC * (unsigned __int64)a3) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * a3);
  v10 = 0; /*0x97ac3d*/
  v26 = v9; /*0x97ac42*/
  if ( a3 ) /*0x97ac46*/
  {
    v23 = v9; /*0x97ac4c*/
    v49 = (float *)v25; /*0x97ac54*/
    v24 = v7; /*0x97ac58*/
    do /*0x97adec*/
    {
      v11 = *(_WORD *)(a4 + 2 * (unsigned __int16)v10); /*0x97ac71*/
      v12 = v10 + 1; /*0x97ac75*/
      v13 = *(_WORD *)(a4 + 2 * (unsigned __int16)v12++); /*0x97ac7b*/
      v14 = (float *)(a5 + 0xC * v11); /*0x97ac8f*/
      v15 = (float *)(a5 + 0xC * v13); /*0x97ac98*/
      v16 = (float *)(a5 + 0xC * *(unsigned __int16 *)(a4 + 2 * (unsigned __int16)v12)); /*0x97aca5*/
      v10 = v12 + 1; /*0x97aca8*/
      v34 = *v15 - *v14; /*0x97acab*/
      v35 = v15[1] - v14[1]; /*0x97acb5*/
      v36 = v15[2] - v14[2]; /*0x97acbf*/
      v31 = *v16 - *v14; /*0x97acc7*/
      v32 = v16[1] - v14[1]; /*0x97acd1*/
      v33 = v16[2] - v14[2]; /*0x97acdb*/
      v37 = v35 * v33 - v32 * v36; /*0x97acf9*/
      v38 = v36 * v31 - v33 * v34; /*0x97ad13*/
      v39 = v34 * v32 - v35 * v31; /*0x97ad1f*/
      v27 = v38 * v38 + v37 * v37 + v39 * v39; /*0x97ad3f*/
      v28 = sqrt(v27); /*0x97ad4c*/
      *v49 = v28 * dbl_A2FAA0; /*0x97ad5e*/
      v17 = v24-- == 1; /*0x97ad6e*/
      ++v49; /*0x97ad73*/
      v40 = *v14 + *v15; /*0x97ad77*/
      v23 += 0xC; /*0x97ad7b*/
      v41 = v14[1] + v15[1]; /*0x97ad85*/
      v42 = v14[2] + v15[2]; /*0x97ad8f*/
      v43 = *v16 + v40; /*0x97ad99*/
      v44 = v16[1] + v41; /*0x97ada4*/
      v45 = v16[2] + v42; /*0x97adaf*/
      v18 = dbl_A7C030; /*0x97adbf*/
      v46 = v43 * v18; /*0x97adc1*/
      *(float *)(v23 - 0xC) = v46; /*0x97adcd*/
      v47 = v44 * v18; /*0x97add2*/
      *(float *)(v23 - 8) = v47; /*0x97adda*/
      v48 = v18 * v45; /*0x97ade1*/
      *(float *)(v23 - 4) = v48; /*0x97ade9*/
    }
    while ( !v17 ); /*0x97adec*/
    v8 = this; /*0x97adf2*/
    v7 = v30; /*0x97adf6*/
  }
  v19 = FormHeapAlloc((unsigned __int64)(unsigned int)v7 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v7);
  for ( i = 0; i < v7; ++i ) /*0x97ae1b*/
    *(_DWORD *)(v19 + 4 * i) = i; /*0x97ae20*/
  v21 = FormHeapAlloc((unsigned __int64)(unsigned int)v7 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v7);
  sub_97A9D0(v8, a2, a4, a5, a6, v25, v26, 0, v7 - 1, v19, v21, a7); /*0x97ae84*/
  FormHeapFree(v21); /*0x97ae8a*/
  FormHeapFree(v19); /*0x97ae90*/
  FormHeapFree(v26); /*0x97ae9a*/
  FormHeapFree(v25); /*0x97aea0*/
  v8[0x22] = 0.0; /*0x97aea8*/
  return v8; /*0x97aeb4*/
}
