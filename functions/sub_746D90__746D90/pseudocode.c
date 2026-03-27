bool __thiscall sub_746D90(int this)
{
  unsigned int v1; // esi
  unsigned int v2; // eax
  unsigned __int16 *v3; // edx
  int v4; // edi
  unsigned __int16 *v5; // edx
  int v6; // edi
  bool result; // al

  v1 = 0;
  v2 = *(unsigned __int16 *)(this + 0x8C)
     + *(unsigned __int16 *)(this + 0x90)
     + *(unsigned __int16 *)(this + 0x94)
     + *(unsigned __int16 *)(this + 0x98)
     + *(unsigned __int16 *)(this + 0x9C)
     + *(unsigned __int16 *)(this + 0xA0)
     + *(unsigned __int16 *)(this + 0xA4);
  v3 = (unsigned __int16 *)(this + 0xA8);
  v4 = 0x79;
  do
  {
    v1 += *v3;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  v5 = (unsigned __int16 *)(this + 0x28C);
  v6 = 0x80;
  do
  {
    v2 += *v5;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  result = v2 <= v1 >> 2;
  *(_BYTE *)(this + 0x1C) = result;
  return result;
}
