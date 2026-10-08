// TES4 authoritative: controller/proxy vtable +0x58 target. Returns runtime context pointer by reading proxy+0x8 collision wrapper, wrapper+0x30 Havok object, then Havok object+0x8. State code reads up/gravity basis at returned+0x20.
int __thiscall bhkCharacterProxy_GetRuntimeContext(_DWORD *this)
{                                               // Requires proxy+0x8 collision wrapper and wrapper+0x30 Havok object before returning context.
  _DWORD *v1; // ecx
  int HavokObject; // eax

  if ( this && (v1 = (_DWORD *)*(this + 2)) != 0 && (HavokObject = bhkCollisionWrapper_GetHavokObject(v1)) != 0 ) /*0x8b9c95*/
    return *(_DWORD *)(HavokObject + 8);        // Returns *(havokObject+0x8); state routines then read hkVector4 at +0x20 as runtime up/gravity basis. /*0x8b9c97*/
  else
    return 0; /*0x8b9c9c*/
}
