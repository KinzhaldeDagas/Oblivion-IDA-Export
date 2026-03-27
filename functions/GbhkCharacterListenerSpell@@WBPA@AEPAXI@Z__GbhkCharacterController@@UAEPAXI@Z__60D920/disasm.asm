0x60D920: push    esi
0x60D921: mov     esi, ecx
0x60D923: call    ??1bhkCharacterController@@UAE@XZ; bhkCharacterController::~bhkCharacterController(void)
0x60D928: test    [esp+4+arg_0], 1
0x60D92D: jz      short loc_60D946
0x60D92F: test    esi, esi
0x60D931: jz      short loc_60D946
0x60D933: movzx   eax, byte ptr [esi-1]
0x60D937: mov     ecx, esi
0x60D939: sub     ecx, eax
0x60D93B: push    ecx; void *
0x60D93C: mov     ecx, offset FormHeap
0x60D941: call    MemoryHeap_Free_checked
0x60D946: mov     eax, esi
0x60D948: pop     esi
0x60D949: retn    4
