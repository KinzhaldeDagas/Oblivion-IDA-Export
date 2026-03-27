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

  sub_7136B0(this, (int)Src);
  if ( NiTMap_GetAt((_DWORD *)dword_B3FB80, (int)Src, &v9) )
  {
    v3 = (int (*)(void))v9();
    v4 = (volatile LONG *)v3;
    v9 = v3;
    if ( v3 )
      InterlockedIncrement((volatile LONG *)v3 + 1);
    v5 = *((_DWORD *)this + 0x7E);
    v6 = v5 < *((_DWORD *)this + 0x7D);
    v11 = 0;
    if ( !v6 )
      sub_8BCA30((_DWORD *)this + 0x7B, v5 + *((_DWORD *)this + 0x80));
    sub_8BCD40((_DWORD *)this + 0x7B, v5, (LONG *)&v9);
    v11 = 0xFFFFFFFF;
    if ( v4 )
    {
      if ( !InterlockedDecrement(v4 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
    }
    (*(void (__thiscall **)(volatile LONG *, char *))(*v4 + 0x1C))(v4, this);
    return 1;
  }
  else
  {
    *((_DWORD *)this + 0xE0) = 5;
    strcpy_s(this + 0x384, 0x104u, Src);
    HIDWORD(v7) = ": cannot find create function.";
    LODWORD(v7) = 0x104;
    strcat_s(this + 0x384, v7, v8);
    return 0;
  }
}
