void __thiscall sub_733600(unsigned int *this)
{
  signed int v2; // eax
  unsigned int v3; // eax
  _DWORD *v4; // edx
  float *v5; // eax
  double v6; // st7
  signed int v7; // ecx
  int v8; // eax
  float *v9; // eax
  float v10; // [esp+4h] [ebp-10h]
  float v11; // [esp+8h] [ebp-Ch]
  float v12; // [esp+Ch] [ebp-8h]
  float i; // [esp+10h] [ebp-4h]

  if ( !*(this + 7) ) /*0x733606*/
    *(this + 7) = (unsigned int)(this + 3); /*0x73360f*/
  v2 = *(_DWORD *)(*(this + 7) + 0xC); /*0x733615*/
  *(this + 8) = v2; /*0x73361a*/
  if ( v2 )
  {
    if ( v2 > (int)*(this + 9) )
    {
      FormHeapFree(*(this + 0xA)); /*0x73362c*/
      v3 = *(this + 8); /*0x733631*/
      *(this + 9) = v3; /*0x733636*/
      *(this + 0xA) = FormHeapAlloc((unsigned __int64)v3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v3);
      FormHeapFree(*(this + 0xB)); /*0x733654*/
      *(this + 0xB) = FormHeapAlloc((unsigned __int64)*(this + 9) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * *(this + 9));
    }
    v4 = *(_DWORD **)(*(this + 7) + 4); /*0x73367b*/
    v5 = (float *)*(this + 2); /*0x73367e*/
    v6 = v5[0x19]; /*0x733681*/
    v5 += 0x19; /*0x733684*/
    v7 = 0; /*0x73368b*/
    v12 = v5[3]; /*0x733693*/
    for ( i = v5[6]; v7 < (int)*(this + 8); *(float *)(*(this + 0xB) + 4 * v7 - 4) = v10 ) /*0x73369e*/
    {
      v8 = v4[2]; /*0x7336b3*/
      v4 = (_DWORD *)*v4; /*0x7336b5*/
      *(_DWORD *)(*(this + 0xA) + 4 * v7) = v8; /*0x7336b7*/
      v9 = *(float **)(*(this + 0xA) + 4 * v7++); /*0x7336bd*/
      v11 = v6; /*0x733687*/
      v10 = v9[9] * v12 + v9[8] * v11 + v9[0xA] * i; /*0x7336db*/
    }
    sub_733380(this, 0, *(this + 8) - 1); /*0x7336fe*/
  }
}
