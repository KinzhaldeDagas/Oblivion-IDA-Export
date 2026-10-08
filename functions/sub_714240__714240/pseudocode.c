char __thiscall sub_714240(char *this)
{
  int (*v3)(void); // eax
  volatile LONG *v4; // edi
  unsigned int v5; // ebx
  bool v6; // cf
  rsize_t v7; // [esp-14h] [ebp-13Ch]
  const char *v8; // [esp-Ch] [ebp-134h]
  int (*v9)(void); // [esp+14h] [ebp-114h] BYREF
  char Src[256]; // [esp+18h] [ebp-110h] BYREF
  unsigned int v11; // [esp+124h] [ebp-4h]

  sub_7136B0(this, (int)Src); /*0x714282*/
  if ( NiTMap_GetAt((_DWORD *)unk_B3FB80, (int)Src, &v9) )
  {
    v3 = (int (*)(void))v9(); /*0x7142da*/
    v4 = (volatile LONG *)v3; /*0x7142de*/
    v9 = v3; /*0x7142e2*/
    if ( v3 ) /*0x7142e6*/
      InterlockedIncrement((volatile LONG *)v3 + 1); /*0x7142ec*/
    v5 = *((_DWORD *)this + 0x7E); /*0x7142f2*/
    v6 = v5 < *((_DWORD *)this + 0x7D); /*0x7142f8*/
    v11 = 0; /*0x714304*/
    if ( !v6 ) /*0x71430f*/
      sub_8BCA30((int **)this + 0x7B, (int *)(v5 + *((_DWORD *)this + 0x80))); /*0x714319*/
    sub_8BCD40((_DWORD *)this + 0x7B, v5, (LONG *)&v9); /*0x714326*/
    v11 = 0xFFFFFFFF; /*0x71432d*/
    if ( v4 ) /*0x714338*/
    {
      if ( !InterlockedDecrement(v4 + 1) ) /*0x71433e*/
        (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1); /*0x714350*/
    }
    (*(void (__thiscall **)(volatile LONG *, char *))(*v4 + 0x1C))(v4, this); /*0x71435a*/
    return 1; /*0x71435c*/
  }
  else
  {
    *((_DWORD *)this + 0xE0) = 5; /*0x7142b1*/
    strcpy_s(this + 0x384, 0x104u, Src); /*0x7142bb*/
    HIDWORD(v7) = ": cannot find create function.";
    LODWORD(v7) = 0x104; /*0x7142c5*/
    strcat_s(this + 0x384, v7, v8); /*0x7142cb*/
    return 0; /*0x7142d3*/
  }
}
