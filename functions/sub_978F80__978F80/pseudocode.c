signed int __thiscall sub_978F80(float *this, float a2, int a3, int a4, int a5, int a6, _BYTE *a7)
{
  _DWORD v9[4]; // [esp+8h] [ebp-40h] BYREF
  float v10; // [esp+18h] [ebp-30h] BYREF
  float v11[3]; // [esp+1Ch] [ebp-2Ch] BYREF
  float v12[3]; // [esp+28h] [ebp-20h] BYREF
  float v13[3]; // [esp+34h] [ebp-14h] BYREF
  float *v14; // [esp+40h] [ebp-8h]
  int v15; // [esp+44h] [ebp-4h]

  v9[1] = a4; /*0x978f95*/
  v9[2] = a5; /*0x978f9e*/
  v14 = 0; /*0x978fa2*/
  v15 = 0; /*0x978fa6*/
  v9[0] = a3; /*0x978fb3*/
  v9[3] = a6; /*0x978fbd*/
  if ( !sub_978D60(*(float *)&this, a2, &v10, v11) ) /*0x978fc1*/
    return 0; /*0x979021*/
  *a7 = 1; /*0x978fd1*/
  v14 = this + 0x23; /*0x978fda*/
  v15 = LODWORD(a2) + 0x8C; /*0x978ff1*/
  sub_980240(this + 1, v11, v12); /*0x978ff5*/
  sub_980240((float *)(LODWORD(a2) + 4), v11, v13); /*0x979007*/
  return sub_97A470(v9); /*0x979018*/
}
