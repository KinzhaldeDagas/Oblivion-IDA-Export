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

  if ( *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a5 + 0xB4) + 0x5C) + 0x1C * (unsigned __int16)a4 + 0x18) < *((_WORD *)this + 0xC) )
  {
    v14 = (double)rand() / dbl_A3D5A8;
    if ( *(this + 7) >= (double)v14 )
    {
      v7 = rand();
      v8 = *((_WORD *)this + 0x10);
      v13 = (double)v7 / dbl_A3D5A8;
      v15 = (double)(*((unsigned __int16 *)this + 0x11) - v8) * v13;
      v9 = (int)v15;
      unknown_libname_14(1.0, v15);
      if ( v15 > (double)flt_A3D65C )
        ++v9;
      v10 = v9 + v8;
      v11 = v9 + v8 == 0;
      if ( !(v9 + v8) )
      {
        v10 = 1;
        v11 = 0;
      }
      if ( !v11 )
      {
        v12 = v10;
        do
        {
          (*(void (__thiscall **)(float *, _DWORD, _DWORD, int, int))(*(_DWORD *)this + 0x60))(
            this,
            LODWORD(a2),
            LODWORD(a3),
            a4,
            a5);
          --v12;
        }
        while ( v12 );
      }
    }
  }
}
