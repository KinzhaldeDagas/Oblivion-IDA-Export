NiOBBRoot *__thiscall NiOBBRoot::NiOBBRoot(NiOBBRoot *this, unsigned __int16 a2, int a3, int a4, int a5, int a6)
{
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax

  *(_DWORD *)this = &NiOBBRoot::`vftable';
  if ( a2 <= 1u )
  {
    v9 = (float *)FormHeapAlloc(0x98u);
    if ( v9 )
    {
      v8 = sub_977530(v9, (int)this, a3, a4, a5, 0);
      goto LABEL_7;
    }
LABEL_6:
    v8 = 0;
    goto LABEL_7;
  }
  v7 = (float *)FormHeapAlloc(0x8Cu);
  if ( !v7 )
    goto LABEL_6;
  v8 = sub_97ABE0(v7, (int)this, a2, a3, a4, a5, a6);
LABEL_7:
  *((_DWORD *)this + 2) = v8;
  *((float *)this + 1) = 0.0;
  *((float *)this + 4) = Vector3_InitValue_;
  *((float *)this + 5) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 6) = dword_B3F9B0;
  sub_718A50((float *)this + 7);
  *((_BYTE *)this + 0xC) = 0;
  *((_DWORD *)this + 0x14) = 0;
  return this;
}
