0x65C710: push    esi
0x65C711: push    edi
0x65C712: mov     edi, [esp+8+arg_4]
0x65C716: test    edi, edi
0x65C718: mov     esi, ecx
0x65C71A: jnz     short loc_65C725
0x65C71C: cmp     [esi+10h], edi
0x65C71F: jz      AVCollection_AddToArray___Done
0x65C725: push    ebx
0x65C726: mov     ebx, [esp+0Ch+arg_0]
0x65C72A: push    ebx
0x65C72B: call    AVCollection_RemoveArrayNode
0x65C730: test    edi, edi
0x65C732: jz      AVCollection_AddToArray___def_65C77D; jumptable 0065C77D default case, cases 1-3,9,10,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65C738: fldz
0x65C73A: fcomp   dword ptr [edi+4]
0x65C73D: fnstsw  ax
0x65C73F: test    ah, 44h
0x65C742: jnp     AVCollection_AddToArray___def_65C77D; jumptable 0065C77D default case, cases 1-3,9,10,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65C748: cmp     dword ptr [esi+10h], 0
0x65C74C: jnz     short loc_65C76A
0x65C74E: push    48h ; 'H'; Size
0x65C750: call    FormHeapAlloc
0x65C755: add     esp, 4
0x65C758: test    eax, eax
0x65C75A: jz      short loc_65C765
0x65C75C: mov     ecx, eax
0x65C75E: call    AVCollection_InitArray
0x65C763: jmp     short loc_65C767
0x65C765: xor     eax, eax
0x65C767: mov     [esi+10h], eax
0x65C76A: movsx   eax, bl
0x65C76D: cmp     eax, 38h; switch 57 cases
0x65C770: ja      AVCollection_AddToArray___def_65C77D; jumptable 0065C77D default case, cases 1-3,9,10,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65C776: movzx   eax, ds:byte_65C8A8[eax]
0x65C77D: jmp     ds:jpt_65C77D[eax*4]; switch jump
0x65C784: mov     ecx, [esi+10h]; jumptable 0065C77D case 8
0x65C787: pop     ebx
0x65C788: mov     [ecx], edi
0x65C78A: pop     edi
0x65C78B: pop     esi
0x65C78C: retn    8
0x65C78F: mov     edx, [esi+10h]; jumptable 0065C77D case 11
0x65C792: pop     ebx
0x65C793: mov     [edx+4], edi
0x65C796: pop     edi
0x65C797: pop     esi
0x65C798: retn    8
0x65C79B: mov     eax, [esi+10h]; jumptable 0065C77D case 40
0x65C79E: pop     ebx
0x65C79F: mov     [eax+8], edi
0x65C7A2: pop     edi
0x65C7A3: pop     esi
0x65C7A4: retn    8
0x65C7A7: mov     ecx, [esi+10h]; jumptable 0065C77D case 48
0x65C7AA: pop     ebx
0x65C7AB: mov     [ecx+0Ch], edi
0x65C7AE: pop     edi
0x65C7AF: pop     esi
0x65C7B0: retn    8
0x65C7B3: mov     edx, [esi+10h]; jumptable 0065C77D case 36
0x65C7B6: pop     ebx
0x65C7B7: mov     [edx+10h], edi
0x65C7BA: pop     edi
0x65C7BB: pop     esi
0x65C7BC: retn    8
0x65C7BF: mov     eax, [esi+10h]; jumptable 0065C77D case 49
0x65C7C2: pop     ebx
0x65C7C3: mov     [eax+14h], edi
0x65C7C6: pop     edi
0x65C7C7: pop     esi
0x65C7C8: retn    8
0x65C7CB: mov     ecx, [esi+10h]; jumptable 0065C77D case 6
0x65C7CE: pop     ebx
0x65C7CF: mov     [ecx+18h], edi
0x65C7D2: pop     edi
0x65C7D3: pop     esi
0x65C7D4: retn    8
0x65C7D7: mov     edx, [esi+10h]; jumptable 0065C77D case 56
0x65C7DA: pop     ebx
0x65C7DB: mov     [edx+1Ch], edi
0x65C7DE: pop     edi
0x65C7DF: pop     esi
0x65C7E0: retn    8
0x65C7E3: mov     eax, [esi+10h]; jumptable 0065C77D case 46
0x65C7E6: pop     ebx
0x65C7E7: mov     [eax+20h], edi
0x65C7EA: pop     edi
0x65C7EB: pop     esi
0x65C7EC: retn    8
0x65C7EF: mov     ecx, [esi+10h]; jumptable 0065C77D case 47
0x65C7F2: pop     ebx
0x65C7F3: mov     [ecx+24h], edi
0x65C7F6: pop     edi
0x65C7F7: pop     esi
0x65C7F8: retn    8
0x65C7FB: mov     edx, [esi+10h]; jumptable 0065C77D case 41
0x65C7FE: pop     ebx
0x65C7FF: mov     [edx+28h], edi
0x65C802: pop     edi
0x65C803: pop     esi
0x65C804: retn    8
0x65C807: mov     eax, [esi+10h]; jumptable 0065C77D case 33
0x65C80A: pop     ebx
0x65C80B: mov     [eax+2Ch], edi
0x65C80E: pop     edi
0x65C80F: pop     esi
0x65C810: retn    8
0x65C813: mov     ecx, [esi+10h]; jumptable 0065C77D case 26
0x65C816: pop     ebx
0x65C817: mov     [ecx+30h], edi
0x65C81A: pop     edi
0x65C81B: pop     esi
0x65C81C: retn    8
0x65C81F: mov     edx, [esi+10h]; jumptable 0065C77D case 5
0x65C822: pop     ebx
0x65C823: mov     [edx+34h], edi
0x65C826: pop     edi
0x65C827: pop     esi
0x65C828: retn    8
0x65C82B: mov     eax, [esi+10h]; jumptable 0065C77D case 7
0x65C82E: pop     ebx
0x65C82F: mov     [eax+38h], edi
0x65C832: pop     edi
0x65C833: pop     esi
0x65C834: retn    8
0x65C837: mov     ecx, [esi+10h]; jumptable 0065C77D case 0
0x65C83A: pop     ebx
0x65C83B: mov     [ecx+3Ch], edi
0x65C83E: pop     edi
0x65C83F: pop     esi
0x65C840: retn    8
0x65C843: mov     edx, [esi+10h]; jumptable 0065C77D case 4
0x65C846: pop     ebx
0x65C847: mov     [edx+40h], edi
0x65C84A: pop     edi
0x65C84B: pop     esi
0x65C84C: retn    8
0x65C84F: mov     eax, [esi+10h]; jumptable 0065C77D case 13
0x65C852: mov     [eax+44h], edi
0x65C855: pop     ebx; jumptable 0065C77D default case, cases 1-3,9,10,12,14-25,27-32,34,35,37-39,42-45,50-55
