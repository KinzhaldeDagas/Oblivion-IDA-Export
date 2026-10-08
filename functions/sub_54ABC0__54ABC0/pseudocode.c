void __userpurge sub_54ABC0(void *this@<ecx>, double a2@<st2>, float *a3, float a4)
{
  bool v5; // zf
  double v6; // st6
  double v7; // st7
  float v8[3]; // [esp+10h] [ebp-20h] BYREF
  float *v9; // [esp+1Ch] [ebp-14h]
  int v10; // [esp+20h] [ebp-10h]
  unsigned int v11; // [esp+2Ch] [ebp-4h]
  float v12; // [esp+34h] [ebp+4h]

  sub_54EA00((int)v8, 3, 1u); /*0x54abef*/
  v5 = *((_BYTE *)this + 0x1DA) == 0; /*0x54abf4*/
  v11 = 0; /*0x54abfb*/
  if ( v5 ) /*0x54ac03*/
  {
    if ( a3 ) /*0x54ac0b*/
    {
      v6 = a4; /*0x54ac0f*/
      if ( a4 >= 0.0 ) /*0x54ac1c*/
      {
        sub_54E580(v8, a4); /*0x54ac26*/
        v7 = *a3; /*0x54ac2b*/
        v12 = *a3; /*0x54ac32*/
        if ( !v10 || (v6 = v12, a2 = v12, v7 = v12, v12 == *v9) ) /*0x54ac4d*/
        {
          sub_54F350((int)v8, v7, v6, a2, (float *)this + 0x45); /*0x54ac70*/
        }
        else
        {
          *v9 = v12; /*0x54ac55*/
          sub_54F350((int)v8, v7, v6, a2, (float *)this + 0x45); /*0x54ac5c*/
        }
      }
    }
  }
  v11 = 0xFFFFFFFF; /*0x54ac7d*/
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenKeyframeMultiple *)v8); /*0x54ac85*/
}
