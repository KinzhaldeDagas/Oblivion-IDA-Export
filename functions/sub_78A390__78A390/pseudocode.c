int __userpurge sub_78A390@<eax>(float *this@<ecx>, int a2@<edi>, unsigned int Src, rsize_t MaxCount)
{
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int v12; // edi
  int v13; // eax
  int v14; // edi
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // edi
  int v19; // eax
  int v20; // edi
  int v21; // edi
  int v22; // eax
  int v23; // edi
  int v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // edi
  int v28; // eax
  int v29; // edi
  int v30; // edi
  int v31; // eax
  int v32; // edi
  int v33; // edi
  int v34; // eax
  int v35; // edi
  __int16 v36; // ax
  bool v37; // zf
  __int16 v38; // di
  int v39; // eax
  __int16 v40; // cx
  unsigned __int16 v41; // di
  int v42; // ecx
  double v43; // st7
  int v44; // edx
  int result; // eax
  int v46; // [esp+34h] [ebp-Ch] BYREF
  float v47; // [esp+38h] [ebp-8h]
  int v48; // [esp+3Ch] [ebp-4h] BYREF

  v5 = *((_DWORD *)this + 0x18);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 0x6C);
    v7 = Src;
    if ( v6 )
      v8 = (*(_DWORD *)(v5 + 0x70) - v6) >> 2;
    else
      v8 = 0;
    *(_WORD *)(Src + 0x4C) = v8 / 3;
    v9 = *((_DWORD *)this + 0x18);
    v10 = *(_DWORD *)(v9 + 0x5C);
    if ( v10 && (*(_DWORD *)(v9 + 0x60) - v10) >> 2 )
      v11 = *(_DWORD *)(v9 + 0x5C);
    else
      v11 = 0;
    *(_DWORD *)(v7 + 0x50) = v11;
    v12 = *((_DWORD *)this + 0x18);
    v13 = *(_DWORD *)(v12 + 0x6C);
    if ( v13 && (*(_DWORD *)(v12 + 0x70) - v13) >> 2 )
      v14 = *(_DWORD *)(v12 + 0x6C);
    else
      v14 = 0;
    *(_DWORD *)(v7 + 0x60) = v14;
    v15 = *((_DWORD *)this + 0x18);
    v16 = *(_DWORD *)(v15 + 0x8C);
    if ( v16 && (*(_DWORD *)(v15 + 0x90) - v16) >> 2 )
      v17 = *(_DWORD *)(v15 + 0x8C);
    else
      v17 = 0;
    *(_DWORD *)(v7 + 0x54) = v17;
    v18 = *((_DWORD *)this + 0x18);
    v19 = *(_DWORD *)(v18 + 0x9C);
    if ( v19 && (*(_DWORD *)(v18 + 0xA0) - v19) >> 2 )
      v20 = *(_DWORD *)(v18 + 0x9C);
    else
      v20 = 0;
    *(_DWORD *)(v7 + 0x58) = v20;
    v21 = *((_DWORD *)this + 0x18);
    v22 = *(_DWORD *)(v21 + 0xAC);
    if ( v22 && (*(_DWORD *)(v21 + 0xB0) - v22) >> 2 )
      v23 = *(_DWORD *)(v21 + 0xAC);
    else
      v23 = 0;
    *(_DWORD *)(v7 + 0x5C) = v23;
    v24 = *((_DWORD *)this + 0x18);
    v25 = *(_DWORD *)(v24 + 0xBC);
    if ( v25 && (*(_DWORD *)(v24 + 0xC0) - v25) >> 2 )
      v26 = *(_DWORD *)(v24 + 0xBC);
    else
      v26 = 0;
    *(_DWORD *)(v7 + 0x64) = v26;
    v27 = *((_DWORD *)this + 0x18);
    v28 = *(_DWORD *)(v27 + 0xEC);
    if ( v28 && (*(_DWORD *)(v27 + 0xF0) - v28) >> 2 )
      v29 = *(_DWORD *)(v27 + 0xEC);
    else
      v29 = 0;
    *(_DWORD *)(v7 + 0x68) = v29;
    v30 = *((_DWORD *)this + 0x18);
    v31 = *(_DWORD *)(v30 + 0xFC);
    if ( v31 && (*(_DWORD *)(v30 + 0x100) - v31) >> 2 )
      v32 = *(_DWORD *)(v30 + 0xFC);
    else
      v32 = 0;
    *(_DWORD *)(v7 + 0x6C) = v32;
    v33 = *((_DWORD *)this + 0x18);
    v34 = *(_DWORD *)(v33 + 0x10C);
    if ( v34 && *(_DWORD *)(v33 + 0x110) != v34 )
      v35 = *(_DWORD *)(v33 + 0x10C);
    else
      v35 = 0;
    v36 = MaxCount;
    v37 = (_WORD)MaxCount == 0xFFFF;
    *(_DWORD *)(v7 + 0x70) = v35;
    if ( v37 )
      v36 = sub_787C70(this, flt_A30634);
    v38 = v36;
    *(_DWORD *)(v7 + 0x3C) = v36;
    *(_WORD *)(v7 + 0x40) = sub_7886C0(*((_DWORD **)this + 0x18), v36);
    *(_DWORD *)(v7 + 0x44) = sub_788720(*((_DWORD *)this + 0x18), v38);
    *(_DWORD *)(v7 + 0x48) = sub_7945B0(*((_DWORD **)this + 0x18), v38);
    if ( byte_B4297C )
    {
      v39 = *(_DWORD *)this;
      v40 = *(_WORD *)(*(_DWORD *)this + 0xC0);
      *(float *)&v46 = flt_A30634;
      v41 = v40 + 1;
      v42 = *((_DWORD *)this + 0xD);
      Src = 0xFFFFFFFF;
      if ( v42 )
        v43 = *(float *)(v42 + 0x10);
      else
        v43 = *(float *)(v39 + 0x14);
      v44 = *((unsigned __int8 *)this + 0x44);
      *(float *)&MaxCount = v43;
      v47 = (float)v44;
      sub_787220(
        *(float *)&MaxCount,
        v41,
        *(this + 7),
        *(this + 0xA),
        *(this + 8),
        v47,
        (float *)&v46,
        (float *)&v48,
        (__int16 *)&Src,
        &MaxCount);
      result = v41;
      if ( (__int16)Src == v41 - 2 )
      {
        *(float *)(v7 + 0x74) = *(float *)&v46;
      }
      else
      {
        result = v41 - 1;
        if ( (__int16)Src == result )
        {
          *(float *)(v7 + 0x74) = flt_A40098;
          *(_DWORD *)(v7 + 0x3C) = 0xFFFFFFFF;
        }
        else
        {
          *(float *)(v7 + 0x74) = v47;
        }
      }
    }
    else
    {
      result = *((unsigned __int8 *)this + 0x44);
      *(float *)(v7 + 0x74) = (float)result;
    }
  }
  else
  {
    LODWORD(MaxCount) = 0x44;
    return (int)sub_414500(
                  &dword_B2B614,
                  a2,
                  "no frond geometry exists, possible prior call to DeleteFrondGeometry",
                  MaxCount);
  }
  return result;
}
