char __thiscall sub_6CCFD0(_BYTE *this)
{
  unsigned __int8 v3; // al
  int v4; // edi
  unsigned int v5; // ecx
  int *v6; // eax
  _DWORD *v7; // ebx
  _DWORD *v8; // edi
  unsigned __int8 i; // bl
  int *v10; // eax
  unsigned int v11; // ebx
  unsigned __int8 v12; // [esp+13h] [ebp-11h]

  if ( !byte_B242A0 )
    return 0;
  v3 = byte_B242A0 + *(this + 0xD);
  v4 = v3;
  v12 = v3;
  v5 = (0x18 * (unsigned __int64)v3) >> 0x20 != 0 ? 0xFFFFFFFF : 0x18 * v3;
  v6 = (int *)FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  if ( v6 )
  {
    v7 = v6 + 1;
    *v6 = v4;
    ArrayConstructor(v6 + 1, 0x18u, v4, (int)sub_6CCDE0, (void (__thiscall *)(void *))sub_7016A0);
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  for ( i = 0; i < *(this + 0xD); ++i )
    sub_6CC890((float *)&v8[6 * i], (float *)(0x18 * i + *((_DWORD *)this + 5)));
  v10 = *((int **)this + 5);
  if ( v10 )
  {
    v11 = (unsigned int)(v10 + 0xFFFFFFFF);
    _LN21(v10, 0x18u, v10[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v11);
  }
  *(this + 0xD) = v12;
  *((_DWORD *)this + 5) = v8;
  return 1;
}
