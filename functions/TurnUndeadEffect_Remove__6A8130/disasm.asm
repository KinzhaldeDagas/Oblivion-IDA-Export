0x6A8130: push    edi
0x6A8131: mov     edi, ecx
0x6A8133: cmp     byte ptr [edi+38h], 0
0x6A8137: jz      short loc_6A81A9
0x6A8139: mov     ecx, [edi+20h]; this
0x6A813C: test    ecx, ecx
0x6A813E: push    esi
0x6A813F: jz      short loc_6A814A
0x6A8141: call    MagicTarget_GetParentActor
0x6A8146: mov     esi, eax
0x6A8148: jmp     short loc_6A814C
0x6A814A: xor     esi, esi
0x6A814C: mov     ecx, [edi+24h]; this
0x6A814F: test    ecx, ecx
0x6A8151: jz      short loc_6A815C
0x6A8153: call    MagicCaster_GetParentActor
0x6A8158: mov     edi, eax
0x6A815A: jmp     short loc_6A815E
0x6A815C: xor     edi, edi
0x6A815E: test    esi, esi
0x6A8160: jz      short loc_6A81A8
0x6A8162: mov     eax, [esi]
0x6A8164: mov     edx, [eax+334h]
0x6A816A: push    1
0x6A816C: mov     ecx, esi
0x6A816E: call    edx
0x6A8170: test    al, al
0x6A8172: jz      short loc_6A81A8
0x6A8174: mov     eax, [esi]
0x6A8176: mov     edx, [eax+340h]
0x6A817C: push    edi
0x6A817D: mov     ecx, esi
0x6A817F: call    edx
0x6A8181: test    edi, edi
0x6A8183: jz      short loc_6A81A8
0x6A8185: mov     ecx, [esi+58h]
0x6A8188: test    ecx, ecx
0x6A818A: jz      short loc_6A81A8
0x6A818C: mov     eax, [ecx]
0x6A818E: mov     edx, [eax+228h]
0x6A8194: push    1
0x6A8196: push    0
0x6A8198: push    0
0x6A819A: push    0
0x6A819C: push    0
0x6A819E: push    0
0x6A81A0: push    0
0x6A81A2: push    0
0x6A81A4: push    edi
0x6A81A5: push    esi
0x6A81A6: call    edx
0x6A81A8: pop     esi
0x6A81A9: pop     edi
0x6A81AA: retn
