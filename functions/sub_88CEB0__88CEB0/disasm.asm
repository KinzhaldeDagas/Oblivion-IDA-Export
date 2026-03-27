0x88CEB0: sub     esp, 1Ch
0x88CEB3: push    ebx
0x88CEB4: push    esi
0x88CEB5: mov     esi, [esp+24h+arg_0]
0x88CEB9: xor     bl, bl
0x88CEBB: test    esi, esi
0x88CEBD: jz      short loc_88CF15
0x88CEBF: cmp     [esp+24h+arg_C], bl
0x88CEC3: jnz     short loc_88CEDA
0x88CEC5: push    esi
0x88CEC6: call    sub_6FA970
0x88CECB: add     esp, 4
0x88CECE: test    eax, eax
0x88CED0: jz      short loc_88CF15
0x88CED2: mov     eax, [eax+0Ch]
0x88CED5: and     eax, 2
0x88CED8: jz      short loc_88CF15
0x88CEDA: mov     al, [esp+24h+arg_8]
0x88CEDE: movzx   ecx, [esp+24h+arg_4]
0x88CEE3: mov     [esp+24h+var_18], al
0x88CEE7: mov     eax, ds:0B2E30Ch
0x88CEEC: test    eax, eax
0x88CEEE: mov     bl, 1
0x88CEF0: mov     [esp+24h+var_1C], 0
0x88CEF8: mov     [esp+24h+var_14], 3
0x88CF00: mov     [esp+24h+var_10], ecx
0x88CF04: jz      short loc_88CF15
0x88CF06: push    eax
0x88CF07: lea     edx, [esp+28h+var_1C]
0x88CF0B: push    edx
0x88CF0C: push    esi
0x88CF0D: call    sub_88A7D0
0x88CF12: add     esp, 0Ch
0x88CF15: pop     esi
0x88CF16: mov     al, bl
0x88CF18: pop     ebx
0x88CF19: add     esp, 1Ch
0x88CF1C: retn
