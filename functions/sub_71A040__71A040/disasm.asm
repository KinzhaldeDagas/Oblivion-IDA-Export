0x71A040: push    ebx
0x71A041: push    ebp
0x71A042: push    esi
0x71A043: mov     esi, ecx
0x71A045: mov     eax, [esi]
0x71A047: mov     edx, [eax+44h]
0x71A04A: push    edi
0x71A04B: call    edx
0x71A04D: test    eax, eax
0x71A04F: mov     ebp, [esp+10h+arg_4]
0x71A053: jz      short loc_71A0A4
0x71A055: cmp     ebp, [esi+48h]
0x71A058: jz      short loc_71A07B
0x71A05A: mov     eax, [esi]
0x71A05C: mov     edx, [eax+44h]
0x71A05F: mov     ecx, esi
0x71A061: call    edx
0x71A063: mov     edi, eax
0x71A065: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x71A069: jnz     short loc_71A07B
0x71A06B: mov     ecx, edi
0x71A06D: call    sub_732A20
0x71A072: push    edi
0x71A073: call    FormHeapFree
0x71A078: add     esp, 4
0x71A07B: mov     ebx, [esp+10h+arg_8]
0x71A07F: cmp     ebx, [esi+4Ch]
0x71A082: jz      short loc_71A0C8
0x71A084: mov     eax, [esi]
0x71A086: mov     edx, [eax+44h]
0x71A089: mov     ecx, esi
0x71A08B: call    edx
0x71A08D: mov     edi, eax
0x71A08F: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x71A093: jnz     short loc_71A0C8
0x71A095: mov     ecx, edi
0x71A097: call    sub_732A20
0x71A09C: push    edi
0x71A09D: call    FormHeapFree
0x71A0A2: jmp     short loc_71A0C5
0x71A0A4: mov     eax, [esi+48h]
0x71A0A7: cmp     ebp, eax
0x71A0A9: jz      short loc_71A0B4
0x71A0AB: push    eax
0x71A0AC: call    FormHeapFree
0x71A0B1: add     esp, 4
0x71A0B4: mov     eax, [esi+4Ch]
0x71A0B7: mov     ebx, [esp+10h+arg_8]
0x71A0BB: cmp     ebx, eax
0x71A0BD: jz      short loc_71A0C8
0x71A0BF: push    eax
0x71A0C0: call    FormHeapFree
0x71A0C5: add     esp, 4
0x71A0C8: mov     cx, [esp+10h+arg_0]
0x71A0CD: test    cx, cx
0x71A0D0: mov     [esi+44h], cx
0x71A0D4: mov     [esi+48h], ebp
0x71A0D7: mov     [esi+4Ch], ebx
0x71A0DA: mov     word ptr [esi+40h], 0
0x71A0E0: jbe     short loc_71A103
0x71A0E2: mov     eax, ebp
0x71A0E4: movzx   ecx, cx
0x71A0E7: jmp     short loc_71A0F0
0x71A0E9: align 10h
0x71A0F0: mov     dx, [eax]
0x71A0F3: sub     dx, 2
0x71A0F7: add     [esi+40h], dx
0x71A0FB: add     eax, 2
0x71A0FE: sub     ecx, 1
0x71A101: jnz     short loc_71A0F0
0x71A103: pop     edi
0x71A104: pop     esi
0x71A105: pop     ebp
0x71A106: pop     ebx
0x71A107: retn    0Ch
