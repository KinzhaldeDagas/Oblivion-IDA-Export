0x401690: mov     eax, [esp+arg_4]
0x401694: mov     edx, [eax+0Ch]
0x401697: push    esi
0x401698: mov     esi, [eax+8]
0x40169B: test    esi, esi
0x40169D: push    edi
0x40169E: mov     edi, edx
0x4016A0: jz      short loc_4016A5
0x4016A2: mov     [esi+0Ch], edx
0x4016A5: mov     edx, [eax+0Ch]
0x4016A8: test    edx, edx
0x4016AA: jz      short loc_4016B4
0x4016AC: push    ebp
0x4016AD: mov     ebp, [eax+8]
0x4016B0: mov     [edx+8], ebp
0x4016B3: pop     ebp
0x4016B4: mov     edx, [esp+8+arg_0]
0x4016B8: and     dword ptr [eax+4], 0BFFFFFFFh
0x4016BF: mov     dword ptr [eax+0Ch], 0
0x4016C6: mov     dword ptr [eax+8], 0
0x4016CD: cmp     eax, [edx]
0x4016CF: jnz     short loc_4016D3
0x4016D1: mov     [edx], edi
0x4016D3: cmp     eax, [edx+4]
0x4016D6: jnz     short loc_4016DB
0x4016D8: mov     [edx+4], esi
0x4016DB: mov     eax, [eax+4]
0x4016DE: and     eax, 0FFFFFFFh
0x4016E3: cmp     eax, 1000h
0x4016E8: jg      short loc_401711
0x4016EA: sub     eax, [ecx+4]
0x4016ED: cdq
0x4016EE: and     edx, 0FFh
0x4016F4: add     eax, edx
0x4016F6: sar     eax, 8
0x4016F9: or      edx, 0FFFFFFFFh
0x4016FC: cmp     eax, edx
0x4016FE: jz      short loc_401709
0x401700: mov     esi, [ecx+44h]
0x401703: add     [esi+eax*8], edx
0x401706: lea     eax, [esi+eax*8]
0x401709: add     [ecx+28h], edx
0x40170C: pop     edi
0x40170D: pop     esi
0x40170E: retn    8
0x401711: add     dword ptr [ecx+28h], 0FFFFFFFFh
0x401715: pop     edi
0x401716: pop     esi
0x401717: retn    8
