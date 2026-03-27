0x46E460: mov     eax, [ecx+4]
0x46E463: test    eax, eax
0x46E465: jz      short locret_46E478
0x46E467: mov     eax, [eax+0Ch]
0x46E46A: push    eax
0x46E46B: push    4D414E52h
0x46E470: call    TESForm_PutCurrentChunkData4
0x46E475: add     esp, 8
0x46E478: retn
