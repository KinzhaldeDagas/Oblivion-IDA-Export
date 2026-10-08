// TES4 authoritative: controller vtable +0x84 post-update callback; if secondary bhk object exists, submits current transform position plus alpha/time parameter. Runs after 0x896000 state/integration work.
void __thiscall sub_891230(int this, char a2, float a3)
{
  __m128 *v4; // ecx
  __m128 v5; // [esp+10h] [ebp-60h] BYREF
  _OWORD v6[4]; // [esp+20h] [ebp-50h] BYREF

  if ( *(_DWORD *)(this + 0x368) ) /*0x891247*/
  {
    bhkRefObject_CopyHavokObjectTransform(*(_DWORD **)(this + 0x364), v6); /*0x89125b*/
    v4 = *(__m128 **)(this + 0x368); /*0x89126c*/
    v5 = (__m128)v6[3]; /*0x891276*/
    v5.m128_f32[3] = a3; /*0x89127b*/
    sub_88D900(v4, &v5, a2); /*0x891280*/
  }
}
