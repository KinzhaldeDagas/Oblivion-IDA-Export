0x4EDDE0: push    ebx
0x4EDDE1: push    esi
0x4EDDE2: mov     esi, ecx
0x4EDDE4: mov     eax, [esi+24h]
0x4EDDE7: push    eax
0x4EDDE8: call    FormHeapFree
0x4EDDED: xor     ebx, ebx
0x4EDDEF: mov     [esi+24h], ebx
0x4EDDF2: mov     [esi+2Ah], bx
0x4EDDF6: mov     [esi+28h], bx
0x4EDDFA: mov     byte ptr [esi+2Ch], 4Bh ; 'K'
0x4EDDFE: mov     [esi+2Dh], bl
0x4EDE01: mov     [esi+38h], ebx
0x4EDE04: mov     ecx, [esi+30h]
0x4EDE07: push    ecx
0x4EDE08: call    FormHeapFree
0x4EDE0D: add     esp, 8
0x4EDE10: lea     ecx, [esi+3Ch]
0x4EDE13: mov     [esi+30h], ebx
0x4EDE16: mov     [esi+36h], bx
0x4EDE1A: mov     [esi+34h], bx
0x4EDE1E: call    sub_4ED580
0x4EDE23: mov     ecx, esi; this
0x4EDE25: call    j_TESForm_InitializeComponents
0x4EDE2A: mov     [esi+0A0h], ebx
0x4EDE30: mov     [esi+0A4h], ebx
0x4EDE36: mov     [esi+0A8h], ebx
0x4EDE3C: pop     esi
0x4EDE3D: pop     ebx
0x4EDE3E: retn
