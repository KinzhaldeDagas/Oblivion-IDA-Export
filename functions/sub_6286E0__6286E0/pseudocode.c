int __thiscall sub_6286E0(void *this, int a2, int a3, TESObjectREFR *a4)
{
  int v5; // ebx
  double v7; // [esp+10h] [ebp-8h]

  sub_520F00(a3); /*0x6286ee*/
  sub_520F40(1); /*0x6286f5*/
  v5 = 0; /*0x628705*/
  if ( a4 ) /*0x628709*/
  {
    v7 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2) + 8) + dbl_A2FCC8; /*0x628733*/
    if ( a4->vtbl->GetPos(a4)[2] > v7 || Actor_IsNPC((Actor *)a4) ) /*0x628749*/
      v5 = 1; /*0x628752*/
  }
  sub_520F20(v5); /*0x628758*/
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x48))(this, a2); /*0x628768*/
  sub_520F00(0); /*0x62876c*/
  sub_520F40(0); /*0x628773*/
  return sub_520F20(0xFFFFFFFF); /*0x628782*/
}
