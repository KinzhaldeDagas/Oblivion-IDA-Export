0x7DE390: push    esi
0x7DE391: mov     esi, ecx
0x7DE393: call    ??1WaterShaderDisplacement@@UAE@XZ; WaterShaderDisplacement::~WaterShaderDisplacement(void)
0x7DE398: test    byte ptr [esp+4+arg_0], 1
0x7DE39D: jz      short loc_7DE3A8
0x7DE39F: push    esi
0x7DE3A0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7DE3A5: add     esp, 4
0x7DE3A8: mov     eax, esi
0x7DE3AA: pop     esi
0x7DE3AB: retn    4
