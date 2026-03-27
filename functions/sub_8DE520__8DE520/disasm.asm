0x8DE520: push    esi
0x8DE521: push    edi
0x8DE522: mov     esi, ecx
0x8DE524: mov     edi, [esi+60h]
0x8DE527: dec     edi
0x8DE528: js      short loc_8DE543
0x8DE52A: lea     ebx, [ebx+0]
0x8DE530: mov     eax, [esi+5Ch]
0x8DE533: mov     ecx, [eax+edi*4]
0x8DE536: test    ecx, ecx
0x8DE538: jz      short loc_8DE540
0x8DE53A: mov     edx, [ecx]
0x8DE53C: push    esi
0x8DE53D: call    dword ptr [edx+8]
0x8DE540: dec     edi
0x8DE541: jns     short loc_8DE530
0x8DE543: mov     edx, [esi+60h]
0x8DE546: dec     edx
0x8DE547: js      short loc_8DE587
0x8DE549: lea     esp, [esp+0]
0x8DE550: mov     eax, [esi+5Ch]
0x8DE553: cmp     dword ptr [eax+edx*4], 0
0x8DE557: jnz     short loc_8DE584
0x8DE559: mov     eax, [esi+60h]
0x8DE55C: dec     eax
0x8DE55D: mov     ecx, eax
0x8DE55F: cmp     edx, ecx
0x8DE561: mov     [esi+60h], eax
0x8DE564: mov     eax, edx
0x8DE566: jge     short loc_8DE584
0x8DE568: jmp     short loc_8DE570
0x8DE56A: align 10h
0x8DE570: mov     ecx, [esi+5Ch]
0x8DE573: mov     edi, [ecx+eax*4+4]
0x8DE577: lea     ecx, [ecx+eax*4]
0x8DE57A: mov     [ecx], edi
0x8DE57C: mov     ecx, [esi+60h]
0x8DE57F: inc     eax
0x8DE580: cmp     eax, ecx
0x8DE582: jl      short loc_8DE570
0x8DE584: dec     edx
0x8DE585: jns     short loc_8DE550
0x8DE587: pop     edi
0x8DE588: pop     esi
0x8DE589: retn
