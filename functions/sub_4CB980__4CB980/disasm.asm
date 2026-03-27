0x4CB980: push    ebx
0x4CB981: mov     ebx, [esp+4+arg_0]
0x4CB985: test    ebx, ebx
0x4CB987: push    ebp
0x4CB988: mov     ebp, ecx
0x4CB98A: jz      short loc_4CB9D4
0x4CB98C: push    edi
0x4CB98D: push    ebp; a2
0x4CB98E: mov     ecx, offset stru_B35C80; this
0x4CB993: call    sub_496EA0
0x4CB998: lea     edi, [ebp+48h]
0x4CB99B: test    edi, edi
0x4CB99D: jz      short loc_4CB9C8
0x4CB99F: push    esi
0x4CB9A0: mov     esi, [edi]
0x4CB9A2: test    esi, esi
0x4CB9A4: jz      short loc_4CB9C0
0x4CB9A6: mov     eax, [esi]
0x4CB9A8: mov     edx, [eax+170h]
0x4CB9AE: mov     ecx, esi
0x4CB9B0: call    edx
0x4CB9B2: cmp     byte ptr [eax+4], 29h ; ')'
0x4CB9B6: jnz     short loc_4CB9C0
0x4CB9B8: push    esi
0x4CB9B9: mov     ecx, ebx
0x4CB9BB: call    sub_4F1AC0
0x4CB9C0: mov     edi, [edi+4]
0x4CB9C3: test    edi, edi
0x4CB9C5: jnz     short loc_4CB9A0
0x4CB9C7: pop     esi
0x4CB9C8: push    ebp; a2
0x4CB9C9: mov     ecx, offset stru_B35C80; this
0x4CB9CE: call    sub_496F50
0x4CB9D3: pop     edi
0x4CB9D4: pop     ebp
0x4CB9D5: pop     ebx
0x4CB9D6: retn    4
