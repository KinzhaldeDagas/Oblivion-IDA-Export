// Calculates native stop ease-out from the current physical slot's TESAnimGroup Blend byte at +0x21 unless ActorAnimData +0xC4 forces zero, then passes the original slot argument to ActorAnimData_ClearSlot. Thus aliases 5/6 retain ClearSlot's multi-slot expansion.
int __thiscall ActorAnimData_StopSlotWithBlendNote(int this, int a2)
{
  int v3; // edx
  int v4; // edx
  char v5; // al
  int v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+Ch] [ebp+4h]

  v3 = a2; /*0x4733aa*/
  if ( a2 == 5 ) /*0x4733ac*/
  {
    v3 = 0; /*0x4733ba*/
  }
  else if ( a2 == 6 ) /*0x4733b1*/
  {
    v3 = 3; /*0x4733b3*/
  }
  v4 = *(_DWORD *)(this + 4 * v3 + 0xA0); /*0x4733bc*/
  *(float *)&v7 = 0.0; /*0x4733c7*/
  if ( v4 ) /*0x4733cb*/
  {
    if ( !*(_BYTE *)(this + 0xC4) ) /*0x4733cd*/
    {
      v5 = *(_BYTE *)(*(_DWORD *)(v4 + 0x68) + 0x21); /*0x4733df*/
      v8 = flt_B06538; /*0x4733e2*/
      if ( v5 ) /*0x4733e8*/
        v8 = (double)v5 / dbl_A3AA50; /*0x4733fb*/
      *(float *)&v7 = v8 / flt_B06530; /*0x473409*/
    }
  }
  return ActorAnimData_ClearSlot((_DWORD *)this, a2, *(float *)&v7); /*0x47341b*/
}
