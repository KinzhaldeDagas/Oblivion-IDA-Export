0x67F030: sub     esp, 8; Verified Oblivion AStarNodeList pop scans from start through each node's next link, compares F cost at graph-node+0, unlinks the lowest-F entry, and returns the generic graph-node pointer. Fallout's inspected NavMesh AStarQueue instead selects the first nonempty F bucket among 20.
0x67F033: mov     edx, [ecx+4]
0x67F036: fld     dword ptr ds:0A32048h
0x67F03C: push    ebx
0x67F03D: fstp    [esp+0Ch+var_8]
0x67F041: push    edi
0x67F042: xor     ebx, ebx
0x67F044: xor     edi, edi
0x67F046: test    edx, edx
0x67F048: mov     [esp+10h+node], ebx
0x67F04C: jz      short loc_67F08D
0x67F04E: push    esi
0x67F04F: nop
0x67F050: mov     esi, [edx+8]
0x67F053: test    esi, esi
0x67F055: jz      short loc_67F070
0x67F057: fld     dword ptr [esi]
0x67F059: fld     [esp+14h+var_8]
0x67F05D: fcompp
0x67F05F: fnstsw  ax
0x67F061: test    ah, 41h
0x67F064: jnz     short loc_67F070
0x67F066: fld     dword ptr [esi]
0x67F068: mov     edi, esi
0x67F06A: fstp    [esp+14h+var_8]
0x67F06E: mov     ebx, edx
0x67F070: mov     edx, [edx]
0x67F072: test    edx, edx
0x67F074: jnz     short loc_67F050
0x67F076: test    edi, edi
0x67F078: mov     [esp+14h+node], ebx
0x67F07C: pop     esi
0x67F07D: jz      short loc_67F08D
0x67F07F: test    ebx, ebx
0x67F081: jz      short loc_67F08D
0x67F083: lea     eax, [esp+10h+node]
0x67F087: push    eax; node
0x67F088: call    NiTPointerList_RemoveNode; [Verified] Generic NiTPointerList node-removal helper. Unlinks the supplied node, updates head/tail and neighboring links, invokes the list's FreeNode vfunc, decrements item count, and returns the removed node's data pointer.
0x67F08D: mov     eax, edi
0x67F08F: pop     edi
0x67F090: pop     ebx
0x67F091: add     esp, 8
0x67F094: retn
