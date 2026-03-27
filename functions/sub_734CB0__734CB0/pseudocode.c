void __userpurge sub_734CB0(_WORD *this@<ecx>, int a2@<edi>, int a3, char *Dst, int a5)
{
  bool v6; // zf
  void (__cdecl *v7)(int, char *, int, int *, int); // edx
  unsigned __int8 v8; // al
  bool v9; // sf
  int v10; // ecx
  void (__cdecl *v11)(int, char *, int, int *, int); // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // ebp
  void (__cdecl *v15)(int, char *, int, int *, int); // edx
  int v16; // ecx
  unsigned int v17; // ecx
  size_t v18; // [esp-10h] [ebp-20h]
  char v19; // [esp+7h] [ebp-9h] BYREF
  unsigned int v20; // [esp+8h] [ebp-8h]
  int v21; // [esp+Ch] [ebp-4h] BYREF

  v6 = *(this + 0x87) == 0;
  v20 = 0;
  if ( !v6 )
  {
    HIDWORD(v18) = a2;
    do
    {
      if ( !*((_DWORD *)this + 0x5D) )
      {
        v7 = *(void (__cdecl **)(int, char *, int, int *, int))(a3 + 4);
        v19 = 0;
        v21 = 1;
        v7(a3, &v19, 1, &v21, 1);
        v8 = v19;
        v9 = v19 < 0;
        *((_BYTE *)this + 0x178) = (unsigned __int8)v19 >> 7;
        if ( v9 )
        {
          v10 = *((unsigned __int8 *)this + 0x114);
          *((_DWORD *)this + 0x5D) = v8 - 0x7F;
          *((_BYTE *)this + 0x178) = 1;
          v11 = *(void (__cdecl **)(int, char *, int, int *, int))(a3 + 4);
          v21 = 1;
          v11(a3, (char *)this + 0x179, v10, &v21, 1);
        }
        else
        {
          *((_BYTE *)this + 0x178) = 0;
          *((_DWORD *)this + 0x5D) = v8 + 1;
        }
      }
      v12 = (unsigned __int16)*(this + 0x87) - v20;
      if ( *((_DWORD *)this + 0x5D) < v12 )
        v12 = *((_DWORD *)this + 0x5D);
      if ( *((_BYTE *)this + 0x178) )
      {
        if ( v12 )
        {
          v13 = *((unsigned __int8 *)this + 0x114);
          v14 = v12;
          do
          {
            LODWORD(v18) = v13;
            memcpy(Dst, (char *)this + 0x179, v18);
            v13 = *((unsigned __int8 *)this + 0x114);
            Dst += v13;
            --v14;
          }
          while ( v14 );
        }
      }
      else
      {
        v15 = *(void (__cdecl **)(int, char *, int, int *, int))(a3 + 4);
        v16 = v12 * *((unsigned __int8 *)this + 0x114);
        v21 = 1;
        v15(a3, Dst, v16, &v21, 1);
        Dst += v12 * *((unsigned __int8 *)this + 0x114);
      }
      *((_DWORD *)this + 0x5D) -= v12;
      v17 = (unsigned __int16)*(this + 0x87);
      v20 += v12;
    }
    while ( v20 < v17 );
  }
}
