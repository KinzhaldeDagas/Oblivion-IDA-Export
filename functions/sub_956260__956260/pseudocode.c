int __thiscall sub_956260(float *this, _DWORD *a2, int a3, int a4)
{
  int v5; // edx
  int result; // eax
  unsigned int v7; // eax
  int v8; // ecx
  __int64 v9; // rax
  int v10; // edx
  int v12[24]; // [esp+10h] [ebp-108h] BYREF
  int v13[18]; // [esp+70h] [ebp-A8h] BYREF
  int v14[24]; // [esp+B8h] [ebp-60h] BYREF

  v5 = *(_DWORD *)this; /*0x956279*/
  *((_DWORD *)this + 3) = a3; /*0x95627c*/
  *((_DWORD *)this + 8) = a4; /*0x956283*/
  *(this + 9) = 0.0; /*0x95628f*/
  result = (*(int (__thiscall **)(float *, _DWORD *, float *))(v5 + 0x14))(this, a2, this + 0xC); /*0x956292*/
  if ( a2 ) /*0x956297*/
  {
    *(this + 5) = 0.0; /*0x95629d*/
    v7 = a2[0xA]; /*0x9562a0*/
    if ( v7 ) /*0x9562a5*/
    {
      v8 = 0; /*0x9562a7*/
      do /*0x9562b5*/
      {
        v7 >>= 1; /*0x9562b0*/
        ++v8; /*0x9562b2*/
      }
      while ( v7 ); /*0x9562b5*/
      *((_DWORD *)this + 5) = v8; /*0x9562b7*/
    }
    v9 = *((int *)this + 5); /*0x9562c1*/
    *((_DWORD *)this + 6) = *((int *)this + 5) >> 1; /*0x9562c2*/
    *((_DWORD *)this + 5) = *((_DWORD *)this + 0x18) * (v9 / *((int *)this + 0x18) + 2) - 1; /*0x9562d1*/
    sub_954C10(v13, (int)a2, (int)(this + 0xC)); /*0x9562dd*/
    v13[9] = 0x10; /*0x9562e7*/
    memset(&v13[0xA], 0, 0x10); /*0x956300*/
    v13[0] = 0xFFFFFFFF; /*0x956307*/
    LOBYTE(v13[1]) = 0; /*0x956316*/
    sub_954710(v13, a2); /*0x95631b*/
    sub_954CA0(v13); /*0x956324*/
    qmemcpy(v12, v13, 0x48u); /*0x956336*/
    sub_954710(v12, a2); /*0x95633d*/
    sub_954C10(v12, (int)a2, (int)(this + 0xC)); /*0x95634f*/
    v12[0] = v13[0] + 1; /*0x95635d*/
    LOBYTE(v12[1]) = 0; /*0x956361*/
    sub_954CA0(v12); /*0x956366*/
    sub_954EC0((int)this, v10, (int)a2, (char *)v13, (char *)v12); /*0x95637a*/
    sub_954C10(v12, (int)a2, (int)(this + 0xC)); /*0x956385*/
    v12[9] = 0x10; /*0x956391*/
    memset(&v12[0xA], 0, 0x10); /*0x9563a1*/
    v12[0] = 0xFFFFFFFF; /*0x9563a5*/
    LOBYTE(v12[1]) = 0; /*0x9563b1*/
    sub_954710(v12, a2); /*0x9563b5*/
    sub_954CA0(v12); /*0x9563be*/
    qmemcpy(v14, v12, 0x48u); /*0x9563d3*/
    sub_954710(v14, a2); /*0x9563dd*/
    sub_954C10(v14, (int)a2, (int)(this + 0xC)); /*0x9563f2*/
    v14[0] = v12[0] + 1; /*0x956403*/
    LOBYTE(v14[1]) = 0; /*0x95640a*/
    sub_954CA0(v14); /*0x956412*/
    sub_955CA0(this, (int)a2, (char *)v12, (char *)v14); /*0x956429*/
    qmemcpy(v12, v13, 0x48u); /*0x95643b*/
    sub_954710(v12, a2); /*0x956442*/
    sub_954C10(v12, (int)a2, (int)(this + 0xC)); /*0x956454*/
    v12[0] = v13[0] + 1; /*0x956462*/
    LOBYTE(v12[1]) = 0; /*0x956466*/
    sub_954CA0(v12); /*0x95646b*/
    return sub_955F50((unsigned int **)this, (int)a2, (int)v13, (int)v12); /*0x95647f*/
  }
  return result; /*0x956484*/
}
