0x646C30: sub     esp, 48h
0x646C33: cmp     [esp+48h+arg_8], 0
0x646C38: mov     eax, ds:0B3F9A8h
0x646C3D: mov     edx, ds:0B3F9ACh
0x646C43: push    ebx
0x646C44: mov     ebx, [ecx+8]
0x646C47: push    ebp
0x646C48: mov     ebp, [ecx+2Ch]
0x646C4B: mov     ecx, [ecx+4]
0x646C4E: push    esi
0x646C4F: mov     esi, [esp+54h+arg_0]
0x646C53: mov     [esi], eax
0x646C55: mov     eax, ds:0B3F9B0h
0x646C5A: push    edi
0x646C5B: mov     edi, [esp+58h+arg_4]
0x646C5F: mov     [esi+4], edx
0x646C62: mov     [esi+8], eax
0x646C65: mov     [esp+58h+arg_0], ecx
0x646C69: jnz     short loc_646C9E
0x646C6B: test    ebx, ebx
0x646C6D: jz      loc_646DDE
0x646C73: mov     ecx, ebx
0x646C75: call    sub_567770
0x646C7A: test    al, al
0x646C7C: jz      short loc_646C9E
0x646C7E: lea     ebp, [edi+44h]
0x646C81: mov     ecx, ebp
0x646C83: call    ExtraDataList__GetExtraPackage
0x646C88: mov     ecx, ebp
0x646C8A: mov     ebx, eax
0x646C8C: call    sub_41FB40
0x646C91: mov     ecx, ebp
0x646C93: mov     [esp+58h+arg_0], eax
0x646C97: call    sub_41FB60
0x646C9C: mov     ebp, eax
0x646C9E: test    ebx, ebx
0x646CA0: jz      loc_646DDE
0x646CA6: mov     eax, [ebx+18h]
0x646CA9: cmp     eax, 0FFFFFFFFh
0x646CAC: jz      loc_646DDE
0x646CB2: mov     edx, ds:0B152B0h[eax*4]
0x646CB9: mov     eax, [esp+58h+arg_0]
0x646CBD: mov     eax, [edx+eax*4]
0x646CC0: cmp     eax, 2Ch; switch 45 cases
0x646CC3: ja      def_646CD0; jumptable 00646CD0 default case, cases 10-12,16-29,31,33-39,41-43
0x646CC9: movzx   ecx, ds:byte_646E14[eax]
0x646CD0: jmp     ds:jpt_646CD0[ecx*4]; switch jump
0x646CD7: cmp     dword ptr [ebx+24h], 0; jumptable 00646CD0 case 0
0x646CDB: jz      def_646CD0; jumptable 00646CD0 default case, cases 10-12,16-29,31,33-39,41-43
0x646CE1: push    edi
0x646CE2: lea     edx, [esp+5Ch+var_48]
0x646CE6: push    edx
0x646CE7: mov     ecx, ebx
0x646CE9: call    sub_566B30
0x646CEE: jmp     loc_646DCE
0x646CF3: cmp     dword ptr [ebx+24h], 0; jumptable 00646CD0 case 30
0x646CF7: jz      short loc_646D22
0x646CF9: lea     ecx, [esp+58h+var_3C]
0x646CFD: push    edi
0x646CFE: push    ecx
0x646CFF: mov     ecx, ebx
0x646D01: call    sub_566B30
0x646D06: mov     edx, [eax]
0x646D08: mov     ecx, [eax+4]
0x646D0B: mov     [esi], edx
0x646D0D: mov     edx, [eax+8]
0x646D10: pop     edi
0x646D11: mov     [esi+4], ecx
0x646D14: mov     [esi+8], edx
0x646D17: mov     eax, esi
0x646D19: pop     esi
0x646D1A: pop     ebp
0x646D1B: pop     ebx
0x646D1C: add     esp, 48h
0x646D1F: retn    0Ch
0x646D22: mov     eax, [edi]
0x646D24: mov     edx, [eax+174h]
0x646D2A: mov     ecx, edi
0x646D2C: call    edx
0x646D2E: jmp     loc_646DCE
0x646D33: cmp     dword ptr [ebx+24h], 0; jumptable 00646CD0 case 4
0x646D37: jz      short loc_646D22
0x646D39: lea     ecx, [esp+58h+var_30]
0x646D3D: jmp     short loc_646CFD
0x646D3F: cmp     dword ptr [ebx+24h], 0; jumptable 00646CD0 case 5
0x646D43: jz      short loc_646D22
0x646D45: lea     ecx, [esp+58h+var_24]
0x646D49: jmp     short loc_646CFD
0x646D4B: cmp     dword ptr [ebx+24h], 0; jumptable 00646CD0 case 7
0x646D4F: jz      short loc_646D22
0x646D51: lea     ecx, [esp+58h+var_18]
0x646D55: jmp     short loc_646CFD
0x646D57: test    ebp, ebp; jumptable 00646CD0 case 9
0x646D59: jz      short loc_646D62
0x646D5B: mov     edx, [ebp+0]
0x646D5E: mov     ecx, ebp
0x646D60: jmp     short loc_646D66
0x646D62: mov     edx, [edi]
0x646D64: mov     ecx, edi
0x646D66: mov     eax, [edx+174h]
0x646D6C: call    eax
0x646D6E: mov     ecx, [eax]
0x646D70: mov     edx, [eax+4]
0x646D73: mov     eax, [eax+8]
0x646D76: mov     [esi], ecx
0x646D78: mov     [esi+4], edx
0x646D7B: mov     [esi+8], eax
0x646D7E: cmp     [esp+58h+arg_8], 0; jumptable 00646CD0 case 44
0x646D83: jnz     short def_646D98; jumptable 00646CD0 cases 1-3,6,8,13-15,32,40
0x646D85: movsx   eax, byte ptr [ebx+20h]
0x646D89: add     eax, 0FFFFFFFFh; switch 7 cases
0x646D8C: cmp     eax, 6
0x646D8F: ja      short def_646D98; jumptable 00646CD0 cases 1-3,6,8,13-15,32,40
0x646D91: movzx   ecx, ds:byte_646E50[eax]
0x646D98: jmp     ds:jpt_646D98[ecx*4]; switch jump
0x646D9F: test    ebp, ebp; jumptable 00646CD0 cases 1-3,6,8,13-15,32,40
0x646DA1: jz      short def_646CD0; jumptable 00646CD0 default case, cases 10-12,16-29,31,33-39,41-43
0x646DA3: mov     edx, [ebp+0]
0x646DA6: mov     ecx, ebp
0x646DA8: jmp     short loc_646DC6
0x646DAA: cmp     dword ptr [ebx+24h], 0; jumptable 00646D98 case 6
0x646DAE: jz      short loc_646DB9
0x646DB0: lea     ecx, [esp+58h+var_C]
0x646DB4: jmp     loc_646CFD
0x646DB9: mov     ecx, edi
0x646DBB: call    sub_4D79F0
0x646DC0: jmp     short loc_646DCE
0x646DC2: mov     edx, [edi]; jumptable 00646CD0 default case, cases 10-12,16-29,31,33-39,41-43
0x646DC4: mov     ecx, edi
0x646DC6: mov     eax, [edx+174h]
0x646DCC: call    eax
0x646DCE: mov     ecx, [eax]
0x646DD0: mov     edx, [eax+4]
0x646DD3: mov     eax, [eax+8]
0x646DD6: mov     [esi], ecx
0x646DD8: mov     [esi+4], edx
0x646DDB: mov     [esi+8], eax
0x646DDE: pop     edi
0x646DDF: mov     eax, esi
0x646DE1: pop     esi
0x646DE2: pop     ebp
0x646DE3: pop     ebx
0x646DE4: add     esp, 48h
0x646DE7: retn    0Ch
