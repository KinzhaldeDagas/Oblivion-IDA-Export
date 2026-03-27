0x8F78F0: mov     eax, [esp+arg_C]
0x8F78F4: mov     edx, [esp+arg_0]
0x8F78F8: push    ebx
0x8F78F9: mov     ebx, ecx
0x8F78FB: mov     [ebx+8], eax
0x8F78FE: push    esi
0x8F78FF: lea     esi, [ebx+0Ch]
0x8F7902: mov     word ptr [ebx+6], 1
0x8F7908: mov     dword ptr [ebx], offset off_A9B5CC
0x8F790E: lea     ecx, [esi+0Ch]
0x8F7911: mov     [esi], ecx
0x8F7913: mov     dword ptr [esi+4], 0
0x8F791A: mov     dword ptr [esi+8], 80000004h
0x8F7921: mov     eax, [edx]
0x8F7923: push    edi
0x8F7924: mov     edi, [eax+10h]
0x8F7927: mov     eax, [esi+8]
0x8F792A: and     eax, 3FFFFFFFh
0x8F792F: cmp     eax, edi
0x8F7931: jge     short loc_8F7947
0x8F7933: add     eax, eax
0x8F7935: cmp     edi, eax
0x8F7937: jl      short loc_8F793B
0x8F7939: mov     eax, edi
0x8F793B: push    2
0x8F793D: push    eax
0x8F793E: push    esi
0x8F793F: call    sub_8A6E40
0x8F7944: add     esp, 0Ch
0x8F7947: xor     eax, eax
0x8F7949: test    edi, edi
0x8F794B: mov     [esi+4], edi
0x8F794E: jle     short loc_8F795D
0x8F7950: mov     ecx, [esi]
0x8F7952: mov     word ptr [ecx+eax*2], 0FFFFh
0x8F7958: inc     eax
0x8F7959: cmp     eax, edi
0x8F795B: jl      short loc_8F7950
0x8F795D: pop     edi
0x8F795E: pop     esi
0x8F795F: mov     eax, ebx
0x8F7961: pop     ebx
0x8F7962: retn    10h
