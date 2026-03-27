void __thiscall sub_6D8510(int *this, signed int a2)
{
  unsigned int *v2; // ebx
  void (__cdecl *v4)(unsigned int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(unsigned int, unsigned int *, int, signed int *, int); // eax
  int *v6; // esi
  unsigned int i; // edi
  signed int v8; // eax
  unsigned int v9; // [esp-14h] [ebp-24h]
  unsigned int v10; // [esp-14h] [ebp-24h]
  unsigned int v11; // [esp+Ch] [ebp-4h] BYREF

  v2 = (unsigned int *)a2;
  sub_7008A0((NiRenderer *)this, a2);
  *(this + 2) = 0;
  sub_713620(v2, this + 2);
  v9 = v2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v9 + 4);
  a2 = 4;
  v4(v9, this + 0xC, 4, &a2, 1);
  sub_712A20(v2);
  v10 = v2[0x87];
  v5 = *(void (__cdecl **)(unsigned int, unsigned int *, int, signed int *, int))(v10 + 4);
  a2 = 4;
  v5(v10, &v11, 4, &a2, 1);
  v6 = this + 3;
  NiTArray_SetSize((unsigned __int16 *)v6, v11);
  for ( i = 0; i < v11; ++i )
  {
    a2 = 0;
    sub_713620(v2, &a2);
    v8 = a2;
    if ( i < *((unsigned __int16 *)v6 + 5) )
    {
      if ( a2 )
      {
        if ( !*(_DWORD *)(v6[1] + 4 * i) )
          ++*((_WORD *)v6 + 6);
      }
      else if ( *(_DWORD *)(v6[1] + 4 * i) )
      {
        --*((_WORD *)v6 + 6);
      }
    }
    else
    {
      *((_WORD *)v6 + 5) = i + 1;
      if ( v8 )
        ++*((_WORD *)v6 + 6);
    }
    *(_DWORD *)(v6[1] + 4 * i) = v8;
    sub_712A20(v2);
  }
}
