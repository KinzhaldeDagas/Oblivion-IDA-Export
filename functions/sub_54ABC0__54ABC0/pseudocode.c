void __thiscall sub_54ABC0(void *this, float *a2, float a3)
{
  bool v4; // zf
  double v5; // st7
  float v6[3]; // [esp+10h] [ebp-20h] BYREF
  float *v7; // [esp+1Ch] [ebp-14h]
  int v8; // [esp+20h] [ebp-10h]
  unsigned int v9; // [esp+2Ch] [ebp-4h]
  float v10; // [esp+34h] [ebp+4h]

  sub_54EA00((int)v6, 3, 1u);
  v4 = *((_BYTE *)this + 0x1DA) == 0;
  v9 = 0;
  if ( v4 )
  {
    if ( a2 )
    {
      if ( a3 >= 0.0 )
      {
        sub_54E580(v6, a3);
        v5 = *a2;
        v10 = *a2;
        if ( !v8 || (v5 = v10, v10 == *v7) )
        {
          sub_54F350((int)v6, v5, (float *)this + 0x45);
        }
        else
        {
          *v7 = v10;
          sub_54F350((int)v6, v5, (float *)this + 0x45);
        }
      }
    }
  }
  v9 = 0xFFFFFFFF;
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple((BSFaceGenKeyframeMultiple *)v6);
}
