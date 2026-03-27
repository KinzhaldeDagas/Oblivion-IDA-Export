0x4E0000: push    ebx
0x4E0001: push    esi
0x4E0002: mov     esi, [esp+8+arg_0]
0x4E0006: test    esi, esi
0x4E0008: mov     ebx, ecx
0x4E000A: jz      loc_4E00C7
0x4E0010: push    ebp
0x4E0011: mov     ebp, [esp+0Ch+arg_4]
0x4E0015: test    ebp, ebp
0x4E0017: mov     dword ptr [esi], 0
0x4E001D: jz      loc_4E00C6
0x4E0023: mov     eax, [ebx+18h]
0x4E0026: mov     edx, [eax]
0x4E0028: lea     ecx, [ebx+18h]
0x4E002B: push    edi
0x4E002C: call    edx
0x4E002E: mov     edi, eax
0x4E0030: mov     eax, [ebp+0Ch]
0x4E0033: mov     ecx, [edi+0Ch]
0x4E0036: add     eax, 0FFFFFFFFh; switch 6 cases
0x4E0039: cmp     eax, 5
0x4E003C: mov     [esp+10h+arg_4], ecx
0x4E0040: mov     byte ptr [esp+10h+arg_0], 0
0x4E0045: ja      short TESObjectREFR_CreateGroupRecord___def_4E0047; jumptable 004E0047 default case, cases 2,4
0x4E0047: jmp     ds:jpt_4E0047[eax*4]; switch jump
0x4E004E: mov     ecx, edi; jumptable 004E0047 case 1
0x4E0050: call    TESForm_GetQuestItem
0x4E0055: test    al, al
0x4E0057: jz      short loc_4E005E; jumptable 004E0047 cases 3,5
0x4E0059: mov     byte ptr [esp+10h+arg_0], 1
0x4E005E: mov     ecx, edi; jumptable 004E0047 cases 3,5
0x4E0060: call    sub_4CA640
0x4E0065: cmp     [ebp+8], eax
0x4E0068: jz      short loc_4E0071
0x4E006A: cmp     byte ptr [esp+10h+arg_0], 0
0x4E006F: jz      short TESObjectREFR_CreateGroupRecord___def_4E0047; jumptable 004E0047 default case, cases 2,4
0x4E0071: mov     eax, ds:0B05E20h
0x4E0076: mov     [esi], eax
0x4E0078: mov     dword ptr [esi+0Ch], 6
0x4E007F: jmp     short loc_4E00B6
0x4E0081: cmp     [ebp+8], ecx; jumptable 004E0047 case 6
0x4E0084: jnz     short TESObjectREFR_CreateGroupRecord___def_4E0047; jumptable 004E0047 default case, cases 2,4
0x4E0086: mov     edx, ds:0B05E20h
0x4E008C: mov     ecx, ebx; this
0x4E008E: mov     [esi], edx
0x4E0090: call    TESObjectREFR_IsPersistent?
0x4E0095: test    al, al
0x4E0097: jz      short loc_4E00A2
0x4E0099: mov     dword ptr [esi+0Ch], 8
0x4E00A0: jmp     short loc_4E00B6
0x4E00A2: mov     eax, [ebx+8]
0x4E00A5: and     eax, 8000h
0x4E00AA: neg     eax
0x4E00AC: sbb     eax, eax
0x4E00AE: neg     eax
0x4E00B0: add     eax, 9
0x4E00B3: mov     [esi+0Ch], eax
0x4E00B6: mov     ecx, [esp+10h+arg_4]
0x4E00BA: xor     eax, eax
0x4E00BC: mov     [esi+10h], eax
0x4E00BF: mov     [esi+4], eax
0x4E00C2: mov     [esi+8], ecx
0x4E00C5: pop     edi; jumptable 004E0047 default case, cases 2,4
0x4E00C6: pop     ebp
0x4E00C7: pop     esi
0x4E00C8: pop     ebx
0x4E00C9: retn    8
