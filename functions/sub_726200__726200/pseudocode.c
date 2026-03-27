char __thiscall sub_726200(int this, unsigned int a2, char a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // edi
  unsigned int v7; // edx
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // eax

  v3 = a2;
  if ( a2 >= *(unsigned __int16 *)(this + 0x26) )
    return 0;
  v5 = *(_DWORD *)(*(_DWORD *)(this + 0x20) + 4 * a2);
  if ( !v5 )
    return 0;
  (*(void (__thiscall **)(unsigned int, _DWORD))(*(_DWORD *)v5 + 0xC))(v5, 0);
  FormHeapFree(v5);
  a2 = 0;
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x1C), v3, &a2);
  if ( a3 )
  {
    v7 = *(_DWORD *)(this + 0x10);
    v8 = 0;
    if ( v7 )
    {
      v9 = 0;
      do
      {
        v10 = *(_DWORD *)(this + 0x14);
        if ( v3 == *(_DWORD *)(v9 + v10 + 0x14) && v8 < v7 )
        {
          if ( v10 )
          {
            *(_DWORD *)(v9 + v10 + 4) = 0;
            *(_DWORD *)(v9 + v10 + 0xC) = 0;
            *(_DWORD *)(v9 + v10 + 8) = 0;
            *(_DWORD *)(v9 + v10 + 0x10) = 0;
            *(_DWORD *)(v9 + v10 + 0x14) = 0;
            *(_DWORD *)(v9 + v10 + 0x18) = 0;
          }
        }
        v7 = *(_DWORD *)(this + 0x10);
        ++v8;
        v9 += 0x1C;
      }
      while ( v8 < v7 );
    }
  }
  return 1;
}
