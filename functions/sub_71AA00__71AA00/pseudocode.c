void __thiscall sub_71AA00(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // eax
  _DWORD *v4; // ecx
  float *v5; // eax
  double v6; // st7
  int i; // eax
  int v8; // edx
  float *v9; // edx
  int j; // edx
  int v11; // eax
  float *v12; // eax
  float v13; // [esp+4h] [ebp-10h]
  float v14; // [esp+4h] [ebp-10h]
  float v15; // [esp+4h] [ebp-10h]
  float v16; // [esp+8h] [ebp-Ch]
  float v17; // [esp+Ch] [ebp-8h]
  float v18; // [esp+10h] [ebp-4h]

  if ( !*(this + 7) ) /*0x71aa06*/
    *(this + 7) = this + 3; /*0x71aa0f*/
  v2 = *(_DWORD *)(*(this + 7) + 0xC); /*0x71aa15*/
  *(this + 8) = v2; /*0x71aa1a*/
  if ( v2 )
  {
    if ( v2 > *(this + 9) )
    {
      FormHeapFree(*(this + 0xA)); /*0x71aa2c*/
      v3 = *(this + 8); /*0x71aa31*/
      *(this + 9) = v3; /*0x71aa36*/
      *(this + 0xA) = FormHeapAlloc((unsigned __int64)v3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v3);
      FormHeapFree(*(this + 0xB)); /*0x71aa54*/
      *(this + 0xB) = FormHeapAlloc((unsigned __int64)(unsigned int)*(this + 9) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * *(this + 9));
    }
    v4 = *(_DWORD **)(*(this + 7) + 4); /*0x71aa7b*/
    v5 = (float *)*(this + 2); /*0x71aa7e*/
    v6 = v5[0x19]; /*0x71aa81*/
    v5 += 0x19; /*0x71aa84*/
    v16 = v6; /*0x71aa8b*/
    v17 = v5[3]; /*0x71aa93*/
    v18 = v5[6]; /*0x71aa9a*/
    if ( *((_BYTE *)this + 0x35) ) /*0x71aa87*/
    {
      for ( i = 0; i < *(this + 8); *(float *)(*(this + 0xB) + 4 * i - 4) = v14 ) /*0x71aaa5*/
      {
        v8 = v4[2]; /*0x71aabd*/
        v4 = (_DWORD *)*v4; /*0x71aabf*/
        *(_DWORD *)(*(this + 0xA) + 4 * i) = v8; /*0x71aac1*/
        v9 = *(float **)(*(this + 0xA) + 4 * i++); /*0x71aac7*/
        v13 = v9[9] * v17 + v16 * v9[8] + v9[0xA] * v18; /*0x71aae0*/
        v14 = v13 - v9[0xB]; /*0x71aaee*/
      }
    }
    else
    {
      for ( j = 0; j < *(this + 8); *(float *)(*(this + 0xB) + 4 * j - 4) = v15 ) /*0x71ab06*/
      {
        v11 = v4[2]; /*0x71ab1a*/
        v4 = (_DWORD *)*v4; /*0x71ab1c*/
        *(_DWORD *)(*(this + 0xA) + 4 * j) = v11; /*0x71ab1e*/
        v12 = *(float **)(*(this + 0xA) + 4 * j++); /*0x71ab24*/
        v15 = v12[9] * v17 + v12[8] * v16 + v12[0xA] * v18; /*0x71ab42*/
      }
    }
    sub_733380(this, 0, *(this + 8) - 1); /*0x71ab64*/
  }
}
