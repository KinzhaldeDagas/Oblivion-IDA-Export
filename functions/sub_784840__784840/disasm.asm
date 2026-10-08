0x784840: push    30h ; '0'; Allocates the 0x30-byte cache-map head/sentinel node from FormHeap. Initializes links to null, color=black (1), and isNil=0; global init converts it into the self-linked nil sentinel.
0x784842: call    FormHeapAlloc
0x784847: add     esp, 4
0x78484A: test    eax, eax
0x78484C: jz      short loc_784854
0x78484E: mov     dword ptr [eax], 0
0x784854: lea     ecx, [eax+4]
0x784857: test    ecx, ecx
0x784859: jz      short loc_784861
0x78485B: mov     dword ptr [ecx], 0
0x784861: lea     ecx, [eax+8]
0x784864: test    ecx, ecx
0x784866: jz      short loc_78486E
0x784868: mov     dword ptr [ecx], 0
0x78486E: mov     byte ptr [eax+2Ch], 1
0x784872: mov     byte ptr [eax+2Dh], 0
0x784876: retn
