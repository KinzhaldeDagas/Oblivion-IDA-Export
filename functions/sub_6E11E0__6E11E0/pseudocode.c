char __thiscall sub_6E11E0(void *this, char *a2, char *Src, int *a4)
{
  char *v5; // esi
  char *v6; // ecx
  int v8; // esi
  char *v9; // esi
  int v10[4]; // [esp-4h] [ebp-1Ch] BYREF
  unsigned int v11; // [esp+14h] [ebp-4h]

  v5 = Src; /*0x6e1204*/
  sub_6D8B50((UInt32 *)&Src, a2, (unsigned int)a4, Src); /*0x6e1218*/
  v6 = Src; /*0x6e1220*/
  v11 = 0; /*0x6e1226*/
  if ( !Src ) /*0x6e122e*/
    return 0; /*0x6e1230*/
  if ( v5 ) /*0x6e1248*/
  {
    sub_6D7E10((unsigned int *)Src, v5); /*0x6e124b*/
    v6 = Src; /*0x6e1250*/
  }
  v8 = *((_DWORD *)v6 + 2); /*0x6e1254*/
  v10[0] = (int)v6; /*0x6e125a*/
  a4 = v10; /*0x6e1262*/
  if ( Src ) /*0x6e1266*/
    InterlockedIncrement((volatile LONG *)Src + 1); /*0x6e126c*/
  sub_7C2FF0((int)this + 0x3C, v8, v10[0], v10[1]); /*0x6e1276*/
  v11 = 0xFFFFFFFF; /*0x6e1281*/
  if ( Src ) /*0x6e1289*/
  {
    v9 = Src; /*0x6e128b*/
    if ( !InterlockedDecrement((volatile LONG *)Src + 1) ) /*0x6e1291*/
      (**(void (__thiscall ***)(char *, int))v9)(v9, 1); /*0x6e12a7*/
  }
  return 1; /*0x6e1232*/
}
