void __thiscall sub_7479F0(char *this, int a2, int a3)
{
  char *v4; // edi
  void *v5; // ecx
  char Dir[256]; // [esp+Ch] [ebp-80Ch] BYREF
  char Dst[515]; // [esp+10Ch] [ebp-70Ch] BYREF
  char v8[257]; // [esp+30Fh] [ebp-509h] BYREF
  char Src[1028]; // [esp+410h] [ebp-408h] BYREF

  v4 = this + 8; /*0x747a10*/
  sub_748760(Dir, this + 8); /*0x747a18*/
  switch ( *((_DWORD *)this + 1) ) /*0x747a29*/
  {
    case 0: /*0x747a29*/
      goto LABEL_7;
    case 1: /*0x747a29*/
      strcpy_s(Dst, 3u, EmptyString); /*0x747a3f*/
      strcpy_s(Dir, 0x100u, EmptyString); /*0x747a53*/
      goto LABEL_7; /*0x747a53*/
    case 2: /*0x747a29*/
      strcpy_s(Dst, 3u, EmptyString); /*0x747a67*/
      strcpy_s(Dir, 0x100u, this + 0x10C); /*0x747a7d*/
      sub_748760(Src, v4); /*0x747a8d*/
      strcpy_s(v8, 0x100u, Src); /*0x747aa7*/
      goto LABEL_7; /*0x747aaf*/
    case 3: /*0x747a29*/
      strcpy_s(Dst, 3u, EmptyString); /*0x747ac0*/
      strcpy_s(Dir, 0x100u, this + 0x10C); /*0x747ad6*/
      strcpy_s(v8, 0x100u, EmptyString); /*0x747aed*/
      goto LABEL_7; /*0x747af5*/
    case 4: /*0x747a29*/
      if ( !unk_B40230 ) /*0x747afe*/
        goto LABEL_8; /*0x747afe*/
      strcpy_s(Dst, 3u, EmptyString); /*0x747b0f*/
      strcpy_s(Dir, 0x100u, &unk_B40230); /*0x747b23*/
LABEL_7:
      sub_7487B0(Dir, a2, a3); /*0x747b2b*/
      Shared_NoOpVirtual_60D0A0(v5); /*0x747b3e*/
      ++*((_DWORD *)this + 1); /*0x747b4b*/
      JUMPOUT(0x747B52); /*0x747b52*/
    default:
LABEL_8:
      JUMPOUT(0x747B50); /*0x747b50*/
  }
}
