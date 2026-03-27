int __thiscall sub_549750(float *this, int a2, float a3, int a4)
{
  float *v5; // ecx
  float v7[5]; // [esp+Ch] [ebp-34h] BYREF
  float v8[5]; // [esp+20h] [ebp-20h] BYREF
  int v9; // [esp+3Ch] [ebp-4h]

  if ( !*((_BYTE *)this + 0x1DA) )
  {
    switch ( a2 )
    {
      case 0:
        sub_54EA00((int)v7, 0, 0x10u);
        v9 = 2;
        sub_54E580(v7, a3);
        sub_54F350((int)v7, a3, this + 0x37);
        v5 = v7;
        goto LABEL_7;
      case 1:
        sub_54EA00((int)v7, 1, 0xDu);
        v9 = 0;
        sub_54E580(v7, a3);
        sub_54F350((int)v7, a3, this + 9);
        v5 = v7;
        goto LABEL_7;
      case 2:
        sub_54EA00((int)v7, 2, 0x11u);
        v9 = 1;
        sub_54E580(v7, a3);
        sub_54F350((int)v7, a3, this + 0x20);
        v5 = v7;
        goto LABEL_7;
      case 3:
        sub_54EA00((int)v8, 3, 1u);
        v9 = 3;
        sub_54E580(v8, a3);
        sub_54F350((int)v8, a3, this + 0x4E);
        v5 = v8;
LABEL_7:
        v9 = 0xFFFFFFFF;
        BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenKeyframeMultiple *)v5);
        return def_549790(a2, LODWORD(a3), a4);
      default:
        break;
    }
  }
  JUMPOUT(0x549892);
}
