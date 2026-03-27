int __usercall sub_9536D0@<eax>(int a1@<eax>, int a2)
{
  int v4; // eax
  int v5; // ebx
  _DWORD *v6; // ecx
  _BYTE *v7; // edx
  char *v8; // edi
  _BYTE *v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int i; // eax
  _DWORD *v14; // ecx
  _BYTE *v15; // eax
  bool v16; // zf
  int result; // eax
  _BYTE *v18; // [esp+10h] [ebp-10h] BYREF
  int v19; // [esp+14h] [ebp-Ch]
  signed int v20; // [esp+18h] [ebp-8h]
  _BYTE *v21; // [esp+1Ch] [ebp-4h]
  int v22; // [esp+24h] [ebp+4h]

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x1C))(a2);
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v6 = *(_DWORD **)(v5 + 0x19C);
  v22 = v4;
  v18 = 0;
  v19 = 0;
  v20 = 0x80000000;
  v7 = (_BYTE *)v6[8];
  v8 = &v7[(a1 + 0x10) & 0xFFFFFFF0];
  if ( (unsigned int)v8 > v6[0xB] )
  {
    v9 = (_BYTE *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v6 + 0xC))(v6, (a1 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v6[8] = v8;
    v9 = v7;
  }
  v18 = v9;
  v21 = v9;
  v20 = a1 | 0x80000000;
  if ( a1 > v19 )
  {
    v10 = a1 & 0x3FFFFFFF;
    v11 = v19;
    if ( (a1 & 0x3FFFFFFF) < a1 )
    {
      v12 = 2 * v10;
      if ( a1 >= 2 * v10 )
        v12 = a1;
      sub_8A6E40((const void **)&v18, v12, 1);
    }
    for ( i = v11; i < a1; ++i )
      v18[i] = 0;
  }
  v19 = a1;
  if ( (v22 & (a1 - 1)) != 0 )
    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 0xC))(a2, v18, a1 - (v22 & (a1 - 1)));
  v14 = *(_DWORD **)(v5 + 0x19C);
  v15 = v21;
  v16 = v21 == (_BYTE *)v14[0xA];
  v14[8] = v21;
  if ( v16 )
    (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v14 + 0x10))(v14, v15);
  result = v20;
  if ( v20 >= 0 )
    return sub_8A75D0(*(_DWORD *)(v5 + 0x19C), v18, v20 & 0x3FFFFFFF, 0x14);
  return result;
}
