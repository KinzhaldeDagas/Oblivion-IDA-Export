int __thiscall sub_8D7EB0(void *this, _DWORD *a2, int a3, int a4, int *a5)
{
  _DWORD *v6; // ebx
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+14h] [ebp-Ch]
  int v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  v9 = *a5;
  v10 = a5[1];
  v6 = *(_DWORD **)(a4 + 0x74);
  v12 = a5[3];
  v11 = a5[2];
  v6[4] = *a5;
  v6[5] = a5[1];
  v6[6] = a5[2];
  v6[7] = a5[3];
  ++*(_DWORD *)(a4 + 0x88);
  sub_8D7400(a2, a3, a4);
  sub_8D72F0((int)this, (int)v6, (int)a2, a3, (int)v6, (void (__thiscall *)(int, _DWORD, int, char *))sub_8D6D80);
  if ( (*(_DWORD *)(a4 + 0x88))-- == 1 )
  {
    if ( *(_DWORD *)(a4 + 0x84) )
    {
      if ( !*(_BYTE *)(a4 + 0x90) )
        sub_899210(a4);
    }
  }
  v6[4] = v9;
  v6[5] = v10;
  v6[6] = v11;
  v6[7] = v12;
  return v10;
}
