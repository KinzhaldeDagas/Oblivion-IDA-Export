// Releases and clears TESNPC cached FaceGen nodes at +0x1D4/+0x1D8. SexChange invokes at 0x515A57 after live-node detachment, then actor-process refresh virtuals. OCO dossier hypothesis: double sex change may repair stale appearance by forcing these transitions; missing native LoadGame invalidation and sufficiency of this helper alone remain UNRESOLVED. Controlled capture plan in analysis/oco_load/investigation.json.
void __thiscall TESNPC_ClearFaceGenNodes(TESNPC *this)
{
  BSFaceGenNiNode *face0; // esi
  volatile LONG *face1; // esi
  volatile LONG *v4; // eax

  face0 = this->member.face0; /*0x405ceb*/
  if ( face0 ) /*0x405cf3*/
  {
    if ( !InterlockedDecrement((volatile LONG *)face0 + 1) ) /*0x405cf9*/
      (**(void (__thiscall ***)(BSFaceGenNiNode *, int))face0)(face0, 1); /*0x405d0b*/
    this->member.face0 = 0; /*0x405d0d*/
  }
  face1 = (volatile LONG *)this->member.face1; /*0x405d17*/
  if ( face1 != (volatile LONG *)this->member.face0 ) /*0x405d23*/
  {
    if ( face1 ) /*0x405d27*/
    {
      if ( !InterlockedDecrement(face1 + 1) ) /*0x405d2d*/
        (**(void (__thiscall ***)(volatile LONG *, int))face1)(face1, 1); /*0x405d3f*/
    }
    v4 = (volatile LONG *)this->member.face0; /*0x405d41*/
    this->member.face1 = (BSFaceGenNiNode *)v4; /*0x405d49*/
    if ( v4 ) /*0x405d4f*/
      InterlockedIncrement(v4 + 1); /*0x405d55*/
  }
}
