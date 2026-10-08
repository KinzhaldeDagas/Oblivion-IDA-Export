0x7AA6C0: push    esi
0x7AA6C1: mov     esi, ecx
0x7AA6C3: call    BSTPersistentList_ReleaseFreeNodesToGlobalPool; Release only a BSTPersistentList's already-free node chain at +0x0C to the global NiTList node pool, then clear that free-chain pointer and terminate the active tail link. It never destroys active or free-node RenderPass payload pointers.
0x7AA6C8: mov     eax, [esi+4]
0x7AA6CB: mov     [esi+0Ch], eax
0x7AA6CE: xor     eax, eax
0x7AA6D0: mov     [esi+4], eax
0x7AA6D3: mov     [esi+8], eax
0x7AA6D6: mov     [esi+10h], eax
0x7AA6D9: pop     esi
0x7AA6DA: retn
