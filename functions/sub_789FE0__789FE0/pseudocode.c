int __userpurge sub_789FE0@<eax>(float *this@<ecx>, int a2@<edi>, unsigned int Src, rsize_t MaxCount)
{
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // edi
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // ebx
  int v16; // eax
  int v17; // ebx
  int v18; // ebx
  int v19; // eax
  int v20; // ebx
  int v21; // ebx
  int v22; // eax
  int v23; // ebx
  int v24; // ebx
  int v25; // eax
  int v26; // ebx
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  int v30; // ebx
  int v31; // eax
  int v32; // ebx
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  __int16 v36; // ax
  bool v37; // zf
  __int16 v38; // bx
  int v39; // eax
  __int16 v40; // cx
  unsigned __int16 v41; // bx
  int v42; // ecx
  double v43; // st7
  int v44; // edx
  int result; // eax
  double v46; // st7
  int v47; // [esp+34h] [ebp-Ch] BYREF
  float v48; // [esp+38h] [ebp-8h]
  int v49; // [esp+3Ch] [ebp-4h] BYREF

  v5 = *((_DWORD *)this + 1);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 0x6C);
    if ( v6 )
      v7 = (*(_DWORD *)(v5 + 0x70) - v6) >> 2;
    else
      v7 = 0;
    v8 = Src;
    *(_WORD *)(Src + 0x10) = v7 / 3;
    v9 = *((_DWORD *)this + 1);
    v10 = *(_DWORD *)(v9 + 0x5C);
    if ( v10 && (*(_DWORD *)(v9 + 0x60) - v10) >> 2 )
      v11 = *(_DWORD *)(v9 + 0x5C);
    else
      v11 = 0;
    *(_DWORD *)(v8 + 0x14) = v11;
    v12 = *((_DWORD *)this + 1);
    v13 = *(_DWORD *)(v12 + 0x6C);
    if ( v13 && (*(_DWORD *)(v12 + 0x70) - v13) >> 2 )
      v14 = *(_DWORD *)(v12 + 0x6C);
    else
      v14 = 0;
    *(_DWORD *)(v8 + 0x24) = v14;
    v15 = *((_DWORD *)this + 1);
    v16 = *(_DWORD *)(v15 + 0x8C);
    if ( v16 && (*(_DWORD *)(v15 + 0x90) - v16) >> 2 )
      v17 = *(_DWORD *)(v15 + 0x8C);
    else
      v17 = 0;
    *(_DWORD *)(v8 + 0x18) = v17;
    v18 = *((_DWORD *)this + 1);
    v19 = *(_DWORD *)(v18 + 0x9C);
    if ( v19 && (*(_DWORD *)(v18 + 0xA0) - v19) >> 2 )
      v20 = *(_DWORD *)(v18 + 0x9C);
    else
      v20 = 0;
    *(_DWORD *)(v8 + 0x1C) = v20;
    v21 = *((_DWORD *)this + 1);
    v22 = *(_DWORD *)(v21 + 0xAC);
    if ( v22 && (*(_DWORD *)(v21 + 0xB0) - v22) >> 2 )
      v23 = *(_DWORD *)(v21 + 0xAC);
    else
      v23 = 0;
    *(_DWORD *)(v8 + 0x20) = v23;
    v24 = *((_DWORD *)this + 1);
    v25 = *(_DWORD *)(v24 + 0xBC);
    if ( v25 && (*(_DWORD *)(v24 + 0xC0) - v25) >> 2 )
      v26 = *(_DWORD *)(v24 + 0xBC);
    else
      v26 = 0;
    *(_DWORD *)(v8 + 0x28) = v26;
    v27 = *((_DWORD *)this + 1);
    v28 = *(_DWORD *)(v27 + 0xEC);
    if ( v28 && (*(_DWORD *)(v27 + 0xF0) - v28) >> 2 )
      v29 = *(_DWORD *)(v27 + 0xEC);
    else
      v29 = 0;
    *(_DWORD *)(v8 + 0x2C) = v29;
    v30 = *((_DWORD *)this + 1);
    v31 = *(_DWORD *)(v30 + 0xFC);
    if ( v31 && (*(_DWORD *)(v30 + 0x100) - v31) >> 2 )
      v32 = *(_DWORD *)(v30 + 0xFC);
    else
      v32 = 0;
    *(_DWORD *)(v8 + 0x30) = v32;
    v33 = *((_DWORD *)this + 1);
    v34 = *(_DWORD *)(v33 + 0x10C);
    if ( v34 && *(_DWORD *)(v33 + 0x110) != v34 )
      v35 = *(_DWORD *)(v33 + 0x10C);
    else
      v35 = 0;
    v36 = MaxCount;
    v37 = (_WORD)MaxCount == 0xFFFF;
    *(_DWORD *)(v8 + 0x34) = v35;
    if ( v37 )
      v36 = sub_787C10(this, flt_A30634);
    v38 = v36;
    *(_DWORD *)v8 = v36;
    *(_WORD *)(v8 + 4) = sub_7886C0(*((_DWORD **)this + 1), v36);
    *(_DWORD *)(v8 + 8) = sub_788720(*((_DWORD *)this + 1), v38);
    *(_DWORD *)(v8 + 0xC) = sub_7945B0(*((_DWORD **)this + 1), v38);
    if ( byte_B4297C )
    {
      v39 = *(_DWORD *)this;
      v40 = *(_WORD *)(*(_DWORD *)this + 0xC0);
      *(float *)&v47 = flt_A30634;
      v41 = v40 + 1;
      v42 = *((_DWORD *)this + 0xD);
      Src = 0xFFFFFFFF;
      if ( v42 )
        v43 = *(float *)(v42 + 0x10);
      else
        v43 = *(float *)(v39 + 0x14);
      v44 = *((unsigned __int8 *)this + 0x44);
      *(float *)&MaxCount = v43;
      v48 = (float)v44;
      sub_787220(
        *(float *)&MaxCount,
        v41,
        *(this + 7),
        *(this + 0xA),
        *(this + 8),
        v48,
        (float *)&v47,
        (float *)&v49,
        (__int16 *)&Src,
        &MaxCount);
      result = v41;
      if ( (__int16)Src == v41 - 2 )
      {
        *(float *)(v8 + 0x38) = *(float *)&v47;
      }
      else
      {
        result = v41 - 1;
        if ( (__int16)Src == result )
        {
          v46 = flt_A40098;
          *(_DWORD *)v8 = 0xFFFFFFFF;
          *(float *)(v8 + 0x38) = v46;
        }
        else
        {
          *(float *)(v8 + 0x38) = v48;
        }
      }
    }
    else
    {
      result = *((unsigned __int8 *)this + 0x44);
      *(float *)(v8 + 0x38) = (float)result;
    }
  }
  else
  {
    LODWORD(MaxCount) = 0x46;
    return (int)sub_414500(
                  &dword_B2B614,
                  a2,
                  "no branch geometry exists, possible prior call to DeleteBranchGeometry",
                  MaxCount);
  }
  return result;
}
