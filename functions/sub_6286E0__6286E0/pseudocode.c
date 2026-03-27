int __thiscall sub_6286E0(void *this, int a2, int a3, Actor *a4)
{
  int v5; // ebx
  double v7; // [esp+10h] [ebp-8h]

  sub_520F00(a3);
  sub_520F40(1);
  v5 = 0;
  if ( a4 )
  {
    v7 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2) + 8) + dbl_A2FCC8;
    if ( a4->vtbl->super.super.GetPos((TESObjectREFR *)a4)[2] > v7 || Actor_IsNPC(a4) )
      v5 = 1;
  }
  sub_520F20(v5);
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x48))(this, a2);
  sub_520F00(0);
  sub_520F40(0);
  return sub_520F20(0xFFFFFFFF);
}
