FutBinaryFileC *__thiscall sub_6F6110(
        FutBinaryFileC *this,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8)
{
  bool v9; // cf
  int v11; // [esp-1Ch] [ebp-38h] BYREF
  unsigned int v12; // [esp-18h] [ebp-34h]
  int v13; // [esp-14h] [ebp-30h]
  int v14; // [esp-10h] [ebp-2Ch]
  int v15; // [esp-Ch] [ebp-28h]
  int v16; // [esp-8h] [ebp-24h]
  unsigned int v17; // [esp-4h] [ebp-20h]
  int *v18; // [esp+Ch] [ebp-10h]
  int v19; // [esp+18h] [ebp-4h]

  v18 = &v11;
  v17 = 0xF;
  v16 = 0;
  v19 = 0;
  LOBYTE(v12) = 0;
  sub_414420((int)&v11, &a2, 0, 0xFFFFFFFF);
  FutBinaryFileC::FutBinaryFileC(this, v11, v12, v13, v14, v15, v16, v17);
  v9 = a8 < 0x10;
  *(_DWORD *)this = &BSFaceGenBinaryFile::`vftable';
  *((_DWORD *)this + 0x10) = 0;
  if ( !v9 )
    FormHeapFree(a3);
  return this;
}
