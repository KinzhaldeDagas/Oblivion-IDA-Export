0x5D4760: push    ebx
0x5D4761: push    esi
0x5D4762: push    edi
0x5D4763: mov     edi, ecx
0x5D4765: mov     ecx, [edi+28h]
0x5D4768: xor     esi, esi
0x5D476A: push    esi
0x5D476B: add     ecx, 78h ; 'x'
0x5D476E: xor     bl, bl
0x5D4770: call    EffectItemList_GetItemByIndex2
0x5D4775: test    eax, eax
0x5D4777: jz      short loc_5D47A7
0x5D4779: lea     esp, [esp+0]
0x5D4780: mov     ecx, [edi+28h]
0x5D4783: push    esi
0x5D4784: add     ecx, 78h ; 'x'
0x5D4787: call    EffectItemList_GetItemByIndex2
0x5D478C: cmp     dword ptr [eax+10h], 0
0x5D4790: jnz     short loc_5D4794
0x5D4792: mov     bl, 1
0x5D4794: mov     ecx, [edi+28h]
0x5D4797: add     esi, 1
0x5D479A: push    esi
0x5D479B: add     ecx, 78h ; 'x'
0x5D479E: call    EffectItemList_GetItemByIndex2
0x5D47A3: test    eax, eax
0x5D47A5: jnz     short loc_5D4780
0x5D47A7: pop     edi
0x5D47A8: pop     esi
0x5D47A9: mov     al, bl
0x5D47AB: pop     ebx
0x5D47AC: retn
