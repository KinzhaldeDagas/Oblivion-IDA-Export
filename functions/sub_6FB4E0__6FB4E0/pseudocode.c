void __thiscall sub_6FB4E0(int *this, unsigned int Size)
{
  float v2; // ebp
  void (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  unsigned int v5; // ebx
  unsigned __int16 *v6; // esi
  unsigned int v7; // edi
  int v8; // [esp-14h] [ebp-34h]
  size_t v9; // [esp-4h] [ebp-24h]
  int v10; // [esp+Ch] [ebp-14h] BYREF
  Unk128 v11; // [esp+10h] [ebp-10h] BYREF

  v2 = *(float *)&Size;
  LODWORD(v9) = Size;
  sub_721610(this, v9);
  v8 = *(_DWORD *)(LODWORD(v2) + 0x21C);
  v4 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v8 + 4);
  v10 = 4;
  v4(v8, &Size, 4, &v10, 1);
  v5 = 0;
  if ( *(float *)&Size != 0.0 )
  {
    v6 = (unsigned __int16 *)(this + 3);
    sub_6FB0D0(v6, Size);
    v11.unkC = 0;
    v11.unkE = 0xFF;
    if ( *(float *)&Size != 0.0 )
    {
      do
      {
        sub_6FB3B0(&v11, v2);
        v7 = v6[5];
        if ( v7 >= v6[4] )
          sub_6FB0D0(v6, v7 + v6[7]);
        sub_6FAFA0(v6, v7, (int)&v11);
        ++v5;
      }
      while ( v5 < Size );
    }
  }
}
