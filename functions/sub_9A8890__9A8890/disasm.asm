0x9A8890: push    esi
0x9A8891: push    edi; char
0x9A8892: push    38h ; '8'; Size
0x9A8894: mov     edi, ecx
0x9A8896: call    FormHeapAlloc
0x9A889B: add     esp, 4
0x9A889E: test    eax, eax
0x9A88A0: jz      short loc_9A88AD
0x9A88A2: mov     ecx, eax; this
0x9A88A4: call    sub_9A84B0
0x9A88A9: mov     esi, eax
0x9A88AB: jmp     short loc_9A88AF
0x9A88AD: xor     esi, esi
0x9A88AF: mov     eax, [esp+8+arg_0]
0x9A88B3: push    eax; Src
0x9A88B4: mov     ecx, esi; this
0x9A88B6: call    NiD3DShaderConstantMapEntry__SetKeyStringCopy
0x9A88BB: mov     ecx, [esp+8+arg_4]
0x9A88BF: mov     edx, [esp+8+arg_8]
0x9A88C3: mov     eax, [esp+8+arg_C]
0x9A88C7: and     ecx, 0FFFFFFFh
0x9A88CD: or      ecx, 30000000h
0x9A88D3: mov     [esi+14h], ecx
0x9A88D6: mov     ecx, [esp+8+arg_10]
0x9A88DA: mov     [esi+18h], edx
0x9A88DD: mov     edx, dword ptr [esp+8+Size]
0x9A88E1: mov     [esi+20h], ecx
0x9A88E4: push    edx; Src
0x9A88E5: mov     ecx, esi
0x9A88E7: mov     [esi+1Ch], eax
0x9A88EA: call    sub_9A85C0
0x9A88EF: mov     eax, [esp+8+Src]
0x9A88F3: test    eax, eax
0x9A88F5: jz      short loc_9A890E
0x9A88F7: mov     ecx, [esp+8+arg_24]
0x9A88FB: mov     edx, [esp+8+arg_1C]
0x9A88FF: push    ecx; Src
0x9A8900: push    eax; int
0x9A8901: mov     eax, dword ptr [esp+10h+Size+4]
0x9A8905: push    edx; int
0x9A8906: push    eax; Size
0x9A8907: mov     ecx, esi
0x9A8909: call    sub_9A23F0
0x9A890E: mov     edx, [edi]
0x9A8910: mov     eax, [edx+4Ch]
0x9A8913: push    esi
0x9A8914: mov     ecx, edi
0x9A8916: call    eax
0x9A8918: test    eax, eax
0x9A891A: mov     [edi+24h], eax
0x9A891D: jz      short loc_9A892C
0x9A891F: mov     edx, [esi]
0x9A8921: mov     eax, [edx]
0x9A8923: push    1
0x9A8925: mov     ecx, esi
0x9A8927: call    eax
0x9A8929: mov     eax, [edi+24h]
0x9A892C: pop     edi
0x9A892D: pop     esi
0x9A892E: retn    28h ; '('
