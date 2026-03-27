int __thiscall sub_6D07B0(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // edi
  _DWORD *v6; // ecx
  float **v7; // eax
  float v8; // eax
  unsigned int v9; // ecx
  float v10; // edx
  int result; // eax
  unsigned __int64 v12; // [esp+Ch] [ebp-20h] BYREF
  float v13; // [esp+14h] [ebp-18h]
  float v14; // [esp+18h] [ebp-14h]
  float v15[4]; // [esp+1Ch] [ebp-10h] BYREF

  v2 = *(this + 0x14);
  v3 = *(_DWORD *)(v2 + 8);
  if ( v3 )
  {
    sub_72A0F0((float *)&v12, *(_DWORD *)(v2 + 0xC), **(float ***)(v2 + 0x10));
    v4 = 1;
    if ( v3 > 1 )
    {
      v5 = 0xC;
      do
      {
        v6 = (_DWORD *)*(this + 0x14);
        if ( v4 >= v6[2] )
          v7 = 0;
        else
          v7 = (float **)(v5 + v6[4]);
        sub_72A0F0(v15, v6[3], *v7);
        sub_72A6B0((float *)&v12, v15);
        ++v4;
        v5 += 0xC;
      }
      while ( v4 < v3 );
    }
  }
  else
  {
    v8 = Vector3_InitValue_;
    v9 = *((_DWORD *)&Vector3_InitValue_ + 1);
    v14 = 0.0;
    v10 = dword_B3F9B0;
    v12 = __PAIR64__(v9, LODWORD(v8));
    v13 = v10;
  }
  result = *(_DWORD *)(*(this + 0xC) + 0xB4) + 0xC;
  *(_QWORD *)result = v12;
  *(float *)(result + 8) = v13;
  *(float *)(result + 0xC) = v14;
  return result;
}
