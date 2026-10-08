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

  v3 = (int *)*(this + 2); /*0x8abb56*/
  if ( v3 ) /*0x8abb5b*/
  {
    if ( v3[0x22] ) /*0x8abb5d*/
    {
      v10[0] = 5; /*0x8abb70*/
      v11 = this; /*0x8abb75*/
      v12 = a2; /*0x8abb79*/
      sub_898820(v3, (int)v10); /*0x8abb7d*/
      return 0; /*0x8abb88*/
    }
    ++v3[0x22]; /*0x8abb8f*/
    sub_8CCB90(*(this + 2), (int)this); /*0x8abb9a*/
  }
  v5 = *(this + 5); /*0x8abba2*/
  if ( v5 ) /*0x8abba7*/
  {
    if ( *(_WORD *)(v5 + 4) ) /*0x8abba9*/
    {
      if ( !--*(_WORD *)(v5 + 6) ) /*0x8abbb4*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x8abbbf*/
    }
  }
  *(this + 5) = a2; /*0x8abbc5*/
  if ( *(_WORD *)(a2 + 4) ) /*0x8abbc8*/
    ++*(_WORD *)(a2 + 6); /*0x8abbcf*/
  v6 = *(this + 2); /*0x8abbd3*/
  if ( v6 ) /*0x8abbd8*/
    v6 = sub_8DC650(v6, v6, (int)this); /*0x8abbdc*/
  sub_8DE600(v6, (int)this); /*0x8abbe6*/
  v7 = *(this + 2); /*0x8abbeb*/
  if ( v7 ) /*0x8abbf0*/
  {
    sub_8CC950(v7, this); /*0x8abbf4*/
    v8 = *(this + 2); /*0x8abbf9*/
    v9 = *(_DWORD *)(v8 + 0x88) - 1; /*0x8abc05*/
    *(_DWORD *)(v8 + 0x88) = v9; /*0x8abc06*/
    if ( !v9 ) /*0x8abc0c*/
    {
      if ( *(_DWORD *)(v8 + 0x84) ) /*0x8abc0e*/
      {
        if ( !*(_BYTE *)(v8 + 0x90) ) /*0x8abc18*/
          sub_899210(v8); /*0x8abc22*/
      }
    }
  }
  return 1; /*0x8abb84*/
}
