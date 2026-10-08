void __thiscall sub_750040(_DWORD *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  _DWORD *v7; // edx
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st3
  unsigned __int16 v12; // di
  int v13; // ebx
  unsigned int *v14; // esi
  int v15; // ebp
  unsigned int v16; // eax
  unsigned int v17; // eax
  float v19; // [esp+28h] [ebp+10h]
  int v20; // [esp+2Ch] [ebp+14h]
  float v21; // [esp+2Ch] [ebp+14h]
  float v22; // [esp+30h] [ebp+18h]
  float v23; // [esp+30h] [ebp+18h]

  v7 = this; /*0x750043*/
  v8 = a7; /*0x750045*/
  if ( a7 > 0.0 ) /*0x750053*/
  {
    v9 = a5; /*0x750059*/
    v10 = a6; /*0x75005d*/
    if ( a6 > (double)a5 && a3 > v9 && a4 < v10 ) /*0x75008a*/
    {
      v11 = a4; /*0x750090*/
      if ( a3 <= v10 ) /*0x750099*/
        v10 = a3; /*0x75009b*/
      v19 = v10 - v9; /*0x7500a7*/
      v22 = 0.0; /*0x7500ad*/
      if ( v9 <= v11 ) /*0x7500b8*/
        v22 = v11 - v9; /*0x7500be*/
      v12 = (int)(v22 * v8); /*0x7500ef*/
      v20 = (int)(v19 * v8); /*0x750112*/
      v13 = (unsigned __int16)(v20 - v12); /*0x75011e*/
      if ( (unsigned __int16)(v20 - v12) > 0xFu ) /*0x750129*/
        v13 = 0xF; /*0x75012b*/
      *(this + 0x18) = 0; /*0x750137*/
      if ( (_WORD)v13 ) /*0x750142*/
      {
        v14 = this + 0x16; /*0x750146*/
        v15 = (unsigned __int16)v13; /*0x750149*/
        do /*0x7501a2*/
        {
          ++v12; /*0x750154*/
          v16 = v14[1]; /*0x750162*/
          if ( v14[2] == v16 ) /*0x750174*/
          {
            if ( v16 ) /*0x750178*/
              v17 = 2 * v16; /*0x75017a*/
            else
              v17 = 1; /*0x75017e*/
            sub_74F9A0(v14, v17); /*0x750186*/
            v7 = this; /*0x75018b*/
          }
          v23 = 1.0 / v8; /*0x75013e*/
          v21 = v19 - v23 * (double)v12; /*0x750170*/
          *(float *)(*v14 + 4 * v14[2]++) = v21; /*0x750198*/
          --v15; /*0x75019f*/
        }
        while ( v15 ); /*0x7501a2*/
      }
      (*(void (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)v7[0x11] + 0x5C))(LODWORD(a2), v13, v7[0x16]); /*0x7501bb*/
    }
  }
}
