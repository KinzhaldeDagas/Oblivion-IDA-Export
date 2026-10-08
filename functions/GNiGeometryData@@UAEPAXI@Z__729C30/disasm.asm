0x729C30: push    esi
0x729C31: mov     esi, ecx
0x729C33: call    ??1NiGeometryData@@UAE@XZ;
0x729C38: test    byte ptr [esp+4+arg_0], 1
0x729C3D: jz      short loc_729C48
0x729C3F: push    esi
0x729C40: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x729C45: add     esp, 4
0x729C48: mov     eax, esi
0x729C4A: pop     esi
0x729C4B: retn    4
