0x4CB6C0: push    ebp
0x4CB6C1: mov     ebp, ecx
0x4CB6C3: push    edi
0x4CB6C4: push    ebp; a2
0x4CB6C5: mov     ecx, offset stru_B35C80; this
0x4CB6CA: call    sub_496EA0
0x4CB6CF: lea     edi, [ebp+48h]
0x4CB6D2: test    edi, edi
0x4CB6D4: jz      short loc_4CB719
0x4CB6D6: push    esi
0x4CB6D7: mov     esi, [edi]
0x4CB6D9: test    esi, esi
0x4CB6DB: mov     edi, [edi+4]
0x4CB6DE: jz      short loc_4CB714
0x4CB6E0: mov     eax, [esi]
0x4CB6E2: mov     edx, [eax+170h]
0x4CB6E8: mov     ecx, esi
0x4CB6EA: call    edx
0x4CB6EC: cmp     byte ptr [eax+4], 1Ah
0x4CB6F0: jnz     short loc_4CB714
0x4CB6F2: lea     ecx, [esi+44h]
0x4CB6F5: call    sub_41E650
0x4CB6FA: test    eax, eax
0x4CB6FC: jz      short loc_4CB714
0x4CB6FE: push    0
0x4CB700: push    eax
0x4CB701: mov     eax, [esi]
0x4CB703: mov     edx, [eax+170h]
0x4CB709: mov     ecx, esi
0x4CB70B: call    edx
0x4CB70D: mov     ecx, eax
0x4CB70F: call    sub_4B22E0
0x4CB714: test    edi, edi
0x4CB716: jnz     short loc_4CB6D7
0x4CB718: pop     esi
0x4CB719: push    ebp; a2
0x4CB71A: mov     ecx, offset stru_B35C80; this
0x4CB71F: call    sub_496F50
0x4CB724: pop     edi
0x4CB725: pop     ebp
0x4CB726: retn
