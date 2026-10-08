0x67ED70: movzx   eax, byte ptr [ecx+10h]; Verified returns PathGrid point flag 0x20, which is the linked-points-disabled state: SetLinkedPointsEnabled stores the inverse of its enabled argument, save/load persists flagged indices, searches skip flagged nodes, and renderer marks them wireframe.
0x67ED74: shr     eax, 5
0x67ED77: and     al, 1
0x67ED79: retn
