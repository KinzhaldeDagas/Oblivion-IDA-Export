// ODismemberment authority: resolves actor blood decal texture path through actor-base virtual +0x38, falling back below to default sBloodTextureDefault path.
const char *__thiscall Actor_GetBloodDecalTexturePath(Actor *self)
{
  TESForm *v2; // ebx
  TESForm *v3; // edi

  v2 = 0; /*0x5e1bbd*/
  v3 = self->vtbl->super.super.GetBaseForm(self); /*0x5e1bc1*/
  if ( v3 ) /*0x5e1bc5*/
  {
    if ( self->vtbl->super.super.IsActor((TESObjectREFR *)self) ) /*0x5e1bd1*/
      v2 = v3; /*0x5e1bd7*/
  }
  return (*(const char *(__thiscall **)(UInt32 *))(v2[1].member.refID + 0x38))(&v2[1].member.refID); /*0x5e1be3*/
}
