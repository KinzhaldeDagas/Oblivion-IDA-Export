0x41E0A0: push    esi
0x41E0A1: mov     esi, ecx
0x41E0A3: push    offset aBaseextralistA; lpCriticalSection
0x41E0A8: mov     ecx, offset BSExtraDataCS
0x41E0AD: call    NiEnterCriticalSection
0x41E0B2: mov     ecx, [esp+4+arg_0]
0x41E0B6: movzx   eax, byte ptr [ecx+4]
0x41E0BA: add     eax, 0FFFFFFEFh; switch 34 cases
0x41E0BD: cmp     eax, 21h
0x41E0C0: ja      short BaseExtraList_AddExtra___def_41E0C9; jumptable 0041E0C9 default case, cases 20-25,27-49
0x41E0C2: movzx   eax, ds:byte_41E138[eax]
0x41E0C9: jmp     ds:jpt_41E0C9[eax*4]; switch jump
0x41E0D0: mov     eax, [esi+4]; jumptable 0041E0C9 cases 17-19,26,50
0x41E0D3: test    eax, eax
0x41E0D5: jz      short loc_41E0DA
0x41E0D7: mov     [ecx+8], eax
0x41E0DA: mov     [esi+4], ecx
0x41E0DD: movzx   ecx, byte ptr [ecx+4]
0x41E0E1: mov     eax, ecx
0x41E0E3: shr     eax, 3
0x41E0E6: cmp     eax, 0Ch
0x41E0E9: jnb     short loc_41E100
0x41E0EB: and     ecx, 80000007h
0x41E0F1: jns     short loc_41E0F8
0x41E0F3: dec     ecx
0x41E0F4: or      ecx, 0FFFFFFF8h
0x41E0F7: inc     ecx
0x41E0F8: mov     dl, 1
0x41E0FA: shl     dl, cl
0x41E0FC: or      [eax+esi+8], dl
0x41E100: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41E105: call    NiLeaveCriticalSection_0
0x41E10A: pop     esi
0x41E10B: retn    4
0x41E10E: mov     eax, [esi+4]; jumptable 0041E0C9 default case, cases 20-25,27-49
0x41E111: test    eax, eax
0x41E113: jz      short loc_41E0DA
0x41E115: cmp     dword ptr [eax+8], 0
0x41E119: jz      short loc_41E129
0x41E11B: jmp     short loc_41E120
