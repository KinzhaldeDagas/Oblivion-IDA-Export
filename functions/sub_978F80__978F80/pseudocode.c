signed int __thiscall sub_978F80(float *this, float a2, int a3, int a4, int a5, int a6, _BYTE *a7)
{
  _DWORD v9[4]; // [esp+8h] [ebp-40h] BYREF
  float v10; // [esp+18h] [ebp-30h] BYREF
  float v11[3]; // [esp+1Ch] [ebp-2Ch] BYREF
  float v12[3]; // [esp+28h] [ebp-20h] BYREF
  float v13[3]; // [esp+34h] [ebp-14h] BYREF
  float *v14; // [esp+40h] [ebp-8h]
  int v15; // [esp+44h] [ebp-4h]

  v9[1] = a4;
  v9[2] = a5;
  v14 = 0;
  v15 = 0;
  v9[0] = a3;
  v9[3] = a6;
  if ( !sub_978D60(*(float *)&this, a2, &v10, v11) )
    return 0;
  *a7 = 1;
  v14 = this + 0x23;
  v15 = LODWORD(a2) + 0x8C;
  sub_980240(this + 1, v11, v12);
  sub_980240((float *)(LODWORD(a2) + 4), v11, v13);
  return sub_97A470(v9);
}
