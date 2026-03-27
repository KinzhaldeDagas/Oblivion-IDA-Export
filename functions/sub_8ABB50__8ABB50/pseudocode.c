signed int __thiscall sub_8ABB50(int *this, int a2)
{
  int *v3; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  char v10[4]; // [esp+4h] [ebp-Ch] BYREF
  int *v11; // [esp+8h] [ebp-8h]
  int v12; // [esp+Ch] [ebp-4h]

  v3 = (int *)*(this + 2);
  if ( v3 )
  {
    if ( v3[0x22] )
    {
      v10[0] = 5;
      v11 = this;
      v12 = a2;
      sub_898820(v3, (int)v10);
      return 0;
    }
    ++v3[0x22];
    sub_8CCB90(*(this + 2), (int)this);
  }
  v5 = *(this + 5);
  if ( v5 )
  {
    if ( *(_WORD *)(v5 + 4) )
    {
      if ( !--*(_WORD *)(v5 + 6) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
  }
  *(this + 5) = a2;
  if ( *(_WORD *)(a2 + 4) )
    ++*(_WORD *)(a2 + 6);
  v6 = *(this + 2);
  if ( v6 )
    v6 = sub_8DC650(v6, v6, (int)this);
  sub_8DE600(v6, (int)this);
  v7 = *(this + 2);
  if ( v7 )
  {
    sub_8CC950(v7, this);
    v8 = *(this + 2);
    v9 = *(_DWORD *)(v8 + 0x88) - 1;
    *(_DWORD *)(v8 + 0x88) = v9;
    if ( !v9 )
    {
      if ( *(_DWORD *)(v8 + 0x84) )
      {
        if ( !*(_BYTE *)(v8 + 0x90) )
          sub_899210(v8);
      }
    }
  }
  return 1;
}
