// Shared shader-property vtable slot +0x88 in the observed base, SpeedTree leaf, and SpeedTree lighting-property tables; returns 0 when this+0xA0 equals 3, otherwise 3. Exact abstract method name is not inferred.
signed int __thiscall sub_7F23B0(_DWORD *this)
{
  if ( *(this + 0x28) == 3 ) /*0x7f23b9*/
    return 0; /*0x7f23c0*/
  else
    return 3; /*0x7f23c3*/
}
