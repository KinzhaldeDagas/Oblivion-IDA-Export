void __thiscall sub_6C3960(float *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  int v10; // ecx
  _DWORD *v11; // ecx
  int v12; // [esp+8h] [ebp-10h] BYREF
  int v13; // [esp+Ch] [ebp-Ch]
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  if ( -flt_A7DEB4 != *(float *)&a6 )
  {
    v13 = a6;
    v12 = a5;
    v14 = a7;
    v15 = a8;
    sub_471430((_DWORD *)this + 3, (float *)&v12);
    v10 = *((_DWORD *)this + 0xB);
    if ( v10 )
      sub_6E1E90(v10, 0, 0, 0);
  }
  if ( -flt_A7DEB4 != a9 )
    sub_6C3910(this, a9);
  if ( -flt_A7DEB4 != *(float *)&a2 )
  {
    v12 = a2;
    v14 = a4;
    v13 = a3;
    sub_471390((_DWORD *)this + 3, (float *)&v12);
    v11 = *((_DWORD **)this + 0xB);
    if ( v11 )
      sub_6E1F00(v11, 0, 0, 0);
  }
}
