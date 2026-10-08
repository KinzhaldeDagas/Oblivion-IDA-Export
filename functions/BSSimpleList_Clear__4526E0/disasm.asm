0x4526E0: push    esi; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x4526E1: mov     esi, ecx
0x4526E3: cmp     dword ptr [esi+4], 0
0x4526E7: jz      short BSSimpleList_Clear___ClearThisNodeData
0x4526E9: push    edi
0x4526EA: lea     ebx, [ebx+0]
