int __thiscall sub_956260(float *this, _DWORD *a2, int a3, int a4)
{
  float v5; // edx
  int result; // eax
  unsigned int v7; // eax
  int v8; // ecx
  __int64 v9; // rax
  int v10; // edx
  int v12[24]; // [esp+10h] [ebp-108h] BYREF
  int v13[18]; // [esp+70h] [ebp-A8h] BYREF
  int v14[24]; // [esp+B8h] [ebp-60h] BYREF

  v5 = *this;
  *((_DWORD *)this + 3) = a3;
  *((_DWORD *)this + 8) = a4;
  *(this + 9) = 0.0;
  result = (*(int (__thiscall **)(float *, _DWORD *, _DWORD *))(LODWORD(v5) + 0x14))(this, a2, (_DWORD *)this + 0xC);
  if ( a2 )
  {
    *(this + 5) = 0.0;
    v7 = a2[0xA];
    if ( v7 )
    {
      v8 = 0;
      do
      {
        v7 >>= 1;
        ++v8;
      }
      while ( v7 );
      *((_DWORD *)this + 5) = v8;
    }
    v9 = *((int *)this + 5);
    *((_DWORD *)this + 6) = *((int *)this + 5) >> 1;
    *((_DWORD *)this + 5) = *((_DWORD *)this + 0x18) * (v9 / *((int *)this + 0x18) + 2) - 1;
    sub_954C10(v13, (int)a2, (int)(this + 0xC));
    v13[9] = 0x10;
    memset(&v13[0xA], 0, 0x10);
    v13[0] = 0xFFFFFFFF;
    LOBYTE(v13[1]) = 0;
    sub_954710(v13, a2);
    sub_954CA0(v13);
    qmemcpy(v12, v13, 0x48u);
    sub_954710(v12, a2);
    sub_954C10(v12, (int)a2, (int)(this + 0xC));
    v12[0] = v13[0] + 1;
    LOBYTE(v12[1]) = 0;
    sub_954CA0(v12);
    sub_954EC0((int)this, v10, (int)a2, (char *)v13, v12);
    sub_954C10(v12, (int)a2, (int)(this + 0xC));
    v12[9] = 0x10;
    memset(&v12[0xA], 0, 0x10);
    v12[0] = 0xFFFFFFFF;
    LOBYTE(v12[1]) = 0;
    sub_954710(v12, a2);
    sub_954CA0(v12);
    qmemcpy(v14, v12, 0x48u);
    sub_954710(v14, a2);
    sub_954C10(v14, (int)a2, (int)(this + 0xC));
    v14[0] = v12[0] + 1;
    LOBYTE(v14[1]) = 0;
    sub_954CA0(v14);
    sub_955CA0(this, (int)a2, (char *)v12, (char *)v14);
    qmemcpy(v12, v13, 0x48u);
    sub_954710(v12, a2);
    sub_954C10(v12, (int)a2, (int)(this + 0xC));
    v12[0] = v13[0] + 1;
    LOBYTE(v12[1]) = 0;
    sub_954CA0(v12);
    return sub_955F50(this, (int)a2, (int)v13, (int)v12);
  }
  return result;
}
