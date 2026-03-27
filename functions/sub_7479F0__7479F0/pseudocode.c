void __thiscall sub_7479F0(char *this, int a2, int a3)
{
  char *v4; // edi
  void *v5; // ecx
  char Dir[256]; // [esp+Ch] [ebp-80Ch] BYREF
  char Dst[515]; // [esp+10Ch] [ebp-70Ch] BYREF
  char v8[257]; // [esp+30Fh] [ebp-509h] BYREF
  char Src[1028]; // [esp+410h] [ebp-408h] BYREF

  v4 = this + 8;
  sub_748760(Dir, this + 8);
  switch ( *((_DWORD *)this + 1) )
  {
    case 0:
      goto LABEL_7;
    case 1:
      strcpy_s(Dst, 3u, EmptyString);
      strcpy_s(Dir, 0x100u, EmptyString);
      goto LABEL_7;
    case 2:
      strcpy_s(Dst, 3u, EmptyString);
      strcpy_s(Dir, 0x100u, this + 0x10C);
      sub_748760(Src, v4);
      strcpy_s(v8, 0x100u, Src);
      goto LABEL_7;
    case 3:
      strcpy_s(Dst, 3u, EmptyString);
      strcpy_s(Dir, 0x100u, this + 0x10C);
      strcpy_s(v8, 0x100u, EmptyString);
      goto LABEL_7;
    case 4:
      if ( !byte_B40230 )
        goto LABEL_8;
      strcpy_s(Dst, 3u, EmptyString);
      strcpy_s(Dir, 0x100u, &byte_B40230);
LABEL_7:
      sub_7487B0(Dir, a2, a3);
      TESTexture::ClearComponentReferences(v5);
      ++*((_DWORD *)this + 1);
      JUMPOUT(0x747B52);
    default:
LABEL_8:
      JUMPOUT(0x747B50);
  }
}
