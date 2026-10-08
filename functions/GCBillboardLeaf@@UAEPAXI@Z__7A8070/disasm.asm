0x7A8070: push    esi; Oblivion CBillboardLeaf scalar deleting destructor. The 0x4C-byte leaf has no derived-owned allocation, so this wrapper invokes the shared CIdvCamera base destructor and frees through FormHeap only when flags bit 0 is set.
0x7A8071: mov     esi, ecx
0x7A8073: call    OB_CIdvCamera_dtor_010201A0; Oblivion CIdvCamera base destructor. Restores the CIdvCamera vftable; both CTreeEngine and CBillboardLeaf destructors call this shared base cleanup.
0x7A8078: test    byte ptr [esp+4+flags], 1
0x7A807D: jz      short loc_7A8088
0x7A807F: push    esi
0x7A8080: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A8085: add     esp, 4
0x7A8088: mov     eax, esi
0x7A808A: pop     esi
0x7A808B: retn    4
