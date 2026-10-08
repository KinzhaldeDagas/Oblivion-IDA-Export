// Generic pass allocation helper used by shader vtables: allocates/assigns an inherited pass pointer slot, not frond-specific by itself.
char __thiscall sub_801380(BSShader *this)
{
  UInt32 *v2; // edi
  NiD3DPass *Unk070; // ecx
  bool v4; // zf
  UInt32 v5; // eax
  NiD3DPass *v6; // eax
  NiD3DPass *v8; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = (UInt32 *)NiD3DPassPool_Acquire(&v8); /*0x8013b2*/
  Unk070 = (NiD3DPass *)this->member.Unk070; /*0x8013b4*/
  v4 = Unk070 == (NiD3DPass *)*v2; /*0x8013b7*/
  v9 = 0; /*0x8013b9*/
  if ( !v4 ) /*0x8013c1*/
  {
    if ( Unk070 ) /*0x8013c5*/
    {
      v4 = Unk070->RefCount-- == 1; /*0x8013c7*/
      if ( v4 ) /*0x8013cb*/
        NiD3DPass_ReleaseToPool(Unk070); /*0x8013cd*/
    }
    v5 = *v2; /*0x8013d2*/
    v4 = *v2 == 0; /*0x8013d4*/
    this->member.Unk070 = *v2; /*0x8013d6*/
    if ( !v4 ) /*0x8013d9*/
      ++*(_DWORD *)(v5 + 0x60); /*0x8013db*/
  }
  v6 = v8; /*0x8013df*/
  v9 = 0xFFFFFFFF; /*0x8013e5*/
  if ( v8 ) /*0x8013ed*/
  {
    --v8->RefCount; /*0x8013ef*/
    if ( !v6->RefCount ) /*0x8013f8*/
      NiD3DPass_ReleaseToPool(v6); /*0x8013fd*/
  }
  return 1; /*0x801404*/
}
