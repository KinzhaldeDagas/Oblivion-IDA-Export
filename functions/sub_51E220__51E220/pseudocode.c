// Verified: component vslot +0x3C assigns bloodDecal.path at complete creature +0x138 (component +0x114) using BSStringT_Set(path,0). The BSStringT_Set return is an incidental value; setter interface is void.
void __thiscall TESCreature_SetBloodTexturePath(TESActorBaseData *__shifted(TESCreature,0x24) self, const char *path)
{
  BSStringT_Set(&ADJ(self)->bloodDecal.path, path, 0); /*0x51e22d*/
}
