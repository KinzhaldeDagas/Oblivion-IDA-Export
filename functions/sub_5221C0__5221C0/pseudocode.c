// Builds absolute FaceGen parameters by combining race base with active NPC delta. CORRECTION: bank selection uses base actor value 0x45 (vampirism), zero -> +0x108, nonzero -> +0x168; earlier sex-selected description was incorrect. Null race copies manager default parameters.
void __thiscall TESNPC_BuildAbsoluteFaceGenParameters(const TESNPC *this, FaceGenHeadParameters *outAbsolute)
{
  const FaceGenHeadParameters *v3; // eax
  bool v4; // zf
  NPC_Unk *unk2; // eax

  FaceGenHeadParameters_Initialize(outAbsolute); /*0x5221c9*/
  if ( this->member.form.race ) /*0x5221d1*/
  {
    v4 = ((int (__thiscall *)(const TESNPC *, int))this->vtbl[1].super.super.super.Unk_0B)(this, 0x45) == 0; /*0x5221fc*/
    unk2 = this->member.unk2; /*0x5221fe*/
    if ( v4 ) /*0x522204*/
      unk2 = this->member.unk1; /*0x522206*/
    FaceGenHeadParameters_Combine( /*0x522222*/
      (const FaceGenHeadParameters *)this->member.form.race->unk12,
      (const FaceGenHeadParameters *)unk2,
      outAbsolute,
      0,
      0.0);
  }
  else
  {
    v3 = (const FaceGenHeadParameters *)FaceGenManager_GetDefaultHeadParameters(); /*0x5221db*/
    FaceGenHeadParameters_Copy(v3, outAbsolute); /*0x5221e1*/
  }
}
