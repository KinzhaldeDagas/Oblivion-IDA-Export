0x8B9120: push    esi
0x8B9121: mov     esi, ecx
0x8B9123: call    ??1bhkRigidBodyT@@UAE@XZ; bhkRigidBodyT::~bhkRigidBodyT(void)
0x8B9128: test    byte ptr [esp+4+arg_0], 1
0x8B912D: jz      short loc_8B9146
0x8B912F: test    esi, esi
0x8B9131: jz      short loc_8B9146
0x8B9133: movzx   eax, byte ptr [esi-1]
0x8B9137: mov     ecx, esi
0x8B9139: sub     ecx, eax
0x8B913B: push    ecx; void *
0x8B913C: mov     ecx, offset FormHeap
0x8B9141: call    MemoryHeap_Free_checked
0x8B9146: mov     eax, esi
0x8B9148: pop     esi
0x8B9149: retn    4
