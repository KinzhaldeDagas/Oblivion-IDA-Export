int __thiscall sub_4A2850(_DWORD *this)
{
  unsigned int v2; // edi
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  _DWORD *v7; // esi
  unsigned int *v8; // eax
  char v9; // bl
  int v10; // esi
  int v11; // eax
  unsigned int v13; // [esp+14h] [ebp-18h] BYREF
  unsigned int *v14; // [esp+18h] [ebp-14h] BYREF
  char ArgList[4]; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v16; // [esp+28h] [ebp-4h]

  sub_4A25F0(this);
  v2 = 0;
  v13 = 0;
  v3 = *(this + 3);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = 0;
  v16 = 0;
  if ( v4 )
  {
    v6 = *(_DWORD **)(v3 + 8);
    v7 = v6;
    while ( !*v7 )
    {
      ++v5;
      ++v7;
      if ( v5 >= v4 )
        goto LABEL_5;
    }
    v8 = (unsigned int *)v6[v5];
  }
  else
  {
LABEL_5:
    v8 = 0;
  }
  v9 = bDisableWarning_MESSAGES;
  v10 = 0;
  v14 = v8;
  bDisableWarning_MESSAGES = 1;
  while ( v14 )
  {
    sub_7B2600((_DWORD *)*(this + 3), &v14, ArgList, &v13);
    v2 = v13;
    if ( v13 )
    {
      v11 = *(_DWORD *)(v13 + 4);
      if ( v11 )
      {
        if ( v11 != 2 )
        {
          PrintError("Texture \"%s\" count %d.\r\n", *(const char **)ArgList, v11 - 2);
          ++v10;
        }
      }
    }
  }
  bDisableWarning_MESSAGES = v9;
  v16 = 0xFFFFFFFF;
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(unsigned int, int))v2)(v2, 1);
  }
  return v10;
}
