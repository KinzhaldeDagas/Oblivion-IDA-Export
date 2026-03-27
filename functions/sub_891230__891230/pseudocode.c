void __thiscall sub_891230(int this, char a2, float a3)
{
  __m128 *v4; // ecx
  __m128 v5; // [esp+10h] [ebp-60h] BYREF
  _OWORD v6[4]; // [esp+20h] [ebp-50h] BYREF

  if ( *(_DWORD *)(this + 0x368) )
  {
    sub_6848D0(*(_DWORD **)(this + 0x364), v6);
    v4 = *(__m128 **)(this + 0x368);
    v5 = (__m128)v6[3];
    v5.m128_f32[3] = a3;
    sub_88D900(v4, &v5, a2);
  }
}
