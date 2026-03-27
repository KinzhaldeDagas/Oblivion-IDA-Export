int __cdecl __BuildCatchObjectHelper(int a1, int *a2, int *a3, int a4)
{
  int v4; // ecx
  int v5; // ecx
  int *v6; // esi
  int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v11; // [esp-8h] [ebp-34h]
  int v12; // [esp-4h] [ebp-30h]
  int v13; // [esp+10h] [ebp-1Ch]

  v13 = 0;
  v4 = a3[1];
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 8) )
    {
      v5 = a3[2];
      if ( v5 || *a3 < 0 )
      {
        v6 = a2;
        if ( *a3 >= 0 )
          v6 = (int *)((char *)a2 + v5 + 0xC);
        if ( (*a3 & 8) != 0 )
        {
          if ( unknown_libname_193(*(_DWORD *)(a1 + 0x18)) && unknown_libname_193((int)v6) )
          {
            v7 = *(_DWORD *)(a1 + 0x18);
            *v6 = v7;
            v8 = __AdjustPointer(v7, (_DWORD *)(a4 + 8));
LABEL_11:
            *v6 = v8;
            return v13;
          }
        }
        else
        {
          v11 = *(_DWORD *)(a1 + 0x18);
          if ( (*(_BYTE *)a4 & 1) != 0 )
          {
            if ( unknown_libname_193(v11) && unknown_libname_193((int)v6) )
            {
              unknown_libname_16((unsigned int)v6, *(_DWORD *)(a1 + 0x18), *(_DWORD *)(a4 + 0x14));
              if ( *(_DWORD *)(a4 + 0x14) != 4 || !*v6 )
                return v13;
              v8 = __AdjustPointer(*v6, (_DWORD *)(a4 + 8));
              goto LABEL_11;
            }
          }
          else if ( *(_DWORD *)(a4 + 0x18) )
          {
            if ( unknown_libname_193(v11) && unknown_libname_193((int)v6) && unknown_libname_193(*(_DWORD *)(a4 + 0x18)) )
              return ((*(_BYTE *)a4 & 4) != 0) + 1;
          }
          else if ( unknown_libname_193(v11) && unknown_libname_193((int)v6) )
          {
            v12 = *(_DWORD *)(a4 + 0x14);
            v9 = __AdjustPointer(*(_DWORD *)(a1 + 0x18), (_DWORD *)(a4 + 8));
            unknown_libname_16((unsigned int)v6, v9, v12);
            return v13;
          }
        }
        _inconsistency();
      }
    }
  }
  return 0;
}
