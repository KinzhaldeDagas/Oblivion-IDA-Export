0x88D0E0: sub     esp, 1Ch
0x88D0E3: push    ebx
0x88D0E4: push    esi
0x88D0E5: mov     esi, [esp+24h+arg_0]
0x88D0E9: xor     bl, bl
0x88D0EB: test    esi, esi
0x88D0ED: jz      short loc_88D144
0x88D0EF: cmp     [esp+24h+arg_C], bl
0x88D0F3: jnz     short loc_88D10A
0x88D0F5: push    esi
0x88D0F6: call    sub_6FA970
0x88D0FB: add     esp, 4
0x88D0FE: test    eax, eax
0x88D100: jz      short loc_88D144
0x88D102: mov     eax, [eax+0Ch]
0x88D105: and     eax, 2
0x88D108: jz      short loc_88D144
0x88D10A: mov     al, [esp+24h+arg_8]
0x88D10E: mov     ecx, [esp+24h+arg_4]
0x88D112: mov     [esp+24h+var_18], al
0x88D116: mov     eax, ds:0B2E31Ch
0x88D11B: test    eax, eax
0x88D11D: mov     bl, 1
0x88D11F: mov     [esp+24h+var_1C], 0
0x88D127: mov     [esp+24h+var_14], 7
0x88D12F: mov     [esp+24h+var_10], ecx
0x88D133: jz      short loc_88D144
0x88D135: push    eax
0x88D136: lea     edx, [esp+28h+var_1C]
0x88D13A: push    edx
0x88D13B: push    esi
0x88D13C: call    sub_88A7D0
0x88D141: add     esp, 0Ch
0x88D144: pop     esi
0x88D145: mov     al, bl
0x88D147: pop     ebx
0x88D148: add     esp, 1Ch
0x88D14B: retn
