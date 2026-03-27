0x9A8290: push    ecx
0x9A8291: mov     eax, [esp+4+arg_0]
0x9A8295: push    ebx
0x9A8296: xor     ebx, ebx
0x9A8298: cmp     eax, ebx
0x9A829A: push    ebp
0x9A829B: mov     [esp+0Ch+var_4], ebx
0x9A829F: jz      def_9A82B7
0x9A82A5: mov     ecx, [esp+0Ch+arg_4]
0x9A82A9: add     ecx, 0FFFFFFFFh; switch 8 cases
0x9A82AC: cmp     ecx, 7
0x9A82AF: ja      def_9A82B7
0x9A82B5: push    esi
0x9A82B6: push    edi
0x9A82B7: jmp     ds:jpt_9A82B7[ecx*4]; switch jump
0x9A82BE: mov     esi, [eax+0Ch]; jumptable 009A82B7 cases 1-4
0x9A82C1: cmp     esi, ebx
0x9A82C3: jz      loc_9A8385
0x9A82C9: test    esi, esi
0x9A82CB: mov     ebp, [esp+14h+arg_8]
0x9A82CF: jnz     short loc_9A82D5
0x9A82D1: xor     edi, edi
0x9A82D3: jmp     short loc_9A82DA
0x9A82D5: mov     edi, [esi+4]
0x9A82D8: mov     esi, [esi]
0x9A82DA: mov     eax, [esp+14h+arg_4]
0x9A82DE: push    eax
0x9A82DF: push    edi
0x9A82E0: call    sub_9A6670
0x9A82E5: add     esp, 8
0x9A82E8: test    al, al
0x9A82EA: jz      short loc_9A82F5
0x9A82EC: mov     ecx, ebx
0x9A82EE: add     ebx, 1
0x9A82F1: cmp     ecx, ebp
0x9A82F3: jz      short loc_9A8303
0x9A82F5: test    esi, esi
0x9A82F7: jnz     short loc_9A82D5
0x9A82F9: mov     eax, [esp+14h+var_4]
0x9A82FD: pop     edi
0x9A82FE: pop     esi
0x9A82FF: pop     ebp
0x9A8300: pop     ebx
0x9A8301: pop     ecx
0x9A8302: retn
0x9A8303: mov     [esp+14h+var_4], edi
0x9A8307: mov     eax, [esp+14h+var_4]
0x9A830B: pop     edi
0x9A830C: pop     esi
0x9A830D: pop     ebp
0x9A830E: pop     ebx
0x9A830F: pop     ecx
0x9A8310: retn
0x9A8311: mov     edx, [eax+18h]; jumptable 009A82B7 case 5
0x9A8314: pop     edi
0x9A8315: pop     esi
0x9A8316: pop     ebp
0x9A8317: mov     [esp+8+var_4], edx
0x9A831B: mov     eax, edx
0x9A831D: pop     ebx
0x9A831E: pop     ecx
0x9A831F: retn
0x9A8320: mov     eax, [eax+14h]; jumptable 009A82B7 case 6
0x9A8323: xor     edx, edx
0x9A8325: cmp     eax, ebx
0x9A8327: jz      short loc_9A8385
0x9A8329: mov     esi, [esp+14h+arg_8]
0x9A832D: mov     ecx, [eax+4]
0x9A8330: mov     eax, [eax]
0x9A8332: mov     edi, edx
0x9A8334: add     edx, 1
0x9A8337: cmp     edi, esi
0x9A8339: jz      short loc_9A8372
0x9A833B: cmp     eax, ebx
0x9A833D: jnz     short loc_9A832D
0x9A833F: mov     eax, [esp+14h+var_4]
0x9A8343: pop     edi
0x9A8344: pop     esi
0x9A8345: pop     ebp
0x9A8346: pop     ebx
0x9A8347: pop     ecx
0x9A8348: retn
0x9A8349: mov     eax, [eax+10h]; jumptable 009A82B7 case 7
0x9A834C: xor     edx, edx
0x9A834E: cmp     eax, ebx
0x9A8350: jz      short loc_9A8385
0x9A8352: mov     esi, [esp+14h+arg_8]
0x9A8356: mov     ecx, [eax+4]
0x9A8359: mov     eax, [eax]
0x9A835B: mov     edi, edx
0x9A835D: add     edx, 1
0x9A8360: cmp     edi, esi
0x9A8362: jz      short loc_9A8372
0x9A8364: cmp     eax, ebx
0x9A8366: jnz     short loc_9A8356
0x9A8368: mov     eax, [esp+14h+var_4]
0x9A836C: pop     edi
0x9A836D: pop     esi
0x9A836E: pop     ebp
0x9A836F: pop     ebx
0x9A8370: pop     ecx
0x9A8371: retn
0x9A8372: pop     edi
0x9A8373: pop     esi
0x9A8374: pop     ebp
0x9A8375: mov     [esp+8+var_4], ecx
0x9A8379: mov     eax, ecx
0x9A837B: pop     ebx
0x9A837C: pop     ecx
0x9A837D: retn
0x9A837E: mov     eax, [eax+1Ch]; jumptable 009A82B7 case 8
0x9A8381: mov     [esp+14h+var_4], eax
0x9A8385: pop     edi
0x9A8386: pop     esi
