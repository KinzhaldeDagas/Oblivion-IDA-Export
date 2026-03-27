int __thiscall sub_8902B0(__m128 **this, int a2)
{
  __m128 *v3; // ebx
  int (__thiscall *v4)(__m128 **); // eax
  __m128 *v5; // eax
  int v7[119]; // [esp+14h] [ebp-1F0h] BYREF
  unsigned int v8; // [esp+200h] [ebp-4h]

  sub_89F570(this);
  if ( this )
  {
    v3 = *(this + 2);
    if ( v3 )
    {
      bhkCharacterPointCollector::bhkCharacterPointCollector((bhkCharacterPointCollector *)v7, (int)(this + 4));
      v4 = (int (__thiscall *)(__m128 **))(*this)[5].m128_i32[2];
      v8 = 0;
      v5 = (__m128 *)v4(this);
      sub_8AD7D0(v3, a2, v5 + 2, v7, (int)(this + 4));
      sub_8CE8F0((int)(this + 4));
      v8 = 0xFFFFFFFF;
      bhkCharacterPointCollector::~bhkCharacterPointCollector((bhkCharacterPointCollector *)v7);
    }
  }
  return sub_89F570(this);
}
