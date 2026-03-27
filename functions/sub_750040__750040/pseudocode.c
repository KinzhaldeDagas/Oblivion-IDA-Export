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

  v7 = this;
  v8 = a7;
  if ( a7 > 0.0 )
  {
    v9 = a5;
    v10 = a6;
    if ( a6 > (double)a5 && a3 > v9 && a4 < v10 )
    {
      v11 = a4;
      if ( a3 <= v10 )
        v10 = a3;
      v19 = v10 - v9;
      v22 = 0.0;
      if ( v9 <= v11 )
        v22 = v11 - v9;
      v12 = (int)(v22 * v8);
      v20 = (int)(v19 * v8);
      v13 = (unsigned __int16)(v20 - v12);
      if ( (unsigned __int16)(v20 - v12) > 0xFu )
        v13 = 0xF;
      *(this + 0x18) = 0;
      if ( (_WORD)v13 )
      {
        v14 = this + 0x16;
        v15 = (unsigned __int16)v13;
        do
        {
          ++v12;
          v16 = v14[1];
          if ( v14[2] == v16 )
          {
            if ( v16 )
              v17 = 2 * v16;
            else
              v17 = 1;
            sub_74F9A0(v14, v17);
            v7 = this;
          }
          v23 = 1.0 / v8;
          v21 = v19 - v23 * (double)v12;
          *(float *)(*v14 + 4 * v14[2]++) = v21;
          --v15;
        }
        while ( v15 );
      }
      (*(void (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)v7[0x11] + 0x5C))(LODWORD(a2), v13, v7[0x16]);
    }
  }
}
