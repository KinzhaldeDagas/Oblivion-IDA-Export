0x77D810: push    esi; Pass225: NiUnsharedGeometryGroup remove; releases buffer resources, frees NiGeometryBufferData, and clears screenTexture +0x1C.
0x77D811: push    edi
0x77D812: mov     edi, [esp+8+arg_0]
0x77D816: mov     esi, [edi+1Ch]
0x77D819: test    esi, esi
0x77D81B: jz      short loc_77D83A
0x77D81D: push    esi; buffer
0x77D81E: call    NiGeometryGroup_RemoveBufferData; Pass225: Unlinks NiGeometryBufferData from owning group; decrements group refcount and clears buffer+0x04.
0x77D823: mov     ecx, esi; this
0x77D825: call    NiGeometryBufferData_Destroy; Pass225: Releases NiGeometryBufferData streams, index buffer, stream arrays, and vertex declaration before free.
0x77D82A: push    esi
0x77D82B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x77D830: add     esp, 4
0x77D833: mov     dword ptr [edi+1Ch], 0
0x77D83A: pop     edi
0x77D83B: pop     esi
0x77D83C: retn    4
