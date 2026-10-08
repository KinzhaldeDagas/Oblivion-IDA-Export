char __thiscall sub_712C00(_DWORD **this)
{
  void (__cdecl *v3)(int, _DWORD **, int, int *, int); // edx
  unsigned int *v4; // edi
  unsigned int v5; // eax
  _BYTE *v6; // ebp
  unsigned int v7; // eax
  unsigned int v8; // eax
  bool v9; // cc
  int v10; // [esp-1Ch] [ebp-B0h]
  rsize_t v11; // [esp-14h] [ebp-A8h]
  rsize_t v12; // [esp-14h] [ebp-A8h]
  int v13; // [esp+4h] [ebp-90h] BYREF
  int v14; // [esp+8h] [ebp-8Ch] BYREF
  int *v15; // [esp+Ch] [ebp-88h] BYREF
  char Str[128]; // [esp+10h] [ebp-84h] BYREF

  sub_748330(*(this + 0x87), Str, 0x80u); /*0x712c27*/
  if ( strstr(Str, "File Format") ) /*0x712c36*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 0x87) + 8))(*(this + 0x87), 0); /*0x712c8c*/
    v3 = (void (__cdecl *)(int, _DWORD **, int, int *, int))(*(this + 0x87))[1]; /*0x712c94*/
    v4 = (unsigned int *)(this + 0x36); /*0x712ca4*/
    v10 = (int)*(this + 0x87); /*0x712cab*/
    v14 = 4; /*0x712cac*/
    v3(v10, this + 0x36, 4, &v14, 1); /*0x712cb0*/
    v5 = (unsigned int)*(this + 0x36); /*0x712cb2*/
    if ( v5 >= dword_B26DF0 ) /*0x712cbd*/
    {
      if ( v5 <= dword_B26DF4 ) /*0x712d02*/
      {
        v6 = (char *)this + 0x1E5; /*0x712d43*/
        *((_BYTE *)this + 0x1E5) = 1; /*0x712d49*/
        if ( v5 >= 0x14000003 ) /*0x712d4d*/
          sub_6BDED0((signed int)this, (int)this + 0x1E5); /*0x712d51*/
        if ( *v6 == 1 || !NiBinaryStream_GetByteSwapHint() ) /*0x712d5f*/
        {
          if ( *v4 >= 0xA000108 ) /*0x712d98*/
          {
            sub_6BE9D0((signed int)this, (int)(this + 0x37)); /*0x712da2*/
            if ( *v4 == 0xA000165 ) /*0x712db0*/
              *(this + 0x37) = (_DWORD *)1; /*0x712db2*/
          }
          v7 = (unsigned int)*(this + 0x37); /*0x712db8*/
          if ( v7 >= unk_B3FB88 ) /*0x712dc4*/
          {
            if ( v7 <= dword_B26DF8 ) /*0x712df6*/
            {
              sub_6BE9D0((signed int)this, (int)&v15); /*0x712e28*/
              sub_8BCA30(this + 0x7B, v15); /*0x712e3b*/
              v8 = *v4; /*0x712e40*/
              v9 = *v4 <= 0xA000100; /*0x712e42*/
              *(this + 1) = 0; /*0x712e4a*/
              if ( !v9 && (v8 <= 0xA000108 || *(this + 0x37)) ) /*0x712e5d*/
              {
                if ( v8 > 0xA000101 ) /*0x712e6b*/
                {
                  sub_6BE9D0((signed int)this, (int)(this + 1)); /*0x712e6f*/
                  if ( *v4 == 0xA000102 ) /*0x712e7d*/
                    *v4 = 0xA000101; /*0x712e7f*/
                }
                sub_6BDED0((signed int)this, (int)&v13 + 3); /*0x712e8b*/
                sub_6D7C20((signed int)this, (int)(this + 2), HIBYTE(v13)); /*0x712e9b*/
                sub_6BDED0((signed int)this, (int)&v13 + 3); /*0x712ea6*/
                sub_6D7C20((signed int)this, (int)(this + 0x12), HIBYTE(v13)); /*0x712eb6*/
                sub_6BDED0((signed int)this, (int)&v13 + 3); /*0x712ec1*/
                v8 = sub_6D7C20((signed int)this, (int)(this + 0x22), HIBYTE(v13)); /*0x712ed4*/
              }
              LOBYTE(v8) = *v6 != 1; /*0x712eeb*/
              (*(void (__thiscall **)(_DWORD, unsigned int))(**(this + 0x87) + 8))(*(this + 0x87), v8); /*0x712eef*/
              return 1; /*0x712ef1*/
            }
            else
            {
              HIDWORD(v12) = "Unknown NIF user defined version."; /*0x712df8*/
              *(this + 0xE0) = (_DWORD *)4; /*0x712dfd*/
              LODWORD(v12) = 0x104; /*0x712e07*/
              sub_434900((char *)this + 0x384, v12); /*0x712e13*/
              return 0; /*0x712e1b*/
            }
          }
          else
          {
            *(this + 0xE0) = (_DWORD *)3; /*0x712dcb*/
            strcpy_s((char *)this + 0x384, 0x104u, "NIF user defined version is too old."); /*0x712de1*/
            return 0; /*0x712de9*/
          }
        }
        else
        {
          HIDWORD(v11) = "Endian mismatch."; /*0x712d68*/
          *(this + 0xE0) = (_DWORD *)6; /*0x712d6d*/
          LODWORD(v11) = 0x104; /*0x712d77*/
          sub_434900((char *)this + 0x384, v11); /*0x712d83*/
          return 0; /*0x712d8b*/
        }
      }
      else
      {
        *(this + 0xE0) = (_DWORD *)4; /*0x712d09*/
        strcpy_s((char *)this + 0x384, 0x104u, "Unknown NIF version."); /*0x712d1b*/
        return 0; /*0x712d25*/
      }
    }
    else
    {
      *(this + 0xE0) = (_DWORD *)3; /*0x712cc4*/
      strcpy_s((char *)this + 0x384, 0x104u, "NIF version is too old."); /*0x712cda*/
      return 0; /*0x712ce4*/
    }
  }
  else
  {
    *(this + 0xE0) = (_DWORD *)2; /*0x712c47*/
    strcpy_s((char *)this + 0x384, 0x104u, "Not a NIF file"); /*0x712c5d*/
    return 0; /*0x712c65*/
  }
}
