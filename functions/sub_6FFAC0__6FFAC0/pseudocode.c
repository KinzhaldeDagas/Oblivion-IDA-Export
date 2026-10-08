char __thiscall sub_6FFAC0(_WORD *this, const char *a2)
{
  __int16 v3; // bp
  bool v4; // zf
  __int16 v6; // di
  __int16 v7; // si
  int v8; // eax

  v3 = 0; /*0x6ffac4*/
  if ( !*(this + 0xA) ) /*0x6ffaca*/
    return 0; /*0x6ffaca*/
  EnterCriticalSection(&unk_B3F600); /*0x6ffad1*/
  unk_B3F678 = GetCurrentThreadId(); /*0x6ffadd*/
  ++unk_B3F67C; /*0x6ffae7*/
  if ( !a2 ) /*0x6ffaf1*/
  {
    v4 = unk_B3F67C-- == 1; /*0x6ffaf3*/
    if ( v4 ) /*0x6ffaf9*/
      unk_B3F678 = 0; /*0x6ffafb*/
    LeaveCriticalSection(&unk_B3F600); /*0x6ffb06*/
    return 0; /*0x6ffb10*/
  }
  v6 = *(this + 0xA) - 1; /*0x6ffb1c*/
  if ( v6 < 0 ) /*0x6ffb22*/
  {
LABEL_13:
    v4 = unk_B3F67C-- == 1; /*0x6ffb86*/
    if ( v4 ) /*0x6ffb8c*/
      unk_B3F678 = 0; /*0x6ffb8e*/
    LeaveCriticalSection(&unk_B3F600); /*0x6ffb9d*/
    return 0; /*0x6ffba6*/
  }
  else
  {
    while ( 1 ) /*0x6ffb2e*/
    {
      v7 = (v3 + v6) >> 1; /*0x6ffb2e*/
      v8 = strcmp(a2, (const char *)Shared_GetPointerAtOffset08(*(Atmosphere **)(*((_DWORD *)this + 4) + 4 * v7))); /*0x6ffb47*/
      if ( !v8 ) /*0x6ffb6a*/
        break; /*0x6ffb6a*/
      if ( v8 <= 0 ) /*0x6ffb6c*/
        v6 = v7 - 1; /*0x6ffb79*/
      else
        v3 = v7 + 1; /*0x6ffb71*/
      if ( v3 > v6 ) /*0x6ffb7f*/
        goto LABEL_13; /*0x6ffb7f*/
    }
    sub_6FF480(this, (v3 + v6) >> 1); /*0x6ffbaf*/
    v4 = unk_B3F67C-- == 1; /*0x6ffbb4*/
    if ( v4 ) /*0x6ffbbb*/
      unk_B3F678 = 0; /*0x6ffbbd*/
    LeaveCriticalSection(&unk_B3F600); /*0x6ffbcc*/
    return 1; /*0x6ffbd5*/
  }
}
