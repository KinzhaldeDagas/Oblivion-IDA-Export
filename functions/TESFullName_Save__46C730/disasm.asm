0x46C730: movzx   eax, word ptr [ecx+8]
0x46C734: cmp     ax, 0FFFFh
0x46C738: push    esi
0x46C739: jnz     short loc_46C74E
0x46C73B: mov     eax, [ecx+4]
0x46C73E: lea     esi, [eax+1]
0x46C741: mov     dl, [eax]
0x46C743: add     eax, 1
0x46C746: test    dl, dl
0x46C748: jnz     short loc_46C741
0x46C74A: sub     eax, esi
0x46C74C: jmp     short loc_46C751
0x46C74E: movzx   eax, ax
0x46C751: test    eax, eax
0x46C753: jz      short loc_46C793
0x46C755: movzx   eax, word ptr [ecx+8]
0x46C759: cmp     ax, 0FFFFh
0x46C75D: jnz     short loc_46C772
0x46C75F: mov     eax, [ecx+4]
0x46C762: lea     esi, [eax+1]
0x46C765: mov     dl, [eax]
0x46C767: add     eax, 1
0x46C76A: test    dl, dl
0x46C76C: jnz     short loc_46C765
0x46C76E: sub     eax, esi
0x46C770: jmp     short loc_46C775
0x46C772: movzx   eax, ax
0x46C775: mov     ecx, [ecx+4]
0x46C778: test    ecx, ecx
0x46C77A: jnz     short loc_46C781
0x46C77C: mov     ecx, offset EmptyString
0x46C781: add     eax, 1
0x46C784: push    eax
0x46C785: push    ecx
0x46C786: push    4C4C5546h
0x46C78B: call    j_TESForm_PutCurrentChunkData
0x46C790: add     esp, 0Ch
0x46C793: pop     esi
0x46C794: retn
