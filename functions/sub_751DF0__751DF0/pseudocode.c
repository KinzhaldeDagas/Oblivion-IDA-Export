void __thiscall sub_751DF0(float *this, float a2, float a3, int a4, int a5)
{
  int v7; // eax
  unsigned __int16 v8; // di
  __int16 v9; // bx
  unsigned __int16 v10; // ax
  bool v11; // zf
  int v12; // edi
  float v13; // [esp+20h] [ebp-4h]
  float v14; // [esp+34h] [ebp+10h]
  float v15; // [esp+34h] [ebp+10h]

  if ( *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a5 + 0xB4) + 0x5C) + 0x1C * (unsigned __int16)a4 + 0x18) < *((_WORD *)this + 0xC) ) /*0x751e19*/
  {
    v14 = (double)rand() / dbl_A3D5A8; /*0x751e32*/
    if ( *(this + 7) >= (double)v14 ) /*0x751e44*/
    {
      v7 = rand(); /*0x751e4c*/
      v8 = *((_WORD *)this + 0x10); /*0x751e59*/
      v13 = (double)v7 / dbl_A3D5A8; /*0x751e70*/
      v15 = (double)(*((unsigned __int16 *)this + 0x11) - v8) * v13; /*0x751e7c*/
      v9 = (int)v15; /*0x751ea5*/
      unknown_libname_14(1.0, v15); /*0x751eae*/
      if ( v15 > (double)kHeadBodyNormalMatchRadius ) /*0x751ec6*/
        ++v9; /*0x751ec8*/
      v10 = v9 + v8; /*0x751ecd*/
      v11 = v9 + v8 == 0; /*0x751ed0*/
      if ( !(v9 + v8) ) /*0x751ecd*/
      {
        v10 = 1; /*0x751ed5*/
        v11 = 0; /*0x751eda*/
      }
      if ( !v11 ) /*0x751edd*/
      {
        v12 = v10; /*0x751edf*/
        do /*0x751f06*/
        {
          (*(void (__thiscall **)(float *, _DWORD, _DWORD, int, int))(*(_DWORD *)this + 0x60))( /*0x751f01*/
            this,
            LODWORD(a2),
            LODWORD(a3),
            a4,
            a5);
          --v12; /*0x751f03*/
        }
        while ( v12 ); /*0x751f06*/
      }
    }
  }
}
