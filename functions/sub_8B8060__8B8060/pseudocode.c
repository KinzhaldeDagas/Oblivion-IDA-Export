int __userpurge sub_8B8060@<eax>(_DWORD *this@<ecx>, char a2@<bpl>, int a3@<esi>, _BYTE *a4)
{
  FreeEntry *v5; // eax
  unsigned __int8 v6; // cl
  float *v7; // eax
  float *v8; // esi
  bool v9; // zf
  __m128 *v10; // eax

  if ( *(this + 3) )
  {
    *a4 = 0;
    return *(this + 3);
  }
  else
  {
    v5 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000030uLL, a3);
    v6 = 0x10 - ((unsigned __int8)v5 & 0xF);
    *((_BYTE *)v5 + v6 - 1) = v6;
    *(FreeEntry **)((char *)&v5->prev + v6) = 0;
    v7 = (float *)((char *)v5 + v6);
    v8 = v7 + 4;
    v7[1] = flt_B2EFC4;
    v7[4] = 0.0;
    v7[5] = 0.0;
    v7[6] = 0.0;
    v7[7] = 0.0;
    v7[4] = 1.0;
    v7[5] = 1.0;
    v7[6] = 1.0;
    v9 = *(this + 2) == 0;
    *(this + 3) = v7;
    if ( !v9 )
    {
      sub_8AEA60(this, (int)v7);
      v10 = (__m128 *)*(this + 2);
      if ( v10 )
      {
        sub_47DCD0(v8, v10 + 1);
        *a4 = 1;
        return *(this + 3);
      }
      sub_47DCD0(v8, (__m128 *)&stru_BA7A40);
    }
    *a4 = 1;
    return *(this + 3);
  }
}
