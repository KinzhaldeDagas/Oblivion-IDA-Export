0x4E5170: push    ecx; Verified — for pointsByReference[reference], sets every listed node's linkedPointsDisabled flag to !enabled. When disabling and at least one point was found, calls parentCell->MarkAsModified(0x01000000). The exact semantic meaning of this modification mask is Unknown from this call site.
0x4E5171: push    edi
0x4E5172: mov     edi, ecx
0x4E5174: mov     ecx, [esp+8+reference]
0x4E5178: lea     eax, [esp+8+var_4]
0x4E517C: push    eax
0x4E517D: push    ecx
0x4E517E: lea     ecx, [edi+34h]
0x4E5181: mov     [esp+10h+var_4], 0
0x4E5189: call    NiTMap_GetAt
0x4E518E: test    al, al
0x4E5190: jz      short loc_4E51DC
0x4E5192: push    ebx
0x4E5193: mov     bl, [esp+0Ch+enabled]
0x4E5197: push    esi
0x4E5198: mov     esi, [esp+10h+var_4]
0x4E519C: xor     al, al
0x4E519E: test    esi, esi
0x4E51A0: jz      short loc_4E51C3
0x4E51A2: cmp     dword ptr [esi+4], 0
0x4E51A6: jnz     short loc_4E51AD
0x4E51A8: cmp     dword ptr [esi], 0
0x4E51AB: jz      short loc_4E51C3
0x4E51AD: mov     ecx, [esi]; this
0x4E51AF: test    bl, bl
0x4E51B1: setz    dl
0x4E51B4: push    edx; value
0x4E51B5: call    PathGraphNode_SetLinkedPointsDisabled; Verified sets/clears the PathGrid linked-points-disabled flag (0x20). SetLinkedPointsEnabled stores the inverse of its enabled argument.
0x4E51BA: mov     esi, [esi+4]
0x4E51BD: test    esi, esi
0x4E51BF: mov     al, 1
0x4E51C1: jnz     short loc_4E51A2
0x4E51C3: pop     esi
0x4E51C4: test    bl, bl
0x4E51C6: pop     ebx
0x4E51C7: jnz     short loc_4E51DC
0x4E51C9: test    al, al
0x4E51CB: jz      short loc_4E51DC
0x4E51CD: mov     ecx, [edi+20h]
0x4E51D0: mov     eax, [ecx]
0x4E51D2: mov     edx, [eax+40h]
0x4E51D5: push    1000000h
0x4E51DA: call    edx
0x4E51DC: pop     edi
0x4E51DD: pop     ecx
0x4E51DE: retn    8
