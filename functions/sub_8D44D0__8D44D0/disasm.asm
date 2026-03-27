0x8D44D0: push    ecx
0x8D44D1: push    ebx
0x8D44D2: mov     ebx, [esp+8+arg_0]
0x8D44D6: push    ebp
0x8D44D7: push    esi
0x8D44D8: mov     esi, [esp+10h+arg_8]
0x8D44DC: mov     dword ptr [esi+3034h], 7F7FFFFFh
0x8D44E6: mov     dword ptr [esi+3040h], 0
0x8D44F0: lea     ebp, [esi+30h]
0x8D44F3: mov     [esi], ebp
0x8D44F5: movsx   eax, byte ptr [ebx+8]
0x8D44F9: imul    eax, 3Ch ; '<'
0x8D44FC: push    edi
0x8D44FD: mov     edi, [esp+14h+arg_4]
0x8D4501: mov     [esp+14h+var_4], ecx
0x8D4505: mov     ecx, [edi]
0x8D4507: lea     eax, [eax+ecx+1A14h]
0x8D450E: push    esi
0x8D450F: mov     [edi+28h], eax
0x8D4512: mov     dl, [eax+10h]
0x8D4515: push    edi
0x8D4516: push    ebx
0x8D4517: mov     [edi+0Ch], dl
0x8D451A: call    sub_8E6D10
0x8D451F: mov     ecx, ds:0BA7D98h
0x8D4525: mov     edx, [ecx+14h]
0x8D4528: mov     eax, [ecx+28h]
0x8D452B: add     eax, edx
0x8D452D: mov     edx, [ecx+8]
0x8D4530: add     esp, 0Ch
0x8D4533: cmp     edx, eax
0x8D4535: jle     short loc_8D453F
0x8D4537: sub     edx, eax
0x8D4539: mov     [esp+14h+arg_8], edx
0x8D453D: jnz     short loc_8D454C
0x8D453F: mov     dword ptr [ecx+4], 1
0x8D4546: mov     ecx, ds:0BA7D98h
0x8D454C: cmp     dword ptr [ecx+4], 1
0x8D4550: jz      short loc_8D4586
0x8D4552: cmp     [esi], ebp
0x8D4554: jz      short loc_8D4568
0x8D4556: mov     edx, [ebx+18h]
0x8D4559: mov     ecx, [ebx+10h]
0x8D455C: mov     eax, [ecx]
0x8D455E: push    esi
0x8D455F: push    edi
0x8D4560: push    edx
0x8D4561: mov     edx, [ebx+14h]
0x8D4564: push    edx
0x8D4565: call    dword ptr [eax+14h]
0x8D4568: fld     dword ptr [esi+3034h]
0x8D456E: fcomp   dword ptr ds:0A9A020h
0x8D4574: fnstsw  ax
0x8D4576: test    ah, 5
0x8D4579: jp      short loc_8D4586
0x8D457B: mov     ecx, [esp+14h+var_4]
0x8D457F: push    ebx
0x8D4580: push    esi
0x8D4581: call    sub_8D3600
0x8D4586: pop     edi
0x8D4587: pop     esi
0x8D4588: pop     ebp
0x8D4589: pop     ebx
0x8D458A: pop     ecx
0x8D458B: retn    0Ch
