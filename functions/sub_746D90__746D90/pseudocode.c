bool __thiscall sub_746D90(int this)
{
  unsigned int v1; // esi
  unsigned int v2; // eax
  unsigned __int16 *v3; // edx
  int v4; // edi
  unsigned __int16 *v5; // edx
  int v6; // edi
  bool result; // al

  v1 = 0; /*0x746dcd*/
  v2 = *(unsigned __int16 *)(this + 0x8C) /*0x746dd0*/
     + *(unsigned __int16 *)(this + 0x90)
     + *(unsigned __int16 *)(this + 0x94)
     + *(unsigned __int16 *)(this + 0x98)
     + *(unsigned __int16 *)(this + 0x9C)
     + *(unsigned __int16 *)(this + 0xA0)
     + *(unsigned __int16 *)(this + 0xA4);
  v3 = (unsigned __int16 *)(this + 0xA8); /*0x746dd2*/
  v4 = 0x79; /*0x746dd8*/
  do /*0x746deb*/
  {
    v1 += *v3; /*0x746de3*/
    v3 += 2; /*0x746de5*/
    --v4; /*0x746de8*/
  }
  while ( v4 ); /*0x746deb*/
  v5 = (unsigned __int16 *)(this + 0x28C); /*0x746ded*/
  v6 = 0x80; /*0x746df3*/
  do /*0x746e03*/
  {
    v2 += *v5; /*0x746dfb*/
    v5 += 2; /*0x746dfd*/
    --v6; /*0x746e00*/
  }
  while ( v6 ); /*0x746e03*/
  result = v2 <= v1 >> 2; /*0x746e0b*/
  *(_BYTE *)(this + 0x1C) = result; /*0x746e0f*/
  return result; /*0x746e0a*/
}
