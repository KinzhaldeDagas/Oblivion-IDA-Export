void __thiscall sub_68B030(char *this, TESObjectCELL **a2, float *a3, TESObjectCELL *a4, TESObjectCELL *a5)
{
  TESObjectCELL *v6; // esi
  float *v8; // eax
  int v9; // eax
  _DWORD *v10; // [esp-10h] [ebp-20h]
  int v11; // [esp-Ch] [ebp-1Ch]

  v6 = a4;
  if ( a4 )
  {
    if ( !TESObjectCELL_IsInterior(a4) )
      v6 = 0;
  }
  v8 = 0;
  if ( v6 )
  {
    v8 = sub_4CBBB0(v6, a3);
  }
  else
  {
    v6 = a5;
    if ( !a5 )
      goto LABEL_10;
    v8 = sub_4F0600(a5, a3);
  }
  if ( !v8 )
    v8 = (float *)v6;
LABEL_10:
  if ( a2 )
  {
    if ( v8 )
    {
      v11 = (int)v8;
      v10 = (_DWORD *)((int (__thiscall *)(TESObjectCELL **))(*a2)[4].members.super.modlist.next)(a2);
      sub_4D8AF0(a2);
      if ( sub_68AB20((int *)this, v9, v10, v11, a3, (int)a2) )
        sub_689DC0(this, a2);
    }
  }
}
