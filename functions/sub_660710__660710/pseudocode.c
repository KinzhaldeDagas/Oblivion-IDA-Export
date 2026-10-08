void __thiscall sub_660710(_DWORD *this, int a2)
{
  double v3; // st6
  int v4; // eax
  float v5; // [esp+8h] [ebp+4h]

  if ( a2 > 0 ) /*0x660719*/
    *(this + 0x1BF) += a2; /*0x66071b*/
  v5 = (float)(int)*(this + 0x1BF); /*0x660727*/
  v3 = MEMORY[0xB36A68]; /*0x66072f*/
  if ( v3 <= v5 ) /*0x66073c*/
  {
    v4 = Double_To_SInt32(v5 - v3); /*0x660740*/
    ++*(this + 0x1BE); /*0x660745*/
    *(this + 0x1BF) = v4; /*0x66074c*/
  }
}
