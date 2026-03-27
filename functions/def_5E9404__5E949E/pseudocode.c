// positive sp value has been detected, the output may be wrong!
void __userpurge def_5E9404(_DWORD *a1@<ebx>, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  _DWORD *v6; // ecx
  int v7; // edi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  _DWORD *v11; // [esp-8h] [ebp-Ch]

  if ( *(_DWORD *)(a4 + 4) )
    JUMPOUT(0x5E93D0);
  GetRandomLargeInteger_(0);
  if ( a1 && *a1 )
  {
    v5 = 0;
    v6 = a1;
    do
    {
      if ( *v6 )
        ++v5;
      v6 = (_DWORD *)v6[1];
    }
    while ( v6 );
    v7 = 0;
    do
    {
      if ( !*a1 )
        break;
      v11 = 0;
      v8 = *a1 + 0x18;
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(a5 + 0x5C) + 0x1C))(a5 + 0x5C) || !(_BYTE)a5 )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a5 + 0x58) + 0x54))(*(_DWORD *)(a5 + 0x58), v8);
        if ( a3 <= v7 )
          break;
        ++v7;
      }
      a2 = *(_DWORD *)(a2 + 4);
    }
    while ( a2 );
  }
  if ( a1[1] )
  {
    do
    {
      v9 = *(_DWORD *)(a1[1] + 4);
      FormHeapFree(a1[1]);
      a1[1] = v9;
    }
    while ( v9 );
  }
  *a1 = 0;
  if ( v11[1] )
  {
    do
    {
      v10 = *(_DWORD *)(v11[1] + 4);
      FormHeapFree(v11[1]);
      v11[1] = v10;
    }
    while ( v10 );
  }
  *v11 = 0;
  FormHeapFree((unsigned int)v11);
  FormHeapFree((unsigned int)a1);
}
