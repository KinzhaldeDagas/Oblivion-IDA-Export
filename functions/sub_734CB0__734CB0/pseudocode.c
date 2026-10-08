void __thiscall sub_734CB0(_WORD *this, int a2, char *Dst, int a4)
{
  bool v6; // zf
  void (__cdecl *v7)(int, char *, int, int *, int); // edx
  unsigned __int8 v8; // al
  bool v9; // sf
  int v10; // ecx
  void (__cdecl *v11)(int, char *, int, int *, int); // eax
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // ebp
  void (__cdecl *v15)(int, char *, int, int *, int); // edx
  int v16; // ecx
  unsigned int v17; // ecx
  char v18; // [esp+7h] [ebp-9h] BYREF
  unsigned int v19; // [esp+8h] [ebp-8h]
  int v20; // [esp+Ch] [ebp-4h] BYREF

  v6 = *(this + 0x87) == 0; /*0x734cb6*/
  v19 = 0; /*0x734cbe*/
  if ( !v6 ) /*0x734cc6*/
  {
    do /*0x734dfd*/
    {
      if ( !*((_DWORD *)this + 0x5D) ) /*0x734cd0*/
      {
        v7 = *(void (__cdecl **)(int, char *, int, int *, int))(a2 + 4); /*0x734ce2*/
        v18 = 0; /*0x734cf2*/
        v20 = 1; /*0x734cf7*/
        v7(a2, &v18, 1, &v20, 1); /*0x734cfb*/
        v8 = v18; /*0x734cfd*/
        v9 = v18 < 0; /*0x734d09*/
        *((_BYTE *)this + 0x178) = (unsigned __int8)v18 >> 7; /*0x734d0b*/
        if ( v9 ) /*0x734d11*/
        {
          v10 = *((unsigned __int8 *)this + 0x114); /*0x734d13*/
          *((_DWORD *)this + 0x5D) = v8 - 0x7F; /*0x734d26*/
          *((_BYTE *)this + 0x178) = 1; /*0x734d34*/
          v11 = *(void (__cdecl **)(int, char *, int, int *, int))(a2 + 4); /*0x734d3b*/
          v20 = 1; /*0x734d3f*/
          v11(a2, (char *)this + 0x179, v10, &v20, 1); /*0x734d43*/
        }
        else
        {
          *((_BYTE *)this + 0x178) = 0; /*0x734d4f*/
          *((_DWORD *)this + 0x5D) = v8 + 1; /*0x734d56*/
        }
      }
      v12 = (unsigned __int16)*(this + 0x87) - v19; /*0x734d63*/
      if ( *((_DWORD *)this + 0x5D) < v12 ) /*0x734d6f*/
        v12 = *((_DWORD *)this + 0x5D); /*0x734d71*/
      if ( *((_BYTE *)this + 0x178) ) /*0x734d73*/
      {
        if ( v12 ) /*0x734d7e*/
        {
          v13 = *((unsigned __int8 *)this + 0x114); /*0x734d80*/
          v14 = v12; /*0x734d8d*/
          do /*0x734dad*/
          {
            memcpy(Dst, (char *)this + 0x179, v13); /*0x734d97*/
            v13 = *((unsigned __int8 *)this + 0x114); /*0x734d9c*/
            Dst += v13; /*0x734da3*/
            --v14; /*0x734daa*/
          }
          while ( v14 ); /*0x734dad*/
        }
      }
      else
      {
        v15 = *(void (__cdecl **)(int, char *, int, int *, int))(a2 + 4); /*0x734db8*/
        v16 = v12 * *((unsigned __int8 *)this + 0x114); /*0x734dbb*/
        v20 = 1; /*0x734dc4*/
        v15(a2, Dst, v16, &v20, 1); /*0x734dcf*/
        Dst += v12 * *((unsigned __int8 *)this + 0x114); /*0x734de0*/
      }
      *((_DWORD *)this + 0x5D) -= v12; /*0x734de4*/
      v17 = (unsigned __int16)*(this + 0x87); /*0x734dee*/
      v19 += v12; /*0x734df9*/
    }
    while ( v19 < v17 ); /*0x734dfd*/
  }
}
