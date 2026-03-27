void __thiscall sub_61E8A0(void **this)
{
  int *v2; // eax
  int v3; // edi
  float *v4; // ebp
  float v5; // ecx
  float v6; // eax
  bool v7; // [esp+Fh] [ebp-11h]
  float v8; // [esp+10h] [ebp-10h]
  float v9; // [esp+14h] [ebp-Ch] BYREF
  float v10; // [esp+18h] [ebp-8h]
  float v11; // [esp+1Ch] [ebp-4h]

  v2 = sub_5E0F50(*(this + 0xF));
  v7 = (double)(*(char (__thiscall **)(int *))(*v2 + 0x11C))(v2) > dbl_A2FC68;
  *((_BYTE *)this + 0xC4) = 0;
  v3 = 0;
  v4 = (float *)(this + 0x2C);
  do
  {
    v5 = dword_B3F9B0;
    v8 = 0.0;
    v6 = *(&Vector3_InitValue_ + 1);
    v9 = Vector3_InitValue_;
    v11 = v5;
    v10 = v6;
    if ( sub_615F70(*((float *)this + 0xF), v3 + 0x16, &v9) )
      v8 = v10;
    if ( v7 && v8 > 0.0 )
    {
      *v4 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*(this + 0xF) + 0xEC))(*(this + 0xF)) * v8;
      *((_BYTE *)this + 0xC4) = 1;
    }
    else
    {
      *v4 = 0.0;
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 5 );
}
