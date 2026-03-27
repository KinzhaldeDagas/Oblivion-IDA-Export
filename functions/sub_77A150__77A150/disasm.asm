0x77A150: push    esi
0x77A151: mov     esi, ecx
0x77A153: cmp     byte ptr [esi+1Ch], 0
0x77A157: jnz     short loc_77A160
0x77A159: or      eax, 0FFFFFFFFh
0x77A15C: pop     esi
0x77A15D: retn    1Ch
0x77A160: cmp     byte ptr [esi+20h], 0
0x77A164: push    edi
0x77A165: mov     edi, [esp+8+arg_C]
0x77A169: jz      short loc_77A176
0x77A16B: mov     ecx, [esi+18h]
0x77A16E: mov     eax, [ecx]
0x77A170: mov     edx, [eax+4]
0x77A173: push    edi
0x77A174: call    edx
0x77A176: cmp     byte ptr [esi+21h], 0
0x77A17A: jz      short loc_77A19B
0x77A17C: mov     eax, [esi+14h]
0x77A17F: mov     ecx, [eax+8BCh]
0x77A185: test    ecx, ecx
0x77A187: jz      short loc_77A19B
0x77A189: mov     edx, [edi+24h]
0x77A18C: mov     eax, [edi+20h]
0x77A18F: push    edx
0x77A190: mov     edx, [esp+0Ch+arg_10]
0x77A194: push    eax
0x77A195: push    edx
0x77A196: call    sub_776880
0x77A19B: mov     ecx, [esi+28h]; this
0x77A19E: test    ecx, ecx
0x77A1A0: pop     edi
0x77A1A1: jz      short loc_77A1A8
0x77A1A3: call    NiD3DRenderStateGroup__SetRenderStates
0x77A1A8: xor     eax, eax
0x77A1AA: pop     esi
0x77A1AB: retn    1Ch
