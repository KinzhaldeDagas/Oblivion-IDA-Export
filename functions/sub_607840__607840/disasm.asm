0x607840: push    ecx
0x607841: test    ecx, ecx
0x607843: jz      short loc_607866
0x607845: mov     eax, [ecx+8]
0x607848: test    eax, eax
0x60784A: jz      short loc_607866
0x60784C: cmp     dword ptr [eax+8], 0
0x607850: setnz   al
0x607853: mov     [esp+4+var_1], al
0x607857: lea     eax, [esp+4+var_1]
0x60785B: xor     ecx, ecx
0x60785D: cmp     [eax], cl
0x60785F: setnz   cl
0x607862: mov     al, cl
0x607864: pop     ecx
0x607865: retn
0x607866: lea     eax, [esp+4+var_1]
0x60786A: xor     ecx, ecx
0x60786C: mov     [esp+4+var_1], 0
0x607871: cmp     [eax], cl
0x607873: setnz   cl
0x607876: mov     al, cl
0x607878: pop     ecx
0x607879: retn
