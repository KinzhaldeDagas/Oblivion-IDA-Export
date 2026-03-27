0x70F030: mov     al, [esp+arg_4]
0x70F034: push    ebx
0x70F035: push    esi
0x70F036: push    edi
0x70F037: mov     edi, ecx
0x70F039: mov     ecx, [esp+0Ch+arg_0]
0x70F03D: xor     esi, esi
0x70F03F: cmp     ecx, 9; switch 10 cases
0x70F042: mov     [edi+1], al
0x70F045: mov     [edi+4], ecx
0x70F048: mov     dword ptr [edi+0Ch], 0FFFFFFFFh
0x70F04F: mov     [edi+10h], esi
0x70F052: mov     byte ptr [edi], 1
0x70F055: mov     [edi+8], esi
0x70F058: ja      def_70F05E; jumptable 0070F05E default case, case 7
0x70F05E: jmp     ds:jpt_70F05E[ecx*4]; switch jump
0x70F065: mov     ebx, 10h; jumptable 0070F05E case 0
0x70F06A: cmp     al, bl
0x70F06C: jz      short loc_70F0DB
0x70F06E: cmp     al, 18h
0x70F070: jnz     loc_70F10D
0x70F076: mov     eax, [esp+0Ch+arg_8]
0x70F07A: mov     ecx, [eax]
0x70F07C: cmp     ecx, 0FFh
0x70F082: mov     edx, 0FF00h
0x70F087: jnz     short loc_70F0AE
0x70F089: cmp     [eax+4], edx
0x70F08C: jnz     short loc_70F0AE
0x70F08E: cmp     dword ptr [eax+8], 0FF0000h
0x70F095: jnz     short loc_70F0AE
0x70F097: cmp     [eax+0Ch], esi
0x70F09A: jnz     short loc_70F0AE
0x70F09C: mov     ecx, 11h
0x70F0A1: mov     esi, offset unk_B25E48
0x70F0A6: rep movsd
0x70F0A8: pop     edi
0x70F0A9: pop     esi
0x70F0AA: pop     ebx
0x70F0AB: retn    0Ch
0x70F0AE: cmp     ecx, 0FF0000h
0x70F0B4: jnz     short loc_70F10D
0x70F0B6: cmp     [eax+4], edx
0x70F0B9: jnz     short loc_70F10D
0x70F0BB: cmp     dword ptr [eax+8], 0FFh
0x70F0C2: jnz     short loc_70F10D
0x70F0C4: cmp     [eax+0Ch], esi
0x70F0C7: jnz     short loc_70F10D
0x70F0C9: mov     ecx, 11h
0x70F0CE: mov     esi, offset unk_B26598
0x70F0D3: rep movsd
0x70F0D5: pop     edi
0x70F0D6: pop     esi
0x70F0D7: pop     ebx
0x70F0D8: retn    0Ch
0x70F0DB: mov     eax, [esp+0Ch+arg_8]
0x70F0DF: cmp     dword ptr [eax], 0F800h
0x70F0E5: jnz     short loc_70F10D
0x70F0E7: cmp     dword ptr [eax+4], 7E0h
0x70F0EE: jnz     short loc_70F10D
0x70F0F0: cmp     dword ptr [eax+8], 1Fh
0x70F0F4: jnz     short loc_70F10D
0x70F0F6: cmp     [eax+0Ch], esi
0x70F0F9: jnz     short loc_70F10D
0x70F0FB: mov     ecx, 11h
0x70F100: mov     esi, offset unk_B263E8
0x70F105: rep movsd
0x70F107: pop     edi
0x70F108: pop     esi
0x70F109: pop     ebx
0x70F10A: retn    0Ch
0x70F10D: mov     [edi+4], ebx
0x70F110: pop     edi
0x70F111: pop     esi
0x70F112: pop     ebx
0x70F113: retn    0Ch
0x70F116: mov     ebx, 10h; jumptable 0070F05E case 1
0x70F11B: cmp     al, bl
0x70F11D: jz      short loc_70F16E
0x70F11F: cmp     al, 20h ; ' '
0x70F121: jnz     short loc_70F10D
0x70F123: mov     eax, [esp+0Ch+arg_8]
0x70F127: cmp     dword ptr [eax], 0FF0000h
0x70F12D: jnz     short loc_70F15C
0x70F12F: cmp     dword ptr [eax+4], 0FF00h
0x70F136: jnz     short loc_70F15C
0x70F138: cmp     dword ptr [eax+8], 0FFh
0x70F13F: jnz     short loc_70F15C
0x70F141: cmp     dword ptr [eax+0Ch], 0FF000000h
0x70F148: jnz     short loc_70F15C
0x70F14A: mov     ecx, 11h
0x70F14F: mov     esi, offset unk_B265E0
0x70F154: rep movsd
0x70F156: pop     edi
0x70F157: pop     esi
0x70F158: pop     ebx
0x70F159: retn    0Ch
0x70F15C: mov     ecx, 11h
0x70F161: mov     esi, offset unk_B25E00
0x70F166: rep movsd
0x70F168: pop     edi
0x70F169: pop     esi
0x70F16A: pop     ebx
0x70F16B: retn    0Ch
0x70F16E: mov     eax, [esp+0Ch+arg_8]
0x70F172: mov     ecx, [eax]
0x70F174: cmp     ecx, 1Fh
0x70F177: mov     edx, 3E0h
0x70F17C: mov     esi, 8000h
0x70F181: jnz     short loc_70F1A8
0x70F183: cmp     [eax+4], edx
0x70F186: jnz     short loc_70F1A8
0x70F188: cmp     dword ptr [eax+8], 7C00h
0x70F18F: jnz     short loc_70F1A8
0x70F191: cmp     [eax+0Ch], esi
0x70F194: jnz     short loc_70F1A8
0x70F196: mov     ecx, 11h
0x70F19B: mov     esi, offset unk_B25E90
0x70F1A0: rep movsd
0x70F1A2: pop     edi
0x70F1A3: pop     esi
0x70F1A4: pop     ebx
0x70F1A5: retn    0Ch
0x70F1A8: cmp     ecx, 7C00h
0x70F1AE: jnz     short loc_70F1D2
0x70F1B0: cmp     [eax+4], edx
0x70F1B3: jnz     short loc_70F1D2
0x70F1B5: cmp     dword ptr [eax+8], 1Fh
0x70F1B9: jnz     short loc_70F1D2
0x70F1BB: cmp     [eax+0Ch], esi
0x70F1BE: jnz     short loc_70F1D2
0x70F1C0: mov     ecx, 11h
0x70F1C5: mov     esi, offset unk_B25ED8
0x70F1CA: rep movsd
0x70F1CC: pop     edi
0x70F1CD: pop     esi
0x70F1CE: pop     ebx
0x70F1CF: retn    0Ch
0x70F1D2: cmp     ecx, 0F00h
0x70F1D8: jnz     loc_70F10D
0x70F1DE: cmp     dword ptr [eax+4], 0F0h ; 'ð'
0x70F1E5: jnz     loc_70F10D
0x70F1EB: cmp     dword ptr [eax+8], 0Fh
0x70F1EF: jnz     loc_70F10D
0x70F1F5: cmp     dword ptr [eax+0Ch], 0F000h
0x70F1FC: jnz     loc_70F10D
0x70F202: mov     ecx, 11h
0x70F207: mov     esi, offset unk_B26508
0x70F20C: rep movsd
0x70F20E: pop     edi
0x70F20F: pop     esi
0x70F210: pop     ebx
0x70F211: retn    0Ch
0x70F214: cmp     al, 8; jumptable 0070F05E case 2
0x70F216: jnz     def_70F05E; jumptable 0070F05E default case, case 7
0x70F21C: mov     ecx, 11h
0x70F221: mov     esi, offset unk_B25D70
0x70F226: rep movsd
0x70F228: pop     edi
0x70F229: pop     esi
0x70F22A: pop     ebx
0x70F22B: retn    0Ch
0x70F22E: cmp     al, 8; jumptable 0070F05E case 3
0x70F230: jnz     short def_70F05E; jumptable 0070F05E default case, case 7
0x70F232: mov     ecx, 11h
0x70F237: mov     esi, offset unk_B25DB8
0x70F23C: rep movsd
0x70F23E: pop     edi
0x70F23F: pop     esi
0x70F240: pop     ebx
0x70F241: retn    0Ch
0x70F244: mov     ecx, 11h; jumptable 0070F05E case 4
0x70F249: mov     esi, offset unk_B25FB0
0x70F24E: rep movsd
0x70F250: pop     edi
0x70F251: pop     esi
0x70F252: pop     ebx
0x70F253: retn    0Ch
0x70F256: mov     ecx, 11h; jumptable 0070F05E case 5
0x70F25B: mov     esi, offset unk_B25FF8
0x70F260: rep movsd
0x70F262: pop     edi
0x70F263: pop     esi
0x70F264: pop     ebx
0x70F265: retn    0Ch
0x70F268: mov     ecx, 11h; jumptable 0070F05E case 6
0x70F26D: mov     esi, offset unk_B26040
0x70F272: rep movsd
0x70F274: pop     edi
0x70F275: pop     esi
0x70F276: pop     ebx
0x70F277: retn    0Ch
0x70F27A: mov     ecx, 11h; jumptable 0070F05E case 8
0x70F27F: mov     esi, offset unk_B25F20
0x70F284: rep movsd
0x70F286: pop     edi
0x70F287: pop     esi
0x70F288: pop     ebx
0x70F289: retn    0Ch
0x70F28C: mov     ecx, 11h; jumptable 0070F05E case 9
0x70F291: mov     esi, offset unk_B25F68
0x70F296: rep movsd
0x70F298: pop     edi
0x70F299: pop     esi
0x70F29A: pop     ebx
0x70F29B: retn    0Ch
0x70F29E: mov     dword ptr [edi+4], 10h; jumptable 0070F05E default case, case 7
0x70F2A5: pop     edi
0x70F2A6: pop     esi
0x70F2A7: pop     ebx
0x70F2A8: retn    0Ch
