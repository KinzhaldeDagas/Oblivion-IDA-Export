0x410110: push    edi
0x410111: mov     edi, [esp+4+arg_0]
0x410115: cmp     dword ptr [edi+40h], 0
0x410119: jz      short loc_410154
0x41011B: push    esi
0x41011C: xor     esi, esi
0x41011E: cmp     [edi+20h], esi
0x410121: jbe     short loc_410141
0x410123: mov     eax, [edi+40h]
0x410126: cmp     dword ptr [eax+esi*4], 0
0x41012A: lea     eax, [eax+esi*4]
0x41012D: jz      short loc_410139
0x41012F: mov     eax, [eax]
0x410131: mov     ecx, [eax]
0x410133: mov     edx, [ecx+8]
0x410136: push    eax
0x410137: call    edx
0x410139: add     esi, 1
0x41013C: cmp     esi, [edi+20h]
0x41013F: jb      short loc_410123
0x410141: push    edi; void *
0x410142: mov     ecx, offset FormHeap
0x410147: mov     dword ptr [edi+40h], 0
0x41014E: call    MemoryHeap_Free_checked
0x410153: pop     esi
0x410154: pop     edi
0x410155: retn
