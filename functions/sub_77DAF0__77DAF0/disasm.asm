0x77DAF0: push    esi
0x77DAF1: push    edi
0x77DAF2: mov     edi, [esp+8+data]
0x77DAF6: mov     esi, [edi+38h]
0x77DAF9: test    esi, esi
0x77DAFB: jz      short loc_77DB1A
0x77DAFD: push    esi; buffer
0x77DAFE: call    NiGeometryGroup_RemoveBufferData; Pass225: Unlinks NiGeometryBufferData from owning group; decrements group refcount and clears buffer+0x04.
0x77DB03: mov     ecx, esi; this
0x77DB05: call    NiGeometryBufferData_Destroy; Pass225: Releases NiGeometryBufferData streams, index buffer, stream arrays, and vertex declaration before free.
0x77DB0A: push    esi
0x77DB0B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x77DB10: add     esp, 4
0x77DB13: mov     dword ptr [edi+38h], 0
0x77DB1A: pop     edi
0x77DB1B: pop     esi
0x77DB1C: retn    4
