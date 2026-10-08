void __userpurge sub_549750(float *this@<ecx>, double a2@<st2>, double a3@<st1>, int a4, int a5, int a6)
{
  float *v7; // ecx
  float v8[5]; // [esp+Ch] [ebp-34h] BYREF
  float v9[5]; // [esp+20h] [ebp-20h] BYREF
  int v10; // [esp+3Ch] [ebp-4h]

  if ( !*((_BYTE *)this + 0x1DA) ) /*0x549776*/
  {
    switch ( a4 ) /*0x549790*/
    {
      case 0: /*0x549790*/
        sub_54EA00((int)v8, 0, 0x10u); /*0x549817*/
        v10 = 2; /*0x549828*/
        sub_54E580(v8, *(float *)&a5); /*0x549830*/
        sub_54F350((int)v8, *(float *)&a5, a3, a2, this + 0x37); /*0x549840*/
        v7 = v8; /*0x549845*/
        goto LABEL_7; /*0x549849*/
      case 1: /*0x549790*/
        sub_54EA00((int)v8, 1, 0xDu); /*0x54979f*/
        v10 = 0; /*0x5497b0*/
        sub_54E580(v8, *(float *)&a5); /*0x5497b8*/
        sub_54F350((int)v8, *(float *)&a5, a3, a2, this + 9); /*0x5497c5*/
        v7 = v8; /*0x5497ca*/
        goto LABEL_7; /*0x5497ce*/
      case 2: /*0x549790*/
        sub_54EA00((int)v8, 2, 0x11u); /*0x5497db*/
        v10 = 1; /*0x5497ec*/
        sub_54E580(v8, *(float *)&a5); /*0x5497f4*/
        sub_54F350((int)v8, *(float *)&a5, a3, a2, this + 0x20); /*0x549804*/
        v7 = v8; /*0x549809*/
        goto LABEL_7; /*0x54980d*/
      case 3: /*0x549790*/
        sub_54EA00((int)v9, 3, 1u); /*0x549853*/
        v10 = 3; /*0x549864*/
        sub_54E580(v9, *(float *)&a5); /*0x54986c*/
        sub_54F350((int)v9, *(float *)&a5, a3, a2, this + 0x4E); /*0x54987c*/
        v7 = v9; /*0x549881*/
LABEL_7:
        v10 = 0xFFFFFFFF; /*0x549885*/
        BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenKeyframeMultiple *)v7); /*0x54988d*/
        def_549790(a4, a5, a6); /*0x54988e*/
        return;
      default:
        break;
    }
  }
  JUMPOUT(0x549892); /*0x549892*/
}
