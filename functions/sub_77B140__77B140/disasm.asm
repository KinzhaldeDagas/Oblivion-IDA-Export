0x77B140: push    ebx
0x77B141: mov     ebx, [esp+4+arg_4]
0x77B145: movzx   eax, word ptr ds:0B427E0h[ebx*2]
0x77B14D: cmp     ax, 8
0x77B151: jnb     short loc_77B197
0x77B153: mov     edx, [esp+4+arg_0]
0x77B157: movzx   eax, ax
0x77B15A: push    esi
0x77B15B: lea     eax, [eax+edx*8]
0x77B15E: push    edi
0x77B15F: mov     edi, [esp+0Ch+arg_8]
0x77B163: cmp     [ecx+eax*8+920h], edi
0x77B16A: lea     esi, [ecx+eax*8+920h]
0x77B171: jz      short loc_77B187
0x77B173: mov     eax, [ecx+0FF8h]
0x77B179: mov     ecx, [eax]
0x77B17B: push    edi
0x77B17C: push    ebx
0x77B17D: push    edx
0x77B17E: mov     edx, [ecx+10Ch]
0x77B184: push    eax
0x77B185: call    edx
0x77B187: cmp     [esp+0Ch+arg_C], 0
0x77B18C: jz      short loc_77B193
0x77B18E: mov     eax, [esi]
0x77B190: mov     [esi+4], eax
0x77B193: mov     [esi], edi
0x77B195: pop     edi
0x77B196: pop     esi
0x77B197: pop     ebx
0x77B198: retn    10h
