//
//
// [2026-10-03 frond material partitions] Verified NiNode allocation size 0xDC; thiscall constructor takes initial child capacity as WORD in a four-byte stack slot. Capacity 0 is used by plugin material-group construction; AddObject owns each child. Fallout NiNode ctor 0x821F1FC8 corroborates child-array role but uses its platform uint capacity/layout. Plugin now creates one hidden NiNode per frond LOD and one NiTriShape per material/capacity partition; native reference ownership handles partial construction cleanup.
NiNode *__thiscall NiNode::NiNode(NiNode *this, unsigned __int16 a2)
{
  NiAVObject::NiAVObject((NiAVObject *)this); /*0x70b7a9*/
  this->vtbl = (NiNodeVtbl *)&NiNode::`vftable'; /*0x70b7c1*/
  OB_NiAVObjectPointerArray_ctor_010201A0(&this->members.children, a2, 1); /*0x70b7c7*/
  this->members.effects.numItems = 0; /*0x70b7cc*/
  this->members.effects.head = 0; /*0x70b7d2*/
  this->members.effects.end = 0; /*0x70b7d8*/
  this->members.effects.vtlb = &NiTPointerList<NiDynamicEffect *>::`vftable'; /*0x70b7de*/
  return this; /*0x70b7ea*/
}
