0x7C7050: push    esi
0x7C7051: mov     esi, [esp+4+arg_0]
0x7C7055: test    esi, esi
0x7C7057: jnz     short loc_7C705D
0x7C7059: mov     al, 1
0x7C705B: pop     esi
0x7C705C: retn
0x7C705D: mov     eax, [esi]
0x7C705F: mov     edx, [eax+8]
0x7C7062: push    ebp
0x7C7063: mov     ecx, esi
0x7C7065: call    edx
0x7C7067: mov     ebp, eax
0x7C7069: test    ebp, ebp
0x7C706B: jnz     short loc_7C708A
0x7C706D: mov     eax, [esi]
0x7C706F: mov     edx, [eax+10h]
0x7C7072: mov     ecx, esi
0x7C7074: call    edx
0x7C7076: test    eax, eax
0x7C7078: jz      short loc_7C7085
0x7C707A: pop     ebp
0x7C707B: pop     esi
0x7C707C: mov     [esp+arg_0], eax
0x7C7080: jmp     sub_7C6100
0x7C7085: pop     ebp
0x7C7086: mov     al, 1
0x7C7088: pop     esi
0x7C7089: retn
0x7C708A: push    ebx
0x7C708B: push    edi
0x7C708C: push    ebp
0x7C708D: push    offset dword_B3FD70
0x7C7092: mov     bl, 1
0x7C7094: xor     edi, edi
0x7C7096: call    NiRTTI_Cast
0x7C709B: add     esp, 8
0x7C709E: test    eax, eax
0x7C70A0: jz      loc_7C7139
0x7C70A6: mov     ecx, [eax+0E0h]
0x7C70AC: test    ecx, ecx
0x7C70AE: jl      loc_7C71A6
0x7C70B4: movzx   edx, word ptr [eax+0B6h]
0x7C70BB: cmp     ecx, edx
0x7C70BD: jge     loc_7C71A6
0x7C70C3: mov     eax, [eax+0B0h]
0x7C70C9: mov     esi, [eax+ecx*4]
0x7C70CC: test    esi, esi
0x7C70CE: jz      loc_7C71A6
0x7C70D4: test    [esi+18h], bl
0x7C70D7: jnz     loc_7C71A6
0x7C70DD: mov     edx, [esi]
0x7C70DF: mov     eax, [edx+10h]
0x7C70E2: mov     ecx, esi
0x7C70E4: call    eax
0x7C70E6: test    eax, eax
0x7C70E8: jz      short loc_7C7104
0x7C70EA: mov     ecx, [esp+10h+arg_4]
0x7C70EE: push    ecx
0x7C70EF: push    esi
0x7C70F0: call    sub_7C6100
0x7C70F5: add     esp, 8
0x7C70F8: mov     bl, al
0x7C70FA: and     bl, 1
0x7C70FD: pop     edi
0x7C70FE: mov     al, bl
0x7C7100: pop     ebx
0x7C7101: pop     ebp
0x7C7102: pop     esi
0x7C7103: retn
0x7C7104: mov     edx, [esi]
0x7C7106: mov     eax, [edx+8]
0x7C7109: mov     ecx, esi
0x7C710B: call    eax
0x7C710D: test    eax, eax
0x7C710F: jz      loc_7C71A6
0x7C7115: test    byte ptr [eax+18h], 1
0x7C7119: jnz     loc_7C71A6
0x7C711F: mov     ecx, [esp+10h+arg_4]
0x7C7123: push    ecx
0x7C7124: push    eax
0x7C7125: call    sub_7C7050
0x7C712A: add     esp, 8
0x7C712D: mov     bl, al
0x7C712F: and     bl, 1
0x7C7132: pop     edi
0x7C7133: mov     al, bl
0x7C7135: pop     ebx
0x7C7136: pop     ebp
0x7C7137: pop     esi
0x7C7138: retn
0x7C7139: movzx   eax, word ptr [ebp+0B6h]
0x7C7140: test    eax, eax
0x7C7142: jbe     short loc_7C71A6
0x7C7144: cmp     eax, edi
0x7C7146: jbe     short loc_7C7198
0x7C7148: mov     edx, [ebp+0B0h]
0x7C714E: mov     esi, [edx+edi*4]
0x7C7151: test    esi, esi
0x7C7153: jz      short loc_7C7198
0x7C7155: test    byte ptr [esi+18h], 1
0x7C7159: jnz     short loc_7C7198
0x7C715B: mov     eax, [esi]
0x7C715D: mov     edx, [eax+10h]
0x7C7160: mov     ecx, esi
0x7C7162: call    edx
0x7C7164: test    eax, eax
0x7C7166: jz      short loc_7C7175
0x7C7168: mov     eax, [esp+10h+arg_4]
0x7C716C: push    eax
0x7C716D: push    esi
0x7C716E: call    sub_7C6100
0x7C7173: jmp     short loc_7C7193
0x7C7175: mov     edx, [esi]
0x7C7177: mov     eax, [edx+8]
0x7C717A: mov     ecx, esi
0x7C717C: call    eax
0x7C717E: test    eax, eax
0x7C7180: jz      short loc_7C7198
0x7C7182: test    byte ptr [eax+18h], 1
0x7C7186: jnz     short loc_7C7198
0x7C7188: mov     ecx, [esp+10h+arg_4]
0x7C718C: push    ecx
0x7C718D: push    eax
0x7C718E: call    sub_7C7050
0x7C7193: add     esp, 8
0x7C7196: and     bl, al
0x7C7198: movzx   eax, word ptr [ebp+0B6h]
0x7C719F: add     edi, 1
0x7C71A2: cmp     eax, edi
0x7C71A4: ja      short loc_7C7148
0x7C71A6: pop     edi
0x7C71A7: mov     al, bl
0x7C71A9: pop     ebx
0x7C71AA: pop     ebp
0x7C71AB: pop     esi
0x7C71AC: retn
