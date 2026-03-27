0x8A5580: push    esi
0x8A5581: mov     esi, [esp+4+arg_0]
0x8A5585: test    esi, esi
0x8A5587: jz      short loc_8A55FA
0x8A5589: push    ebx
0x8A558A: push    esi
0x8A558B: call    sub_47FAC0
0x8A5590: mov     ebx, [esp+0Ch+arg_4]
0x8A5594: add     esp, 4
0x8A5597: test    eax, eax
0x8A5599: jz      short loc_8A55B2
0x8A559B: mov     ecx, [eax+10h]
0x8A559E: test    ecx, ecx
0x8A55A0: jz      short loc_8A55B2
0x8A55A2: test    bl, bl
0x8A55A4: jz      short loc_8A55AD
0x8A55A6: call    sub_8A4BA0
0x8A55AB: jmp     short loc_8A55B2
0x8A55AD: call    sub_8A53E0
0x8A55B2: mov     eax, [esi]
0x8A55B4: mov     edx, [eax+8]
0x8A55B7: push    edi
0x8A55B8: mov     ecx, esi
0x8A55BA: call    edx
0x8A55BC: mov     edi, eax
0x8A55BE: test    edi, edi
0x8A55C0: jz      short loc_8A55F8
0x8A55C2: movzx   eax, word ptr [edi+0B6h]
0x8A55C9: xor     esi, esi
0x8A55CB: test    eax, eax
0x8A55CD: jbe     short loc_8A55F8
0x8A55CF: cmp     eax, esi
0x8A55D1: ja      short loc_8A55D7
0x8A55D3: xor     eax, eax
0x8A55D5: jmp     short loc_8A55E0
0x8A55D7: mov     eax, [edi+0B0h]
0x8A55DD: mov     eax, [eax+esi*4]
0x8A55E0: push    ebx
0x8A55E1: push    eax
0x8A55E2: call    sub_8A5580
0x8A55E7: movzx   eax, word ptr [edi+0B6h]
0x8A55EE: add     esi, 1
0x8A55F1: add     esp, 8
0x8A55F4: cmp     eax, esi
0x8A55F6: ja      short loc_8A55D7
0x8A55F8: pop     edi
0x8A55F9: pop     ebx
0x8A55FA: pop     esi
0x8A55FB: retn
