// Identity helper used before actor list iteration; callers then treat the returned pointer as tList node {Actor* item, Node* next}.
// DX11 verified shared identity alias: source data vtable+1C and rendered data vtable+18 return this (MOV EAX,ECX; RET). No unique actor type inference.
Actor *__thiscall ActorList_ReturnHead(ActorList *this)
{
  return (Actor *)this; /*0x7616d2*/
}
