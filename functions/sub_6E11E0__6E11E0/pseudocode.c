char __thiscall sub_6E11E0(void *this, char *a2, char *Src, int *a4)
{
  char *v5; // esi
  char *v6; // ecx
  int v8; // esi
  char *v9; // esi
  int v10[4]; // [esp-4h] [ebp-1Ch] BYREF
  unsigned int v11; // [esp+14h] [ebp-4h]

  v5 = Src;
  sub_6D8B50((UInt32 *)&Src, a2, (unsigned int)a4, Src);
  v6 = Src;
  v11 = 0;
  if ( !Src )
    return 0;
  if ( v5 )
  {
    sub_6D7E10((unsigned int *)Src, v5);
    v6 = Src;
  }
  v8 = *((_DWORD *)v6 + 2);
  v10[0] = (int)v6;
  a4 = v10;
  if ( Src )
    InterlockedIncrement((volatile LONG *)Src + 1);
  sub_7C2FF0((int)this + 0x3C, v8, v10[0], v10[1]);
  v11 = 0xFFFFFFFF;
  if ( Src )
  {
    v9 = Src;
    if ( !InterlockedDecrement((volatile LONG *)Src + 1) )
      (**(void (__thiscall ***)(char *, int))v9)(v9, 1);
  }
  return 1;
}
