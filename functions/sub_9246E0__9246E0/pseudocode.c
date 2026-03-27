char __usercall sub_9246E0@<al>(int a1@<ebx>, int a2)
{
  int v2; // eax
  int v3; // ebp
  char *v4; // edi
  char v5; // al
  unsigned int v6; // eax
  unsigned int v7; // eax
  char v8; // al
  char *v9; // ecx
  _BYTE *v10; // edx
  int v11; // esi
  int v12; // eax
  int v14; // eax
  char v15; // cl
  size_t v16; // [esp-4h] [ebp-118h]
  size_t v17; // [esp-4h] [ebp-118h]
  bool v18; // [esp+Fh] [ebp-105h]
  int v19; // [esp+10h] [ebp-104h]
  char Dest[256]; // [esp+14h] [ebp-100h] BYREF

  v18 = dword_A95BF8 < 0;
  v2 = 0;
  v19 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(4 * v2 + 0xA9DE44);
    v4 = off_B2E2D0;
    v5 = *off_B2E2D0;
    if ( v5 != 0x2E )
    {
      while ( v5 )
      {
        v5 = *++v4;
        if ( v5 == 0x2E )
          goto LABEL_5;
      }
      goto LABEL_27;
    }
LABEL_5:
    if ( strstr(v4, "Prime") )
    {
      if ( a2 )
      {
        Dest[0] = 0;
        if ( strlen("The following component is not enabled in Havok Prime:\n\n\t\t") >= 0xFE - strlen(Dest) )
          v6 = 0xFE - strlen(Dest);
        else
          v6 = strlen("The following component is not enabled in Havok Prime:\n\n\t\t");
        LODWORD(v16) = v6;
        strncat(Dest, "The following component is not enabled in Havok Prime:\n\n\t\t", v16);
        if ( strlen("The following component is not enabled in Havok Prime:\n\n\t\t") >= 0xFE - strlen(Dest) )
          v7 = 0xFE - strlen(Dest);
        else
          v7 = strlen("The following component is not enabled in Havok Prime:\n\n\t\t");
        LODWORD(v17) = v7;
        strncat(Dest, *(const char **)(4 * a2 + 0xB30124), v17);
        sub_8B16A0(a1, Dest);
      }
    }
    v8 = v4[1];
    v9 = v4 + 1;
    if ( v8 != 0x2E )
    {
      while ( v8 )
      {
        v8 = *++v9;
        if ( v8 == 0x2E )
          goto LABEL_17;
      }
LABEL_27:
      sub_8B16A0(
        a1,
        "Havok Physics evaluation key has expired or is invalid.\n"
        "Please contact Havok.com for an extension.\n"
        "No simulation possible.");
      return 0;
    }
LABEL_17:
    v10 = v9 + 1;
    if ( !v18 )
      break;
    v11 = v3 ^ dword_A95BF8 & 0x7FFFFFFF;
    v12 = sub_94FEE0();
    if ( v11 > v12 && v11 - v12 < 0xED4E00 )
      goto LABEL_20;
LABEL_26:
    v2 = ++v19;
    if ( v19 >= 3 )
      goto LABEL_27;
  }
  v14 = 0;
  if ( *v10 )
  {
    do
    {
      v15 = *++v10;
      v14 = v15 + 0x17 * v14;
    }
    while ( v15 );
  }
  if ( dword_A95BF8 != ((v3 ^ v14) & 0x7FFFFFFF) )
    goto LABEL_26;
LABEL_20:
  if ( !a2 || v19 != 2 )
    return 1;
  sub_8B16A0(
    a1,
    "Product mismatch: Prime keyvalue detected in non prime keycode.\n"
    "Please check your keycode or contact your Havok Account Manager.");
  return 0;
}
