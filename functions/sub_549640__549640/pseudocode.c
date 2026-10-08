void __userpurge sub_549640(float *this@<ecx>, double a2@<st2>, double a3@<st1>, int a4, float a5, int a6)
{
  float *v7; // ecx
  double v8; // st7
  float *v9; // esi
  float v10[5]; // [esp+Ch] [ebp-34h] BYREF
  float v11[5]; // [esp+20h] [ebp-20h] BYREF
  int v12; // [esp+3Ch] [ebp-4h]

  if ( !*((_BYTE *)this + 0x1DA) ) /*0x549666*/
  {
    if ( a4 ) /*0x54967a*/
    {
      if ( a4 != 2 ) /*0x54967f*/
      {
        if ( a4 != 3 ) /*0x549684*/
          return; /*0x549684*/
        sub_54EA00((int)v10, 3, 1u); /*0x549692*/
        v12 = 2; /*0x5496a3*/
        sub_54E580(v10, a5); /*0x5496ab*/
        sub_54F350((int)v10, a5, a3, a2, this + 0x45); /*0x5496bb*/
        v7 = v10; /*0x5496c0*/
        goto LABEL_9; /*0x5496c4*/
      }
      sub_54EA00((int)v11, 2, 0x11u); /*0x5496ce*/
      v8 = a5; /*0x5496d3*/
      v12 = 1; /*0x5496df*/
      sub_54E580(v11, a5); /*0x5496e7*/
      v9 = this + 0x17; /*0x5496ec*/
    }
    else
    {
      sub_54EA00((int)v11, 0, 0x10u); /*0x5496f9*/
      v8 = a5; /*0x5496fe*/
      v12 = 0; /*0x54970a*/
      sub_54E580(v11, a5); /*0x549712*/
      v9 = this + 0x2E; /*0x549717*/
    }
    sub_54F350((int)v11, v8, a3, a2, v9); /*0x549722*/
    v7 = v11; /*0x549727*/
LABEL_9:
    v12 = 0xFFFFFFFF; /*0x54972b*/
    BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenKeyframeMultiple *)v7); /*0x549733*/
  }
}
