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
  unsigned int v15; // [esp+Ch] [ebp-88h] BYREF
  char Str[128]; // [esp+10h] [ebp-84h] BYREF

  sub_748330(*(this + 0x87), Str, 0x80u);
  if ( strstr(Str, "File Format") )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 0x87) + 8))(*(this + 0x87), 0);
    v3 = (void (__cdecl *)(int, _DWORD **, int, int *, int))(*(this + 0x87))[1];
    v4 = (unsigned int *)(this + 0x36);
    v10 = (int)*(this + 0x87);
    v14 = 4;
    v3(v10, this + 0x36, 4, &v14, 1);
    v5 = (unsigned int)*(this + 0x36);
    if ( v5 >= dword_B26DF0 )
    {
      if ( v5 <= dword_B26DF4 )
      {
        v6 = (char *)this + 0x1E5;
        *((_BYTE *)this + 0x1E5) = 1;
        if ( v5 >= 0x14000003 )
          sub_6BDED0((signed int)this, (int)this + 0x1E5);
        if ( *v6 == 1 || !NiBinaryStream_GetByteSwapHint() )
        {
          if ( *v4 >= 0xA000108 )
          {
            sub_6BE9D0((signed int)this, (int)(this + 0x37));
            if ( *v4 == 0xA000165 )
              *(this + 0x37) = (_DWORD *)1;
          }
          v7 = (unsigned int)*(this + 0x37);
          if ( v7 >= dword_B3FB88 )
          {
            if ( v7 <= dword_B26DF8 )
            {
              sub_6BE9D0((signed int)this, (int)&v15);
              sub_8BCA30(this + 0x7B, v15);
              v8 = *v4;
              v9 = *v4 <= 0xA000100;
              *(this + 1) = 0;
              if ( !v9 && (v8 <= 0xA000108 || *(this + 0x37)) )
              {
                if ( v8 > 0xA000101 )
                {
                  sub_6BE9D0((signed int)this, (int)(this + 1));
                  if ( *v4 == 0xA000102 )
                    *v4 = 0xA000101;
                }
                sub_6BDED0((signed int)this, (int)&v13 + 3);
                sub_6D7C20((signed int)this, (int)(this + 2), HIBYTE(v13));
                sub_6BDED0((signed int)this, (int)&v13 + 3);
                sub_6D7C20((signed int)this, (int)(this + 0x12), HIBYTE(v13));
                sub_6BDED0((signed int)this, (int)&v13 + 3);
                v8 = sub_6D7C20((signed int)this, (int)(this + 0x22), HIBYTE(v13));
              }
              LOBYTE(v8) = *v6 != 1;
              (*(void (__thiscall **)(_DWORD, unsigned int))(**(this + 0x87) + 8))(*(this + 0x87), v8);
              return 1;
            }
            else
            {
              HIDWORD(v12) = "Unknown NIF user defined version.";
              *(this + 0xE0) = (_DWORD *)4;
              LODWORD(v12) = 0x104;
              sub_434900((char *)this + 0x384, v12);
              return 0;
            }
          }
          else
          {
            *(this + 0xE0) = (_DWORD *)3;
            strcpy_s((char *)this + 0x384, 0x104u, "NIF user defined version is too old.");
            return 0;
          }
        }
        else
        {
          HIDWORD(v11) = "Endian mismatch.";
          *(this + 0xE0) = (_DWORD *)6;
          LODWORD(v11) = 0x104;
          sub_434900((char *)this + 0x384, v11);
          return 0;
        }
      }
      else
      {
        *(this + 0xE0) = (_DWORD *)4;
        strcpy_s((char *)this + 0x384, 0x104u, "Unknown NIF version.");
        return 0;
      }
    }
    else
    {
      *(this + 0xE0) = (_DWORD *)3;
      strcpy_s((char *)this + 0x384, 0x104u, "NIF version is too old.");
      return 0;
    }
  }
  else
  {
    *(this + 0xE0) = (_DWORD *)2;
    strcpy_s((char *)this + 0x384, 0x104u, "Not a NIF file");
    return 0;
  }
}
