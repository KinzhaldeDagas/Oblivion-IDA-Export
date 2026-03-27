0x50FF70: push    0FFFFFFFFh
0x50FF72: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x50FF77: mov     eax, large fs:0
0x50FF7D: push    eax
0x50FF7E: push    ecx
0x50FF7F: push    ebx
0x50FF80: push    ebp
0x50FF81: push    esi
0x50FF82: push    edi
0x50FF83: mov     eax, ds:0B30AACh
0x50FF88: xor     eax, esp
0x50FF8A: push    eax
0x50FF8B: lea     eax, [esp+24h+var_C]
0x50FF8F: mov     large fs:0, eax
0x50FF95: mov     esi, [esp+24h+arg_8]
0x50FF99: xor     ebx, ebx
0x50FF9B: cmp     esi, ebx
0x50FF9D: jz      loc_51012C
0x50FFA3: mov     eax, [esi]
0x50FFA5: mov     edx, [eax+154h]
0x50FFAB: mov     ecx, esi
0x50FFAD: call    edx
0x50FFAF: test    eax, eax
0x50FFB1: jz      loc_51012C
0x50FFB7: mov     eax, [esi]
0x50FFB9: mov     edx, [eax+154h]
0x50FFBF: mov     ecx, esi
0x50FFC1: call    edx
0x50FFC3: push    10h; Size
0x50FFC5: mov     edi, eax
0x50FFC7: call    FormHeapAlloc
0x50FFCC: add     esp, 4
0x50FFCF: cmp     eax, ebx
0x50FFD1: jz      short loc_50FFF2
0x50FFD3: mov     dword ptr [eax], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x50FFD9: mov     [eax+8], bx
0x50FFDD: mov     word ptr [eax+0Eh], 1
0x50FFE3: mov     [eax+0Ah], bx
0x50FFE7: mov     [eax+0Ch], bx
0x50FFEB: mov     [eax+4], ebx
0x50FFEE: mov     esi, eax
0x50FFF0: jmp     short loc_50FFF4
0x50FFF2: xor     esi, esi
0x50FFF4: cmp     edi, ebx
0x50FFF6: mov     [esp+24h+var_4], 0FFFFFFFFh
0x50FFFE: jz      short loc_510040
0x510000: mov     eax, [edi]
0x510002: mov     edx, [eax+8]
0x510005: mov     ecx, edi
0x510007: call    edx
0x510009: test    eax, eax
0x51000B: jz      short loc_51003C
0x51000D: mov     edx, edi
0x51000F: movzx   ecx, word ptr [edx+0B6h]
0x510016: xor     edi, edi
0x510018: xor     eax, eax
0x51001A: cmp     ecx, ebx
0x51001C: jbe     short loc_510040
0x51001E: mov     edi, edi
0x510020: cmp     edi, ebx
0x510022: jnz     short loc_51004A
0x510024: cmp     ecx, eax
0x510026: ja      short loc_51002C
0x510028: xor     edi, edi
0x51002A: jmp     short loc_510035
0x51002C: mov     edi, [edx+0B0h]
0x510032: mov     edi, [edi+eax*4]
0x510035: add     eax, 1
0x510038: cmp     eax, ecx
0x51003A: jb      short loc_510020
0x51003C: cmp     edi, ebx
0x51003E: jnz     short loc_51004A
0x510040: push    offset aNodeWithNoChil; "Node with no children supplied as refer"...
0x510045: jmp     loc_510131
0x51004A: mov     eax, [edi]
0x51004C: mov     edx, [eax+30h]
0x51004F: push    esi
0x510050: mov     ecx, edi
0x510052: call    edx
0x510054: xor     ebp, ebp
0x510056: cmp     [esi+0Ah], bx
0x51005A: jbe     short loc_51007A
0x51005C: lea     esp, [esp+0]
0x510060: mov     eax, [esi+4]
0x510063: mov     ecx, [eax+ebp*4]
0x510066: push    ecx; Format
0x510067: call    Interface_ConsolePrint
0x51006C: movzx   edx, word ptr [esi+0Ah]
0x510070: add     ebp, 1
0x510073: add     esp, 4
0x510076: cmp     ebp, edx
0x510078: jb      short loc_510060
0x51007A: xor     eax, eax
0x51007C: cmp     [esi+0Ah], bx
0x510080: jbe     short loc_510094
0x510082: mov     edx, [esi+4]
0x510085: movzx   ecx, ax
0x510088: add     eax, 1
0x51008B: mov     [edx+ecx*4], ebx
0x51008E: cmp     ax, [esi+0Ah]
0x510092: jb      short loc_510082
0x510094: mov     [esi+0Ah], bx
0x510098: mov     [esi+0Ch], bx
0x51009C: mov     edi, [edi+0A8h]
0x5100A2: cmp     edi, ebx
0x5100A4: jz      short loc_51011C
0x5100A6: mov     eax, [edi]
0x5100A8: mov     edx, [eax+4]
0x5100AB: mov     ecx, edi
0x5100AD: call    edx
0x5100AF: cmp     eax, ebx
0x5100B1: jz      short loc_5100C1
0x5100B3: cmp     eax, offset dword_BA7D24
0x5100B8: jz      short loc_510128
0x5100BA: mov     eax, [eax+4]
0x5100BD: cmp     eax, ebx
0x5100BF: jnz     short loc_5100B3
0x5100C1: xor     al, al
0x5100C3: neg     al
0x5100C5: sbb     eax, eax
0x5100C7: and     eax, edi
0x5100C9: jz      short loc_51011C
0x5100CB: mov     ecx, [eax+10h]
0x5100CE: mov     eax, [ecx]
0x5100D0: mov     edx, [eax+30h]
0x5100D3: push    esi
0x5100D4: call    edx
0x5100D6: xor     edi, edi
0x5100D8: cmp     [esi+0Ah], bx
0x5100DC: jbe     short loc_5100FA
0x5100DE: mov     edi, edi
0x5100E0: mov     eax, [esi+4]
0x5100E3: mov     ecx, [eax+edi*4]
0x5100E6: push    ecx; Format
0x5100E7: call    Interface_ConsolePrint
0x5100EC: movzx   edx, word ptr [esi+0Ah]
0x5100F0: add     edi, 1
0x5100F3: add     esp, 4
0x5100F6: cmp     edi, edx
0x5100F8: jb      short loc_5100E0
0x5100FA: xor     eax, eax
0x5100FC: cmp     [esi+0Ah], bx
0x510100: jbe     short loc_510114
0x510102: mov     edx, [esi+4]
0x510105: movzx   ecx, ax
0x510108: add     eax, 1
0x51010B: mov     [edx+ecx*4], ebx
0x51010E: cmp     ax, [esi+0Ah]
0x510112: jb      short loc_510102
0x510114: mov     [esi+0Ah], bx
0x510118: mov     [esi+0Ch], bx
0x51011C: mov     eax, [esi]
0x51011E: mov     edx, [eax]
0x510120: push    1
0x510122: mov     ecx, esi
0x510124: call    edx
0x510126: jmp     short loc_510139
0x510128: mov     al, 1
0x51012A: jmp     short loc_5100C3
0x51012C: push    offset aMustSupplyAVal; "Must supply a valid reference to show v"...
0x510131: call    Interface_ConsolePrint
0x510136: add     esp, 4
0x510139: mov     al, 1
0x51013B: mov     ecx, [esp+24h+var_C]
0x51013F: mov     large fs:0, ecx
0x510146: pop     ecx
0x510147: pop     edi
0x510148: pop     esi
0x510149: pop     ebp
0x51014A: pop     ebx
0x51014B: add     esp, 10h
0x51014E: retn
