0x88D230: push    esi
0x88D231: mov     esi, ecx
0x88D233: call    ??1bhkWorld@@UAE@XZ; bhkWorld::~bhkWorld(void)
0x88D238: test    byte ptr [esp+4+arg_0], 1
0x88D23D: jz      short loc_88D256
0x88D23F: test    esi, esi
0x88D241: jz      short loc_88D256
0x88D243: movzx   eax, byte ptr [esi-1]
0x88D247: mov     ecx, esi
0x88D249: sub     ecx, eax
0x88D24B: push    ecx; void *
0x88D24C: mov     ecx, offset FormHeap
0x88D251: call    MemoryHeap_Free_checked
0x88D256: mov     eax, esi
0x88D258: pop     esi
0x88D259: retn    4
