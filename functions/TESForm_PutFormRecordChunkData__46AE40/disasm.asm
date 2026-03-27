0x46AE40: mov     eax, [esp+Size]
0x46AE44: cmp     eax, 0FFFFh
0x46AE49: push    esi
0x46AE4A: push    edi
0x46AE4B: movzx   edi, ax
0x46AE4E: jbe     short loc_46AE6A
0x46AE50: push    4; Size
0x46AE52: lea     eax, [esp+0Ch+Size]
0x46AE56: push    eax; Src
0x46AE57: push    58585858h; int
0x46AE5C: call    TESForm_PutFormRecordChunkData
0x46AE61: mov     eax, [esp+14h+Size]
0x46AE65: add     esp, 0Ch
0x46AE68: xor     edi, edi
0x46AE6A: mov     esi, ds:0B33C18h
0x46AE70: mov     ecx, ds:0B33C14h
0x46AE76: lea     eax, [esi+eax+6]
0x46AE7A: push    eax; NewSize
0x46AE7B: push    ecx; Src
0x46AE7C: mov     ecx, offset FormHeap
0x46AE81: mov     ds:0B33C18h, eax
0x46AE86: call    MemoryHeap_Reallocate
0x46AE8B: mov     edx, [esp+8+arg_0]
0x46AE8F: mov     ds:0B33C14h, eax
0x46AE94: add     eax, esi
0x46AE96: mov     [eax+4], di
0x46AE9A: mov     ecx, edx
0x46AE9C: mov     [eax], ecx
0x46AE9E: mov     dx, [eax+4]
0x46AEA2: mov     ecx, [esp+8+Src]
0x46AEA6: mov     [eax+4], dx
0x46AEAA: mov     eax, [esp+8+Size]
0x46AEAE: mov     edx, ds:0B33C14h
0x46AEB4: push    eax; Size
0x46AEB5: push    ecx; Src
0x46AEB6: lea     eax, [edx+esi+6]
0x46AEBA: push    eax; Dst
0x46AEBB: call    _memcpy
0x46AEC0: add     esp, 0Ch
0x46AEC3: pop     edi
0x46AEC4: pop     esi
0x46AEC5: retn
