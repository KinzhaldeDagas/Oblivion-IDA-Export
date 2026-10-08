//
// Verified: installs ChangesMap vtable, calls RemoveAllChanges 45A8B0, then pointer-map base destructor 45A620; owned values/buffers released before bucket storage.
void __thiscall ChangesMap::~ChangesMap(ChangesMap *self)
{
  self->vtbl = &ChangesMap::`vftable'; /*0x45f058*/
  ChangesMap_RemoveAllChanges(self); /*0x45f066*/
  NiTPointerMap<unsigned int,ChangeData *>::~NiTPointerMap<unsigned int,ChangeData *>((unsigned int *)self); /*0x45f075*/
}
