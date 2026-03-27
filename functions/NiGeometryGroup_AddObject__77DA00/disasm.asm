0x77DA00: push    ebx
0x77DA01: mov     ebx, [esp+4+arg_8]
0x77DA05: test    ebx, ebx
0x77DA07: push    ebp
0x77DA08: push    esi
0x77DA09: push    edi
0x77DA0A: mov     edi, [esp+10h+arg_0]
0x77DA0E: mov     ebp, ecx
0x77DA10: jz      short loc_77DA4B
0x77DA12: cmp     dword ptr [ebx+28h], 0
0x77DA16: jnz     loc_77DADD
0x77DA1C: push    50h ; 'P'; Size
0x77DA1E: call    FormHeapAlloc
0x77DA23: add     esp, 4
0x77DA26: test    eax, eax
0x77DA28: jz      short loc_77DA35
0x77DA2A: mov     ecx, eax
0x77DA2C: call    NiGeometryBufferData__NiGeometryBufferData
0x77DA31: mov     esi, eax
0x77DA33: jmp     short loc_77DA37
0x77DA35: xor     esi, esi
0x77DA37: xor     eax, eax
0x77DA39: cmp     [ebx+22h], ax
0x77DA3D: setnz   al
0x77DA40: add     eax, 4
0x77DA43: mov     [esi+38h], eax
0x77DA46: mov     [ebx+28h], esi
0x77DA49: jmp     short loc_77DAAA
0x77DA4B: cmp     dword ptr [edi+38h], 0
0x77DA4F: jnz     loc_77DADD
0x77DA55: push    50h ; 'P'; Size
0x77DA57: call    FormHeapAlloc
0x77DA5C: add     esp, 4
0x77DA5F: test    eax, eax
0x77DA61: jz      short loc_77DA6E
0x77DA63: mov     ecx, eax
0x77DA65: call    NiGeometryBufferData__NiGeometryBufferData
0x77DA6A: mov     esi, eax
0x77DA6C: jmp     short loc_77DA70
0x77DA6E: xor     esi, esi
0x77DA70: mov     edx, [edi]
0x77DA72: mov     eax, [edx+4]
0x77DA75: mov     ecx, edi
0x77DA77: call    eax
0x77DA79: test    eax, eax
0x77DA7B: jz      short loc_77DA8E
0x77DA7D: lea     ecx, [ecx+0]
0x77DA80: cmp     eax, offset dword_B3FD2C
0x77DA85: jz      short loc_77DAE4
0x77DA87: mov     eax, [eax+4]
0x77DA8A: test    eax, eax
0x77DA8C: jnz     short loc_77DA80
0x77DA8E: push    edi
0x77DA8F: push    offset dword_B3FD0C
0x77DA94: call    NiRTTI__IsObjectOfRTTIType
0x77DA99: add     esp, 8
0x77DA9C: test    al, al
0x77DA9E: jz      short loc_77DAA7
0x77DAA0: mov     dword ptr [esi+38h], 5
0x77DAA7: mov     [edi+38h], esi
0x77DAAA: cmp     dword ptr [edi+20h], 0
0x77DAAE: movzx   eax, byte ptr [edi+2Ch]
0x77DAB2: setnz   dl
0x77DAB5: xor     ecx, ecx
0x77DAB7: and     eax, 3Fh
0x77DABA: cmp     [edi+24h], ecx
0x77DABD: jz      short loc_77DAC4
0x77DABF: mov     ecx, 400000h
0x77DAC4: test    dl, dl
0x77DAC6: jz      short loc_77DACE
0x77DAC8: or      ecx, offset loc_800000
0x77DACE: shl     eax, 18h
0x77DAD1: or      eax, ecx
0x77DAD3: push    esi
0x77DAD4: mov     ecx, ebp
0x77DAD6: mov     [esi], eax
0x77DAD8: call    sub_782910
0x77DADD: pop     edi
0x77DADE: pop     esi
0x77DADF: pop     ebp
0x77DAE0: pop     ebx
0x77DAE1: retn    0Ch
0x77DAE4: mov     dword ptr [esi+38h], 4
0x77DAEB: jmp     short loc_77DAA7
