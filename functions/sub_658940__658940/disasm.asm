0x658940: mov     eax, [esp+owner]
0x658944: push    esi
0x658945: push    edi
0x658946: mov     edi, [esp+8+changeMask]
0x65894A: push    eax; owner
0x65894B: push    edi; changeMask
0x65894C: mov     esi, ecx
0x65894E: call    LowProcess_Revert
0x658953: test    edi, 100000h
0x658959: jz      short loc_658966
0x65895B: lea     ecx, [esi+94h]; self
0x658961: call    AVCollection_Clear
0x658966: pop     edi
0x658967: pop     esi
0x658968: retn    8
