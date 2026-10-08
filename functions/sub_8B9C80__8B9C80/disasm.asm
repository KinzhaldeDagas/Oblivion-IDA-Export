0x8B9C80: push    esi; TES4 authoritative: controller/proxy vtable +0x58 target. Returns runtime context pointer by reading proxy+0x8 collision wrapper, wrapper+0x30 Havok object, then Havok object+0x8. State code reads up/gravity basis at returned+0x20.
0x8B9C81: xor     esi, esi
0x8B9C83: test    ecx, ecx
0x8B9C85: jz      short loc_8B9C9C
0x8B9C87: mov     ecx, [ecx+8]
0x8B9C8A: test    ecx, ecx
0x8B9C8C: jz      short loc_8B9C9C
0x8B9C8E: call    bhkCollisionWrapper_GetHavokObject; bhk collision wrapper accessor: returns stored low-level Havok object pointer at wrapper+0x30.
0x8B9C93: test    eax, eax
0x8B9C95: jz      short loc_8B9C9C; Requires proxy+0x8 collision wrapper and wrapper+0x30 Havok object before returning context.
0x8B9C97: mov     eax, [eax+8]; Returns *(havokObject+0x8); state routines then read hkVector4 at +0x20 as runtime up/gravity basis.
0x8B9C9A: pop     esi
0x8B9C9B: retn
0x8B9C9C: mov     eax, esi
0x8B9C9E: pop     esi
0x8B9C9F: retn
