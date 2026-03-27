void __thiscall sub_549640(float *this, int a2, float a3, int a4)
{
  float *v5; // ecx
  double v6; // st7
  float *v7; // esi
  float v8[5]; // [esp+Ch] [ebp-34h] BYREF
  float v9[5]; // [esp+20h] [ebp-20h] BYREF
  int v10; // [esp+3Ch] [ebp-4h]

  if ( !*((_BYTE *)this + 0x1DA) )
  {
    if ( a2 )
    {
      if ( a2 != 2 )
      {
        if ( a2 != 3 )
          return;
        sub_54EA00((int)v8, 3, 1u);
        v10 = 2;
        sub_54E580(v8, a3);
        sub_54F350((int)v8, a3, this + 0x45);
        v5 = v8;
        goto LABEL_9;
      }
      sub_54EA00((int)v9, 2, 0x11u);
      v6 = a3;
      v10 = 1;
      sub_54E580(v9, a3);
      v7 = this + 0x17;
    }
    else
    {
      sub_54EA00((int)v9, 0, 0x10u);
      v6 = a3;
      v10 = 0;
      sub_54E580(v9, a3);
      v7 = this + 0x2E;
    }
    sub_54F350((int)v9, v6, v7);
    v5 = v9;
LABEL_9:
    v10 = 0xFFFFFFFF;
    BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenKeyframeMultiple *)v5);
  }
}
