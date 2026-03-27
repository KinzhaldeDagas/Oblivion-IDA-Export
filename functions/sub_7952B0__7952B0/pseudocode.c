unsigned int __userpurge sub_7952B0@<eax>(
        _DWORD *this@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4,
        _WORD *Src,
        unsigned int a6,
        int a7)
{
  int v8; // edx
  unsigned int result; // eax
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ecx
  char *v18; // edi
  int v19; // eax
  _WORD *v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // ebp
  _BYTE *v25; // ebx
  int v26; // eax
  bool v27; // cf
  int v28; // ebp
  rsize_t v29; // [esp-14h] [ebp-20h]
  rsize_t v30; // [esp-8h] [ebp-14h]
  int v31; // [esp+8h] [ebp-4h]
  char *v32; // [esp+18h] [ebp+Ch]
  int v33; // [esp+18h] [ebp+Ch]

  v8 = *(this + 1);
  a7 = *(unsigned __int16 *)a7;
  if ( v8 )
    result = (*(this + 3) - v8) >> 1;
  else
    result = 0;
  if ( a6 )
  {
    if ( v8 )
      v11 = (*(this + 2) - v8) >> 1;
    else
      v11 = 0;
    HIDWORD(v30) = a3;
    if ( 0xFFFFFFFF - v11 < a6 )
      sub_790B90(0xFFFFFFFF - v11);
    if ( v8 )
      v12 = (*(this + 2) - v8) >> 1;
    else
      v12 = 0;
    LODWORD(v30) = a2;
    if ( result >= a6 + v12 )
    {
      v25 = (_BYTE *)*(this + 2);
      v26 = 2 * a6;
      v27 = (v25 - (_BYTE *)Src) >> 1 < a6;
      v33 = 2 * a6;
      if ( v27 )
      {
        sub_794E80(Src, (int)v25, &Src[v26 / 2u]);
        sub_794F90((_WORD *)*(this + 2), a6 - ((*(this + 2) - (int)Src) >> 1), &a7);
        *(this + 2) += v33;
        return (unsigned int)sub_794E30(Src, (_WORD *)(*(this + 2) - v33), &a7);
      }
      else
      {
        v28 = (int)&v25[-v26];
        *(this + 2) = sub_794E80(&v25[-v26], (int)v25, v25);
        sub_794E50(Src, v28, (int)v25);
        return (unsigned int)sub_794E30(Src, &Src[v33 / 2u], &a7);
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (result >> 1) >= result )
        v13 = (result >> 1) + result;
      else
        v13 = 0;
      if ( v8 )
        v14 = (*(this + 2) - v8) >> 1;
      else
        v14 = 0;
      if ( v13 < a6 + v14 )
      {
        if ( v8 )
          v15 = (*(this + 2) - v8) >> 1;
        else
          v15 = 0;
        v13 = a6 + v15;
      }
      v31 = 2 * v13;
      v16 = FormHeapAlloc(2 * v13);
      v17 = *(this + 1);
      v18 = (char *)v16;
      v19 = 2 * ((int)((int)Src - v17) >> 1);
      v32 = &v18[v19];
      if ( (int)((int)Src - v17) >> 1 )
        memmove_s(v18, __PAIR64__(v17, v19), (const void *)v19, v30);
      v20 = sub_794F90(v32, a6, &a7);
      v21 = (*(this + 2) - (int)Src) >> 1;
      if ( v21 )
      {
        HIDWORD(v29) = Src;
        LODWORD(v29) = 2 * v21;
        memmove_s(v20, v29, (const void *)v29, v30);
      }
      v22 = *(this + 1);
      if ( v22 )
        v23 = (*(this + 2) - v22) >> 1;
      else
        v23 = 0;
      v24 = v23 + a6;
      if ( v22 )
        FormHeapFree(*(this + 1));
      result = (unsigned int)&v18[2 * v24];
      *(this + 1) = v18;
      *(this + 3) = &v18[v31];
      *(this + 2) = result;
    }
  }
  return result;
}
