void __thiscall sub_6AC210(_DWORD *this)
{
  int v2; // ebx
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  _DWORD *v7; // edi
  unsigned int *v8; // eax
  int v9; // edi
  _DWORD *v10; // [esp+10h] [ebp-1Ch] BYREF
  int v11; // [esp+14h] [ebp-18h] BYREF
  unsigned int *v12; // [esp+18h] [ebp-14h] BYREF
  int v13; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v14; // [esp+28h] [ebp-4h]

  v2 = 0;
  v10 = 0;
  v11 = 0;
  v3 = *(this + 0xC1);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = 0;
  v14 = 0;
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
  v12 = v8;
  while ( v12 )
  {
    sub_7B2600((_DWORD *)*(this + 0xC1), &v12, &v13, (unsigned int *)&v11);
    v9 = v13;
    NiTMap_RemoveAt((_DWORD *)*(this + 0xC1), v13);
    v2 = v11;
    if ( v11 )
      sub_6F9710(v11);
    NiTMap_GetAt((_DWORD *)*(this + 0xC0), v9, &v10);
    if ( v10 )
    {
      sub_6B6AC0(v10);
      sub_6AA9C0(this, (int)&v10);
    }
  }
  v14 = 0xFFFFFFFF;
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
}
