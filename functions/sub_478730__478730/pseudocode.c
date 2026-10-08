// Constructs a 0x154-byte ActorSkinInfo: clears exactly 0x154 bytes, stores the owning Actor at byte offset +0x150, and optionally caches exact-name model nodes from rootNode.
ActorSkinInfo *__thiscall ActorSkinInfo_ctor(ActorSkinInfo *this, Actor *owner, NiNode *rootNode)
{
  _memset((int)this, 0, sizeof(ActorSkinInfo)); /*0x47873b*/
  _memset((int)unk_B33C80, 0, 0x100u); /*0x47874c*/
  this->owner = owner; /*0x478755*/
  if ( rootNode ) /*0x478764*/
    ActorSkinInfo_CacheNamedNodes(this, rootNode); /*0x478769*/
  return this; /*0x478770*/
}
