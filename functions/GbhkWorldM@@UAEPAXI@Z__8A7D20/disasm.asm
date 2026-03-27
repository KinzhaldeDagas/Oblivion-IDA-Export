0x8A7D20: push    esi
0x8A7D21: mov     esi, ecx
0x8A7D23: mov     dword ptr [esi], offset ??_7bhkWorldM@@6B@; const bhkWorldM::`vftable'
0x8A7D29: call    ??1bhkWorld@@UAE@XZ; bhkWorld::~bhkWorld(void)
0x8A7D2E: test    byte ptr [esp+4+arg_0], 1
0x8A7D33: jz      short loc_8A7D48
0x8A7D35: movzx   eax, byte ptr [esi-1]
0x8A7D39: mov     ecx, esi
0x8A7D3B: sub     ecx, eax
0x8A7D3D: push    ecx; void *
0x8A7D3E: mov     ecx, offset FormHeap
0x8A7D43: call    MemoryHeap_Free_checked
0x8A7D48: mov     eax, esi
0x8A7D4A: pop     esi
0x8A7D4B: retn    4
