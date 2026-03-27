0x453B96: cmp     [esp+arg_174], 0; jumptable 00453B6F default case
0x453B9E: jnz     short loc_453C04
0x453BA0: lea     eax, [esp+arg_24]
0x453BA4: lea     edx, [eax+1]
0x453BA7: mov     cl, [eax]
0x453BA9: add     eax, 1
0x453BAC: test    cl, cl
0x453BAE: jnz     short loc_453BA7
0x453BB0: mov     si, ds:0A36430h
0x453BB7: sub     eax, edx
0x453BB9: cmp     eax, 19h
0x453BBC: jnb     short loc_453BF0
0x453BBE: mov     edi, edi
0x453BC0: lea     edi, [esp+arg_24]
0x453BC4: add     edi, 0FFFFFFFFh
0x453BC7: mov     al, [edi+1]
0x453BCA: add     edi, 1
0x453BCD: test    al, al
0x453BCF: jnz     short loc_453BC7
0x453BD1: lea     eax, [esp+arg_24]
0x453BD5: mov     [edi], si
0x453BD8: lea     edx, [eax+1]
0x453BDB: jmp     short loc_453BE0
0x453BDD: align 10h
0x453BE0: mov     cl, [eax]
0x453BE2: add     eax, 1
0x453BE5: test    cl, cl
0x453BE7: jnz     short loc_453BE0
0x453BE9: sub     eax, edx
0x453BEB: cmp     eax, 19h
0x453BEE: jb      short loc_453BC0
0x453BF0: lea     edi, [esp+arg_24]
0x453BF4: add     edi, 0FFFFFFFFh
0x453BF7: mov     al, [edi+1]
0x453BFA: add     edi, 1
0x453BFD: test    al, al
0x453BFF: jnz     short loc_453BF7
0x453C01: mov     [edi], si
0x453C04: lea     eax, [esp+arg_24]
0x453C08: mov     ecx, eax
0x453C0A: lea     ebx, [ebx+0]
0x453C10: mov     dl, [eax]
0x453C12: add     eax, 1
0x453C15: test    dl, dl
0x453C17: jnz     short loc_453C10
0x453C19: mov     edi, [esp+arg_C]
0x453C1D: sub     eax, ecx
0x453C1F: mov     esi, ecx
0x453C21: add     edi, 0FFFFFFFFh
0x453C24: mov     cl, [edi+1]
0x453C27: add     edi, 1
0x453C2A: test    cl, cl
0x453C2C: jnz     short loc_453C24
0x453C2E: jmp     loc_453DDE
0x453C33: movzx   edx, word ptr [esp+arg_10]
0x453C38: push    edx
0x453C39: lea     eax, [esp+4+arg_24]
0x453C3D: push    offset aNoneI; "None(%i)"
0x453C42: push    eax
0x453C43: call    __sprintf
0x453C48: add     esp, 0Ch
0x453C4B: jmp     loc_453BA0
0x453C50: cmp     [esp+arg_174], 0; jumptable 00453B6F case 3
0x453C58: jz      short loc_453C64
0x453C5A: push    offset aProcessLevelLo; "Process Level: Low\r\n"
0x453C5F: jmp     loc_453B89
0x453C64: movzx   edx, word ptr [esp+arg_10]
0x453C69: push    edx
0x453C6A: lea     eax, [esp+4+arg_24]
0x453C6E: push    offset aLowI; "Low(%i)"
0x453C73: push    eax
0x453C74: call    __sprintf
0x453C79: add     esp, 0Ch
0x453C7C: jmp     loc_453BA0
0x453C81: cmp     [esp+arg_174], 0; jumptable 00453B6F case 2
0x453C89: jz      short loc_453C95
0x453C8B: push    offset aProcessLevelMi; "Process Level: Middle Low\r\n"
0x453C90: jmp     loc_453B89
0x453C95: movzx   edx, word ptr [esp+arg_10]
0x453C9A: push    edx
0x453C9B: lea     eax, [esp+4+arg_24]
0x453C9F: push    offset aMidLowI; "Mid Low(%i)"
0x453CA4: push    eax
0x453CA5: call    __sprintf
0x453CAA: add     esp, 0Ch
0x453CAD: jmp     loc_453BA0
0x453CB2: cmp     [esp+arg_174], 0; jumptable 00453B6F case 1
0x453CBA: jz      short loc_453CC6
0x453CBC: push    offset aProcessLevel_0; "Process Level: Middle High\r\n"
0x453CC1: jmp     loc_453B89
0x453CC6: movzx   edx, word ptr [esp+arg_10]
0x453CCB: push    edx
0x453CCC: lea     eax, [esp+4+arg_24]
0x453CD0: push    offset aMidHighI; "Mid High(%i)"
0x453CD5: push    eax
0x453CD6: call    __sprintf
0x453CDB: add     esp, 0Ch
0x453CDE: jmp     loc_453BA0
0x453CE3: cmp     [esp+arg_174], 0; jumptable 00453B6F case 0
0x453CEB: jz      short loc_453CF7
0x453CED: push    offset aProcessLevelHi; "Process Level: High\r\n"
0x453CF2: jmp     loc_453B89
0x453CF7: movzx   edx, word ptr [esp+arg_10]
0x453CFC: push    edx
0x453CFD: lea     eax, [esp+4+arg_24]
0x453D01: push    offset aHighI; "High(%i)"
0x453D06: push    eax
0x453D07: call    __sprintf
0x453D0C: add     esp, 0Ch
0x453D0F: jmp     loc_453BA0
0x453D14: mov     esi, [esp+arg_10]
0x453D18: test    si, si
0x453D1B: jz      loc_453DF4
0x453D21: cmp     [esp+arg_174], 0
0x453D29: jnz     loc_453DF4
0x453D2F: movzx   ecx, si
0x453D32: push    ecx
0x453D33: lea     edx, [esp+4+arg_24]
0x453D37: push    offset aBaseI; "Base(%i)"
0x453D3C: push    edx
0x453D3D: call    __sprintf
0x453D42: lea     eax, [esp+0Ch+arg_24]
0x453D46: add     esp, 0Ch
0x453D49: lea     edx, [eax+1]
0x453D4C: lea     esp, [esp+0]
0x453D50: mov     cl, [eax]
0x453D52: add     eax, 1
0x453D55: test    cl, cl
0x453D57: jnz     short loc_453D50
0x453D59: mov     si, ds:0A36430h
0x453D60: sub     eax, edx
0x453D62: cmp     eax, 19h
0x453D65: jnb     short loc_453DA0
0x453D67: jmp     short loc_453D70
0x453D69: align 10h
0x453D70: lea     edi, [esp+arg_24]
0x453D74: add     edi, 0FFFFFFFFh
0x453D77: mov     al, [edi+1]
0x453D7A: add     edi, 1
0x453D7D: test    al, al
0x453D7F: jnz     short loc_453D77
0x453D81: lea     eax, [esp+arg_24]
0x453D85: mov     [edi], si
0x453D88: lea     edx, [eax+1]
0x453D8B: jmp     short loc_453D90
0x453D8D: align 10h
0x453D90: mov     cl, [eax]
0x453D92: add     eax, 1
0x453D95: test    cl, cl
0x453D97: jnz     short loc_453D90
0x453D99: sub     eax, edx
0x453D9B: cmp     eax, 19h
0x453D9E: jb      short loc_453D70
0x453DA0: lea     edi, [esp+arg_24]
0x453DA4: add     edi, 0FFFFFFFFh
0x453DA7: mov     al, [edi+1]
0x453DAA: add     edi, 1
0x453DAD: test    al, al
0x453DAF: jnz     short loc_453DA7
0x453DB1: lea     eax, [esp+arg_24]
0x453DB5: mov     [edi], si
0x453DB8: mov     ecx, eax
0x453DBA: lea     ebx, [ebx+0]
0x453DC0: mov     dl, [eax]
0x453DC2: add     eax, 1
0x453DC5: test    dl, dl
0x453DC7: jnz     short loc_453DC0
0x453DC9: mov     edi, [esp+arg_C]
0x453DCD: sub     eax, ecx
0x453DCF: mov     esi, ecx
0x453DD1: add     edi, 0FFFFFFFFh
0x453DD4: mov     cl, [edi+1]
0x453DD7: add     edi, 1
0x453DDA: test    cl, cl
0x453DDC: jnz     short loc_453DD4
0x453DDE: mov     ecx, eax
0x453DE0: shr     ecx, 2
0x453DE3: rep movsd
0x453DE5: mov     ecx, eax
0x453DE7: and     ecx, 3
0x453DEA: rep movsb
0x453DEC: mov     esi, [esp+arg_10]
0x453DF0: mov     edi, [esp+arg_C]
0x453DF4: mov     edx, [esp+arg_16C]
0x453DFB: test    dl, 1
0x453DFE: jz      loc_453F2B
0x453E04: cmp     [esp+arg_174], 0
0x453E0C: jz      short loc_453E4E
0x453E0E: mov     eax, edi
0x453E10: add     eax, 0FFFFFFFFh
0x453E13: mov     cl, [eax+1]
0x453E16: add     eax, 1
0x453E19: test    cl, cl
0x453E1B: jnz     short loc_453E13
0x453E1D: mov     ecx, ds:0A39E6Ch
0x453E23: mov     [eax], ecx
0x453E25: mov     ecx, ds:0A39E70h
0x453E2B: mov     [eax+4], ecx
0x453E2E: mov     ecx, ds:0A39E74h
0x453E34: mov     [eax+8], ecx
0x453E37: mov     ecx, ds:0A39E78h
0x453E3D: mov     [eax+0Ch], ecx
0x453E40: mov     ecx, ds:0A39E7Ch
0x453E46: mov     [eax+10h], ecx
0x453E49: jmp     loc_453F2B
0x453E4E: test    ebp, ebp
0x453E50: jz      short loc_453E68
0x453E52: mov     edx, [ebp+0]
0x453E55: mov     eax, [edx+4Ch]
0x453E58: push    1
0x453E5A: mov     ecx, ebp
0x453E5C: call    eax
0x453E5E: movzx   eax, ax
0x453E61: movzx   ecx, si
0x453E64: sub     eax, ecx
0x453E66: jmp     short loc_453E6A
0x453E68: xor     eax, eax
0x453E6A: push    eax
0x453E6B: lea     edx, [esp+8+arg_20]
0x453E6F: push    offset aFormFlagsI; "Form Flags(%i)"
0x453E74: push    edx
0x453E75: call    __sprintf
0x453E7A: lea     eax, [esp+10h+arg_20]
0x453E7E: add     esp, 0Ch
0x453E81: lea     edx, [eax+1]
0x453E84: mov     cl, [eax]
0x453E86: add     eax, 1
0x453E89: test    cl, cl
0x453E8B: jnz     short loc_453E84
0x453E8D: mov     si, ds:0A36430h
0x453E94: sub     eax, edx
0x453E96: cmp     eax, 19h
0x453E99: jnb     short loc_453ED0
0x453E9B: jmp     short loc_453EA0
0x453E9D: align 10h
0x453EA0: lea     edi, [esp+4+arg_20]
0x453EA4: add     edi, 0FFFFFFFFh
0x453EA7: mov     al, [edi+1]
0x453EAA: add     edi, 1
0x453EAD: test    al, al
0x453EAF: jnz     short loc_453EA7
0x453EB1: lea     eax, [esp+4+arg_20]
0x453EB5: mov     [edi], si
0x453EB8: lea     edx, [eax+1]
0x453EBB: jmp     short loc_453EC0
0x453EBD: align 10h
0x453EC0: mov     cl, [eax]
0x453EC2: add     eax, 1
0x453EC5: test    cl, cl
0x453EC7: jnz     short loc_453EC0
0x453EC9: sub     eax, edx
0x453ECB: cmp     eax, 19h
0x453ECE: jb      short loc_453EA0
0x453ED0: lea     edi, [esp+4+arg_20]
0x453ED4: add     edi, 0FFFFFFFFh
0x453ED7: mov     al, [edi+1]
0x453EDA: add     edi, 1
0x453EDD: test    al, al
0x453EDF: jnz     short loc_453ED7
0x453EE1: lea     eax, [esp+4+arg_20]
0x453EE5: mov     [edi], si
0x453EE8: mov     ecx, eax
0x453EEA: lea     ebx, [ebx+0]
0x453EF0: mov     dl, [eax]
0x453EF2: add     eax, 1
0x453EF5: test    dl, dl
0x453EF7: jnz     short loc_453EF0
0x453EF9: mov     edi, [esp+4+arg_8]
0x453EFD: sub     eax, ecx
0x453EFF: mov     esi, ecx
0x453F01: add     edi, 0FFFFFFFFh
0x453F04: mov     cl, [edi+1]
0x453F07: add     edi, 1
0x453F0A: test    cl, cl
0x453F0C: jnz     short loc_453F04
0x453F0E: mov     edx, [esp+4+arg_168]
0x453F15: mov     ecx, eax
0x453F17: shr     ecx, 2
0x453F1A: rep movsd
0x453F1C: mov     ecx, eax
0x453F1E: and     ecx, 3
0x453F21: rep movsb
0x453F23: mov     edi, [esp+4+arg_8]
0x453F27: mov     esi, [esp+4+arg_C]
0x453F2B: mov     al, [esp+arg_170]
0x453F32: cmp     al, 23h ; '#'
0x453F34: jz      loc_457FF1
0x453F3A: cmp     al, 24h ; '$'
0x453F3C: jz      loc_457FF1
0x453F42: cmp     al, 3Bh ; ';'
0x453F44: jnz     loc_454333
0x453F4A: test    dl, 4
0x453F4D: jz      loc_45408B
0x453F53: cmp     [esp+arg_174], 0
0x453F5B: jz      short loc_453FA6
0x453F5D: mov     eax, edi
0x453F5F: add     eax, 0FFFFFFFFh
0x453F62: mov     cl, [eax+1]
0x453F65: add     eax, 1
0x453F68: test    cl, cl
0x453F6A: jnz     short loc_453F62
0x453F6C: mov     ecx, ds:0A39E44h
0x453F72: mov     [eax], ecx
0x453F74: mov     ecx, ds:0A39E48h
0x453F7A: mov     [eax+4], ecx
0x453F7D: mov     ecx, ds:0A39E4Ch
0x453F83: mov     [eax+8], ecx
0x453F86: mov     ecx, ds:0A39E50h
0x453F8C: mov     [eax+0Ch], ecx
0x453F8F: mov     ecx, ds:0A39E54h
0x453F95: mov     [eax+10h], ecx
0x453F98: mov     cl, ds:0A39E58h
0x453F9E: mov     [eax+14h], cl
0x453FA1: jmp     loc_45408B
0x453FA6: test    ebp, ebp
0x453FA8: jz      short loc_453FC0
0x453FAA: mov     edx, [ebp+0]
0x453FAD: mov     eax, [edx+4Ch]
0x453FB0: push    4
0x453FB2: mov     ecx, ebp
0x453FB4: call    eax
0x453FB6: movzx   eax, ax
0x453FB9: movzx   ecx, si
0x453FBC: sub     eax, ecx
0x453FBE: jmp     short loc_453FC2
0x453FC0: xor     eax, eax
0x453FC2: push    eax
0x453FC3: lea     edx, [esp+8+arg_20]
0x453FC7: push    offset aQuestFlagsI; "Quest Flags(%i)"
0x453FCC: push    edx
0x453FCD: call    __sprintf
0x453FD2: lea     eax, [esp+10h+arg_20]
0x453FD6: add     esp, 0Ch
0x453FD9: lea     edx, [eax+1]
0x453FDC: lea     esp, [esp+0]
0x453FE0: mov     cl, [eax]
0x453FE2: add     eax, 1
0x453FE5: test    cl, cl
0x453FE7: jnz     short loc_453FE0
0x453FE9: mov     si, ds:0A36430h
0x453FF0: sub     eax, edx
0x453FF2: cmp     eax, 19h
0x453FF5: jnb     short loc_454030
0x453FF7: jmp     short loc_454000
0x453FF9: align 10h
0x454000: lea     edi, [esp+4+arg_20]
0x454004: add     edi, 0FFFFFFFFh
0x454007: mov     al, [edi+1]
0x45400A: add     edi, 1
0x45400D: test    al, al
0x45400F: jnz     short loc_454007
0x454011: lea     eax, [esp+4+arg_20]
0x454015: mov     [edi], si
0x454018: lea     edx, [eax+1]
0x45401B: jmp     short loc_454020
0x45401D: align 10h
0x454020: mov     cl, [eax]
0x454022: add     eax, 1
0x454025: test    cl, cl
0x454027: jnz     short loc_454020
0x454029: sub     eax, edx
0x45402B: cmp     eax, 19h
0x45402E: jb      short loc_454000
0x454030: lea     edi, [esp+4+arg_20]
0x454034: add     edi, 0FFFFFFFFh
0x454037: mov     al, [edi+1]
0x45403A: add     edi, 1
0x45403D: test    al, al
0x45403F: jnz     short loc_454037
0x454041: lea     eax, [esp+4+arg_20]
0x454045: mov     [edi], si
0x454048: mov     ecx, eax
0x45404A: lea     ebx, [ebx+0]
0x454050: mov     dl, [eax]
0x454052: add     eax, 1
0x454055: test    dl, dl
0x454057: jnz     short loc_454050
0x454059: mov     edi, [esp+4+arg_8]
0x45405D: sub     eax, ecx
0x45405F: mov     esi, ecx
0x454061: add     edi, 0FFFFFFFFh
0x454064: mov     cl, [edi+1]
0x454067: add     edi, 1
0x45406A: test    cl, cl
0x45406C: jnz     short loc_454064
0x45406E: mov     edx, [esp+4+arg_168]
0x454075: mov     ecx, eax
0x454077: shr     ecx, 2
0x45407A: rep movsd
0x45407C: mov     ecx, eax
0x45407E: and     ecx, 3
0x454081: rep movsb
0x454083: mov     edi, [esp+4+arg_8]
0x454087: mov     esi, [esp+4+arg_C]
0x45408B: test    edx, 10000000h
0x454091: jz      loc_4541CB
0x454097: cmp     [esp+arg_174], 0
0x45409F: jz      short loc_4540EC
0x4540A1: mov     eax, edi
0x4540A3: add     eax, 0FFFFFFFFh
0x4540A6: mov     cl, [eax+1]
0x4540A9: add     eax, 1
0x4540AC: test    cl, cl
0x4540AE: jnz     short loc_4540A6
0x4540B0: mov     ecx, ds:0A39E1Ch
0x4540B6: mov     [eax], ecx
0x4540B8: mov     ecx, ds:0A39E20h
0x4540BE: mov     [eax+4], ecx
0x4540C1: mov     ecx, ds:0A39E24h
0x4540C7: mov     [eax+8], ecx
0x4540CA: mov     ecx, ds:0A39E28h
0x4540D0: mov     [eax+0Ch], ecx
0x4540D3: mov     ecx, ds:0A39E2Ch
0x4540D9: mov     [eax+10h], ecx
0x4540DC: mov     cx, ds:0A39E30h
0x4540E3: mov     [eax+14h], cx
0x4540E7: jmp     loc_4541CB
0x4540EC: test    ebp, ebp
0x4540EE: jz      short loc_454109
0x4540F0: mov     edx, [ebp+0]
0x4540F3: mov     eax, [edx+4Ch]
0x4540F6: push    10000000h
0x4540FB: mov     ecx, ebp
0x4540FD: call    eax
0x4540FF: movzx   eax, ax
0x454102: movzx   ecx, si
0x454105: sub     eax, ecx
0x454107: jmp     short loc_45410B
0x454109: xor     eax, eax
0x45410B: push    eax
0x45410C: lea     edx, [esp+8+arg_20]
0x454110: push    offset aQuestStagesI; "Quest Stages(%i)"
0x454115: push    edx
0x454116: call    __sprintf
0x45411B: lea     eax, [esp+10h+arg_20]
0x45411F: add     esp, 0Ch
0x454122: lea     edx, [eax+1]
0x454125: mov     cl, [eax]
0x454127: add     eax, 1
0x45412A: test    cl, cl
0x45412C: jnz     short loc_454125
0x45412E: mov     si, ds:0A36430h
0x454135: sub     eax, edx
0x454137: cmp     eax, 19h
0x45413A: jnb     short loc_454170
0x45413C: lea     esp, [esp+0]
0x454140: lea     edi, [esp+4+arg_20]
0x454144: add     edi, 0FFFFFFFFh
0x454147: mov     al, [edi+1]
0x45414A: add     edi, 1
0x45414D: test    al, al
0x45414F: jnz     short loc_454147
0x454151: lea     eax, [esp+4+arg_20]
0x454155: mov     [edi], si
0x454158: lea     edx, [eax+1]
0x45415B: jmp     short loc_454160
0x45415D: align 10h
0x454160: mov     cl, [eax]
0x454162: add     eax, 1
0x454165: test    cl, cl
0x454167: jnz     short loc_454160
0x454169: sub     eax, edx
0x45416B: cmp     eax, 19h
0x45416E: jb      short loc_454140
0x454170: lea     edi, [esp+4+arg_20]
0x454174: add     edi, 0FFFFFFFFh
0x454177: mov     al, [edi+1]
0x45417A: add     edi, 1
0x45417D: test    al, al
0x45417F: jnz     short loc_454177
0x454181: lea     eax, [esp+4+arg_20]
0x454185: mov     [edi], si
0x454188: mov     ecx, eax
0x45418A: lea     ebx, [ebx+0]
0x454190: mov     dl, [eax]
0x454192: add     eax, 1
0x454195: test    dl, dl
0x454197: jnz     short loc_454190
0x454199: mov     edi, [esp+4+arg_8]
0x45419D: sub     eax, ecx
0x45419F: mov     esi, ecx
0x4541A1: add     edi, 0FFFFFFFFh
0x4541A4: mov     cl, [edi+1]
0x4541A7: add     edi, 1
0x4541AA: test    cl, cl
0x4541AC: jnz     short loc_4541A4
0x4541AE: mov     edx, [esp+4+arg_168]
0x4541B5: mov     ecx, eax
0x4541B7: shr     ecx, 2
0x4541BA: rep movsd
0x4541BC: mov     ecx, eax
0x4541BE: and     ecx, 3
0x4541C1: rep movsb
0x4541C3: mov     edi, [esp+4+arg_8]
0x4541C7: mov     esi, [esp+4+arg_C]
0x4541CB: test    edx, 8000000h
0x4541D1: jz      loc_458E1A
0x4541D7: cmp     [esp+arg_174], 0
0x4541DF: jz      short loc_45422C
0x4541E1: add     edi, 0FFFFFFFFh
0x4541E4: mov     eax, edi
0x4541E6: mov     cl, [eax+1]
0x4541E9: add     eax, 1
0x4541EC: test    cl, cl
0x4541EE: jnz     short loc_4541E6
0x4541F0: mov     ecx, ds:0A39DF0h
0x4541F6: mov     [eax], ecx
0x4541F8: mov     edx, ds:0A39DF4h
0x4541FE: mov     [eax+4], edx
0x454201: mov     ecx, ds:0A39DF8h
0x454207: mov     [eax+8], ecx
0x45420A: mov     edx, ds:0A39DFCh
0x454210: mov     [eax+0Ch], edx
0x454213: mov     ecx, ds:0A39E00h
0x454219: mov     [eax+10h], ecx
0x45421C: mov     dx, ds:0A39E04h
0x454223: mov     [eax+14h], dx
0x454227: jmp     loc_458E1A
0x45422C: push    0; int
0x45422E: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x454233: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x454238: push    0; int
0x45423A: push    ebp; void *
0x45423B: call    OblivionDynamicCast
0x454240: add     esp, 14h
0x454243: test    eax, eax
0x454245: jz      short loc_454265
0x454247: cmp     dword ptr [eax+58h], 0
0x45424B: jnz     short loc_454265
0x45424D: test    ebp, ebp
0x45424F: jz      short loc_454297
0x454251: lea     eax, [esp+arg_24]
0x454255: push    offset aQuestScriptNoL; "Quest Script(No longer has script local"...
0x45425A: push    eax
0x45425B: call    __sprintf
0x454260: add     esp, 8
0x454263: jmp     short loc_454297
0x454265: test    ebp, ebp
0x454267: jz      short loc_454282
0x454269: mov     edx, [ebp+0]
0x45426C: mov     eax, [edx+4Ch]
0x45426F: push    8000000h
0x454274: mov     ecx, ebp
0x454276: call    eax
0x454278: movzx   eax, ax
0x45427B: movzx   ecx, si
0x45427E: sub     eax, ecx
0x454280: jmp     short loc_454284
0x454282: xor     eax, eax
0x454284: push    eax
0x454285: lea     edx, [esp+8+arg_20]
0x454289: push    offset aQuestScriptI; "Quest Script(%i)"
0x45428E: push    edx
0x45428F: call    __sprintf
0x454294: add     esp, 0Ch
0x454297: lea     eax, [esp+arg_24]
0x45429B: lea     edx, [eax+1]
0x45429E: mov     edi, edi
0x4542A0: mov     cl, [eax]
0x4542A2: add     eax, 1
0x4542A5: test    cl, cl
0x4542A7: jnz     short loc_4542A0
0x4542A9: mov     si, ds:0A36430h
0x4542B0: sub     eax, edx
0x4542B2: cmp     eax, 19h
0x4542B5: jnb     short loc_4542F0
0x4542B7: jmp     short loc_4542C0
0x4542B9: align 10h
0x4542C0: lea     edi, [esp+arg_24]
0x4542C4: add     edi, 0FFFFFFFFh
0x4542C7: mov     al, [edi+1]
0x4542CA: add     edi, 1
0x4542CD: test    al, al
0x4542CF: jnz     short loc_4542C7
0x4542D1: lea     eax, [esp+arg_24]
0x4542D5: mov     [edi], si
0x4542D8: lea     edx, [eax+1]
0x4542DB: jmp     short loc_4542E0
0x4542DD: align 10h
0x4542E0: mov     cl, [eax]
0x4542E2: add     eax, 1
0x4542E5: test    cl, cl
0x4542E7: jnz     short loc_4542E0
0x4542E9: sub     eax, edx
0x4542EB: cmp     eax, 19h
0x4542EE: jb      short loc_4542C0
0x4542F0: lea     edi, [esp+arg_24]
0x4542F4: add     edi, 0FFFFFFFFh
0x4542F7: mov     al, [edi+1]
0x4542FA: add     edi, 1
0x4542FD: test    al, al
0x4542FF: jnz     short loc_4542F7
0x454301: lea     eax, [esp+arg_24]
0x454305: mov     [edi], si
0x454308: mov     ecx, eax
0x45430A: lea     ebx, [ebx+0]
0x454310: mov     dl, [eax]
0x454312: add     eax, 1
0x454315: test    dl, dl
0x454317: jnz     short loc_454310
0x454319: mov     edi, [esp+arg_C]
0x45431D: sub     eax, ecx
0x45431F: mov     esi, ecx
0x454321: add     edi, 0FFFFFFFFh
0x454324: mov     cl, [edi+1]
0x454327: add     edi, 1
0x45432A: test    cl, cl
0x45432C: jnz     short loc_454324
0x45432E: jmp     loc_458E0C
0x454333: cmp     al, 3Ah ; ':'
0x454335: jnz     loc_454463
0x45433B: test    edx, 10000000h
0x454341: jz      loc_458E1A
0x454347: cmp     [esp+arg_174], 0
0x45434F: jz      short loc_45439A
0x454351: add     edi, 0FFFFFFFFh
0x454354: mov     eax, edi
0x454356: mov     cl, [eax+1]
0x454359: add     eax, 1
0x45435C: test    cl, cl
0x45435E: jnz     short loc_454356
0x454360: mov     ecx, ds:0A39D98h
0x454366: mov     [eax], ecx
0x454368: mov     edx, ds:0A39D9Ch
0x45436E: mov     [eax+4], edx
0x454371: mov     ecx, ds:0A39DA0h
0x454377: mov     [eax+8], ecx
0x45437A: mov     edx, ds:0A39DA4h
0x454380: mov     [eax+0Ch], edx
0x454383: mov     ecx, ds:0A39DA8h
0x454389: mov     [eax+10h], ecx
0x45438C: mov     edx, ds:0A39DACh
0x454392: mov     [eax+14h], edx
0x454395: jmp     loc_458E1A
0x45439A: test    ebp, ebp
0x45439C: jz      short loc_4543B7
0x45439E: mov     eax, [ebp+0]
0x4543A1: mov     edx, [eax+4Ch]
0x4543A4: push    10000000h
0x4543A9: mov     ecx, ebp
0x4543AB: call    edx
0x4543AD: movzx   eax, ax
0x4543B0: movzx   ecx, si
0x4543B3: sub     eax, ecx
0x4543B5: jmp     short loc_4543B9
0x4543B7: xor     eax, eax
0x4543B9: push    eax
0x4543BA: lea     edx, [esp+8+arg_20]
0x4543BE: push    offset aTopicSaidOnceI; "Topic Said Once(%i)"
0x4543C3: push    edx
0x4543C4: call    __sprintf
0x4543C9: lea     eax, [esp+10h+arg_20]
0x4543CD: add     esp, 0Ch
0x4543D0: lea     edx, [eax+1]
0x4543D3: mov     cl, [eax]
0x4543D5: add     eax, 1
0x4543D8: test    cl, cl
0x4543DA: jnz     short loc_4543D3
0x4543DC: mov     si, ds:0A36430h
0x4543E3: sub     eax, edx
0x4543E5: cmp     eax, 19h
0x4543E8: jnb     short loc_454420
0x4543EA: lea     ebx, [ebx+0]
0x4543F0: lea     edi, [esp+4+arg_20]
0x4543F4: add     edi, 0FFFFFFFFh
0x4543F7: mov     al, [edi+1]
0x4543FA: add     edi, 1
0x4543FD: test    al, al
0x4543FF: jnz     short loc_4543F7
0x454401: lea     eax, [esp+4+arg_20]
0x454405: mov     [edi], si
0x454408: lea     edx, [eax+1]
0x45440B: jmp     short loc_454410
0x45440D: align 10h
0x454410: mov     cl, [eax]
0x454412: add     eax, 1
0x454415: test    cl, cl
0x454417: jnz     short loc_454410
0x454419: sub     eax, edx
0x45441B: cmp     eax, 19h
0x45441E: jb      short loc_4543F0
0x454420: lea     edi, [esp+4+arg_20]
0x454424: add     edi, 0FFFFFFFFh
0x454427: mov     al, [edi+1]
0x45442A: add     edi, 1
0x45442D: test    al, al
0x45442F: jnz     short loc_454427
0x454431: lea     eax, [esp+4+arg_20]
0x454435: mov     [edi], si
0x454438: mov     ecx, eax
0x45443A: lea     ebx, [ebx+0]
0x454440: mov     dl, [eax]
0x454442: add     eax, 1
0x454445: test    dl, dl
0x454447: jnz     short loc_454440
0x454449: mov     edi, [esp+4+arg_8]
0x45444D: sub     eax, ecx
0x45444F: mov     esi, ecx
0x454451: add     edi, 0FFFFFFFFh
0x454454: mov     cl, [edi+1]
0x454457: add     edi, 1
0x45445A: test    cl, cl
0x45445C: jnz     short loc_454454
0x45445E: jmp     loc_458E0C
0x454463: cmp     al, 3Dh ; '='
0x454465: jnz     loc_454683
0x45446B: test    edx, 10000000h
0x454471: jz      loc_454583
0x454477: cmp     [esp+arg_174], 0
0x45447F: jz      short loc_4544A6
0x454481: mov     edi, [esp+arg_C]
0x454485: add     edi, 0FFFFFFFFh
0x454488: mov     al, [edi+1]
0x45448B: add     edi, 1
0x45448E: test    al, al
0x454490: jnz     short loc_454488
0x454492: mov     ecx, 6
0x454497: mov     esi, offset aChange_package; "CHANGE_PACKAGE_NEVER_RUN\r\n"
0x45449C: rep movsd
0x45449E: movsw
0x4544A0: movsb
0x4544A1: jmp     loc_454583
0x4544A6: test    ebp, ebp
0x4544A8: jz      short loc_4544C5
0x4544AA: mov     eax, [ebp+0]
0x4544AD: mov     edx, [eax+4Ch]
0x4544B0: push    10000000h
0x4544B5: mov     ecx, ebp
0x4544B7: call    edx
0x4544B9: movzx   ecx, word ptr [esp+4+arg_C]
0x4544BE: movzx   eax, ax
0x4544C1: sub     eax, ecx
0x4544C3: jmp     short loc_4544C7
0x4544C5: xor     eax, eax
0x4544C7: push    eax
0x4544C8: lea     edx, [esp+8+arg_20]
0x4544CC: push    offset aNeverRunFlagI; "Never Run Flag(%i)"
0x4544D1: push    edx
0x4544D2: call    __sprintf
0x4544D7: lea     eax, [esp+10h+arg_20]
0x4544DB: add     esp, 0Ch
0x4544DE: lea     edx, [eax+1]
0x4544E1: mov     cl, [eax]
0x4544E3: add     eax, 1
0x4544E6: test    cl, cl
0x4544E8: jnz     short loc_4544E1
0x4544EA: mov     si, ds:0A36430h
0x4544F1: sub     eax, edx
0x4544F3: cmp     eax, 19h
0x4544F6: jnb     short loc_454530
0x4544F8: jmp     short loc_454500
0x4544FA: align 10h
0x454500: lea     edi, [esp+4+arg_20]
0x454504: add     edi, 0FFFFFFFFh
0x454507: mov     al, [edi+1]
0x45450A: add     edi, 1
0x45450D: test    al, al
0x45450F: jnz     short loc_454507
0x454511: lea     eax, [esp+4+arg_20]
0x454515: mov     [edi], si
0x454518: lea     edx, [eax+1]
0x45451B: jmp     short loc_454520
0x45451D: align 10h
0x454520: mov     cl, [eax]
0x454522: add     eax, 1
0x454525: test    cl, cl
0x454527: jnz     short loc_454520
0x454529: sub     eax, edx
0x45452B: cmp     eax, 19h
0x45452E: jb      short loc_454500
0x454530: lea     edi, [esp+4+arg_20]
0x454534: add     edi, 0FFFFFFFFh
0x454537: mov     al, [edi+1]
0x45453A: add     edi, 1
0x45453D: test    al, al
0x45453F: jnz     short loc_454537
0x454541: lea     eax, [esp+4+arg_20]
0x454545: mov     [edi], si
0x454548: mov     ecx, eax
0x45454A: lea     ebx, [ebx+0]
0x454550: mov     dl, [eax]
0x454552: add     eax, 1
0x454555: test    dl, dl
0x454557: jnz     short loc_454550
0x454559: mov     edi, [esp+4+arg_8]
0x45455D: sub     eax, ecx
0x45455F: mov     esi, ecx
0x454561: add     edi, 0FFFFFFFFh
0x454564: mov     cl, [edi+1]
0x454567: add     edi, 1
0x45456A: test    cl, cl
0x45456C: jnz     short loc_454564
0x45456E: mov     edx, [esp+4+arg_168]
0x454575: mov     ecx, eax
0x454577: shr     ecx, 2
0x45457A: rep movsd
0x45457C: mov     ecx, eax
0x45457E: and     ecx, 3
0x454581: rep movsb
0x454583: test    edx, 8000000h
0x454589: jz      loc_458E1A
0x45458F: cmp     [esp+arg_174], 0
0x454597: jz      short loc_4545BC
0x454599: mov     edi, [esp+arg_C]
0x45459D: add     edi, 0FFFFFFFFh
0x4545A0: mov     al, [edi+1]
0x4545A3: add     edi, 1
0x4545A6: test    al, al
0x4545A8: jnz     short loc_4545A0
0x4545AA: mov     ecx, 6
0x4545AF: mov     esi, offset aChange_packa_0; "CHANGE_PACKAGE_WAITING\r\n"
0x4545B4: rep movsd
0x4545B6: movsb
0x4545B7: jmp     loc_458E1A
0x4545BC: test    ebp, ebp
0x4545BE: jz      short loc_4545DB
0x4545C0: mov     eax, [ebp+0]
0x4545C3: mov     edx, [eax+4Ch]
0x4545C6: push    8000000h
0x4545CB: mov     ecx, ebp
0x4545CD: call    edx
0x4545CF: movzx   ecx, word ptr [esp+4+arg_C]
0x4545D4: movzx   eax, ax
0x4545D7: sub     eax, ecx
0x4545D9: jmp     short loc_4545DD
0x4545DB: xor     eax, eax
0x4545DD: push    eax
0x4545DE: lea     edx, [esp+8+arg_20]
0x4545E2: push    offset aWaitingFlagI; "Waiting Flag(%i)"
0x4545E7: push    edx
0x4545E8: call    __sprintf
0x4545ED: lea     eax, [esp+10h+arg_20]
0x4545F1: add     esp, 0Ch
0x4545F4: lea     edx, [eax+1]
0x4545F7: mov     cl, [eax]
0x4545F9: add     eax, 1
0x4545FC: test    cl, cl
0x4545FE: jnz     short loc_4545F7
0x454600: mov     si, ds:0A36430h
0x454607: sub     eax, edx
0x454609: cmp     eax, 19h
0x45460C: jnb     short loc_454640
0x45460E: mov     edi, edi
0x454610: lea     edi, [esp+4+arg_20]
0x454614: add     edi, 0FFFFFFFFh
0x454617: mov     al, [edi+1]
0x45461A: add     edi, 1
0x45461D: test    al, al
0x45461F: jnz     short loc_454617
0x454621: lea     eax, [esp+4+arg_20]
0x454625: mov     [edi], si
0x454628: lea     edx, [eax+1]
0x45462B: jmp     short loc_454630
0x45462D: align 10h
0x454630: mov     cl, [eax]
0x454632: add     eax, 1
0x454635: test    cl, cl
0x454637: jnz     short loc_454630
0x454639: sub     eax, edx
0x45463B: cmp     eax, 19h
0x45463E: jb      short loc_454610
0x454640: lea     edi, [esp+4+arg_20]
0x454644: add     edi, 0FFFFFFFFh
0x454647: mov     al, [edi+1]
0x45464A: add     edi, 1
0x45464D: test    al, al
0x45464F: jnz     short loc_454647
0x454651: lea     eax, [esp+4+arg_20]
0x454655: mov     [edi], si
0x454658: mov     ecx, eax
0x45465A: lea     ebx, [ebx+0]
0x454660: mov     dl, [eax]
0x454662: add     eax, 1
0x454665: test    dl, dl
0x454667: jnz     short loc_454660
0x454669: mov     edi, [esp+4+arg_8]
0x45466D: sub     eax, ecx
0x45466F: mov     esi, ecx
0x454671: add     edi, 0FFFFFFFFh
0x454674: mov     cl, [edi+1]
0x454677: add     edi, 1
0x45467A: test    cl, cl
0x45467C: jnz     short loc_454674
0x45467E: jmp     loc_458E0C
0x454683: cmp     al, 30h ; '0'
0x454685: jnz     loc_454E81
0x45468B: test    dl, 8
0x45468E: jz      loc_4547B7
0x454694: cmp     [esp+arg_174], 0
0x45469C: jz      short loc_4546DE
0x45469E: mov     eax, edi
0x4546A0: add     eax, 0FFFFFFFFh
0x4546A3: mov     cl, [eax+1]
0x4546A6: add     eax, 1
0x4546A9: test    cl, cl
0x4546AB: jnz     short loc_4546A3
0x4546AD: mov     ecx, ds:0A39D10h
0x4546B3: mov     [eax], ecx
0x4546B5: mov     ecx, ds:0A39D14h
0x4546BB: mov     [eax+4], ecx
0x4546BE: mov     ecx, ds:0A39D18h
0x4546C4: mov     [eax+8], ecx
0x4546C7: mov     ecx, ds:0A39D1Ch
0x4546CD: mov     [eax+0Ch], ecx
0x4546D0: mov     ecx, ds:0A39D20h
0x4546D6: mov     [eax+10h], ecx
0x4546D9: jmp     loc_4547B7
0x4546DE: test    ebp, ebp
0x4546E0: jz      short loc_4546F8
0x4546E2: mov     edx, [ebp+0]
0x4546E5: mov     eax, [edx+4Ch]
0x4546E8: push    8
0x4546EA: mov     ecx, ebp
0x4546EC: call    eax
0x4546EE: movzx   eax, ax
0x4546F1: movzx   ecx, si
0x4546F4: sub     eax, ecx
0x4546F6: jmp     short loc_4546FA
0x4546F8: xor     eax, eax
0x4546FA: push    eax
0x4546FB: lea     edx, [esp+8+arg_20]
0x4546FF: push    offset aCellFlagsI; "Cell Flags(%i)"
0x454704: push    edx
0x454705: call    __sprintf
0x45470A: lea     eax, [esp+10h+arg_20]
0x45470E: add     esp, 0Ch
0x454711: lea     edx, [eax+1]
0x454714: mov     cl, [eax]
0x454716: add     eax, 1
0x454719: test    cl, cl
0x45471B: jnz     short loc_454714
0x45471D: mov     si, ds:0A36430h
0x454724: sub     eax, edx
0x454726: cmp     eax, 19h
0x454729: jnb     short loc_454760
0x45472B: jmp     short loc_454730
0x45472D: align 10h
0x454730: lea     edi, [esp+4+arg_20]
0x454734: add     edi, 0FFFFFFFFh
0x454737: mov     al, [edi+1]
0x45473A: add     edi, 1
0x45473D: test    al, al
0x45473F: jnz     short loc_454737
0x454741: lea     eax, [esp+4+arg_20]
0x454745: mov     [edi], si
0x454748: lea     edx, [eax+1]
0x45474B: jmp     short loc_454750
0x45474D: align 10h
0x454750: mov     cl, [eax]
0x454752: add     eax, 1
0x454755: test    cl, cl
0x454757: jnz     short loc_454750
0x454759: sub     eax, edx
0x45475B: cmp     eax, 19h
0x45475E: jb      short loc_454730
0x454760: lea     edi, [esp+4+arg_20]
0x454764: add     edi, 0FFFFFFFFh
0x454767: mov     al, [edi+1]
0x45476A: add     edi, 1
0x45476D: test    al, al
0x45476F: jnz     short loc_454767
0x454771: lea     eax, [esp+4+arg_20]
0x454775: mov     [edi], si
0x454778: mov     ecx, eax
0x45477A: lea     ebx, [ebx+0]
0x454780: mov     dl, [eax]
0x454782: add     eax, 1
0x454785: test    dl, dl
0x454787: jnz     short loc_454780
0x454789: mov     edi, [esp+4+arg_8]
0x45478D: sub     eax, ecx
0x45478F: mov     esi, ecx
0x454791: add     edi, 0FFFFFFFFh
0x454794: mov     cl, [edi+1]
0x454797: add     edi, 1
0x45479A: test    cl, cl
0x45479C: jnz     short loc_454794
0x45479E: mov     edx, [esp+4+arg_168]
0x4547A5: mov     ecx, eax
0x4547A7: shr     ecx, 2
0x4547AA: rep movsd
0x4547AC: mov     ecx, eax
0x4547AE: and     ecx, 3
0x4547B1: rep movsb
0x4547B3: mov     edi, [esp+4+arg_8]
0x4547B7: test    dl, 2
0x4547BA: jz      loc_4548F3
0x4547C0: test    dl, 4
0x4547C3: jz      loc_4548F3
0x4547C9: cmp     [esp+arg_174], 0
0x4547D1: jz      short loc_45481E
0x4547D3: mov     eax, edi
0x4547D5: add     eax, 0FFFFFFFFh
0x4547D8: mov     cl, [eax+1]
0x4547DB: add     eax, 1
0x4547DE: test    cl, cl
0x4547E0: jnz     short loc_4547D8
0x4547E2: mov     ecx, ds:0A39CE8h
0x4547E8: mov     [eax], ecx
0x4547EA: mov     ecx, ds:0A39CECh
0x4547F0: mov     [eax+4], ecx
0x4547F3: mov     ecx, ds:0A39CF0h
0x4547F9: mov     [eax+8], ecx
0x4547FC: mov     ecx, ds:0A39CF4h
0x454802: mov     [eax+0Ch], ecx
0x454805: mov     ecx, ds:0A39CF8h
0x45480B: mov     [eax+10h], ecx
0x45480E: mov     cx, ds:0A39CFCh
0x454815: mov     [eax+14h], cx
0x454819: jmp     loc_4548F3
0x45481E: test    ebp, ebp
0x454820: jz      short loc_454831
0x454822: push    6
0x454824: push    ebp
0x454825: mov     ecx, ebx
0x454827: call    sub_452250
0x45482C: movzx   eax, ax
0x45482F: jmp     short loc_454833
0x454831: xor     eax, eax
0x454833: push    eax
0x454834: lea     edx, [esp+4+arg_24]
0x454838: push    offset aCellCreatedI; "Cell Created(%i)"
0x45483D: push    edx
0x45483E: call    __sprintf
0x454843: lea     eax, [esp+0Ch+arg_24]
0x454847: add     esp, 0Ch
0x45484A: lea     edx, [eax+1]
0x45484D: lea     ecx, [ecx+0]
0x454850: mov     cl, [eax]
0x454852: add     eax, 1
0x454855: test    cl, cl
0x454857: jnz     short loc_454850
0x454859: mov     si, ds:0A36430h
0x454860: sub     eax, edx
0x454862: cmp     eax, 19h
0x454865: jnb     short loc_4548A0
0x454867: jmp     short loc_454870
0x454869: align 10h
0x454870: lea     edi, [esp+arg_24]
0x454874: add     edi, 0FFFFFFFFh
0x454877: mov     al, [edi+1]
0x45487A: add     edi, 1
0x45487D: test    al, al
0x45487F: jnz     short loc_454877
0x454881: lea     eax, [esp+arg_24]
0x454885: mov     [edi], si
0x454888: lea     edx, [eax+1]
0x45488B: jmp     short loc_454890
0x45488D: align 10h
0x454890: mov     cl, [eax]
0x454892: add     eax, 1
0x454895: test    cl, cl
0x454897: jnz     short loc_454890
0x454899: sub     eax, edx
0x45489B: cmp     eax, 19h
0x45489E: jb      short loc_454870
0x4548A0: lea     edi, [esp+arg_24]
0x4548A4: add     edi, 0FFFFFFFFh
0x4548A7: mov     al, [edi+1]
0x4548AA: add     edi, 1
0x4548AD: test    al, al
0x4548AF: jnz     short loc_4548A7
0x4548B1: lea     eax, [esp+arg_24]
0x4548B5: mov     [edi], si
0x4548B8: mov     ecx, eax
0x4548BA: lea     ebx, [ebx+0]
0x4548C0: mov     dl, [eax]
0x4548C2: add     eax, 1
0x4548C5: test    dl, dl
0x4548C7: jnz     short loc_4548C0
0x4548C9: mov     edi, [esp+arg_C]
0x4548CD: sub     eax, ecx
0x4548CF: mov     esi, ecx
0x4548D1: add     edi, 0FFFFFFFFh
0x4548D4: mov     cl, [edi+1]
0x4548D7: add     edi, 1
0x4548DA: test    cl, cl
0x4548DC: jnz     short loc_4548D4
0x4548DE: mov     edx, [esp+arg_16C]
0x4548E5: mov     ecx, eax
0x4548E7: shr     ecx, 2
0x4548EA: rep movsd
0x4548EC: mov     ecx, eax
0x4548EE: and     ecx, 3
0x4548F1: rep movsb
0x4548F3: test    edx, 10000000h
0x4548F9: jz      loc_454A13
0x4548FF: cmp     [esp+arg_174], 0
0x454907: jz      short loc_45492E
0x454909: mov     edi, [esp+arg_C]
0x45490D: add     edi, 0FFFFFFFFh
0x454910: mov     al, [edi+1]
0x454913: add     edi, 1
0x454916: test    al, al
0x454918: jnz     short loc_454910
0x45491A: mov     ecx, 5
0x45491F: mov     esi, offset aChange_cell_se; "CHANGE_CELL_SEENDATA\r\n"
0x454924: rep movsd
0x454926: movsw
0x454928: movsb
0x454929: jmp     loc_454A13
0x45492E: test    ebp, ebp
0x454930: jz      short loc_45494D
0x454932: mov     eax, [ebp+0]
0x454935: mov     edx, [eax+4Ch]
0x454938: push    10000000h
0x45493D: mov     ecx, ebp
0x45493F: call    edx
0x454941: movzx   ecx, word ptr [esp+4+arg_C]
0x454946: movzx   eax, ax
0x454949: sub     eax, ecx
0x45494B: jmp     short loc_45494F
0x45494D: xor     eax, eax
0x45494F: push    eax
0x454950: lea     edx, [esp+8+arg_20]
0x454954: push    offset aSeenDataI; "Seen Data(%i)"
0x454959: push    edx
0x45495A: call    __sprintf
0x45495F: lea     eax, [esp+10h+arg_20]
0x454963: add     esp, 0Ch
0x454966: lea     edx, [eax+1]
0x454969: lea     esp, [esp+0]
0x454970: mov     cl, [eax]
0x454972: add     eax, 1
0x454975: test    cl, cl
0x454977: jnz     short loc_454970
0x454979: mov     si, ds:0A36430h
0x454980: sub     eax, edx
0x454982: cmp     eax, 19h
0x454985: jnb     short loc_4549C0
0x454987: jmp     short loc_454990
0x454989: align 10h
0x454990: lea     edi, [esp+4+arg_20]
0x454994: add     edi, 0FFFFFFFFh
0x454997: mov     al, [edi+1]
0x45499A: add     edi, 1
0x45499D: test    al, al
0x45499F: jnz     short loc_454997
0x4549A1: lea     eax, [esp+4+arg_20]
0x4549A5: mov     [edi], si
0x4549A8: lea     edx, [eax+1]
0x4549AB: jmp     short loc_4549B0
0x4549AD: align 10h
0x4549B0: mov     cl, [eax]
0x4549B2: add     eax, 1
0x4549B5: test    cl, cl
0x4549B7: jnz     short loc_4549B0
0x4549B9: sub     eax, edx
0x4549BB: cmp     eax, 19h
0x4549BE: jb      short loc_454990
0x4549C0: lea     edi, [esp+4+arg_20]
0x4549C4: add     edi, 0FFFFFFFFh
0x4549C7: mov     al, [edi+1]
0x4549CA: add     edi, 1
0x4549CD: test    al, al
0x4549CF: jnz     short loc_4549C7
0x4549D1: lea     eax, [esp+4+arg_20]
0x4549D5: mov     [edi], si
0x4549D8: mov     ecx, eax
0x4549DA: lea     ebx, [ebx+0]
0x4549E0: mov     dl, [eax]
0x4549E2: add     eax, 1
0x4549E5: test    dl, dl
0x4549E7: jnz     short loc_4549E0
0x4549E9: mov     edi, [esp+4+arg_8]
0x4549ED: sub     eax, ecx
0x4549EF: mov     esi, ecx
0x4549F1: add     edi, 0FFFFFFFFh
0x4549F4: mov     cl, [edi+1]
0x4549F7: add     edi, 1
0x4549FA: test    cl, cl
0x4549FC: jnz     short loc_4549F4
0x4549FE: mov     edx, [esp+4+arg_168]
0x454A05: mov     ecx, eax
0x454A07: shr     ecx, 2
0x454A0A: rep movsd
0x454A0C: mov     ecx, eax
0x454A0E: and     ecx, 3
0x454A11: rep movsb
0x454A13: test    edx, 8000000h
0x454A19: jz      loc_454B37
0x454A1F: cmp     [esp+arg_174], 0
0x454A27: jz      short loc_454A4E
0x454A29: mov     ebx, [esp+arg_C]
0x454A2D: mov     edi, ebx
0x454A2F: add     edi, 0FFFFFFFFh
0x454A32: mov     al, [edi+1]
0x454A35: add     edi, 1
0x454A38: test    al, al
0x454A3A: jnz     short loc_454A32
0x454A3C: mov     ecx, 6
0x454A41: mov     esi, offset aChange_cell_de; "CHANGE_CELL_DETACHTIME\r\n"
0x454A46: rep movsd
0x454A48: movsb
0x454A49: jmp     loc_454B3B
0x454A4E: test    ebp, ebp
0x454A50: jz      short loc_454A6D
0x454A52: mov     eax, [ebp+0]
0x454A55: mov     edx, [eax+4Ch]
0x454A58: push    8000000h
0x454A5D: mov     ecx, ebp
0x454A5F: call    edx
0x454A61: movzx   ecx, word ptr [esp+4+arg_C]
0x454A66: movzx   eax, ax
0x454A69: sub     eax, ecx
0x454A6B: jmp     short loc_454A6F
0x454A6D: xor     eax, eax
0x454A6F: push    eax
0x454A70: lea     edx, [esp+8+arg_20]
0x454A74: push    offset aDetachTimeI; "Detach Time(%i)"
0x454A79: push    edx
0x454A7A: call    __sprintf
0x454A7F: lea     eax, [esp+10h+arg_20]
0x454A83: add     esp, 0Ch
0x454A86: lea     edx, [eax+1]
0x454A89: lea     esp, [esp+0]
0x454A90: mov     cl, [eax]
0x454A92: add     eax, 1
0x454A95: test    cl, cl
0x454A97: jnz     short loc_454A90
0x454A99: mov     si, ds:0A36430h
0x454AA0: sub     eax, edx
0x454AA2: cmp     eax, 19h
0x454AA5: jnb     short loc_454AE0
0x454AA7: jmp     short loc_454AB0
0x454AA9: align 10h
0x454AB0: lea     edi, [esp+4+arg_20]
0x454AB4: add     edi, 0FFFFFFFFh
0x454AB7: mov     al, [edi+1]
0x454ABA: add     edi, 1
0x454ABD: test    al, al
0x454ABF: jnz     short loc_454AB7
0x454AC1: lea     eax, [esp+4+arg_20]
0x454AC5: mov     [edi], si
0x454AC8: lea     edx, [eax+1]
0x454ACB: jmp     short loc_454AD0
0x454ACD: align 10h
0x454AD0: mov     cl, [eax]
0x454AD2: add     eax, 1
0x454AD5: test    cl, cl
0x454AD7: jnz     short loc_454AD0
0x454AD9: sub     eax, edx
0x454ADB: cmp     eax, 19h
0x454ADE: jb      short loc_454AB0
0x454AE0: lea     edi, [esp+4+arg_20]
0x454AE4: add     edi, 0FFFFFFFFh
0x454AE7: mov     al, [edi+1]
0x454AEA: add     edi, 1
0x454AED: test    al, al
0x454AEF: jnz     short loc_454AE7
0x454AF1: lea     eax, [esp+4+arg_20]
0x454AF5: mov     [edi], si
0x454AF8: mov     ecx, eax
0x454AFA: lea     ebx, [ebx+0]
0x454B00: mov     dl, [eax]
0x454B02: add     eax, 1
0x454B05: test    dl, dl
0x454B07: jnz     short loc_454B00
0x454B09: mov     ebx, [esp+4+arg_8]
0x454B0D: mov     edi, ebx
0x454B0F: sub     eax, ecx
0x454B11: mov     esi, ecx
0x454B13: add     edi, 0FFFFFFFFh
0x454B16: mov     cl, [edi+1]
0x454B19: add     edi, 1
0x454B1C: test    cl, cl
0x454B1E: jnz     short loc_454B16
0x454B20: mov     edx, [esp+4+arg_168]
0x454B27: mov     ecx, eax
0x454B29: shr     ecx, 2
0x454B2C: rep movsd
0x454B2E: mov     ecx, eax
0x454B30: and     ecx, 3
0x454B33: rep movsb
0x454B35: jmp     short loc_454B3B
0x454B37: mov     ebx, [esp+arg_C]
0x454B3B: test    dl, 20h
0x454B3E: jz      loc_454C71
0x454B44: cmp     [esp+arg_174], 0
0x454B4C: jz      short loc_454B97
0x454B4E: mov     eax, ebx
0x454B50: add     eax, 0FFFFFFFFh
0x454B53: mov     cl, [eax+1]
0x454B56: add     eax, 1
0x454B59: test    cl, cl
0x454B5B: jnz     short loc_454B53
0x454B5D: mov     ecx, ds:0A39C68h
0x454B63: mov     [eax], ecx
0x454B65: mov     ecx, ds:0A39C6Ch
0x454B6B: mov     [eax+4], ecx
0x454B6E: mov     ecx, ds:0A39C70h
0x454B74: mov     [eax+8], ecx
0x454B77: mov     ecx, ds:0A39C74h
0x454B7D: mov     [eax+0Ch], ecx
0x454B80: mov     ecx, ds:0A39C78h
0x454B86: mov     [eax+10h], ecx
0x454B89: mov     ecx, ds:0A39C7Ch
0x454B8F: mov     [eax+14h], ecx
0x454B92: jmp     loc_454C71
0x454B97: test    ebp, ebp
0x454B99: jz      short loc_454BB3
0x454B9B: mov     edx, [ebp+0]
0x454B9E: mov     eax, [edx+4Ch]
0x454BA1: push    20h ; ' '
0x454BA3: mov     ecx, ebp
0x454BA5: call    eax
0x454BA7: movzx   ecx, word ptr [esp+4+arg_C]
0x454BAC: movzx   eax, ax
0x454BAF: sub     eax, ecx
0x454BB1: jmp     short loc_454BB5
0x454BB3: xor     eax, eax
0x454BB5: push    eax
0x454BB6: lea     edx, [esp+8+arg_20]
0x454BBA: push    offset aOwnershipI; "Ownership(%i)"
0x454BBF: push    edx
0x454BC0: call    __sprintf
0x454BC5: lea     eax, [esp+10h+arg_20]
0x454BC9: add     esp, 0Ch
0x454BCC: lea     edx, [eax+1]
0x454BCF: nop
0x454BD0: mov     cl, [eax]
0x454BD2: add     eax, 1
0x454BD5: test    cl, cl
0x454BD7: jnz     short loc_454BD0
0x454BD9: mov     si, ds:0A36430h
0x454BE0: sub     eax, edx
0x454BE2: cmp     eax, 19h
0x454BE5: jnb     short loc_454C20
0x454BE7: jmp     short loc_454BF0
0x454BE9: align 10h
0x454BF0: lea     edi, [esp+4+arg_20]
0x454BF4: add     edi, 0FFFFFFFFh
0x454BF7: mov     al, [edi+1]
0x454BFA: add     edi, 1
0x454BFD: test    al, al
0x454BFF: jnz     short loc_454BF7
0x454C01: lea     eax, [esp+4+arg_20]
0x454C05: mov     [edi], si
0x454C08: lea     edx, [eax+1]
0x454C0B: jmp     short loc_454C10
0x454C0D: align 10h
0x454C10: mov     cl, [eax]
0x454C12: add     eax, 1
0x454C15: test    cl, cl
0x454C17: jnz     short loc_454C10
0x454C19: sub     eax, edx
0x454C1B: cmp     eax, 19h
0x454C1E: jb      short loc_454BF0
0x454C20: lea     edi, [esp+4+arg_20]
0x454C24: add     edi, 0FFFFFFFFh
0x454C27: mov     al, [edi+1]
0x454C2A: add     edi, 1
0x454C2D: test    al, al
0x454C2F: jnz     short loc_454C27
0x454C31: lea     eax, [esp+4+arg_20]
0x454C35: mov     [edi], si
0x454C38: mov     ecx, eax
0x454C3A: lea     ebx, [ebx+0]
0x454C40: mov     dl, [eax]
0x454C42: add     eax, 1
0x454C45: test    dl, dl
0x454C47: jnz     short loc_454C40
0x454C49: mov     edi, ebx
0x454C4B: sub     eax, ecx
0x454C4D: mov     esi, ecx
0x454C4F: add     edi, 0FFFFFFFFh
0x454C52: mov     cl, [edi+1]
0x454C55: add     edi, 1
0x454C58: test    cl, cl
0x454C5A: jnz     short loc_454C52
0x454C5C: mov     edx, [esp+4+arg_168]
0x454C63: mov     ecx, eax
0x454C65: shr     ecx, 2
0x454C68: rep movsd
0x454C6A: mov     ecx, eax
0x454C6C: and     ecx, 3
0x454C6F: rep movsb
0x454C71: test    dl, 10h
0x454C74: jz      loc_454D81
0x454C7A: cmp     [esp+arg_174], 0
0x454C82: jz      short loc_454CAE
0x454C84: mov     edi, ebx
0x454C86: add     edi, 0FFFFFFFFh
0x454C89: lea     esp, [esp+0]
0x454C90: mov     al, [edi+1]
0x454C93: add     edi, 1
0x454C96: test    al, al
0x454C98: jnz     short loc_454C90
0x454C9A: mov     ecx, 5
0x454C9F: mov     esi, offset aChange_cell_fu; "CHANGE_CELL_FULLNAME\r\n"
0x454CA4: rep movsd
0x454CA6: movsw
0x454CA8: movsb
0x454CA9: jmp     loc_454D81
0x454CAE: test    ebp, ebp
0x454CB0: jz      short loc_454CCA
0x454CB2: mov     eax, [ebp+0]
0x454CB5: mov     edx, [eax+4Ch]
0x454CB8: push    10h
0x454CBA: mov     ecx, ebp
0x454CBC: call    edx
0x454CBE: movzx   ecx, word ptr [esp+4+arg_C]
0x454CC3: movzx   eax, ax
0x454CC6: sub     eax, ecx
0x454CC8: jmp     short loc_454CCC
0x454CCA: xor     eax, eax
0x454CCC: push    eax
0x454CCD: lea     edx, [esp+8+arg_20]
0x454CD1: push    offset aFullNameI; "Full Name(%i)"
0x454CD6: push    edx
0x454CD7: call    __sprintf
0x454CDC: lea     eax, [esp+10h+arg_20]
0x454CE0: add     esp, 0Ch
0x454CE3: lea     edx, [eax+1]
0x454CE6: mov     cl, [eax]
0x454CE8: add     eax, 1
0x454CEB: test    cl, cl
0x454CED: jnz     short loc_454CE6
0x454CEF: mov     si, ds:0A36430h
0x454CF6: sub     eax, edx
0x454CF8: cmp     eax, 19h
0x454CFB: jnb     short loc_454D30
0x454CFD: lea     ecx, [ecx+0]
0x454D00: lea     edi, [esp+4+arg_20]
0x454D04: add     edi, 0FFFFFFFFh
0x454D07: mov     al, [edi+1]
0x454D0A: add     edi, 1
0x454D0D: test    al, al
0x454D0F: jnz     short loc_454D07
0x454D11: lea     eax, [esp+4+arg_20]
0x454D15: mov     [edi], si
0x454D18: lea     edx, [eax+1]
0x454D1B: jmp     short loc_454D20
0x454D1D: align 10h
0x454D20: mov     cl, [eax]
0x454D22: add     eax, 1
0x454D25: test    cl, cl
0x454D27: jnz     short loc_454D20
0x454D29: sub     eax, edx
0x454D2B: cmp     eax, 19h
0x454D2E: jb      short loc_454D00
0x454D30: lea     edi, [esp+4+arg_20]
0x454D34: add     edi, 0FFFFFFFFh
0x454D37: mov     al, [edi+1]
0x454D3A: add     edi, 1
0x454D3D: test    al, al
0x454D3F: jnz     short loc_454D37
0x454D41: lea     eax, [esp+4+arg_20]
0x454D45: mov     [edi], si
0x454D48: mov     ecx, eax
0x454D4A: lea     ebx, [ebx+0]
0x454D50: mov     dl, [eax]
0x454D52: add     eax, 1
0x454D55: test    dl, dl
0x454D57: jnz     short loc_454D50
0x454D59: mov     edi, ebx
0x454D5B: sub     eax, ecx
0x454D5D: mov     esi, ecx
0x454D5F: add     edi, 0FFFFFFFFh
0x454D62: mov     cl, [edi+1]
0x454D65: add     edi, 1
0x454D68: test    cl, cl
0x454D6A: jnz     short loc_454D62
0x454D6C: mov     edx, [esp+4+arg_168]
0x454D73: mov     ecx, eax
0x454D75: shr     ecx, 2
0x454D78: rep movsd
0x454D7A: mov     ecx, eax
0x454D7C: and     ecx, 3
0x454D7F: rep movsb
0x454D81: test    edx, 1000000h
0x454D87: jz      loc_458E1A
0x454D8D: cmp     [esp+arg_174], 0
0x454D95: jz      short loc_454DBB
0x454D97: add     ebx, 0FFFFFFFFh
0x454D9A: mov     edi, ebx
0x454D9C: lea     esp, [esp+0]
0x454DA0: mov     al, [edi+1]
0x454DA3: add     edi, 1
0x454DA6: test    al, al
0x454DA8: jnz     short loc_454DA0
0x454DAA: mov     ecx, 8
0x454DAF: mov     esi, offset aChange_cell_pa; "CHANGE_CELL_PATHGRID_MODIFIED\r\n"
0x454DB4: rep movsd
0x454DB6: jmp     loc_458E1A
0x454DBB: test    ebp, ebp
0x454DBD: jz      short loc_454DDA
0x454DBF: mov     eax, [ebp+0]
0x454DC2: mov     edx, [eax+4Ch]
0x454DC5: push    1000000h
0x454DCA: mov     ecx, ebp
0x454DCC: call    edx
0x454DCE: movzx   ecx, word ptr [esp+4+arg_C]
0x454DD3: movzx   eax, ax
0x454DD6: sub     eax, ecx
0x454DD8: jmp     short loc_454DDC
0x454DDA: xor     eax, eax
0x454DDC: push    eax
0x454DDD: lea     edx, [esp+8+arg_20]
0x454DE1: push    offset aPathgridModifi; "Pathgrid Modified(%i)"
0x454DE6: push    edx
0x454DE7: call    __sprintf
0x454DEC: lea     eax, [esp+10h+arg_20]
0x454DF0: add     esp, 0Ch
0x454DF3: lea     edx, [eax+1]
0x454DF6: mov     cl, [eax]
0x454DF8: add     eax, 1
0x454DFB: test    cl, cl
0x454DFD: jnz     short loc_454DF6
0x454DFF: mov     si, ds:0A36430h
0x454E06: sub     eax, edx
0x454E08: cmp     eax, 19h
0x454E0B: jnb     short loc_454E40
0x454E0D: lea     ecx, [ecx+0]
0x454E10: lea     edi, [esp+4+arg_20]
0x454E14: add     edi, 0FFFFFFFFh
0x454E17: mov     al, [edi+1]
0x454E1A: add     edi, 1
0x454E1D: test    al, al
0x454E1F: jnz     short loc_454E17
0x454E21: lea     eax, [esp+4+arg_20]
0x454E25: mov     [edi], si
0x454E28: lea     edx, [eax+1]
0x454E2B: jmp     short loc_454E30
0x454E2D: align 10h
0x454E30: mov     cl, [eax]
0x454E32: add     eax, 1
0x454E35: test    cl, cl
0x454E37: jnz     short loc_454E30
0x454E39: sub     eax, edx
0x454E3B: cmp     eax, 19h
0x454E3E: jb      short loc_454E10
0x454E40: lea     edi, [esp+4+arg_20]
0x454E44: add     edi, 0FFFFFFFFh
0x454E47: mov     al, [edi+1]
0x454E4A: add     edi, 1
0x454E4D: test    al, al
0x454E4F: jnz     short loc_454E47
0x454E51: lea     eax, [esp+4+arg_20]
0x454E55: mov     [edi], si
0x454E58: mov     ecx, eax
0x454E5A: lea     ebx, [ebx+0]
0x454E60: mov     dl, [eax]
0x454E62: add     eax, 1
0x454E65: test    dl, dl
0x454E67: jnz     short loc_454E60
0x454E69: sub     eax, ecx
0x454E6B: add     ebx, 0FFFFFFFFh
0x454E6E: mov     esi, ecx
0x454E70: mov     edi, ebx
0x454E72: mov     cl, [edi+1]
0x454E75: add     edi, 1
0x454E78: test    cl, cl
0x454E7A: jnz     short loc_454E72
0x454E7C: jmp     loc_458E0C
0x454E81: cmp     al, 6
0x454E83: jnz     loc_4550A3
0x454E89: test    dl, 4
0x454E8C: jz      loc_454FA3
0x454E92: cmp     [esp+arg_174], 0
0x454E9A: jz      short loc_454EC1
0x454E9C: mov     edi, [esp+arg_C]
0x454EA0: add     edi, 0FFFFFFFFh
0x454EA3: mov     al, [edi+1]
0x454EA6: add     edi, 1
0x454EA9: test    al, al
0x454EAB: jnz     short loc_454EA3
0x454EAD: mov     ecx, 5
0x454EB2: mov     esi, offset aChange_faction; "CHANGE_FACTION_FLAGS\r\n"
0x454EB7: rep movsd
0x454EB9: movsw
0x454EBB: movsb
0x454EBC: jmp     loc_454FA3
0x454EC1: test    ebp, ebp
0x454EC3: jz      short loc_454EDD
0x454EC5: mov     eax, [ebp+0]
0x454EC8: mov     edx, [eax+4Ch]
0x454ECB: push    4
0x454ECD: mov     ecx, ebp
0x454ECF: call    edx
0x454ED1: movzx   ecx, word ptr [esp+4+arg_C]
0x454ED6: movzx   eax, ax
0x454ED9: sub     eax, ecx
0x454EDB: jmp     short loc_454EDF
0x454EDD: xor     eax, eax
0x454EDF: push    eax
0x454EE0: lea     edx, [esp+8+arg_20]
0x454EE4: push    offset aFactionFlagsI; "Faction Flags(%i)"
0x454EE9: push    edx
0x454EEA: call    __sprintf
0x454EEF: lea     eax, [esp+10h+arg_20]
0x454EF3: add     esp, 0Ch
0x454EF6: lea     edx, [eax+1]
0x454EF9: lea     esp, [esp+0]
0x454F00: mov     cl, [eax]
0x454F02: add     eax, 1
0x454F05: test    cl, cl
0x454F07: jnz     short loc_454F00
0x454F09: mov     si, ds:0A36430h
0x454F10: sub     eax, edx
0x454F12: cmp     eax, 19h
0x454F15: jnb     short loc_454F50
0x454F17: jmp     short loc_454F20
0x454F19: align 10h
0x454F20: lea     edi, [esp+4+arg_20]
0x454F24: add     edi, 0FFFFFFFFh
0x454F27: mov     al, [edi+1]
0x454F2A: add     edi, 1
0x454F2D: test    al, al
0x454F2F: jnz     short loc_454F27
0x454F31: lea     eax, [esp+4+arg_20]
0x454F35: mov     [edi], si
0x454F38: lea     edx, [eax+1]
0x454F3B: jmp     short loc_454F40
0x454F3D: align 10h
0x454F40: mov     cl, [eax]
0x454F42: add     eax, 1
0x454F45: test    cl, cl
0x454F47: jnz     short loc_454F40
0x454F49: sub     eax, edx
0x454F4B: cmp     eax, 19h
0x454F4E: jb      short loc_454F20
0x454F50: lea     edi, [esp+4+arg_20]
0x454F54: add     edi, 0FFFFFFFFh
0x454F57: mov     al, [edi+1]
0x454F5A: add     edi, 1
0x454F5D: test    al, al
0x454F5F: jnz     short loc_454F57
0x454F61: lea     eax, [esp+4+arg_20]
0x454F65: mov     [edi], si
0x454F68: mov     ecx, eax
0x454F6A: lea     ebx, [ebx+0]
0x454F70: mov     dl, [eax]
0x454F72: add     eax, 1
0x454F75: test    dl, dl
0x454F77: jnz     short loc_454F70
0x454F79: mov     edi, [esp+4+arg_8]
0x454F7D: sub     eax, ecx
0x454F7F: mov     esi, ecx
0x454F81: add     edi, 0FFFFFFFFh
0x454F84: mov     cl, [edi+1]
0x454F87: add     edi, 1
0x454F8A: test    cl, cl
0x454F8C: jnz     short loc_454F84
0x454F8E: mov     edx, [esp+4+arg_168]
0x454F95: mov     ecx, eax
0x454F97: shr     ecx, 2
0x454F9A: rep movsd
0x454F9C: mov     ecx, eax
0x454F9E: and     ecx, 3
0x454FA1: rep movsb
0x454FA3: test    dl, 8
0x454FA6: jz      loc_458E1A
0x454FAC: cmp     [esp+arg_174], 0
0x454FB4: jz      short loc_454FDE
0x454FB6: mov     edi, [esp+arg_C]
0x454FBA: add     edi, 0FFFFFFFFh
0x454FBD: lea     ecx, [ecx+0]
0x454FC0: mov     al, [edi+1]
0x454FC3: add     edi, 1
0x454FC6: test    al, al
0x454FC8: jnz     short loc_454FC0
0x454FCA: mov     ecx, 6
0x454FCF: mov     esi, offset aChange_facti_0; "CHANGE_FACTION_REACTIONS\r\n"
0x454FD4: rep movsd
0x454FD6: movsw
0x454FD8: movsb
0x454FD9: jmp     loc_458E1A
0x454FDE: test    ebp, ebp
0x454FE0: jz      short loc_454FFA
0x454FE2: mov     eax, [ebp+0]
0x454FE5: mov     edx, [eax+4Ch]
0x454FE8: push    8
0x454FEA: mov     ecx, ebp
0x454FEC: call    edx
0x454FEE: movzx   ecx, word ptr [esp+4+arg_C]
0x454FF3: movzx   eax, ax
0x454FF6: sub     eax, ecx
0x454FF8: jmp     short loc_454FFC
0x454FFA: xor     eax, eax
0x454FFC: push    eax
0x454FFD: lea     edx, [esp+8+arg_20]
0x455001: push    offset aFactionReactio; "Faction Reactions(%i)"
0x455006: push    edx
0x455007: call    __sprintf
0x45500C: lea     eax, [esp+10h+arg_20]
0x455010: add     esp, 0Ch
0x455013: lea     edx, [eax+1]
0x455016: mov     cl, [eax]
0x455018: add     eax, 1
0x45501B: test    cl, cl
0x45501D: jnz     short loc_455016
0x45501F: mov     si, ds:0A36430h
0x455026: sub     eax, edx
0x455028: cmp     eax, 19h
0x45502B: jnb     short loc_455060
0x45502D: lea     ecx, [ecx+0]
0x455030: lea     edi, [esp+4+arg_20]
0x455034: add     edi, 0FFFFFFFFh
0x455037: mov     al, [edi+1]
0x45503A: add     edi, 1
0x45503D: test    al, al
0x45503F: jnz     short loc_455037
0x455041: lea     eax, [esp+4+arg_20]
0x455045: mov     [edi], si
0x455048: lea     edx, [eax+1]
0x45504B: jmp     short loc_455050
0x45504D: align 10h
0x455050: mov     cl, [eax]
0x455052: add     eax, 1
0x455055: test    cl, cl
0x455057: jnz     short loc_455050
0x455059: sub     eax, edx
0x45505B: cmp     eax, 19h
0x45505E: jb      short loc_455030
0x455060: lea     edi, [esp+4+arg_20]
0x455064: add     edi, 0FFFFFFFFh
0x455067: mov     al, [edi+1]
0x45506A: add     edi, 1
0x45506D: test    al, al
0x45506F: jnz     short loc_455067
0x455071: lea     eax, [esp+4+arg_20]
0x455075: mov     [edi], si
0x455078: mov     ecx, eax
0x45507A: lea     ebx, [ebx+0]
0x455080: mov     dl, [eax]
0x455082: add     eax, 1
0x455085: test    dl, dl
0x455087: jnz     short loc_455080
0x455089: mov     edi, [esp+4+arg_8]
0x45508D: sub     eax, ecx
0x45508F: mov     esi, ecx
0x455091: add     edi, 0FFFFFFFFh
0x455094: mov     cl, [edi+1]
0x455097: add     edi, 1
0x45509A: test    cl, cl
0x45509C: jnz     short loc_455094
0x45509E: jmp     loc_458E0C
0x4550A3: cmp     al, 15h
0x4550A5: jnz     loc_4551A3
0x4550AB: test    dl, 4
0x4550AE: jz      loc_458E1A
0x4550B4: cmp     [esp+arg_174], 0
0x4550BC: jz      short loc_4550E0
0x4550BE: mov     edi, [esp+arg_C]
0x4550C2: add     edi, 0FFFFFFFFh
0x4550C5: mov     al, [edi+1]
0x4550C8: add     edi, 1
0x4550CB: test    al, al
0x4550CD: jnz     short loc_4550C5
0x4550CF: mov     ecx, 7
0x4550D4: mov     esi, offset aChange_book_te; "CHANGE_BOOK_TEACHES_SKILL\r\n"
0x4550D9: rep movsd
0x4550DB: jmp     loc_458E1A
0x4550E0: test    ebp, ebp
0x4550E2: jz      short loc_4550FA
0x4550E4: mov     eax, [ebp+0]
0x4550E7: mov     edx, [eax+4Ch]
0x4550EA: push    4
0x4550EC: mov     ecx, ebp
0x4550EE: call    edx
0x4550F0: movzx   eax, ax
0x4550F3: movzx   ecx, si
0x4550F6: sub     eax, ecx
0x4550F8: jmp     short loc_4550FC
0x4550FA: xor     eax, eax
0x4550FC: push    eax
0x4550FD: lea     edx, [esp+8+arg_20]
0x455101: push    offset aBookSkillI; "Book Skill(%i)"
0x455106: push    edx
0x455107: call    __sprintf
0x45510C: lea     eax, [esp+10h+arg_20]
0x455110: add     esp, 0Ch
0x455113: lea     edx, [eax+1]
0x455116: mov     cl, [eax]
0x455118: add     eax, 1
0x45511B: test    cl, cl
0x45511D: jnz     short loc_455116
0x45511F: mov     si, ds:0A36430h
0x455126: sub     eax, edx
0x455128: cmp     eax, 19h
0x45512B: jnb     short loc_455160
0x45512D: lea     ecx, [ecx+0]
0x455130: lea     edi, [esp+4+arg_20]
0x455134: add     edi, 0FFFFFFFFh
0x455137: mov     al, [edi+1]
0x45513A: add     edi, 1
0x45513D: test    al, al
0x45513F: jnz     short loc_455137
0x455141: lea     eax, [esp+4+arg_20]
0x455145: mov     [edi], si
0x455148: lea     edx, [eax+1]
0x45514B: jmp     short loc_455150
0x45514D: align 10h
0x455150: mov     cl, [eax]
0x455152: add     eax, 1
0x455155: test    cl, cl
0x455157: jnz     short loc_455150
0x455159: sub     eax, edx
0x45515B: cmp     eax, 19h
0x45515E: jb      short loc_455130
0x455160: lea     edi, [esp+4+arg_20]
0x455164: add     edi, 0FFFFFFFFh
0x455167: mov     al, [edi+1]
0x45516A: add     edi, 1
0x45516D: test    al, al
0x45516F: jnz     short loc_455167
0x455171: lea     eax, [esp+4+arg_20]
0x455175: mov     [edi], si
0x455178: mov     ecx, eax
0x45517A: lea     ebx, [ebx+0]
0x455180: mov     dl, [eax]
0x455182: add     eax, 1
0x455185: test    dl, dl
0x455187: jnz     short loc_455180
0x455189: mov     edi, [esp+4+arg_8]
0x45518D: sub     eax, ecx
0x45518F: mov     esi, ecx
0x455191: add     edi, 0FFFFFFFFh
0x455194: mov     cl, [edi+1]
0x455197: add     edi, 1
0x45519A: test    cl, cl
0x45519C: jnz     short loc_455194
0x45519E: jmp     loc_458E0C
0x4551A3: cmp     al, 31h ; '1'
0x4551A5: jz      short loc_4551B3
0x4551A7: cmp     al, 32h ; '2'
0x4551A9: jz      short loc_4551B3
0x4551AB: cmp     al, 33h ; '3'
0x4551AD: jnz     loc_458E1A
0x4551B3: test    dl, 2
0x4551B6: jz      loc_4552C3
0x4551BC: cmp     [esp+arg_174], 0
0x4551C4: jz      short loc_4551EE
0x4551C6: mov     edi, [esp+arg_C]
0x4551CA: add     edi, 0FFFFFFFFh
0x4551CD: lea     ecx, [ecx+0]
0x4551D0: mov     al, [edi+1]
0x4551D3: add     edi, 1
0x4551D6: test    al, al
0x4551D8: jnz     short loc_4551D0
0x4551DA: mov     ecx, 7
0x4551DF: mov     esi, offset aChange_created; "CHANGE_CREATED_NEW_REFERENCE\r\n"
0x4551E4: rep movsd
0x4551E6: movsw
0x4551E8: movsb
0x4551E9: jmp     loc_4552C3
0x4551EE: test    ebp, ebp
0x4551F0: jz      short loc_455201
0x4551F2: push    2
0x4551F4: push    ebp
0x4551F5: mov     ecx, ebx
0x4551F7: call    sub_452250
0x4551FC: movzx   eax, ax
0x4551FF: jmp     short loc_455203
0x455201: xor     eax, eax
0x455203: push    eax
0x455204: lea     eax, [esp+4+arg_24]
0x455208: push    offset aCreatedI; "Created(%i)"
0x45520D: push    eax
0x45520E: call    __sprintf
0x455213: lea     eax, [esp+0Ch+arg_24]
0x455217: add     esp, 0Ch
0x45521A: lea     edx, [eax+1]
0x45521D: lea     ecx, [ecx+0]
0x455220: mov     cl, [eax]
0x455222: add     eax, 1
0x455225: test    cl, cl
0x455227: jnz     short loc_455220
0x455229: mov     si, ds:0A36430h
0x455230: sub     eax, edx
0x455232: cmp     eax, 19h
0x455235: jnb     short loc_455270
0x455237: jmp     short loc_455240
0x455239: align 10h
0x455240: lea     edi, [esp+arg_24]
0x455244: add     edi, 0FFFFFFFFh
0x455247: mov     al, [edi+1]
0x45524A: add     edi, 1
0x45524D: test    al, al
0x45524F: jnz     short loc_455247
0x455251: lea     eax, [esp+arg_24]
0x455255: mov     [edi], si
0x455258: lea     edx, [eax+1]
0x45525B: jmp     short loc_455260
0x45525D: align 10h
0x455260: mov     cl, [eax]
0x455262: add     eax, 1
0x455265: test    cl, cl
0x455267: jnz     short loc_455260
0x455269: sub     eax, edx
0x45526B: cmp     eax, 19h
0x45526E: jb      short loc_455240
0x455270: lea     edi, [esp+arg_24]
0x455274: add     edi, 0FFFFFFFFh
0x455277: mov     al, [edi+1]
0x45527A: add     edi, 1
0x45527D: test    al, al
0x45527F: jnz     short loc_455277
0x455281: lea     eax, [esp+arg_24]
0x455285: mov     [edi], si
0x455288: mov     ecx, eax
0x45528A: lea     ebx, [ebx+0]
0x455290: mov     dl, [eax]
0x455292: add     eax, 1
0x455295: test    dl, dl
0x455297: jnz     short loc_455290
0x455299: mov     edi, [esp+arg_C]
0x45529D: sub     eax, ecx
0x45529F: mov     esi, ecx
0x4552A1: add     edi, 0FFFFFFFFh
0x4552A4: mov     cl, [edi+1]
0x4552A7: add     edi, 1
0x4552AA: test    cl, cl
0x4552AC: jnz     short loc_4552A4
0x4552AE: mov     edx, [esp+arg_16C]
0x4552B5: mov     ecx, eax
0x4552B7: shr     ecx, 2
0x4552BA: rep movsd
0x4552BC: mov     ecx, eax
0x4552BE: and     ecx, 3
0x4552C1: rep movsb
0x4552C3: test    edx, edx
0x4552C5: jns     loc_4553E3
0x4552CB: cmp     [esp+arg_174], 0
0x4552D3: jz      short loc_4552FE
0x4552D5: mov     edi, [esp+arg_C]
0x4552D9: add     edi, 0FFFFFFFFh
0x4552DC: lea     esp, [esp+0]
0x4552E0: mov     al, [edi+1]
0x4552E3: add     edi, 1
0x4552E6: test    al, al
0x4552E8: jnz     short loc_4552E0
0x4552EA: mov     ecx, 7
0x4552EF: mov     esi, offset aChangeflag_ref; "CHANGEFLAG_REFR_CELL_CHANGED\r\n"
0x4552F4: rep movsd
0x4552F6: movsw
0x4552F8: movsb
0x4552F9: jmp     loc_4553E3
0x4552FE: test    ebp, ebp
0x455300: jz      short loc_45531D
0x455302: mov     edx, [ebp+0]
0x455305: mov     eax, [edx+4Ch]
0x455308: push    80000000h
0x45530D: mov     ecx, ebp
0x45530F: call    eax
0x455311: movzx   ecx, word ptr [esp+4+arg_C]
0x455316: movzx   eax, ax
0x455319: sub     eax, ecx
0x45531B: jmp     short loc_45531F
0x45531D: xor     eax, eax
0x45531F: push    eax
0x455320: lea     edx, [esp+8+arg_20]
0x455324: push    offset aCellChangedI; "Cell Changed(%i)"
0x455329: push    edx
0x45532A: call    __sprintf
0x45532F: lea     eax, [esp+10h+arg_20]
0x455333: add     esp, 0Ch
0x455336: lea     edx, [eax+1]
0x455339: lea     esp, [esp+0]
0x455340: mov     cl, [eax]
0x455342: add     eax, 1
0x455345: test    cl, cl
0x455347: jnz     short loc_455340
0x455349: mov     si, ds:0A36430h
0x455350: sub     eax, edx
0x455352: cmp     eax, 19h
0x455355: jnb     short loc_455390
0x455357: jmp     short loc_455360
0x455359: align 10h
0x455360: lea     edi, [esp+4+arg_20]
0x455364: add     edi, 0FFFFFFFFh
0x455367: mov     al, [edi+1]
0x45536A: add     edi, 1
0x45536D: test    al, al
0x45536F: jnz     short loc_455367
0x455371: lea     eax, [esp+4+arg_20]
0x455375: mov     [edi], si
0x455378: lea     edx, [eax+1]
0x45537B: jmp     short loc_455380
0x45537D: align 10h
0x455380: mov     cl, [eax]
0x455382: add     eax, 1
0x455385: test    cl, cl
0x455387: jnz     short loc_455380
0x455389: sub     eax, edx
0x45538B: cmp     eax, 19h
0x45538E: jb      short loc_455360
0x455390: lea     edi, [esp+4+arg_20]
0x455394: add     edi, 0FFFFFFFFh
0x455397: mov     al, [edi+1]
0x45539A: add     edi, 1
0x45539D: test    al, al
0x45539F: jnz     short loc_455397
0x4553A1: lea     eax, [esp+4+arg_20]
0x4553A5: mov     [edi], si
0x4553A8: mov     ecx, eax
0x4553AA: lea     ebx, [ebx+0]
0x4553B0: mov     dl, [eax]
0x4553B2: add     eax, 1
0x4553B5: test    dl, dl
0x4553B7: jnz     short loc_4553B0
0x4553B9: mov     edi, [esp+4+arg_8]
0x4553BD: sub     eax, ecx
0x4553BF: mov     esi, ecx
0x4553C1: add     edi, 0FFFFFFFFh
0x4553C4: mov     cl, [edi+1]
0x4553C7: add     edi, 1
0x4553CA: test    cl, cl
0x4553CC: jnz     short loc_4553C4
0x4553CE: mov     edx, [esp+4+arg_168]
0x4553D5: mov     ecx, eax
0x4553D7: shr     ecx, 2
0x4553DA: rep movsd
0x4553DC: mov     ecx, eax
0x4553DE: and     ecx, 3
0x4553E1: rep movsb
0x4553E3: mov     ebp, edx
0x4553E5: and     ebp, 4
0x4553E8: jz      loc_455523
0x4553EE: cmp     [esp+arg_174], 0
0x4553F6: jz      short loc_455446
0x4553F8: mov     eax, [esp+arg_C]
0x4553FC: add     eax, 0FFFFFFFFh
0x4553FF: nop
0x455400: mov     cl, [eax+1]
0x455403: add     eax, 1
0x455406: test    cl, cl
0x455408: jnz     short loc_455400
0x45540A: mov     ecx, ds:0A39AF8h
0x455410: mov     [eax], ecx
0x455412: mov     ecx, ds:0A39AFCh
0x455418: mov     [eax+4], ecx
0x45541B: mov     ecx, ds:0A39B00h
0x455421: mov     [eax+8], ecx
0x455424: mov     ecx, ds:0A39B04h
0x45542A: mov     [eax+0Ch], ecx
0x45542D: mov     cx, ds:0A39B08h
0x455434: mov     [eax+10h], cx
0x455438: mov     cl, ds:0A39B0Ah
0x45543E: mov     [eax+12h], cl
0x455441: jmp     loc_455523
0x455446: mov     eax, [esp+arg_14]
0x45544A: test    eax, eax
0x45544C: jz      short loc_45545D
0x45544E: push    4
0x455450: push    eax
0x455451: mov     ecx, ebx
0x455453: call    sub_452250
0x455458: movzx   eax, ax
0x45545B: jmp     short loc_45545F
0x45545D: xor     eax, eax
0x45545F: push    eax
0x455460: lea     edx, [esp+4+arg_24]
0x455464: push    offset aMovedI; "Moved(%i)"
0x455469: push    edx
0x45546A: call    __sprintf
0x45546F: lea     eax, [esp+0Ch+arg_24]
0x455473: add     esp, 0Ch
0x455476: lea     edx, [eax+1]
0x455479: lea     esp, [esp+0]
0x455480: mov     cl, [eax]
0x455482: add     eax, 1
0x455485: test    cl, cl
0x455487: jnz     short loc_455480
0x455489: mov     si, ds:0A36430h
0x455490: sub     eax, edx
0x455492: cmp     eax, 19h
0x455495: jnb     short loc_4554D0
0x455497: jmp     short loc_4554A0
0x455499: align 10h
0x4554A0: lea     edi, [esp+arg_24]
0x4554A4: add     edi, 0FFFFFFFFh
0x4554A7: mov     al, [edi+1]
0x4554AA: add     edi, 1
0x4554AD: test    al, al
0x4554AF: jnz     short loc_4554A7
0x4554B1: lea     eax, [esp+arg_24]
0x4554B5: mov     [edi], si
0x4554B8: lea     edx, [eax+1]
0x4554BB: jmp     short loc_4554C0
0x4554BD: align 10h
0x4554C0: mov     cl, [eax]
0x4554C2: add     eax, 1
0x4554C5: test    cl, cl
0x4554C7: jnz     short loc_4554C0
0x4554C9: sub     eax, edx
0x4554CB: cmp     eax, 19h
0x4554CE: jb      short loc_4554A0
0x4554D0: lea     edi, [esp+arg_24]
0x4554D4: add     edi, 0FFFFFFFFh
0x4554D7: mov     al, [edi+1]
0x4554DA: add     edi, 1
0x4554DD: test    al, al
0x4554DF: jnz     short loc_4554D7
0x4554E1: lea     eax, [esp+arg_24]
0x4554E5: mov     [edi], si
0x4554E8: mov     ecx, eax
0x4554EA: lea     ebx, [ebx+0]
0x4554F0: mov     dl, [eax]
0x4554F2: add     eax, 1
0x4554F5: test    dl, dl
0x4554F7: jnz     short loc_4554F0
0x4554F9: mov     edi, [esp+arg_C]
0x4554FD: sub     eax, ecx
0x4554FF: mov     esi, ecx
0x455501: add     edi, 0FFFFFFFFh
0x455504: mov     cl, [edi+1]
0x455507: add     edi, 1
0x45550A: test    cl, cl
0x45550C: jnz     short loc_455504
0x45550E: mov     edx, [esp+arg_16C]
0x455515: mov     ecx, eax
0x455517: shr     ecx, 2
0x45551A: rep movsd
0x45551C: mov     ecx, eax
0x45551E: and     ecx, 3
0x455521: rep movsb
0x455523: mov     eax, edx
0x455525: and     eax, 8
0x455528: mov     [esp+arg_20], eax
0x45552C: jz      loc_455683
0x455532: cmp     [esp+arg_174], 0
0x45553A: jz      short loc_45555F
0x45553C: mov     edi, [esp+arg_C]
0x455540: add     edi, 0FFFFFFFFh
0x455543: mov     al, [edi+1]
0x455546: add     edi, 1
0x455549: test    al, al
0x45554B: jnz     short loc_455543
0x45554D: mov     ecx, 6
0x455552: mov     esi, offset aChange_refr_ha; "CHANGE_REFR_HAVOK_MOVE\r\n"
0x455557: rep movsd
0x455559: movsb
0x45555A: jmp     loc_455683
0x45555F: test    ebp, ebp
0x455561: jz      short loc_45559A
0x455563: mov     ecx, [esp+arg_14]
0x455567: test    ecx, ecx
0x455569: jz      short loc_45558B
0x45556B: mov     eax, [ecx]
0x45556D: mov     edx, [eax+4Ch]
0x455570: push    8
0x455572: call    edx
0x455574: movzx   ecx, word ptr [esp+4+arg_C]
0x455579: movzx   eax, ax
0x45557C: sub     eax, ecx
0x45557E: push    eax
0x45557F: push    offset aHavokMovedI; "Havok Moved(%i)"
0x455584: lea     edx, [esp+0Ch+arg_20]
0x455588: push    edx
0x455589: jmp     short loc_4555D5
0x45558B: xor     eax, eax
0x45558D: push    eax
0x45558E: push    offset aHavokMovedI; "Havok Moved(%i)"
0x455593: lea     edx, [esp+8+arg_24]
0x455597: push    edx
0x455598: jmp     short loc_4555D5
0x45559A: mov     edi, [esp+arg_14]
0x45559E: test    edi, edi
0x4555A0: jz      short loc_4555C8
0x4555A2: push    8
0x4555A4: push    edi
0x4555A5: mov     ecx, ebx
0x4555A7: call    sub_452250
0x4555AC: mov     edx, [edi]
0x4555AE: movzx   esi, ax
0x4555B1: movzx   eax, word ptr [esp+arg_10]
0x4555B6: sub     esi, eax
0x4555B8: mov     eax, [edx+4Ch]
0x4555BB: push    8
0x4555BD: mov     ecx, edi
0x4555BF: call    eax
0x4555C1: movzx   eax, ax
0x4555C4: add     eax, esi
0x4555C6: jmp     short loc_4555CA
0x4555C8: xor     eax, eax
0x4555CA: push    eax
0x4555CB: push    offset aHavokMovedI; "Havok Moved(%i)"
0x4555D0: lea     ecx, [esp+0Ch+arg_20]
0x4555D4: push    ecx
0x4555D5: call    __sprintf
0x4555DA: lea     eax, [esp+10h+arg_20]
0x4555DE: add     esp, 0Ch
0x4555E1: lea     edx, [eax+1]
0x4555E4: mov     cl, [eax]
0x4555E6: add     eax, 1
0x4555E9: test    cl, cl
0x4555EB: jnz     short loc_4555E4
0x4555ED: mov     si, ds:0A36430h
0x4555F4: sub     eax, edx
0x4555F6: cmp     eax, 19h
0x4555F9: jnb     short loc_455630
0x4555FB: jmp     short loc_455600
0x4555FD: align 10h
0x455600: lea     edi, [esp+4+arg_20]
0x455604: add     edi, 0FFFFFFFFh
0x455607: mov     al, [edi+1]
0x45560A: add     edi, 1
0x45560D: test    al, al
0x45560F: jnz     short loc_455607
0x455611: lea     eax, [esp+4+arg_20]
0x455615: mov     [edi], si
0x455618: lea     edx, [eax+1]
0x45561B: jmp     short loc_455620
0x45561D: align 10h
0x455620: mov     cl, [eax]
0x455622: add     eax, 1
0x455625: test    cl, cl
0x455627: jnz     short loc_455620
0x455629: sub     eax, edx
0x45562B: cmp     eax, 19h
0x45562E: jb      short loc_455600
0x455630: lea     edi, [esp+4+arg_20]
0x455634: add     edi, 0FFFFFFFFh
0x455637: mov     al, [edi+1]
0x45563A: add     edi, 1
0x45563D: test    al, al
0x45563F: jnz     short loc_455637
0x455641: lea     eax, [esp+4+arg_20]
0x455645: mov     [edi], si
0x455648: mov     ecx, eax
0x45564A: lea     ebx, [ebx+0]
0x455650: mov     dl, [eax]
0x455652: add     eax, 1
0x455655: test    dl, dl
0x455657: jnz     short loc_455650
0x455659: mov     edi, [esp+4+arg_8]
0x45565D: sub     eax, ecx
0x45565F: mov     esi, ecx
0x455661: add     edi, 0FFFFFFFFh
0x455664: mov     cl, [edi+1]
0x455667: add     edi, 1
0x45566A: test    cl, cl
0x45566C: jnz     short loc_455664
0x45566E: mov     edx, [esp+4+arg_168]
0x455675: mov     ecx, eax
0x455677: shr     ecx, 2
0x45567A: rep movsd
0x45567C: mov     ecx, eax
0x45567E: and     ecx, 3
0x455681: rep movsb
0x455683: test    edx, 800h
0x455689: jz      loc_455773
0x45568F: cmp     [esp+arg_174], 0
0x455697: jz      short loc_4556BD
0x455699: mov     edi, [esp+arg_C]
0x45569D: add     edi, 0FFFFFFFFh
0x4556A0: mov     al, [edi+1]
0x4556A3: add     edi, 1
0x4556A6: test    al, al
0x4556A8: jnz     short loc_4556A0
0x4556AA: mov     ecx, 9
0x4556AF: mov     esi, offset aChangeflag_r_0; "CHANGEFLAG_REFR_HAD_HAVOK_MOVE_FLAG\r\n"
0x4556B4: rep movsd
0x4556B6: movsw
0x4556B8: jmp     loc_455773
0x4556BD: push    0
0x4556BF: lea     edx, [esp+4+arg_24]
0x4556C3: push    offset aHadHavokMoveFl; "Had Havok Move Flag(%i)"
0x4556C8: push    edx
0x4556C9: call    __sprintf
0x4556CE: lea     eax, [esp+0Ch+arg_24]
0x4556D2: add     esp, 0Ch
0x4556D5: lea     edx, [eax+1]
0x4556D8: mov     cl, [eax]
0x4556DA: add     eax, 1
0x4556DD: test    cl, cl
0x4556DF: jnz     short loc_4556D8
0x4556E1: mov     si, ds:0A36430h
0x4556E8: sub     eax, edx
0x4556EA: cmp     eax, 19h
0x4556ED: jnb     short loc_455720
0x4556EF: nop
0x4556F0: lea     edi, [esp+arg_24]
0x4556F4: add     edi, 0FFFFFFFFh
0x4556F7: mov     al, [edi+1]
0x4556FA: add     edi, 1
0x4556FD: test    al, al
0x4556FF: jnz     short loc_4556F7
0x455701: lea     eax, [esp+arg_24]
0x455705: mov     [edi], si
0x455708: lea     edx, [eax+1]
0x45570B: jmp     short loc_455710
0x45570D: align 10h
0x455710: mov     cl, [eax]
0x455712: add     eax, 1
0x455715: test    cl, cl
0x455717: jnz     short loc_455710
0x455719: sub     eax, edx
0x45571B: cmp     eax, 19h
0x45571E: jb      short loc_4556F0
0x455720: lea     edi, [esp+arg_24]
0x455724: add     edi, 0FFFFFFFFh
0x455727: mov     al, [edi+1]
0x45572A: add     edi, 1
0x45572D: test    al, al
0x45572F: jnz     short loc_455727
0x455731: lea     eax, [esp+arg_24]
0x455735: mov     [edi], si
0x455738: mov     ecx, eax
0x45573A: lea     ebx, [ebx+0]
0x455740: mov     dl, [eax]
0x455742: add     eax, 1
0x455745: test    dl, dl
0x455747: jnz     short loc_455740
0x455749: mov     edi, [esp+arg_C]
0x45574D: sub     eax, ecx
0x45574F: mov     esi, ecx
0x455751: add     edi, 0FFFFFFFFh
0x455754: mov     cl, [edi+1]
0x455757: add     edi, 1
0x45575A: test    cl, cl
0x45575C: jnz     short loc_455754
0x45575E: mov     edx, [esp+arg_16C]
0x455765: mov     ecx, eax
0x455767: shr     ecx, 2
0x45576A: rep movsd
0x45576C: mov     ecx, eax
0x45576E: and     ecx, 3
0x455771: rep movsb
0x455773: test    edx, offset loc_800000
0x455779: jz      short loc_4557A6
0x45577B: cmp     [esp+arg_174], 0
0x455783: jz      loc_455814
0x455789: mov     edi, [esp+arg_C]
0x45578D: add     edi, 0FFFFFFFFh
0x455790: mov     al, [edi+1]
0x455793: add     edi, 1
0x455796: test    al, al
0x455798: jnz     short loc_455790
0x45579A: mov     ecx, 7
0x45579F: mov     esi, offset aChange_refr_ob; "CHANGE_REFR_OBLIVION_FLAG\r\n"
0x4557A4: rep movsd
0x4557A6: mov     ebp, [esp+arg_14]
0x4557AA: test    edx, 2000000h
0x4557B0: jz      loc_4559E7
0x4557B6: cmp     [esp+arg_174], 0
0x4557BE: jz      loc_455908
0x4557C4: mov     ebx, [esp+arg_C]
0x4557C8: mov     eax, ebx
0x4557CA: add     eax, 0FFFFFFFFh
0x4557CD: lea     ecx, [ecx+0]
0x4557D0: mov     cl, [eax+1]
0x4557D3: add     eax, 1
0x4557D6: test    cl, cl
0x4557D8: jnz     short loc_4557D0
0x4557DA: mov     ecx, ds:0A39A4Ch
0x4557E0: mov     [eax], ecx
0x4557E2: mov     ecx, ds:0A39A50h
0x4557E8: mov     [eax+4], ecx
0x4557EB: mov     ecx, ds:0A39A54h
0x4557F1: mov     [eax+8], ecx
0x4557F4: mov     ecx, ds:0A39A58h
0x4557FA: mov     [eax+0Ch], ecx
0x4557FD: mov     ecx, ds:0A39A5Ch
0x455803: mov     [eax+10h], ecx
0x455806: mov     ecx, ds:0A39A60h
0x45580C: mov     [eax+14h], ecx
0x45580F: jmp     loc_4559EB
0x455814: test    dl, 0Eh
0x455817: jz      short loc_455831
0x455819: lea     eax, [esp+arg_24]
0x45581D: push    offset aOblivionFlag0; "Oblivion Flag(0)"
0x455822: push    eax
0x455823: call    __sprintf
0x455828: mov     ebp, [esp+8+arg_14]
0x45582C: add     esp, 8
0x45582F: jmp     short loc_455860
0x455831: mov     ebp, [esp+arg_14]
0x455835: test    ebp, ebp
0x455837: jz      short loc_45584B
0x455839: push    offset loc_800000
0x45583E: push    ebp
0x45583F: mov     ecx, ebx
0x455841: call    sub_452250
0x455846: movzx   eax, ax
0x455849: jmp     short loc_45584D
0x45584B: xor     eax, eax
0x45584D: push    eax
0x45584E: lea     ecx, [esp+4+arg_24]
0x455852: push    offset aOblivionFlagI; "Oblivion Flag(%i)"
0x455857: push    ecx
0x455858: call    __sprintf
0x45585D: add     esp, 0Ch
0x455860: lea     eax, [esp+arg_24]
0x455864: lea     edx, [eax+1]
0x455867: mov     cl, [eax]
0x455869: add     eax, 1
0x45586C: test    cl, cl
0x45586E: jnz     short loc_455867
0x455870: mov     si, ds:0A36430h
0x455877: sub     eax, edx
0x455879: cmp     eax, 19h
0x45587C: jnb     short loc_4558B0
0x45587E: mov     edi, edi
0x455880: lea     edi, [esp+arg_24]
0x455884: add     edi, 0FFFFFFFFh
0x455887: mov     al, [edi+1]
0x45588A: add     edi, 1
0x45588D: test    al, al
0x45588F: jnz     short loc_455887
0x455891: lea     eax, [esp+arg_24]
0x455895: mov     [edi], si
0x455898: lea     edx, [eax+1]
0x45589B: jmp     short loc_4558A0
0x45589D: align 10h
0x4558A0: mov     cl, [eax]
0x4558A2: add     eax, 1
0x4558A5: test    cl, cl
0x4558A7: jnz     short loc_4558A0
0x4558A9: sub     eax, edx
0x4558AB: cmp     eax, 19h
0x4558AE: jb      short loc_455880
0x4558B0: lea     edi, [esp+arg_24]
0x4558B4: add     edi, 0FFFFFFFFh
0x4558B7: mov     al, [edi+1]
0x4558BA: add     edi, 1
0x4558BD: test    al, al
0x4558BF: jnz     short loc_4558B7
0x4558C1: lea     eax, [esp+arg_24]
0x4558C5: mov     [edi], si
0x4558C8: mov     ecx, eax
0x4558CA: lea     ebx, [ebx+0]
0x4558D0: mov     dl, [eax]
0x4558D2: add     eax, 1
0x4558D5: test    dl, dl
0x4558D7: jnz     short loc_4558D0
0x4558D9: mov     edi, [esp+arg_C]
0x4558DD: sub     eax, ecx
0x4558DF: mov     esi, ecx
0x4558E1: add     edi, 0FFFFFFFFh
0x4558E4: mov     cl, [edi+1]
0x4558E7: add     edi, 1
0x4558EA: test    cl, cl
0x4558EC: jnz     short loc_4558E4
0x4558EE: mov     edx, [esp+arg_16C]
0x4558F5: mov     ecx, eax
0x4558F7: shr     ecx, 2
0x4558FA: rep movsd
0x4558FC: mov     ecx, eax
0x4558FE: and     ecx, 3
0x455901: rep movsb
0x455903: jmp     loc_4557AA
0x455908: test    ebp, ebp
0x45590A: jz      short loc_455927
0x45590C: mov     edx, [ebp+0]
0x45590F: mov     eax, [edx+4Ch]
0x455912: push    2000000h
0x455917: mov     ecx, ebp
0x455919: call    eax
0x45591B: movzx   ecx, word ptr [esp+4+arg_C]
0x455920: movzx   eax, ax
0x455923: sub     eax, ecx
0x455925: jmp     short loc_455929
0x455927: xor     eax, eax
0x455929: push    eax
0x45592A: lea     edx, [esp+8+arg_20]
0x45592E: push    offset aAnimationI; "Animation(%i)"
0x455933: push    edx
0x455934: call    __sprintf
0x455939: lea     eax, [esp+10h+arg_20]
0x45593D: add     esp, 0Ch
0x455940: lea     edx, [eax+1]
0x455943: mov     cl, [eax]
0x455945: add     eax, 1
0x455948: test    cl, cl
0x45594A: jnz     short loc_455943
0x45594C: mov     si, ds:0A36430h
0x455953: sub     eax, edx
0x455955: cmp     eax, 19h
0x455958: jnb     short loc_455990
0x45595A: lea     ebx, [ebx+0]
0x455960: lea     edi, [esp+4+arg_20]
0x455964: add     edi, 0FFFFFFFFh
0x455967: mov     al, [edi+1]
0x45596A: add     edi, 1
0x45596D: test    al, al
0x45596F: jnz     short loc_455967
0x455971: lea     eax, [esp+4+arg_20]
0x455975: mov     [edi], si
0x455978: lea     edx, [eax+1]
0x45597B: jmp     short loc_455980
0x45597D: align 10h
0x455980: mov     cl, [eax]
0x455982: add     eax, 1
0x455985: test    cl, cl
0x455987: jnz     short loc_455980
0x455989: sub     eax, edx
0x45598B: cmp     eax, 19h
0x45598E: jb      short loc_455960
0x455990: lea     edi, [esp+4+arg_20]
0x455994: add     edi, 0FFFFFFFFh
0x455997: mov     al, [edi+1]
0x45599A: add     edi, 1
0x45599D: test    al, al
0x45599F: jnz     short loc_455997
0x4559A1: lea     eax, [esp+4+arg_20]
0x4559A5: mov     [edi], si
0x4559A8: mov     ecx, eax
0x4559AA: lea     ebx, [ebx+0]
0x4559B0: mov     dl, [eax]
0x4559B2: add     eax, 1
0x4559B5: test    dl, dl
0x4559B7: jnz     short loc_4559B0
0x4559B9: mov     ebx, [esp+4+arg_8]
0x4559BD: mov     edi, ebx
0x4559BF: sub     eax, ecx
0x4559C1: mov     esi, ecx
0x4559C3: add     edi, 0FFFFFFFFh
0x4559C6: mov     cl, [edi+1]
0x4559C9: add     edi, 1
0x4559CC: test    cl, cl
0x4559CE: jnz     short loc_4559C6
0x4559D0: mov     edx, [esp+4+arg_168]
0x4559D7: mov     ecx, eax
0x4559D9: shr     ecx, 2
0x4559DC: rep movsd
0x4559DE: mov     ecx, eax
0x4559E0: and     ecx, 3
0x4559E3: rep movsb
0x4559E5: jmp     short loc_4559EB
0x4559E7: mov     ebx, [esp+arg_C]
0x4559EB: test    dl, 10h
0x4559EE: jz      loc_455B11
0x4559F4: cmp     [esp+arg_174], 0
0x4559FC: jz      short loc_455A3E
0x4559FE: mov     eax, ebx
0x455A00: add     eax, 0FFFFFFFFh
0x455A03: mov     cl, [eax+1]
0x455A06: add     eax, 1
0x455A09: test    cl, cl
0x455A0B: jnz     short loc_455A03
0x455A0D: mov     ecx, ds:0A39A00h
0x455A13: mov     [eax], ecx
0x455A15: mov     ecx, ds:0A39A04h
0x455A1B: mov     [eax+4], ecx
0x455A1E: mov     ecx, ds:0A39A08h
0x455A24: mov     [eax+8], ecx
0x455A27: mov     ecx, ds:0A39A0Ch
0x455A2D: mov     [eax+0Ch], ecx
0x455A30: mov     ecx, ds:0A39A10h
0x455A36: mov     [eax+10h], ecx
0x455A39: jmp     loc_455B11
0x455A3E: test    ebp, ebp
0x455A40: jz      short loc_455A5A
0x455A42: mov     edx, [ebp+0]
0x455A45: mov     eax, [edx+4Ch]
0x455A48: push    10h
0x455A4A: mov     ecx, ebp
0x455A4C: call    eax
0x455A4E: movzx   ecx, word ptr [esp+4+arg_C]
0x455A53: movzx   eax, ax
0x455A56: sub     eax, ecx
0x455A58: jmp     short loc_455A5C
0x455A5A: xor     eax, eax
0x455A5C: push    eax
0x455A5D: lea     edx, [esp+8+arg_20]
0x455A61: push    offset aScaleI; "Scale(%i)"
0x455A66: push    edx
0x455A67: call    __sprintf
0x455A6C: lea     eax, [esp+10h+arg_20]
0x455A70: add     esp, 0Ch
0x455A73: lea     edx, [eax+1]
0x455A76: mov     cl, [eax]
0x455A78: add     eax, 1
0x455A7B: test    cl, cl
0x455A7D: jnz     short loc_455A76
0x455A7F: mov     si, ds:0A36430h
0x455A86: sub     eax, edx
0x455A88: cmp     eax, 19h
0x455A8B: jnb     short loc_455AC0
0x455A8D: lea     ecx, [ecx+0]
0x455A90: lea     edi, [esp+4+arg_20]
0x455A94: add     edi, 0FFFFFFFFh
0x455A97: mov     al, [edi+1]
0x455A9A: add     edi, 1
0x455A9D: test    al, al
0x455A9F: jnz     short loc_455A97
0x455AA1: lea     eax, [esp+4+arg_20]
0x455AA5: mov     [edi], si
0x455AA8: lea     edx, [eax+1]
0x455AAB: jmp     short loc_455AB0
0x455AAD: align 10h
0x455AB0: mov     cl, [eax]
0x455AB2: add     eax, 1
0x455AB5: test    cl, cl
0x455AB7: jnz     short loc_455AB0
0x455AB9: sub     eax, edx
0x455ABB: cmp     eax, 19h
0x455ABE: jb      short loc_455A90
0x455AC0: lea     edi, [esp+4+arg_20]
0x455AC4: add     edi, 0FFFFFFFFh
0x455AC7: mov     al, [edi+1]
0x455ACA: add     edi, 1
0x455ACD: test    al, al
0x455ACF: jnz     short loc_455AC7
0x455AD1: lea     eax, [esp+4+arg_20]
0x455AD5: mov     [edi], si
0x455AD8: mov     ecx, eax
0x455ADA: lea     ebx, [ebx+0]
0x455AE0: mov     dl, [eax]
0x455AE2: add     eax, 1
0x455AE5: test    dl, dl
0x455AE7: jnz     short loc_455AE0
0x455AE9: mov     edi, ebx
0x455AEB: sub     eax, ecx
0x455AED: mov     esi, ecx
0x455AEF: add     edi, 0FFFFFFFFh
0x455AF2: mov     cl, [edi+1]
0x455AF5: add     edi, 1
0x455AF8: test    cl, cl
0x455AFA: jnz     short loc_455AF2
0x455AFC: mov     edx, [esp+4+arg_168]
0x455B03: mov     ecx, eax
0x455B05: shr     ecx, 2
0x455B08: rep movsd
0x455B0A: mov     ecx, eax
0x455B0C: and     ecx, 3
0x455B0F: rep movsb
0x455B11: test    dl, 20h
0x455B14: jz      loc_455C51
0x455B1A: cmp     [esp+arg_174], 0
0x455B22: jz      short loc_455B74
0x455B24: mov     eax, ebx
0x455B26: add     eax, 0FFFFFFFFh
0x455B29: lea     esp, [esp+0]
0x455B30: mov     cl, [eax+1]
0x455B33: add     eax, 1
0x455B36: test    cl, cl
0x455B38: jnz     short loc_455B30
0x455B3A: mov     ecx, ds:0A399DCh
0x455B40: mov     [eax], ecx
0x455B42: mov     ecx, ds:0A399E0h
0x455B48: mov     [eax+4], ecx
0x455B4B: mov     ecx, ds:0A399E4h
0x455B51: mov     [eax+8], ecx
0x455B54: mov     ecx, ds:0A399E8h
0x455B5A: mov     [eax+0Ch], ecx
0x455B5D: mov     ecx, ds:0A399ECh
0x455B63: mov     [eax+10h], ecx
0x455B66: mov     ecx, ds:0A399F0h
0x455B6C: mov     [eax+14h], ecx
0x455B6F: jmp     loc_455C51
0x455B74: test    ebp, ebp
0x455B76: jz      short loc_455B90
0x455B78: mov     edx, [ebp+0]
0x455B7B: mov     eax, [edx+4Ch]
0x455B7E: push    20h ; ' '
0x455B80: mov     ecx, ebp
0x455B82: call    eax
0x455B84: movzx   ecx, word ptr [esp+4+arg_C]
0x455B89: movzx   eax, ax
0x455B8C: sub     eax, ecx
0x455B8E: jmp     short loc_455B92
0x455B90: xor     eax, eax
0x455B92: push    eax
0x455B93: lea     edx, [esp+8+arg_20]
0x455B97: push    offset aAllExtraI; "All Extra(%i)"
0x455B9C: push    edx
0x455B9D: call    __sprintf
0x455BA2: lea     eax, [esp+10h+arg_20]
0x455BA6: add     esp, 0Ch
0x455BA9: lea     edx, [eax+1]
0x455BAC: lea     esp, [esp+0]
0x455BB0: mov     cl, [eax]
0x455BB2: add     eax, 1
0x455BB5: test    cl, cl
0x455BB7: jnz     short loc_455BB0
0x455BB9: mov     si, ds:0A36430h
0x455BC0: sub     eax, edx
0x455BC2: cmp     eax, 19h
0x455BC5: jnb     short loc_455C00
0x455BC7: jmp     short loc_455BD0
0x455BC9: align 10h
0x455BD0: lea     edi, [esp+4+arg_20]
0x455BD4: add     edi, 0FFFFFFFFh
0x455BD7: mov     al, [edi+1]
0x455BDA: add     edi, 1
0x455BDD: test    al, al
0x455BDF: jnz     short loc_455BD7
0x455BE1: lea     eax, [esp+4+arg_20]
0x455BE5: mov     [edi], si
0x455BE8: lea     edx, [eax+1]
0x455BEB: jmp     short loc_455BF0
0x455BED: align 10h
0x455BF0: mov     cl, [eax]
0x455BF2: add     eax, 1
0x455BF5: test    cl, cl
0x455BF7: jnz     short loc_455BF0
0x455BF9: sub     eax, edx
0x455BFB: cmp     eax, 19h
0x455BFE: jb      short loc_455BD0
0x455C00: lea     edi, [esp+4+arg_20]
0x455C04: add     edi, 0FFFFFFFFh
0x455C07: mov     al, [edi+1]
0x455C0A: add     edi, 1
0x455C0D: test    al, al
0x455C0F: jnz     short loc_455C07
0x455C11: lea     eax, [esp+4+arg_20]
0x455C15: mov     [edi], si
0x455C18: mov     ecx, eax
0x455C1A: lea     ebx, [ebx+0]
0x455C20: mov     dl, [eax]
0x455C22: add     eax, 1
0x455C25: test    dl, dl
0x455C27: jnz     short loc_455C20
0x455C29: mov     edi, ebx
0x455C2B: sub     eax, ecx
0x455C2D: mov     esi, ecx
0x455C2F: add     edi, 0FFFFFFFFh
0x455C32: mov     cl, [edi+1]
0x455C35: add     edi, 1
0x455C38: test    cl, cl
0x455C3A: jnz     short loc_455C32
0x455C3C: mov     edx, [esp+4+arg_168]
0x455C43: mov     ecx, eax
0x455C45: shr     ecx, 2
0x455C48: rep movsd
0x455C4A: mov     ecx, eax
0x455C4C: and     ecx, 3
0x455C4F: rep movsb
0x455C51: test    edx, 40000000h
0x455C57: jz      short loc_455C7E
0x455C59: cmp     [esp+arg_174], 0
0x455C61: jz      short loc_455CBF
0x455C63: mov     edi, ebx
0x455C65: add     edi, 0FFFFFFFFh
0x455C68: mov     al, [edi+1]
0x455C6B: add     edi, 1
0x455C6E: test    al, al
0x455C70: jnz     short loc_455C68
0x455C72: mov     ecx, 7
0x455C77: mov     esi, offset aChange_refr_di; "CHANGE_REFR_DISABLE_STATE\r\n"
0x455C7C: rep movsd
0x455C7E: mov     ebx, [esp+arg_18]
0x455C82: test    edx, 10000000h
0x455C88: jz      loc_455EF3
0x455C8E: cmp     [esp+arg_174], 0
0x455C96: jz      loc_455E18
0x455C9C: mov     edi, [esp+arg_C]
0x455CA0: add     edi, 0FFFFFFFFh
0x455CA3: mov     al, [edi+1]
0x455CA6: add     edi, 1
0x455CA9: test    al, al
0x455CAB: jnz     short loc_455CA3
0x455CAD: mov     ecx, 9
0x455CB2: mov     esi, offset aChange_refr_ex; "CHANGE_REFR_EXTRA_LEVELED_CREATURE\r\n"
0x455CB7: rep movsd
0x455CB9: movsb
0x455CBA: jmp     loc_455EF3
0x455CBF: mov     ebx, [esp+arg_18]
0x455CC3: test    ebx, ebx
0x455CC5: jz      loc_455D36
0x455CCB: mov     eax, [ebx+8]
0x455CCE: shr     eax, 0Bh
0x455CD1: test    al, 1
0x455CD3: jz      short loc_455D07
0x455CD5: test    ebp, ebp
0x455CD7: jz      short loc_455CFD
0x455CD9: mov     edx, [ebp+0]
0x455CDC: mov     eax, [edx+4Ch]
0x455CDF: push    40000000h
0x455CE4: mov     ecx, ebp
0x455CE6: call    eax
0x455CE8: movzx   ecx, word ptr [esp+4+arg_C]
0x455CED: movzx   eax, ax
0x455CF0: sub     eax, ecx
0x455CF2: push    eax
0x455CF3: push    offset aDisabledI; "Disabled(%i)"
0x455CF8: jmp     loc_455D5D
0x455CFD: xor     eax, eax
0x455CFF: push    eax
0x455D00: push    offset aDisabledI; "Disabled(%i)"
0x455D05: jmp     short loc_455D5D
0x455D07: test    ebp, ebp
0x455D09: jz      short loc_455D2C
0x455D0B: mov     eax, [ebp+0]
0x455D0E: mov     edx, [eax+4Ch]
0x455D11: push    40000000h
0x455D16: mov     ecx, ebp
0x455D18: call    edx
0x455D1A: movzx   ecx, word ptr [esp+4+arg_C]
0x455D1F: movzx   eax, ax
0x455D22: sub     eax, ecx
0x455D24: push    eax
0x455D25: push    offset aEnabledI; "Enabled(%i)"
0x455D2A: jmp     short loc_455D5D
0x455D2C: xor     eax, eax
0x455D2E: push    eax
0x455D2F: push    offset aEnabledI; "Enabled(%i)"
0x455D34: jmp     short loc_455D5D
0x455D36: test    ebp, ebp
0x455D38: jz      short loc_455D55
0x455D3A: mov     eax, [ebp+0]
0x455D3D: mov     edx, [eax+4Ch]
0x455D40: push    40000000h
0x455D45: mov     ecx, ebp
0x455D47: call    edx
0x455D49: movzx   ecx, word ptr [esp+4+arg_C]
0x455D4E: movzx   eax, ax
0x455D51: sub     eax, ecx
0x455D53: jmp     short loc_455D57
0x455D55: xor     eax, eax
0x455D57: push    eax
0x455D58: push    offset aDisabledEnable; "Disabled/Enabled(%i)"
0x455D5D: lea     edx, [esp+0Ch+arg_20]
0x455D61: push    edx
0x455D62: call    __sprintf
0x455D67: lea     eax, [esp+10h+arg_20]
0x455D6B: add     esp, 0Ch
0x455D6E: lea     edx, [eax+1]
0x455D71: mov     cl, [eax]
0x455D73: add     eax, 1
0x455D76: test    cl, cl
0x455D78: jnz     short loc_455D71
0x455D7A: mov     si, ds:0A36430h
0x455D81: sub     eax, edx
0x455D83: cmp     eax, 19h
0x455D86: jnb     short loc_455DC0
0x455D88: jmp     short loc_455D90
0x455D8A: align 10h
0x455D90: lea     edi, [esp+4+arg_20]
0x455D94: add     edi, 0FFFFFFFFh
0x455D97: mov     al, [edi+1]
0x455D9A: add     edi, 1
0x455D9D: test    al, al
0x455D9F: jnz     short loc_455D97
0x455DA1: lea     eax, [esp+4+arg_20]
0x455DA5: mov     [edi], si
0x455DA8: lea     edx, [eax+1]
0x455DAB: jmp     short loc_455DB0
0x455DAD: align 10h
0x455DB0: mov     cl, [eax]
0x455DB2: add     eax, 1
0x455DB5: test    cl, cl
0x455DB7: jnz     short loc_455DB0
0x455DB9: sub     eax, edx
0x455DBB: cmp     eax, 19h
0x455DBE: jb      short loc_455D90
0x455DC0: lea     edi, [esp+4+arg_20]
0x455DC4: add     edi, 0FFFFFFFFh
0x455DC7: mov     al, [edi+1]
0x455DCA: add     edi, 1
0x455DCD: test    al, al
0x455DCF: jnz     short loc_455DC7
0x455DD1: lea     eax, [esp+4+arg_20]
0x455DD5: mov     [edi], si
0x455DD8: mov     ecx, eax
0x455DDA: lea     ebx, [ebx+0]
0x455DE0: mov     dl, [eax]
0x455DE2: add     eax, 1
0x455DE5: test    dl, dl
0x455DE7: jnz     short loc_455DE0
0x455DE9: mov     edi, [esp+4+arg_8]
0x455DED: sub     eax, ecx
0x455DEF: mov     esi, ecx
0x455DF1: add     edi, 0FFFFFFFFh
0x455DF4: mov     cl, [edi+1]
0x455DF7: add     edi, 1
0x455DFA: test    cl, cl
0x455DFC: jnz     short loc_455DF4
0x455DFE: mov     edx, [esp+4+arg_168]
0x455E05: mov     ecx, eax
0x455E07: shr     ecx, 2
0x455E0A: rep movsd
0x455E0C: mov     ecx, eax
0x455E0E: and     ecx, 3
0x455E11: rep movsb
0x455E13: jmp     loc_455C82
0x455E18: test    ebp, ebp
0x455E1A: jz      short loc_455E37
0x455E1C: mov     eax, [ebp+0]
0x455E1F: mov     edx, [eax+4Ch]
0x455E22: push    10000000h
0x455E27: mov     ecx, ebp
0x455E29: call    edx
0x455E2B: movzx   ecx, word ptr [esp+4+arg_C]
0x455E30: movzx   eax, ax
0x455E33: sub     eax, ecx
0x455E35: jmp     short loc_455E39
0x455E37: xor     eax, eax
0x455E39: push    eax
0x455E3A: lea     edx, [esp+8+arg_20]
0x455E3E: push    offset aLeveledCreatur; "Leveled Creature(%i)"
0x455E43: push    edx
0x455E44: call    __sprintf
0x455E49: lea     eax, [esp+10h+arg_20]
0x455E4D: add     esp, 0Ch
0x455E50: lea     edx, [eax+1]
0x455E53: mov     cl, [eax]
0x455E55: add     eax, 1
0x455E58: test    cl, cl
0x455E5A: jnz     short loc_455E53
0x455E5C: mov     si, ds:0A36430h
0x455E63: sub     eax, edx
0x455E65: cmp     eax, 19h
0x455E68: jnb     short loc_455EA0
0x455E6A: lea     ebx, [ebx+0]
0x455E70: lea     edi, [esp+4+arg_20]
0x455E74: add     edi, 0FFFFFFFFh
0x455E77: mov     al, [edi+1]
0x455E7A: add     edi, 1
0x455E7D: test    al, al
0x455E7F: jnz     short loc_455E77
0x455E81: lea     eax, [esp+4+arg_20]
0x455E85: mov     [edi], si
0x455E88: lea     edx, [eax+1]
0x455E8B: jmp     short loc_455E90
0x455E8D: align 10h
0x455E90: mov     cl, [eax]
0x455E92: add     eax, 1
0x455E95: test    cl, cl
0x455E97: jnz     short loc_455E90
0x455E99: sub     eax, edx
0x455E9B: cmp     eax, 19h
0x455E9E: jb      short loc_455E70
0x455EA0: lea     edi, [esp+4+arg_20]
0x455EA4: add     edi, 0FFFFFFFFh
0x455EA7: mov     al, [edi+1]
0x455EAA: add     edi, 1
0x455EAD: test    al, al
0x455EAF: jnz     short loc_455EA7
0x455EB1: lea     eax, [esp+4+arg_20]
0x455EB5: mov     [edi], si
0x455EB8: mov     ecx, eax
0x455EBA: lea     ebx, [ebx+0]
0x455EC0: mov     dl, [eax]
0x455EC2: add     eax, 1
0x455EC5: test    dl, dl
0x455EC7: jnz     short loc_455EC0
0x455EC9: mov     edi, [esp+4+arg_8]
0x455ECD: sub     eax, ecx
0x455ECF: mov     esi, ecx
0x455ED1: add     edi, 0FFFFFFFFh
0x455ED4: mov     cl, [edi+1]
0x455ED7: add     edi, 1
0x455EDA: test    cl, cl
0x455EDC: jnz     short loc_455ED4
0x455EDE: mov     edx, [esp+4+arg_168]
0x455EE5: mov     ecx, eax
0x455EE7: shr     ecx, 2
0x455EEA: rep movsd
0x455EEC: mov     ecx, eax
0x455EEE: and     ecx, 3
0x455EF1: rep movsb
0x455EF3: test    edx, 8000000h
0x455EF9: jz      loc_456033
0x455EFF: cmp     [esp+arg_174], 0
0x455F07: jz      short loc_455F54
0x455F09: mov     eax, [esp+arg_C]
0x455F0D: add     eax, 0FFFFFFFFh
0x455F10: mov     cl, [eax+1]
0x455F13: add     eax, 1
0x455F16: test    cl, cl
0x455F18: jnz     short loc_455F10
0x455F1A: mov     ecx, ds:0A39924h
0x455F20: mov     [eax], ecx
0x455F22: mov     ecx, ds:0A39928h
0x455F28: mov     [eax+4], ecx
0x455F2B: mov     ecx, ds:0A3992Ch
0x455F31: mov     [eax+8], ecx
0x455F34: mov     ecx, ds:0A39930h
0x455F3A: mov     [eax+0Ch], ecx
0x455F3D: mov     ecx, ds:0A39934h
0x455F43: mov     [eax+10h], ecx
0x455F46: mov     ecx, ds:0A39938h
0x455F4C: mov     [eax+14h], ecx
0x455F4F: jmp     loc_456033
0x455F54: test    ebp, ebp
0x455F56: jz      short loc_455F73
0x455F58: mov     edx, [ebp+0]
0x455F5B: mov     eax, [edx+4Ch]
0x455F5E: push    8000000h
0x455F63: mov     ecx, ebp
0x455F65: call    eax
0x455F67: movzx   ecx, word ptr [esp+4+arg_C]
0x455F6C: movzx   eax, ax
0x455F6F: sub     eax, ecx
0x455F71: jmp     short loc_455F75
0x455F73: xor     eax, eax
0x455F75: push    eax
0x455F76: lea     edx, [esp+8+arg_20]
0x455F7A: push    offset aInventoryI; "Inventory(%i)"
0x455F7F: push    edx
0x455F80: call    __sprintf
0x455F85: lea     eax, [esp+10h+arg_20]
0x455F89: add     esp, 0Ch
0x455F8C: lea     edx, [eax+1]
0x455F8F: nop
0x455F90: mov     cl, [eax]
0x455F92: add     eax, 1
0x455F95: test    cl, cl
0x455F97: jnz     short loc_455F90
0x455F99: mov     si, ds:0A36430h
0x455FA0: sub     eax, edx
0x455FA2: cmp     eax, 19h
0x455FA5: jnb     short loc_455FE0
0x455FA7: jmp     short loc_455FB0
0x455FA9: align 10h
0x455FB0: lea     edi, [esp+4+arg_20]
0x455FB4: add     edi, 0FFFFFFFFh
0x455FB7: mov     al, [edi+1]
0x455FBA: add     edi, 1
0x455FBD: test    al, al
0x455FBF: jnz     short loc_455FB7
0x455FC1: lea     eax, [esp+4+arg_20]
0x455FC5: mov     [edi], si
0x455FC8: lea     edx, [eax+1]
0x455FCB: jmp     short loc_455FD0
0x455FCD: align 10h
0x455FD0: mov     cl, [eax]
0x455FD2: add     eax, 1
0x455FD5: test    cl, cl
0x455FD7: jnz     short loc_455FD0
0x455FD9: sub     eax, edx
0x455FDB: cmp     eax, 19h
0x455FDE: jb      short loc_455FB0
0x455FE0: lea     edi, [esp+4+arg_20]
0x455FE4: add     edi, 0FFFFFFFFh
0x455FE7: mov     al, [edi+1]
0x455FEA: add     edi, 1
0x455FED: test    al, al
0x455FEF: jnz     short loc_455FE7
0x455FF1: lea     eax, [esp+4+arg_20]
0x455FF5: mov     [edi], si
0x455FF8: mov     ecx, eax
0x455FFA: lea     ebx, [ebx+0]
0x456000: mov     dl, [eax]
0x456002: add     eax, 1
0x456005: test    dl, dl
0x456007: jnz     short loc_456000
0x456009: mov     edi, [esp+4+arg_8]
0x45600D: sub     eax, ecx
0x45600F: mov     esi, ecx
0x456011: add     edi, 0FFFFFFFFh
0x456014: mov     cl, [edi+1]
0x456017: add     edi, 1
0x45601A: test    cl, cl
0x45601C: jnz     short loc_456014
0x45601E: mov     edx, [esp+4+arg_168]
0x456025: mov     ecx, eax
0x456027: shr     ecx, 2
0x45602A: rep movsd
0x45602C: mov     ecx, eax
0x45602E: and     ecx, 3
0x456031: rep movsb
0x456033: test    edx, 4000000h
0x456039: jz      loc_456153
0x45603F: cmp     [esp+arg_174], 0
0x456047: jz      short loc_45606E
0x456049: mov     edi, [esp+arg_C]
0x45604D: add     edi, 0FFFFFFFFh
0x456050: mov     al, [edi+1]
0x456053: add     edi, 1
0x456056: test    al, al
0x456058: jnz     short loc_456050
0x45605A: mov     ecx, 6
0x45605F: mov     esi, offset aChange_refr__0; "CHANGE_REFR_EXTRA_SCRIPT\r\n"
0x456064: rep movsd
0x456066: movsw
0x456068: movsb
0x456069: jmp     loc_456153
0x45606E: test    ebp, ebp
0x456070: jz      short loc_45608D
0x456072: mov     eax, [ebp+0]
0x456075: mov     edx, [eax+4Ch]
0x456078: push    4000000h
0x45607D: mov     ecx, ebp
0x45607F: call    edx
0x456081: movzx   ecx, word ptr [esp+4+arg_C]
0x456086: movzx   eax, ax
0x456089: sub     eax, ecx
0x45608B: jmp     short loc_45608F
0x45608D: xor     eax, eax
0x45608F: push    eax
0x456090: lea     edx, [esp+8+arg_20]
0x456094: push    offset aScriptI; "Script(%i)"
0x456099: push    edx
0x45609A: call    __sprintf
0x45609F: lea     eax, [esp+10h+arg_20]
0x4560A3: add     esp, 0Ch
0x4560A6: lea     edx, [eax+1]
0x4560A9: lea     esp, [esp+0]
0x4560B0: mov     cl, [eax]
0x4560B2: add     eax, 1
0x4560B5: test    cl, cl
0x4560B7: jnz     short loc_4560B0
0x4560B9: mov     si, ds:0A36430h
0x4560C0: sub     eax, edx
0x4560C2: cmp     eax, 19h
0x4560C5: jnb     short loc_456100
0x4560C7: jmp     short loc_4560D0
0x4560C9: align 10h
0x4560D0: lea     edi, [esp+4+arg_20]
0x4560D4: add     edi, 0FFFFFFFFh
0x4560D7: mov     al, [edi+1]
0x4560DA: add     edi, 1
0x4560DD: test    al, al
0x4560DF: jnz     short loc_4560D7
0x4560E1: lea     eax, [esp+4+arg_20]
0x4560E5: mov     [edi], si
0x4560E8: lea     edx, [eax+1]
0x4560EB: jmp     short loc_4560F0
0x4560ED: align 10h
0x4560F0: mov     cl, [eax]
0x4560F2: add     eax, 1
0x4560F5: test    cl, cl
0x4560F7: jnz     short loc_4560F0
0x4560F9: sub     eax, edx
0x4560FB: cmp     eax, 19h
0x4560FE: jb      short loc_4560D0
0x456100: lea     edi, [esp+4+arg_20]
0x456104: add     edi, 0FFFFFFFFh
0x456107: mov     al, [edi+1]
0x45610A: add     edi, 1
0x45610D: test    al, al
0x45610F: jnz     short loc_456107
0x456111: lea     eax, [esp+4+arg_20]
0x456115: mov     [edi], si
0x456118: mov     ecx, eax
0x45611A: lea     ebx, [ebx+0]
0x456120: mov     dl, [eax]
0x456122: add     eax, 1
0x456125: test    dl, dl
0x456127: jnz     short loc_456120
0x456129: mov     edi, [esp+4+arg_8]
0x45612D: sub     eax, ecx
0x45612F: mov     esi, ecx
0x456131: add     edi, 0FFFFFFFFh
0x456134: mov     cl, [edi+1]
0x456137: add     edi, 1
0x45613A: test    cl, cl
0x45613C: jnz     short loc_456134
0x45613E: mov     edx, [esp+4+arg_168]
0x456145: mov     ecx, eax
0x456147: shr     ecx, 2
0x45614A: rep movsd
0x45614C: mov     ecx, eax
0x45614E: and     ecx, 3
0x456151: rep movsb
0x456153: test    edx, 1000000h
0x456159: jz      loc_456263
0x45615F: cmp     [esp+arg_174], 0
0x456167: jz      short loc_45618D
0x456169: mov     edi, [esp+arg_C]
0x45616D: add     edi, 0FFFFFFFFh
0x456170: mov     al, [edi+1]
0x456173: add     edi, 1
0x456176: test    al, al
0x456178: jnz     short loc_456170
0x45617A: mov     ecx, 9
0x45617F: mov     esi, offset aChange_refr__1; "CHANGE_REFR_EXTRA_SAVEDMOVEMENTDATA\r\n"
0x456184: rep movsd
0x456186: movsw
0x456188: jmp     loc_456263
0x45618D: test    ebp, ebp
0x45618F: jz      short loc_4561AC
0x456191: mov     eax, [ebp+0]
0x456194: mov     edx, [eax+4Ch]
0x456197: push    1000000h
0x45619C: mov     ecx, ebp
0x45619E: call    edx
0x4561A0: movzx   ecx, word ptr [esp+4+arg_C]
0x4561A5: movzx   eax, ax
0x4561A8: sub     eax, ecx
0x4561AA: jmp     short loc_4561AE
0x4561AC: xor     eax, eax
0x4561AE: push    eax
0x4561AF: lea     edx, [esp+8+arg_20]
0x4561B3: push    offset aMovementExtraI; "Movement Extra(%i)"
0x4561B8: push    edx
0x4561B9: call    __sprintf
0x4561BE: lea     eax, [esp+10h+arg_20]
0x4561C2: add     esp, 0Ch
0x4561C5: lea     edx, [eax+1]
0x4561C8: mov     cl, [eax]
0x4561CA: add     eax, 1
0x4561CD: test    cl, cl
0x4561CF: jnz     short loc_4561C8
0x4561D1: mov     si, ds:0A36430h
0x4561D8: sub     eax, edx
0x4561DA: cmp     eax, 19h
0x4561DD: jnb     short loc_456210
0x4561DF: nop
0x4561E0: lea     edi, [esp+4+arg_20]
0x4561E4: add     edi, 0FFFFFFFFh
0x4561E7: mov     al, [edi+1]
0x4561EA: add     edi, 1
0x4561ED: test    al, al
0x4561EF: jnz     short loc_4561E7
0x4561F1: lea     eax, [esp+4+arg_20]
0x4561F5: mov     [edi], si
0x4561F8: lea     edx, [eax+1]
0x4561FB: jmp     short loc_456200
0x4561FD: align 10h
0x456200: mov     cl, [eax]
0x456202: add     eax, 1
0x456205: test    cl, cl
0x456207: jnz     short loc_456200
0x456209: sub     eax, edx
0x45620B: cmp     eax, 19h
0x45620E: jb      short loc_4561E0
0x456210: lea     edi, [esp+4+arg_20]
0x456214: add     edi, 0FFFFFFFFh
0x456217: mov     al, [edi+1]
0x45621A: add     edi, 1
0x45621D: test    al, al
0x45621F: jnz     short loc_456217
0x456221: lea     eax, [esp+4+arg_20]
0x456225: mov     [edi], si
0x456228: mov     ecx, eax
0x45622A: lea     ebx, [ebx+0]
0x456230: mov     dl, [eax]
0x456232: add     eax, 1
0x456235: test    dl, dl
0x456237: jnz     short loc_456230
0x456239: mov     edi, [esp+4+arg_8]
0x45623D: sub     eax, ecx
0x45623F: mov     esi, ecx
0x456241: add     edi, 0FFFFFFFFh
0x456244: mov     cl, [edi+1]
0x456247: add     edi, 1
0x45624A: test    cl, cl
0x45624C: jnz     short loc_456244
0x45624E: mov     edx, [esp+4+arg_168]
0x456255: mov     ecx, eax
0x456257: shr     ecx, 2
0x45625A: rep movsd
0x45625C: mov     ecx, eax
0x45625E: and     ecx, 3
0x456261: rep movsb
0x456263: mov     al, [esp+arg_170]
0x45626A: cmp     al, 32h ; '2'
0x45626C: jz      loc_456FF1
0x456272: cmp     al, 33h ; '3'
0x456274: jz      loc_456FF1
0x45627A: test    edx, 400h
0x456280: jz      loc_456393
0x456286: cmp     [esp+arg_174], 0
0x45628E: jz      short loc_4562B5
0x456290: mov     edi, [esp+arg_C]
0x456294: add     edi, 0FFFFFFFFh
0x456297: mov     al, [edi+1]
0x45629A: add     edi, 1
0x45629D: test    al, al
0x45629F: jnz     short loc_456297
0x4562A1: mov     ecx, 7
0x4562A6: mov     esi, offset aChange_mapmark; "CHANGE_MAPMARKER_EXTRA_FLAGS\r\n"
0x4562AB: rep movsd
0x4562AD: movsw
0x4562AF: movsb
0x4562B0: jmp     loc_456393
0x4562B5: test    ebp, ebp
0x4562B7: jz      short loc_4562D4
0x4562B9: mov     eax, [ebp+0]
0x4562BC: mov     edx, [eax+4Ch]
0x4562BF: push    400h
0x4562C4: mov     ecx, ebp
0x4562C6: call    edx
0x4562C8: movzx   ecx, word ptr [esp+4+arg_C]
0x4562CD: movzx   eax, ax
0x4562D0: sub     eax, ecx
0x4562D2: jmp     short loc_4562D6
0x4562D4: xor     eax, eax
0x4562D6: push    eax
0x4562D7: lea     edx, [esp+8+arg_20]
0x4562DB: push    offset aMapMarkerFlags; "Map Marker Flags(%i)"
0x4562E0: push    edx
0x4562E1: call    __sprintf
0x4562E6: lea     eax, [esp+10h+arg_20]
0x4562EA: add     esp, 0Ch
0x4562ED: lea     edx, [eax+1]
0x4562F0: mov     cl, [eax]
0x4562F2: add     eax, 1
0x4562F5: test    cl, cl
0x4562F7: jnz     short loc_4562F0
0x4562F9: mov     si, ds:0A36430h
0x456300: sub     eax, edx
0x456302: cmp     eax, 19h
0x456305: jnb     short loc_456340
0x456307: jmp     short loc_456310
0x456309: align 10h
0x456310: lea     edi, [esp+4+arg_20]
0x456314: add     edi, 0FFFFFFFFh
0x456317: mov     al, [edi+1]
0x45631A: add     edi, 1
0x45631D: test    al, al
0x45631F: jnz     short loc_456317
0x456321: lea     eax, [esp+4+arg_20]
0x456325: mov     [edi], si
0x456328: lea     edx, [eax+1]
0x45632B: jmp     short loc_456330
0x45632D: align 10h
0x456330: mov     cl, [eax]
0x456332: add     eax, 1
0x456335: test    cl, cl
0x456337: jnz     short loc_456330
0x456339: sub     eax, edx
0x45633B: cmp     eax, 19h
0x45633E: jb      short loc_456310
0x456340: lea     edi, [esp+4+arg_20]
0x456344: add     edi, 0FFFFFFFFh
0x456347: mov     al, [edi+1]
0x45634A: add     edi, 1
0x45634D: test    al, al
0x45634F: jnz     short loc_456347
0x456351: lea     eax, [esp+4+arg_20]
0x456355: mov     [edi], si
0x456358: mov     ecx, eax
0x45635A: lea     ebx, [ebx+0]
0x456360: mov     dl, [eax]
0x456362: add     eax, 1
0x456365: test    dl, dl
0x456367: jnz     short loc_456360
0x456369: mov     edi, [esp+4+arg_8]
0x45636D: sub     eax, ecx
0x45636F: mov     esi, ecx
0x456371: add     edi, 0FFFFFFFFh
0x456374: mov     cl, [edi+1]
0x456377: add     edi, 1
0x45637A: test    cl, cl
0x45637C: jnz     short loc_456374
0x45637E: mov     edx, [esp+4+arg_168]
0x456385: mov     ecx, eax
0x456387: shr     ecx, 2
0x45638A: rep movsd
0x45638C: mov     ecx, eax
0x45638E: and     ecx, 3
0x456391: rep movsb
0x456393: test    edx, 400000h
0x456399: jz      loc_4564B3
0x45639F: cmp     [esp+arg_174], 0
0x4563A7: jz      short loc_4563CE
0x4563A9: mov     edi, [esp+arg_C]
0x4563AD: add     edi, 0FFFFFFFFh
0x4563B0: mov     al, [edi+1]
0x4563B3: add     edi, 1
0x4563B6: test    al, al
0x4563B8: jnz     short loc_4563B0
0x4563BA: mov     ecx, 9
0x4563BF: mov     esi, offset aChange_object_; "CHANGE_OBJECT_EXTRA_FURNITURE_MARKER\r"...
0x4563C4: rep movsd
0x4563C6: movsw
0x4563C8: movsb
0x4563C9: jmp     loc_4564B3
0x4563CE: test    ebp, ebp
0x4563D0: jz      short loc_4563ED
0x4563D2: mov     eax, [ebp+0]
0x4563D5: mov     edx, [eax+4Ch]
0x4563D8: push    400000h
0x4563DD: mov     ecx, ebp
0x4563DF: call    edx
0x4563E1: movzx   ecx, word ptr [esp+4+arg_C]
0x4563E6: movzx   eax, ax
0x4563E9: sub     eax, ecx
0x4563EB: jmp     short loc_4563EF
0x4563ED: xor     eax, eax
0x4563EF: push    eax
0x4563F0: lea     edx, [esp+8+arg_20]
0x4563F4: push    offset aFurnitureMarke; "Furniture Markers(%i)"
0x4563F9: push    edx
0x4563FA: call    __sprintf
0x4563FF: lea     eax, [esp+10h+arg_20]
0x456403: add     esp, 0Ch
0x456406: lea     edx, [eax+1]
0x456409: lea     esp, [esp+0]
0x456410: mov     cl, [eax]
0x456412: add     eax, 1
0x456415: test    cl, cl
0x456417: jnz     short loc_456410
0x456419: mov     si, ds:0A36430h
0x456420: sub     eax, edx
0x456422: cmp     eax, 19h
0x456425: jnb     short loc_456460
0x456427: jmp     short loc_456430
0x456429: align 10h
0x456430: lea     edi, [esp+4+arg_20]
0x456434: add     edi, 0FFFFFFFFh
0x456437: mov     al, [edi+1]
0x45643A: add     edi, 1
0x45643D: test    al, al
0x45643F: jnz     short loc_456437
0x456441: lea     eax, [esp+4+arg_20]
0x456445: mov     [edi], si
0x456448: lea     edx, [eax+1]
0x45644B: jmp     short loc_456450
0x45644D: align 10h
0x456450: mov     cl, [eax]
0x456452: add     eax, 1
0x456455: test    cl, cl
0x456457: jnz     short loc_456450
0x456459: sub     eax, edx
0x45645B: cmp     eax, 19h
0x45645E: jb      short loc_456430
0x456460: lea     edi, [esp+4+arg_20]
0x456464: add     edi, 0FFFFFFFFh
0x456467: mov     al, [edi+1]
0x45646A: add     edi, 1
0x45646D: test    al, al
0x45646F: jnz     short loc_456467
0x456471: lea     eax, [esp+4+arg_20]
0x456475: mov     [edi], si
0x456478: mov     ecx, eax
0x45647A: lea     ebx, [ebx+0]
0x456480: mov     dl, [eax]
0x456482: add     eax, 1
0x456485: test    dl, dl
0x456487: jnz     short loc_456480
0x456489: mov     edi, [esp+4+arg_8]
0x45648D: sub     eax, ecx
0x45648F: mov     esi, ecx
0x456491: add     edi, 0FFFFFFFFh
0x456494: mov     cl, [edi+1]
0x456497: add     edi, 1
0x45649A: test    cl, cl
0x45649C: jnz     short loc_456494
0x45649E: mov     edx, [esp+4+arg_168]
0x4564A5: mov     ecx, eax
0x4564A7: shr     ecx, 2
0x4564AA: rep movsd
0x4564AC: mov     ecx, eax
0x4564AE: and     ecx, 3
0x4564B1: rep movsb
0x4564B3: test    edx, 200000h
0x4564B9: jz      loc_4565C3
0x4564BF: cmp     [esp+arg_174], 0
0x4564C7: jz      short loc_4564EB
0x4564C9: mov     edi, [esp+arg_C]
0x4564CD: add     edi, 0FFFFFFFFh
0x4564D0: mov     al, [edi+1]
0x4564D3: add     edi, 1
0x4564D6: test    al, al
0x4564D8: jnz     short loc_4564D0
0x4564DA: mov     ecx, 7
0x4564DF: mov     esi, offset aChange_objec_0; "CHANGE_OBJECT_EXTRA_MAGIC\r\n"
0x4564E4: rep movsd
0x4564E6: jmp     loc_4565C3
0x4564EB: test    ebp, ebp
0x4564ED: jz      short loc_45650A
0x4564EF: mov     eax, [ebp+0]
0x4564F2: mov     edx, [eax+4Ch]
0x4564F5: push    200000h
0x4564FA: mov     ecx, ebp
0x4564FC: call    edx
0x4564FE: movzx   ecx, word ptr [esp+4+arg_C]
0x456503: movzx   eax, ax
0x456506: sub     eax, ecx
0x456508: jmp     short loc_45650C
0x45650A: xor     eax, eax
0x45650C: push    eax
0x45650D: lea     edx, [esp+8+arg_20]
0x456511: push    offset aExtraMagicI; "Extra Magic(%i)"
0x456516: push    edx
0x456517: call    __sprintf
0x45651C: lea     eax, [esp+10h+arg_20]
0x456520: add     esp, 0Ch
0x456523: lea     edx, [eax+1]
0x456526: mov     cl, [eax]
0x456528: add     eax, 1
0x45652B: test    cl, cl
0x45652D: jnz     short loc_456526
0x45652F: mov     si, ds:0A36430h
0x456536: sub     eax, edx
0x456538: cmp     eax, 19h
0x45653B: jnb     short loc_456570
0x45653D: lea     ecx, [ecx+0]
0x456540: lea     edi, [esp+4+arg_20]
0x456544: add     edi, 0FFFFFFFFh
0x456547: mov     al, [edi+1]
0x45654A: add     edi, 1
0x45654D: test    al, al
0x45654F: jnz     short loc_456547
0x456551: lea     eax, [esp+4+arg_20]
0x456555: mov     [edi], si
0x456558: lea     edx, [eax+1]
0x45655B: jmp     short loc_456560
0x45655D: align 10h
0x456560: mov     cl, [eax]
0x456562: add     eax, 1
0x456565: test    cl, cl
0x456567: jnz     short loc_456560
0x456569: sub     eax, edx
0x45656B: cmp     eax, 19h
0x45656E: jb      short loc_456540
0x456570: lea     edi, [esp+4+arg_20]
0x456574: add     edi, 0FFFFFFFFh
0x456577: mov     al, [edi+1]
0x45657A: add     edi, 1
0x45657D: test    al, al
0x45657F: jnz     short loc_456577
0x456581: lea     eax, [esp+4+arg_20]
0x456585: mov     [edi], si
0x456588: mov     ecx, eax
0x45658A: lea     ebx, [ebx+0]
0x456590: mov     dl, [eax]
0x456592: add     eax, 1
0x456595: test    dl, dl
0x456597: jnz     short loc_456590
0x456599: mov     edi, [esp+4+arg_8]
0x45659D: sub     eax, ecx
0x45659F: mov     esi, ecx
0x4565A1: add     edi, 0FFFFFFFFh
0x4565A4: mov     cl, [edi+1]
0x4565A7: add     edi, 1
0x4565AA: test    cl, cl
0x4565AC: jnz     short loc_4565A4
0x4565AE: mov     edx, [esp+4+arg_168]
0x4565B5: mov     ecx, eax
0x4565B7: shr     ecx, 2
0x4565BA: rep movsd
0x4565BC: mov     ecx, eax
0x4565BE: and     ecx, 3
0x4565C1: rep movsb
0x4565C3: test    dl, 40h
0x4565C6: jz      loc_4566D3
0x4565CC: cmp     [esp+arg_174], 0
0x4565D4: jz      short loc_4565FE
0x4565D6: mov     edi, [esp+arg_C]
0x4565DA: add     edi, 0FFFFFFFFh
0x4565DD: lea     ecx, [ecx+0]
0x4565E0: mov     al, [edi+1]
0x4565E3: add     edi, 1
0x4565E6: test    al, al
0x4565E8: jnz     short loc_4565E0
0x4565EA: mov     ecx, 6
0x4565EF: mov     esi, offset aChange_objec_1; "CHANGE_OBJECT_EXTRA_LOCK\r\n"
0x4565F4: rep movsd
0x4565F6: movsw
0x4565F8: movsb
0x4565F9: jmp     loc_4566D3
0x4565FE: test    ebp, ebp
0x456600: jz      short loc_45661A
0x456602: mov     eax, [ebp+0]
0x456605: mov     edx, [eax+4Ch]
0x456608: push    40h ; '@'
0x45660A: mov     ecx, ebp
0x45660C: call    edx
0x45660E: movzx   ecx, word ptr [esp+4+arg_C]
0x456613: movzx   eax, ax
0x456616: sub     eax, ecx
0x456618: jmp     short loc_45661C
0x45661A: xor     eax, eax
0x45661C: push    eax
0x45661D: lea     edx, [esp+8+arg_20]
0x456621: push    offset aLockI; "Lock(%i)"
0x456626: push    edx
0x456627: call    __sprintf
0x45662C: lea     eax, [esp+10h+arg_20]
0x456630: add     esp, 0Ch
0x456633: lea     edx, [eax+1]
0x456636: mov     cl, [eax]
0x456638: add     eax, 1
0x45663B: test    cl, cl
0x45663D: jnz     short loc_456636
0x45663F: mov     si, ds:0A36430h
0x456646: sub     eax, edx
0x456648: cmp     eax, 19h
0x45664B: jnb     short loc_456680
0x45664D: lea     ecx, [ecx+0]
0x456650: lea     edi, [esp+4+arg_20]
0x456654: add     edi, 0FFFFFFFFh
0x456657: mov     al, [edi+1]
0x45665A: add     edi, 1
0x45665D: test    al, al
0x45665F: jnz     short loc_456657
0x456661: lea     eax, [esp+4+arg_20]
0x456665: mov     [edi], si
0x456668: lea     edx, [eax+1]
0x45666B: jmp     short loc_456670
0x45666D: align 10h
0x456670: mov     cl, [eax]
0x456672: add     eax, 1
0x456675: test    cl, cl
0x456677: jnz     short loc_456670
0x456679: sub     eax, edx
0x45667B: cmp     eax, 19h
0x45667E: jb      short loc_456650
0x456680: lea     edi, [esp+4+arg_20]
0x456684: add     edi, 0FFFFFFFFh
0x456687: mov     al, [edi+1]
0x45668A: add     edi, 1
0x45668D: test    al, al
0x45668F: jnz     short loc_456687
0x456691: lea     eax, [esp+4+arg_20]
0x456695: mov     [edi], si
0x456698: mov     ecx, eax
0x45669A: lea     ebx, [ebx+0]
0x4566A0: mov     dl, [eax]
0x4566A2: add     eax, 1
0x4566A5: test    dl, dl
0x4566A7: jnz     short loc_4566A0
0x4566A9: mov     edi, [esp+4+arg_8]
0x4566AD: sub     eax, ecx
0x4566AF: mov     esi, ecx
0x4566B1: add     edi, 0FFFFFFFFh
0x4566B4: mov     cl, [edi+1]
0x4566B7: add     edi, 1
0x4566BA: test    cl, cl
0x4566BC: jnz     short loc_4566B4
0x4566BE: mov     edx, [esp+4+arg_168]
0x4566C5: mov     ecx, eax
0x4566C7: shr     ecx, 2
0x4566CA: rep movsd
0x4566CC: mov     ecx, eax
0x4566CE: and     ecx, 3
0x4566D1: rep movsb
0x4566D3: test    dl, dl
0x4566D5: jns     loc_4567E3
0x4566DB: cmp     [esp+arg_174], 0
0x4566E3: jz      short loc_45670B
0x4566E5: mov     edi, [esp+arg_C]
0x4566E9: add     edi, 0FFFFFFFFh
0x4566EC: lea     esp, [esp+0]
0x4566F0: mov     al, [edi+1]
0x4566F3: add     edi, 1
0x4566F6: test    al, al
0x4566F8: jnz     short loc_4566F0
0x4566FA: mov     ecx, 7
0x4566FF: mov     esi, offset aChange_objec_2; "CHANGE_OBJECT_EXTRA_OWNER\r\n"
0x456704: rep movsd
0x456706: jmp     loc_4567E3
0x45670B: test    ebp, ebp
0x45670D: jz      short loc_45672A
0x45670F: mov     eax, [ebp+0]
0x456712: mov     edx, [eax+4Ch]
0x456715: push    80h ; '€'
0x45671A: mov     ecx, ebp
0x45671C: call    edx
0x45671E: movzx   ecx, word ptr [esp+4+arg_C]
0x456723: movzx   eax, ax
0x456726: sub     eax, ecx
0x456728: jmp     short loc_45672C
0x45672A: xor     eax, eax
0x45672C: push    eax
0x45672D: lea     edx, [esp+8+arg_20]
0x456731: push    offset aOwnerI; "Owner(%i)"
0x456736: push    edx
0x456737: call    __sprintf
0x45673C: lea     eax, [esp+10h+arg_20]
0x456740: add     esp, 0Ch
0x456743: lea     edx, [eax+1]
0x456746: mov     cl, [eax]
0x456748: add     eax, 1
0x45674B: test    cl, cl
0x45674D: jnz     short loc_456746
0x45674F: mov     si, ds:0A36430h
0x456756: sub     eax, edx
0x456758: cmp     eax, 19h
0x45675B: jnb     short loc_456790
0x45675D: lea     ecx, [ecx+0]
0x456760: lea     edi, [esp+4+arg_20]
0x456764: add     edi, 0FFFFFFFFh
0x456767: mov     al, [edi+1]
0x45676A: add     edi, 1
0x45676D: test    al, al
0x45676F: jnz     short loc_456767
0x456771: lea     eax, [esp+4+arg_20]
0x456775: mov     [edi], si
0x456778: lea     edx, [eax+1]
0x45677B: jmp     short loc_456780
0x45677D: align 10h
0x456780: mov     cl, [eax]
0x456782: add     eax, 1
0x456785: test    cl, cl
0x456787: jnz     short loc_456780
0x456789: sub     eax, edx
0x45678B: cmp     eax, 19h
0x45678E: jb      short loc_456760
0x456790: lea     edi, [esp+4+arg_20]
0x456794: add     edi, 0FFFFFFFFh
0x456797: mov     al, [edi+1]
0x45679A: add     edi, 1
0x45679D: test    al, al
0x45679F: jnz     short loc_456797
0x4567A1: lea     eax, [esp+4+arg_20]
0x4567A5: mov     [edi], si
0x4567A8: mov     ecx, eax
0x4567AA: lea     ebx, [ebx+0]
0x4567B0: mov     dl, [eax]
0x4567B2: add     eax, 1
0x4567B5: test    dl, dl
0x4567B7: jnz     short loc_4567B0
0x4567B9: mov     edi, [esp+4+arg_8]
0x4567BD: sub     eax, ecx
0x4567BF: mov     esi, ecx
0x4567C1: add     edi, 0FFFFFFFFh
0x4567C4: mov     cl, [edi+1]
0x4567C7: add     edi, 1
0x4567CA: test    cl, cl
0x4567CC: jnz     short loc_4567C4
0x4567CE: mov     edx, [esp+4+arg_168]
0x4567D5: mov     ecx, eax
0x4567D7: shr     ecx, 2
0x4567DA: rep movsd
0x4567DC: mov     ecx, eax
0x4567DE: and     ecx, 3
0x4567E1: rep movsb
0x4567E3: test    edx, 100h
0x4567E9: jz      loc_4568F3
0x4567EF: cmp     [esp+arg_174], 0
0x4567F7: jz      short loc_45681C
0x4567F9: mov     edi, [esp+arg_C]
0x4567FD: add     edi, 0FFFFFFFFh
0x456800: mov     al, [edi+1]
0x456803: add     edi, 1
0x456806: test    al, al
0x456808: jnz     short loc_456800
0x45680A: mov     ecx, 7
0x45680F: mov     esi, offset aChange_objec_3; "CHANGE_OBJECT_EXTRA_GLOBAL\r\n"
0x456814: rep movsd
0x456816: movsb
0x456817: jmp     loc_4568F3
0x45681C: test    ebp, ebp
0x45681E: jz      short loc_45683B
0x456820: mov     eax, [ebp+0]
0x456823: mov     edx, [eax+4Ch]
0x456826: push    100h
0x45682B: mov     ecx, ebp
0x45682D: call    edx
0x45682F: movzx   ecx, word ptr [esp+4+arg_C]
0x456834: movzx   eax, ax
0x456837: sub     eax, ecx
0x456839: jmp     short loc_45683D
0x45683B: xor     eax, eax
0x45683D: push    eax
0x45683E: lea     edx, [esp+8+arg_20]
0x456842: push    offset aGlobalOwnerI; "Global Owner(%i)"
0x456847: push    edx
0x456848: call    __sprintf
0x45684D: lea     eax, [esp+10h+arg_20]
0x456851: add     esp, 0Ch
0x456854: lea     edx, [eax+1]
0x456857: mov     cl, [eax]
0x456859: add     eax, 1
0x45685C: test    cl, cl
0x45685E: jnz     short loc_456857
0x456860: mov     si, ds:0A36430h
0x456867: sub     eax, edx
0x456869: cmp     eax, 19h
0x45686C: jnb     short loc_4568A0
0x45686E: mov     edi, edi
0x456870: lea     edi, [esp+4+arg_20]
0x456874: add     edi, 0FFFFFFFFh
0x456877: mov     al, [edi+1]
0x45687A: add     edi, 1
0x45687D: test    al, al
0x45687F: jnz     short loc_456877
0x456881: lea     eax, [esp+4+arg_20]
0x456885: mov     [edi], si
0x456888: lea     edx, [eax+1]
0x45688B: jmp     short loc_456890
0x45688D: align 10h
0x456890: mov     cl, [eax]
0x456892: add     eax, 1
0x456895: test    cl, cl
0x456897: jnz     short loc_456890
0x456899: sub     eax, edx
0x45689B: cmp     eax, 19h
0x45689E: jb      short loc_456870
0x4568A0: lea     edi, [esp+4+arg_20]
0x4568A4: add     edi, 0FFFFFFFFh
0x4568A7: mov     al, [edi+1]
0x4568AA: add     edi, 1
0x4568AD: test    al, al
0x4568AF: jnz     short loc_4568A7
0x4568B1: lea     eax, [esp+4+arg_20]
0x4568B5: mov     [edi], si
0x4568B8: mov     ecx, eax
0x4568BA: lea     ebx, [ebx+0]
0x4568C0: mov     dl, [eax]
0x4568C2: add     eax, 1
0x4568C5: test    dl, dl
0x4568C7: jnz     short loc_4568C0
0x4568C9: mov     edi, [esp+4+arg_8]
0x4568CD: sub     eax, ecx
0x4568CF: mov     esi, ecx
0x4568D1: add     edi, 0FFFFFFFFh
0x4568D4: mov     cl, [edi+1]
0x4568D7: add     edi, 1
0x4568DA: test    cl, cl
0x4568DC: jnz     short loc_4568D4
0x4568DE: mov     edx, [esp+4+arg_168]
0x4568E5: mov     ecx, eax
0x4568E7: shr     ecx, 2
0x4568EA: rep movsd
0x4568EC: mov     ecx, eax
0x4568EE: and     ecx, 3
0x4568F1: rep movsb
0x4568F3: test    edx, 200h
0x4568F9: jz      loc_456A13
0x4568FF: cmp     [esp+arg_174], 0
0x456907: jz      short loc_45692E
0x456909: mov     edi, [esp+arg_C]
0x45690D: add     edi, 0FFFFFFFFh
0x456910: mov     al, [edi+1]
0x456913: add     edi, 1
0x456916: test    al, al
0x456918: jnz     short loc_456910
0x45691A: mov     ecx, 6
0x45691F: mov     esi, offset aChange_objec_4; "CHANGE_OBJECT_EXTRA_RANK\r\n"
0x456924: rep movsd
0x456926: movsw
0x456928: movsb
0x456929: jmp     loc_456A13
0x45692E: test    ebp, ebp
0x456930: jz      short loc_45694D
0x456932: mov     eax, [ebp+0]
0x456935: mov     edx, [eax+4Ch]
0x456938: push    200h
0x45693D: mov     ecx, ebp
0x45693F: call    edx
0x456941: movzx   ecx, word ptr [esp+4+arg_C]
0x456946: movzx   eax, ax
0x456949: sub     eax, ecx
0x45694B: jmp     short loc_45694F
0x45694D: xor     eax, eax
0x45694F: push    eax
0x456950: lea     edx, [esp+8+arg_20]
0x456954: push    offset aRankOwnerI; "Rank Owner(%i)"
0x456959: push    edx
0x45695A: call    __sprintf
0x45695F: lea     eax, [esp+10h+arg_20]
0x456963: add     esp, 0Ch
0x456966: lea     edx, [eax+1]
0x456969: lea     esp, [esp+0]
0x456970: mov     cl, [eax]
0x456972: add     eax, 1
0x456975: test    cl, cl
0x456977: jnz     short loc_456970
0x456979: mov     si, ds:0A36430h
0x456980: sub     eax, edx
0x456982: cmp     eax, 19h
0x456985: jnb     short loc_4569C0
0x456987: jmp     short loc_456990
0x456989: align 10h
0x456990: lea     edi, [esp+4+arg_20]
0x456994: add     edi, 0FFFFFFFFh
0x456997: mov     al, [edi+1]
0x45699A: add     edi, 1
0x45699D: test    al, al
0x45699F: jnz     short loc_456997
0x4569A1: lea     eax, [esp+4+arg_20]
0x4569A5: mov     [edi], si
0x4569A8: lea     edx, [eax+1]
0x4569AB: jmp     short loc_4569B0
0x4569AD: align 10h
0x4569B0: mov     cl, [eax]
0x4569B2: add     eax, 1
0x4569B5: test    cl, cl
0x4569B7: jnz     short loc_4569B0
0x4569B9: sub     eax, edx
0x4569BB: cmp     eax, 19h
0x4569BE: jb      short loc_456990
0x4569C0: lea     edi, [esp+4+arg_20]
0x4569C4: add     edi, 0FFFFFFFFh
0x4569C7: mov     al, [edi+1]
0x4569CA: add     edi, 1
0x4569CD: test    al, al
0x4569CF: jnz     short loc_4569C7
0x4569D1: lea     eax, [esp+4+arg_20]
0x4569D5: mov     [edi], si
0x4569D8: mov     ecx, eax
0x4569DA: lea     ebx, [ebx+0]
0x4569E0: mov     dl, [eax]
0x4569E2: add     eax, 1
0x4569E5: test    dl, dl
0x4569E7: jnz     short loc_4569E0
0x4569E9: mov     edi, [esp+4+arg_8]
0x4569ED: sub     eax, ecx
0x4569EF: mov     esi, ecx
0x4569F1: add     edi, 0FFFFFFFFh
0x4569F4: mov     cl, [edi+1]
0x4569F7: add     edi, 1
0x4569FA: test    cl, cl
0x4569FC: jnz     short loc_4569F4
0x4569FE: mov     edx, [esp+4+arg_168]
0x456A05: mov     ecx, eax
0x456A07: shr     ecx, 2
0x456A0A: rep movsd
0x456A0C: mov     ecx, eax
0x456A0E: and     ecx, 3
0x456A11: rep movsb
0x456A13: test    edx, 20000h
0x456A19: jz      loc_456B33
0x456A1F: cmp     [esp+arg_174], 0
0x456A27: jz      short loc_456A4E
0x456A29: mov     edi, [esp+arg_C]
0x456A2D: add     edi, 0FFFFFFFFh
0x456A30: mov     al, [edi+1]
0x456A33: add     edi, 1
0x456A36: test    al, al
0x456A38: jnz     short loc_456A30
0x456A3A: mov     ecx, 0Ah
0x456A3F: mov     esi, offset aChangeflag_obj; "CHANGEFLAG_OBJECT_DROPPED_NON_QUEST_ITE"...
0x456A44: rep movsd
0x456A46: movsw
0x456A48: movsb
0x456A49: jmp     loc_456B33
0x456A4E: test    ebp, ebp
0x456A50: jz      short loc_456A6D
0x456A52: mov     eax, [ebp+0]
0x456A55: mov     edx, [eax+4Ch]
0x456A58: push    20000h
0x456A5D: mov     ecx, ebp
0x456A5F: call    edx
0x456A61: movzx   ecx, word ptr [esp+4+arg_C]
0x456A66: movzx   eax, ax
0x456A69: sub     eax, ecx
0x456A6B: jmp     short loc_456A6F
0x456A6D: xor     eax, eax
0x456A6F: push    eax
0x456A70: lea     edx, [esp+8+arg_20]
0x456A74: push    offset aDroppedItemFla; "Dropped Item Flag(%i)"
0x456A79: push    edx
0x456A7A: call    __sprintf
0x456A7F: lea     eax, [esp+10h+arg_20]
0x456A83: add     esp, 0Ch
0x456A86: lea     edx, [eax+1]
0x456A89: lea     esp, [esp+0]
0x456A90: mov     cl, [eax]
0x456A92: add     eax, 1
0x456A95: test    cl, cl
0x456A97: jnz     short loc_456A90
0x456A99: mov     si, ds:0A36430h
0x456AA0: sub     eax, edx
0x456AA2: cmp     eax, 19h
0x456AA5: jnb     short loc_456AE0
0x456AA7: jmp     short loc_456AB0
0x456AA9: align 10h
0x456AB0: lea     edi, [esp+4+arg_20]
0x456AB4: add     edi, 0FFFFFFFFh
0x456AB7: mov     al, [edi+1]
0x456ABA: add     edi, 1
0x456ABD: test    al, al
0x456ABF: jnz     short loc_456AB7
0x456AC1: lea     eax, [esp+4+arg_20]
0x456AC5: mov     [edi], si
0x456AC8: lea     edx, [eax+1]
0x456ACB: jmp     short loc_456AD0
0x456ACD: align 10h
0x456AD0: mov     cl, [eax]
0x456AD2: add     eax, 1
0x456AD5: test    cl, cl
0x456AD7: jnz     short loc_456AD0
0x456AD9: sub     eax, edx
0x456ADB: cmp     eax, 19h
0x456ADE: jb      short loc_456AB0
0x456AE0: lea     edi, [esp+4+arg_20]
0x456AE4: add     edi, 0FFFFFFFFh
0x456AE7: mov     al, [edi+1]
0x456AEA: add     edi, 1
0x456AED: test    al, al
0x456AEF: jnz     short loc_456AE7
0x456AF1: lea     eax, [esp+4+arg_20]
0x456AF5: mov     [edi], si
0x456AF8: mov     ecx, eax
0x456AFA: lea     ebx, [ebx+0]
0x456B00: mov     dl, [eax]
0x456B02: add     eax, 1
0x456B05: test    dl, dl
0x456B07: jnz     short loc_456B00
0x456B09: mov     edi, [esp+4+arg_8]
0x456B0D: sub     eax, ecx
0x456B0F: mov     esi, ecx
0x456B11: add     edi, 0FFFFFFFFh
0x456B14: mov     cl, [edi+1]
0x456B17: add     edi, 1
0x456B1A: test    cl, cl
0x456B1C: jnz     short loc_456B14
0x456B1E: mov     edx, [esp+4+arg_168]
0x456B25: mov     ecx, eax
0x456B27: shr     ecx, 2
0x456B2A: rep movsd
0x456B2C: mov     ecx, eax
0x456B2E: and     ecx, 3
0x456B31: rep movsb
0x456B33: test    edx, 10000h
0x456B39: jz      loc_456C73
0x456B3F: cmp     [esp+arg_174], 0
0x456B47: jz      short loc_456B96
0x456B49: mov     eax, [esp+arg_C]
0x456B4D: add     eax, 0FFFFFFFFh
0x456B50: mov     cl, [eax+1]
0x456B53: add     eax, 1
0x456B56: test    cl, cl
0x456B58: jnz     short loc_456B50
0x456B5A: mov     ecx, ds:0A39700h
0x456B60: mov     [eax], ecx
0x456B62: mov     ecx, ds:0A39704h
0x456B68: mov     [eax+4], ecx
0x456B6B: mov     ecx, ds:0A39708h
0x456B71: mov     [eax+8], ecx
0x456B74: mov     ecx, ds:0A3970Ch
0x456B7A: mov     [eax+0Ch], ecx
0x456B7D: mov     ecx, ds:0A39710h
0x456B83: mov     [eax+10h], ecx
0x456B86: mov     cx, ds:0A39714h
0x456B8D: mov     [eax+14h], cx
0x456B91: jmp     loc_456C73
0x456B96: test    ebp, ebp
0x456B98: jz      short loc_456BB5
0x456B9A: mov     edx, [ebp+0]
0x456B9D: mov     eax, [edx+4Ch]
0x456BA0: push    10000h
0x456BA5: mov     ecx, ebp
0x456BA7: call    eax
0x456BA9: movzx   ecx, word ptr [esp+4+arg_C]
0x456BAE: movzx   eax, ax
0x456BB1: sub     eax, ecx
0x456BB3: jmp     short loc_456BB7
0x456BB5: xor     eax, eax
0x456BB7: push    eax
0x456BB8: lea     edx, [esp+8+arg_20]
0x456BBC: push    offset aEmptyFlagI; "Empty Flag(%i)"
0x456BC1: push    edx
0x456BC2: call    __sprintf
0x456BC7: lea     eax, [esp+10h+arg_20]
0x456BCB: add     esp, 0Ch
0x456BCE: lea     edx, [eax+1]
0x456BD1: mov     cl, [eax]
0x456BD3: add     eax, 1
0x456BD6: test    cl, cl
0x456BD8: jnz     short loc_456BD1
0x456BDA: mov     si, ds:0A36430h
0x456BE1: sub     eax, edx
0x456BE3: cmp     eax, 19h
0x456BE6: jnb     short loc_456C20
0x456BE8: jmp     short loc_456BF0
0x456BEA: align 10h
0x456BF0: lea     edi, [esp+4+arg_20]
0x456BF4: add     edi, 0FFFFFFFFh
0x456BF7: mov     al, [edi+1]
0x456BFA: add     edi, 1
0x456BFD: test    al, al
0x456BFF: jnz     short loc_456BF7
0x456C01: lea     eax, [esp+4+arg_20]
0x456C05: mov     [edi], si
0x456C08: lea     edx, [eax+1]
0x456C0B: jmp     short loc_456C10
0x456C0D: align 10h
0x456C10: mov     cl, [eax]
0x456C12: add     eax, 1
0x456C15: test    cl, cl
0x456C17: jnz     short loc_456C10
0x456C19: sub     eax, edx
0x456C1B: cmp     eax, 19h
0x456C1E: jb      short loc_456BF0
0x456C20: lea     edi, [esp+4+arg_20]
0x456C24: add     edi, 0FFFFFFFFh
0x456C27: mov     al, [edi+1]
0x456C2A: add     edi, 1
0x456C2D: test    al, al
0x456C2F: jnz     short loc_456C27
0x456C31: lea     eax, [esp+4+arg_20]
0x456C35: mov     [edi], si
0x456C38: mov     ecx, eax
0x456C3A: lea     ebx, [ebx+0]
0x456C40: mov     dl, [eax]
0x456C42: add     eax, 1
0x456C45: test    dl, dl
0x456C47: jnz     short loc_456C40
0x456C49: mov     edi, [esp+4+arg_8]
0x456C4D: sub     eax, ecx
0x456C4F: mov     esi, ecx
0x456C51: add     edi, 0FFFFFFFFh
0x456C54: mov     cl, [edi+1]
0x456C57: add     edi, 1
0x456C5A: test    cl, cl
0x456C5C: jnz     short loc_456C54
0x456C5E: mov     edx, [esp+4+arg_168]
0x456C65: mov     ecx, eax
0x456C67: shr     ecx, 2
0x456C6A: rep movsd
0x456C6C: mov     ecx, eax
0x456C6E: and     ecx, 3
0x456C71: rep movsb
0x456C73: test    ebx, ebx
0x456C75: jz      short loc_456CA8
0x456C77: mov     eax, [ebx]
0x456C79: mov     edx, [eax+170h]
0x456C7F: mov     ecx, ebx
0x456C81: call    edx
0x456C83: test    eax, eax
0x456C85: jz      loc_458E1A
0x456C8B: mov     eax, [ebx]
0x456C8D: mov     edx, [eax+170h]
0x456C93: mov     ecx, ebx
0x456C95: call    edx
0x456C97: cmp     byte ptr [eax+4], 18h
0x456C9B: jnz     loc_458E1A
0x456CA1: mov     edx, [esp+arg_16C]
0x456CA8: test    edx, 100000h
0x456CAE: jz      loc_456DC3
0x456CB4: cmp     [esp+arg_174], 0
0x456CBC: jz      short loc_456CE1
0x456CBE: mov     edi, [esp+arg_C]
0x456CC2: add     edi, 0FFFFFFFFh
0x456CC5: mov     al, [edi+1]
0x456CC8: add     edi, 1
0x456CCB: test    al, al
0x456CCD: jnz     short loc_456CC5
0x456CCF: mov     ecx, 7
0x456CD4: mov     esi, offset aChange_door_ex; "CHANGE_DOOR_EXTRA_TELEPORT\r\n"
0x456CD9: rep movsd
0x456CDB: movsb
0x456CDC: jmp     loc_456DC3
0x456CE1: test    ebp, ebp
0x456CE3: jz      short loc_456D00
0x456CE5: mov     eax, [ebp+0]
0x456CE8: mov     edx, [eax+4Ch]
0x456CEB: push    100000h
0x456CF0: mov     ecx, ebp
0x456CF2: call    edx
0x456CF4: movzx   ecx, word ptr [esp+4+arg_C]
0x456CF9: movzx   eax, ax
0x456CFC: sub     eax, ecx
0x456CFE: jmp     short loc_456D02
0x456D00: xor     eax, eax
0x456D02: push    eax
0x456D03: lea     edx, [esp+8+arg_20]
0x456D07: push    offset aTeleportI; "Teleport(%i)"
0x456D0C: push    edx
0x456D0D: call    __sprintf
0x456D12: lea     eax, [esp+10h+arg_20]
0x456D16: add     esp, 0Ch
0x456D19: lea     edx, [eax+1]
0x456D1C: lea     esp, [esp+0]
0x456D20: mov     cl, [eax]
0x456D22: add     eax, 1
0x456D25: test    cl, cl
0x456D27: jnz     short loc_456D20
0x456D29: mov     si, ds:0A36430h
0x456D30: sub     eax, edx
0x456D32: cmp     eax, 19h
0x456D35: jnb     short loc_456D70
0x456D37: jmp     short loc_456D40
0x456D39: align 10h
0x456D40: lea     edi, [esp+4+arg_20]
0x456D44: add     edi, 0FFFFFFFFh
0x456D47: mov     al, [edi+1]
0x456D4A: add     edi, 1
0x456D4D: test    al, al
0x456D4F: jnz     short loc_456D47
0x456D51: lea     eax, [esp+4+arg_20]
0x456D55: mov     [edi], si
0x456D58: lea     edx, [eax+1]
0x456D5B: jmp     short loc_456D60
0x456D5D: align 10h
0x456D60: mov     cl, [eax]
0x456D62: add     eax, 1
0x456D65: test    cl, cl
0x456D67: jnz     short loc_456D60
0x456D69: sub     eax, edx
0x456D6B: cmp     eax, 19h
0x456D6E: jb      short loc_456D40
0x456D70: lea     edi, [esp+4+arg_20]
0x456D74: add     edi, 0FFFFFFFFh
0x456D77: mov     al, [edi+1]
0x456D7A: add     edi, 1
0x456D7D: test    al, al
0x456D7F: jnz     short loc_456D77
0x456D81: lea     eax, [esp+4+arg_20]
0x456D85: mov     [edi], si
0x456D88: mov     ecx, eax
0x456D8A: lea     ebx, [ebx+0]
0x456D90: mov     dl, [eax]
0x456D92: add     eax, 1
0x456D95: test    dl, dl
0x456D97: jnz     short loc_456D90
0x456D99: mov     edi, [esp+4+arg_8]
0x456D9D: sub     eax, ecx
0x456D9F: mov     esi, ecx
0x456DA1: add     edi, 0FFFFFFFFh
0x456DA4: mov     cl, [edi+1]
0x456DA7: add     edi, 1
0x456DAA: test    cl, cl
0x456DAC: jnz     short loc_456DA4
0x456DAE: mov     edx, [esp+4+arg_168]
0x456DB5: mov     ecx, eax
0x456DB7: shr     ecx, 2
0x456DBA: rep movsd
0x456DBC: mov     ecx, eax
0x456DBE: and     ecx, 3
0x456DC1: rep movsb
0x456DC3: test    edx, 80000h
0x456DC9: jz      loc_456EE7
0x456DCF: cmp     [esp+arg_174], 0
0x456DD7: jz      short loc_456DFE
0x456DD9: mov     ebx, [esp+arg_C]
0x456DDD: mov     edi, ebx
0x456DDF: add     edi, 0FFFFFFFFh
0x456DE2: mov     al, [edi+1]
0x456DE5: add     edi, 1
0x456DE8: test    al, al
0x456DEA: jnz     short loc_456DE2
0x456DEC: mov     ecx, 6
0x456DF1: mov     esi, offset aChange_door_op; "CHANGE_DOOR_OPEN_STATE\r\n"
0x456DF6: rep movsd
0x456DF8: movsb
0x456DF9: jmp     loc_456EEB
0x456DFE: test    ebp, ebp
0x456E00: jz      short loc_456E1D
0x456E02: mov     eax, [ebp+0]
0x456E05: mov     edx, [eax+4Ch]
0x456E08: push    80000h
0x456E0D: mov     ecx, ebp
0x456E0F: call    edx
0x456E11: movzx   ecx, word ptr [esp+4+arg_C]
0x456E16: movzx   eax, ax
0x456E19: sub     eax, ecx
0x456E1B: jmp     short loc_456E1F
0x456E1D: xor     eax, eax
0x456E1F: push    eax
0x456E20: lea     edx, [esp+8+arg_20]
0x456E24: push    offset aDoorStateI; "Door State(%i)"
0x456E29: push    edx
0x456E2A: call    __sprintf
0x456E2F: lea     eax, [esp+10h+arg_20]
0x456E33: add     esp, 0Ch
0x456E36: lea     edx, [eax+1]
0x456E39: lea     esp, [esp+0]
0x456E40: mov     cl, [eax]
0x456E42: add     eax, 1
0x456E45: test    cl, cl
0x456E47: jnz     short loc_456E40
0x456E49: mov     si, ds:0A36430h
0x456E50: sub     eax, edx
0x456E52: cmp     eax, 19h
0x456E55: jnb     short loc_456E90
0x456E57: jmp     short loc_456E60
0x456E59: align 10h
0x456E60: lea     edi, [esp+4+arg_20]
0x456E64: add     edi, 0FFFFFFFFh
0x456E67: mov     al, [edi+1]
0x456E6A: add     edi, 1
0x456E6D: test    al, al
0x456E6F: jnz     short loc_456E67
0x456E71: lea     eax, [esp+4+arg_20]
0x456E75: mov     [edi], si
0x456E78: lea     edx, [eax+1]
0x456E7B: jmp     short loc_456E80
0x456E7D: align 10h
0x456E80: mov     cl, [eax]
0x456E82: add     eax, 1
0x456E85: test    cl, cl
0x456E87: jnz     short loc_456E80
0x456E89: sub     eax, edx
0x456E8B: cmp     eax, 19h
0x456E8E: jb      short loc_456E60
0x456E90: lea     edi, [esp+4+arg_20]
0x456E94: add     edi, 0FFFFFFFFh
0x456E97: mov     al, [edi+1]
0x456E9A: add     edi, 1
0x456E9D: test    al, al
0x456E9F: jnz     short loc_456E97
0x456EA1: lea     eax, [esp+4+arg_20]
0x456EA5: mov     [edi], si
0x456EA8: mov     ecx, eax
0x456EAA: lea     ebx, [ebx+0]
0x456EB0: mov     dl, [eax]
0x456EB2: add     eax, 1
0x456EB5: test    dl, dl
0x456EB7: jnz     short loc_456EB0
0x456EB9: mov     ebx, [esp+4+arg_8]
0x456EBD: mov     edi, ebx
0x456EBF: sub     eax, ecx
0x456EC1: mov     esi, ecx
0x456EC3: add     edi, 0FFFFFFFFh
0x456EC6: mov     cl, [edi+1]
0x456EC9: add     edi, 1
0x456ECC: test    cl, cl
0x456ECE: jnz     short loc_456EC6
0x456ED0: mov     edx, [esp+4+arg_168]
0x456ED7: mov     ecx, eax
0x456ED9: shr     ecx, 2
0x456EDC: rep movsd
0x456EDE: mov     ecx, eax
0x456EE0: and     ecx, 3
0x456EE3: rep movsb
0x456EE5: jmp     short loc_456EEB
0x456EE7: mov     ebx, [esp+arg_C]
0x456EEB: test    edx, 40000h
0x456EF1: jz      loc_458E1A
0x456EF7: cmp     [esp+arg_174], 0
0x456EFF: jz      short loc_456F22
0x456F01: add     ebx, 0FFFFFFFFh
0x456F04: mov     edi, ebx
0x456F06: mov     al, [edi+1]
0x456F09: add     edi, 1
0x456F0C: test    al, al
0x456F0E: jnz     short loc_456F06
0x456F10: mov     ecx, 8
0x456F15: mov     esi, offset aChange_door__0; "CHANGE_DOOR_OPEN_DEFAULT_STATE\r\n"
0x456F1A: rep movsd
0x456F1C: movsb
0x456F1D: jmp     loc_458E1A
0x456F22: test    ebp, ebp
0x456F24: jz      short loc_456F41
0x456F26: mov     eax, [ebp+0]
0x456F29: mov     edx, [eax+4Ch]
0x456F2C: push    40000h
0x456F31: mov     ecx, ebp
0x456F33: call    edx
0x456F35: movzx   ecx, word ptr [esp+4+arg_C]
0x456F3A: movzx   eax, ax
0x456F3D: sub     eax, ecx
0x456F3F: jmp     short loc_456F43
0x456F41: xor     eax, eax
0x456F43: push    eax
0x456F44: lea     edx, [esp+8+arg_20]
0x456F48: push    offset aDoorDefaultSta; "Door Default State(%i)"
0x456F4D: push    edx
0x456F4E: call    __sprintf
0x456F53: lea     eax, [esp+10h+arg_20]
0x456F57: add     esp, 0Ch
0x456F5A: lea     edx, [eax+1]
0x456F5D: lea     ecx, [ecx+0]
0x456F60: mov     cl, [eax]
0x456F62: add     eax, 1
0x456F65: test    cl, cl
0x456F67: jnz     short loc_456F60
0x456F69: mov     si, ds:0A36430h
0x456F70: sub     eax, edx
0x456F72: cmp     eax, 19h
0x456F75: jnb     short loc_456FB0
0x456F77: jmp     short loc_456F80
0x456F79: align 10h
0x456F80: lea     edi, [esp+4+arg_20]
0x456F84: add     edi, 0FFFFFFFFh
0x456F87: mov     al, [edi+1]
0x456F8A: add     edi, 1
0x456F8D: test    al, al
0x456F8F: jnz     short loc_456F87
0x456F91: lea     eax, [esp+4+arg_20]
0x456F95: mov     [edi], si
0x456F98: lea     edx, [eax+1]
0x456F9B: jmp     short loc_456FA0
0x456F9D: align 10h
0x456FA0: mov     cl, [eax]
0x456FA2: add     eax, 1
0x456FA5: test    cl, cl
0x456FA7: jnz     short loc_456FA0
0x456FA9: sub     eax, edx
0x456FAB: cmp     eax, 19h
0x456FAE: jb      short loc_456F80
0x456FB0: lea     edi, [esp+4+arg_20]
0x456FB4: add     edi, 0FFFFFFFFh
0x456FB7: mov     al, [edi+1]
0x456FBA: add     edi, 1
0x456FBD: test    al, al
0x456FBF: jnz     short loc_456FB7
0x456FC1: lea     eax, [esp+4+arg_20]
0x456FC5: mov     [edi], si
0x456FC8: mov     ecx, eax
0x456FCA: lea     ebx, [ebx+0]
0x456FD0: mov     dl, [eax]
0x456FD2: add     eax, 1
0x456FD5: test    dl, dl
0x456FD7: jnz     short loc_456FD0
0x456FD9: sub     eax, ecx
0x456FDB: add     ebx, 0FFFFFFFFh
0x456FDE: mov     esi, ecx
0x456FE0: mov     edi, ebx
0x456FE2: mov     cl, [edi+1]
0x456FE5: add     edi, 1
0x456FE8: test    cl, cl
0x456FEA: jnz     short loc_456FE2
0x456FEC: jmp     loc_458E0C
0x456FF1: test    edx, 20000000h
0x456FF7: jz      loc_457103
0x456FFD: cmp     [esp+arg_174], 0
0x457005: jz      short loc_45702C
0x457007: mov     edi, [esp+arg_C]
0x45700B: add     edi, 0FFFFFFFFh
0x45700E: mov     edi, edi
0x457010: mov     al, [edi+1]
0x457013: add     edi, 1
0x457016: test    al, al
0x457018: jnz     short loc_457010
0x45701A: mov     ecx, 6
0x45701F: mov     esi, offset aChange_actor_e; "CHANGE_ACTOR_EQUIPMENT\r\n"
0x457024: rep movsd
0x457026: movsb
0x457027: jmp     loc_457103
0x45702C: test    ebp, ebp
0x45702E: jz      short loc_45704B
0x457030: mov     eax, [ebp+0]
0x457033: mov     edx, [eax+4Ch]
0x457036: push    20000000h
0x45703B: mov     ecx, ebp
0x45703D: call    edx
0x45703F: movzx   ecx, word ptr [esp+4+arg_C]
0x457044: movzx   eax, ax
0x457047: sub     eax, ecx
0x457049: jmp     short loc_45704D
0x45704B: xor     eax, eax
0x45704D: push    eax
0x45704E: lea     edx, [esp+8+arg_20]
0x457052: push    offset aEquipmentI; "Equipment(%i)"
0x457057: push    edx
0x457058: call    __sprintf
0x45705D: lea     eax, [esp+10h+arg_20]
0x457061: add     esp, 0Ch
0x457064: lea     edx, [eax+1]
0x457067: mov     cl, [eax]
0x457069: add     eax, 1
0x45706C: test    cl, cl
0x45706E: jnz     short loc_457067
0x457070: mov     si, ds:0A36430h
0x457077: sub     eax, edx
0x457079: cmp     eax, 19h
0x45707C: jnb     short loc_4570B0
0x45707E: mov     edi, edi
0x457080: lea     edi, [esp+4+arg_20]
0x457084: add     edi, 0FFFFFFFFh
0x457087: mov     al, [edi+1]
0x45708A: add     edi, 1
0x45708D: test    al, al
0x45708F: jnz     short loc_457087
0x457091: lea     eax, [esp+4+arg_20]
0x457095: mov     [edi], si
0x457098: lea     edx, [eax+1]
0x45709B: jmp     short loc_4570A0
0x45709D: align 10h
0x4570A0: mov     cl, [eax]
0x4570A2: add     eax, 1
0x4570A5: test    cl, cl
0x4570A7: jnz     short loc_4570A0
0x4570A9: sub     eax, edx
0x4570AB: cmp     eax, 19h
0x4570AE: jb      short loc_457080
0x4570B0: lea     edi, [esp+4+arg_20]
0x4570B4: add     edi, 0FFFFFFFFh
0x4570B7: mov     al, [edi+1]
0x4570BA: add     edi, 1
0x4570BD: test    al, al
0x4570BF: jnz     short loc_4570B7
0x4570C1: lea     eax, [esp+4+arg_20]
0x4570C5: mov     [edi], si
0x4570C8: mov     ecx, eax
0x4570CA: lea     ebx, [ebx+0]
0x4570D0: mov     dl, [eax]
0x4570D2: add     eax, 1
0x4570D5: test    dl, dl
0x4570D7: jnz     short loc_4570D0
0x4570D9: mov     edi, [esp+4+arg_8]
0x4570DD: sub     eax, ecx
0x4570DF: mov     esi, ecx
0x4570E1: add     edi, 0FFFFFFFFh
0x4570E4: mov     cl, [edi+1]
0x4570E7: add     edi, 1
0x4570EA: test    cl, cl
0x4570EC: jnz     short loc_4570E4
0x4570EE: mov     edx, [esp+4+arg_168]
0x4570F5: mov     ecx, eax
0x4570F7: shr     ecx, 2
0x4570FA: rep movsd
0x4570FC: mov     ecx, eax
0x4570FE: and     ecx, 3
0x457101: rep movsb
0x457103: test    edx, 400000h
0x457109: jz      loc_457227
0x45710F: cmp     [esp+arg_174], 0
0x457117: jz      short loc_45713F
0x457119: mov     ebx, [esp+arg_C]
0x45711D: mov     edi, ebx
0x45711F: add     edi, 0FFFFFFFFh
0x457122: mov     al, [edi+1]
0x457125: add     edi, 1
0x457128: test    al, al
0x45712A: jnz     short loc_457122
0x45712C: mov     ecx, 7
0x457131: mov     esi, offset aChange_actor_g; "CHANGE_ACTOR_GAME_MODIFIERS\r\n"
0x457136: rep movsd
0x457138: movsw
0x45713A: jmp     loc_45722B
0x45713F: test    ebp, ebp
0x457141: jz      short loc_45715E
0x457143: mov     eax, [ebp+0]
0x457146: mov     edx, [eax+4Ch]
0x457149: push    400000h
0x45714E: mov     ecx, ebp
0x457150: call    edx
0x457152: movzx   ecx, word ptr [esp+4+arg_C]
0x457157: movzx   eax, ax
0x45715A: sub     eax, ecx
0x45715C: jmp     short loc_457160
0x45715E: xor     eax, eax
0x457160: push    eax
0x457161: lea     edx, [esp+8+arg_20]
0x457165: push    offset aGameModifiersI; "Game Modifiers(%i)"
0x45716A: push    edx
0x45716B: call    __sprintf
0x457170: lea     eax, [esp+10h+arg_20]
0x457174: add     esp, 0Ch
0x457177: lea     edx, [eax+1]
0x45717A: lea     ebx, [ebx+0]
0x457180: mov     cl, [eax]
0x457182: add     eax, 1
0x457185: test    cl, cl
0x457187: jnz     short loc_457180
0x457189: mov     si, ds:0A36430h
0x457190: sub     eax, edx
0x457192: cmp     eax, 19h
0x457195: jnb     short loc_4571D0
0x457197: jmp     short loc_4571A0
0x457199: align 10h
0x4571A0: lea     edi, [esp+4+arg_20]
0x4571A4: add     edi, 0FFFFFFFFh
0x4571A7: mov     al, [edi+1]
0x4571AA: add     edi, 1
0x4571AD: test    al, al
0x4571AF: jnz     short loc_4571A7
0x4571B1: lea     eax, [esp+4+arg_20]
0x4571B5: mov     [edi], si
0x4571B8: lea     edx, [eax+1]
0x4571BB: jmp     short loc_4571C0
0x4571BD: align 10h
0x4571C0: mov     cl, [eax]
0x4571C2: add     eax, 1
0x4571C5: test    cl, cl
0x4571C7: jnz     short loc_4571C0
0x4571C9: sub     eax, edx
0x4571CB: cmp     eax, 19h
0x4571CE: jb      short loc_4571A0
0x4571D0: lea     edi, [esp+4+arg_20]
0x4571D4: add     edi, 0FFFFFFFFh
0x4571D7: mov     al, [edi+1]
0x4571DA: add     edi, 1
0x4571DD: test    al, al
0x4571DF: jnz     short loc_4571D7
0x4571E1: lea     eax, [esp+4+arg_20]
0x4571E5: mov     [edi], si
0x4571E8: mov     ecx, eax
0x4571EA: lea     ebx, [ebx+0]
0x4571F0: mov     dl, [eax]
0x4571F2: add     eax, 1
0x4571F5: test    dl, dl
0x4571F7: jnz     short loc_4571F0
0x4571F9: mov     ebx, [esp+4+arg_8]
0x4571FD: mov     edi, ebx
0x4571FF: sub     eax, ecx
0x457201: mov     esi, ecx
0x457203: add     edi, 0FFFFFFFFh
0x457206: mov     cl, [edi+1]
0x457209: add     edi, 1
0x45720C: test    cl, cl
0x45720E: jnz     short loc_457206
0x457210: mov     edx, [esp+4+arg_168]
0x457217: mov     ecx, eax
0x457219: shr     ecx, 2
0x45721C: rep movsd
0x45721E: mov     ecx, eax
0x457220: and     ecx, 3
0x457223: rep movsb
0x457225: jmp     short loc_45722B
0x457227: mov     ebx, [esp+arg_C]
0x45722B: test    edx, 200000h
0x457231: jz      loc_457341
0x457237: cmp     [esp+arg_174], 0
0x45723F: jz      short loc_457261
0x457241: mov     edi, ebx
0x457243: add     edi, 0FFFFFFFFh
0x457246: mov     al, [edi+1]
0x457249: add     edi, 1
0x45724C: test    al, al
0x45724E: jnz     short loc_457246
0x457250: mov     ecx, 8
0x457255: mov     esi, offset aChange_actor_s; "CHANGE_ACTOR_SCRIPT_MODIFIERS\r\n"
0x45725A: rep movsd
0x45725C: jmp     loc_457341
0x457261: test    ebp, ebp
0x457263: jz      short loc_457280
0x457265: mov     eax, [ebp+0]
0x457268: mov     edx, [eax+4Ch]
0x45726B: push    200000h
0x457270: mov     ecx, ebp
0x457272: call    edx
0x457274: movzx   ecx, word ptr [esp+4+arg_C]
0x457279: movzx   eax, ax
0x45727C: sub     eax, ecx
0x45727E: jmp     short loc_457282
0x457280: xor     eax, eax
0x457282: push    eax
0x457283: lea     edx, [esp+8+arg_20]
0x457287: push    offset aScriptModifier; "Script Modifiers(%i)"
0x45728C: push    edx
0x45728D: call    __sprintf
0x457292: lea     eax, [esp+10h+arg_20]
0x457296: add     esp, 0Ch
0x457299: lea     edx, [eax+1]
0x45729C: lea     esp, [esp+0]
0x4572A0: mov     cl, [eax]
0x4572A2: add     eax, 1
0x4572A5: test    cl, cl
0x4572A7: jnz     short loc_4572A0
0x4572A9: mov     si, ds:0A36430h
0x4572B0: sub     eax, edx
0x4572B2: cmp     eax, 19h
0x4572B5: jnb     short loc_4572F0
0x4572B7: jmp     short loc_4572C0
0x4572B9: align 10h
0x4572C0: lea     edi, [esp+4+arg_20]
0x4572C4: add     edi, 0FFFFFFFFh
0x4572C7: mov     al, [edi+1]
0x4572CA: add     edi, 1
0x4572CD: test    al, al
0x4572CF: jnz     short loc_4572C7
0x4572D1: lea     eax, [esp+4+arg_20]
0x4572D5: mov     [edi], si
0x4572D8: lea     edx, [eax+1]
0x4572DB: jmp     short loc_4572E0
0x4572DD: align 10h
0x4572E0: mov     cl, [eax]
0x4572E2: add     eax, 1
0x4572E5: test    cl, cl
0x4572E7: jnz     short loc_4572E0
0x4572E9: sub     eax, edx
0x4572EB: cmp     eax, 19h
0x4572EE: jb      short loc_4572C0
0x4572F0: lea     edi, [esp+4+arg_20]
0x4572F4: add     edi, 0FFFFFFFFh
0x4572F7: mov     al, [edi+1]
0x4572FA: add     edi, 1
0x4572FD: test    al, al
0x4572FF: jnz     short loc_4572F7
0x457301: lea     eax, [esp+4+arg_20]
0x457305: mov     [edi], si
0x457308: mov     ecx, eax
0x45730A: lea     ebx, [ebx+0]
0x457310: mov     dl, [eax]
0x457312: add     eax, 1
0x457315: test    dl, dl
0x457317: jnz     short loc_457310
0x457319: mov     edi, ebx
0x45731B: sub     eax, ecx
0x45731D: mov     esi, ecx
0x45731F: add     edi, 0FFFFFFFFh
0x457322: mov     cl, [edi+1]
0x457325: add     edi, 1
0x457328: test    cl, cl
0x45732A: jnz     short loc_457322
0x45732C: mov     edx, [esp+4+arg_168]
0x457333: mov     ecx, eax
0x457335: shr     ecx, 2
0x457338: rep movsd
0x45733A: mov     ecx, eax
0x45733C: and     ecx, 3
0x45733F: rep movsb
0x457341: test    edx, 100000h
0x457347: jz      loc_457461
0x45734D: cmp     [esp+arg_174], 0
0x457355: jz      short loc_45737E
0x457357: mov     edi, ebx
0x457359: add     edi, 0FFFFFFFFh
0x45735C: lea     esp, [esp+0]
0x457360: mov     al, [edi+1]
0x457363: add     edi, 1
0x457366: test    al, al
0x457368: jnz     short loc_457360
0x45736A: mov     ecx, 7
0x45736F: mov     esi, offset aChange_actor_m; "CHANGE_ACTOR_MAGIC_MODIFIERS\r\n"
0x457374: rep movsd
0x457376: movsw
0x457378: movsb
0x457379: jmp     loc_457461
0x45737E: test    ebp, ebp
0x457380: jz      short loc_45739D
0x457382: mov     eax, [ebp+0]
0x457385: mov     edx, [eax+4Ch]
0x457388: push    100000h
0x45738D: mov     ecx, ebp
0x45738F: call    edx
0x457391: movzx   ecx, word ptr [esp+4+arg_C]
0x457396: movzx   eax, ax
0x457399: sub     eax, ecx
0x45739B: jmp     short loc_45739F
0x45739D: xor     eax, eax
0x45739F: push    eax
0x4573A0: lea     edx, [esp+8+arg_20]
0x4573A4: push    offset aMagicModifiers; "Magic Modifiers(%i)"
0x4573A9: push    edx
0x4573AA: call    __sprintf
0x4573AF: lea     eax, [esp+10h+arg_20]
0x4573B3: add     esp, 0Ch
0x4573B6: lea     edx, [eax+1]
0x4573B9: lea     esp, [esp+0]
0x4573C0: mov     cl, [eax]
0x4573C2: add     eax, 1
0x4573C5: test    cl, cl
0x4573C7: jnz     short loc_4573C0
0x4573C9: mov     si, ds:0A36430h
0x4573D0: sub     eax, edx
0x4573D2: cmp     eax, 19h
0x4573D5: jnb     short loc_457410
0x4573D7: jmp     short loc_4573E0
0x4573D9: align 10h
0x4573E0: lea     edi, [esp+4+arg_20]
0x4573E4: add     edi, 0FFFFFFFFh
0x4573E7: mov     al, [edi+1]
0x4573EA: add     edi, 1
0x4573ED: test    al, al
0x4573EF: jnz     short loc_4573E7
0x4573F1: lea     eax, [esp+4+arg_20]
0x4573F5: mov     [edi], si
0x4573F8: lea     edx, [eax+1]
0x4573FB: jmp     short loc_457400
0x4573FD: align 10h
0x457400: mov     cl, [eax]
0x457402: add     eax, 1
0x457405: test    cl, cl
0x457407: jnz     short loc_457400
0x457409: sub     eax, edx
0x45740B: cmp     eax, 19h
0x45740E: jb      short loc_4573E0
0x457410: lea     edi, [esp+4+arg_20]
0x457414: add     edi, 0FFFFFFFFh
0x457417: mov     al, [edi+1]
0x45741A: add     edi, 1
0x45741D: test    al, al
0x45741F: jnz     short loc_457417
0x457421: lea     eax, [esp+4+arg_20]
0x457425: mov     [edi], si
0x457428: mov     ecx, eax
0x45742A: lea     ebx, [ebx+0]
0x457430: mov     dl, [eax]
0x457432: add     eax, 1
0x457435: test    dl, dl
0x457437: jnz     short loc_457430
0x457439: mov     edi, ebx
0x45743B: sub     eax, ecx
0x45743D: mov     esi, ecx
0x45743F: add     edi, 0FFFFFFFFh
0x457442: mov     cl, [edi+1]
0x457445: add     edi, 1
0x457448: test    cl, cl
0x45744A: jnz     short loc_457442
0x45744C: mov     edx, [esp+4+arg_168]
0x457453: mov     ecx, eax
0x457455: shr     ecx, 2
0x457458: rep movsd
0x45745A: mov     ecx, eax
0x45745C: and     ecx, 3
0x45745F: rep movsb
0x457461: test    edx, 80000h
0x457467: mov     ebx, [esp+arg_1C]
0x45746B: jz      loc_4575A3
0x457471: xor     esi, esi
0x457473: test    ebx, ebx
0x457475: jz      short loc_45749C
0x457477: mov     ecx, [ebx+58h]
0x45747A: test    ecx, ecx
0x45747C: jz      short loc_45749C
0x45747E: mov     eax, [ecx]
0x457480: mov     edx, [eax+174h]
0x457486: call    edx
0x457488: test    eax, eax
0x45748A: jz      short loc_45749C
0x45748C: mov     ecx, [ebx+58h]
0x45748F: mov     eax, [ecx]
0x457491: mov     edx, [eax+174h]
0x457497: call    edx
0x457499: mov     esi, [eax+0Ch]
0x45749C: cmp     [esp+arg_174], 0
0x4574A4: jz      short loc_4574BE
0x4574A6: push    esi
0x4574A7: lea     eax, [esp+4+arg_24]
0x4574AB: push    offset aChange_actor_r; "CHANGE_ACTOR_RUNONCE_PACKAGE %08X\r\n"
0x4574B0: push    eax
0x4574B1: call    __sprintf
0x4574B6: add     esp, 0Ch
0x4574B9: jmp     loc_457564
0x4574BE: test    ebp, ebp
0x4574C0: jz      short loc_4574DD
0x4574C2: mov     edx, [ebp+0]
0x4574C5: mov     eax, [edx+4Ch]
0x4574C8: push    80000h
0x4574CD: mov     ecx, ebp
0x4574CF: call    eax
0x4574D1: movzx   ecx, word ptr [esp+4+arg_C]
0x4574D6: movzx   eax, ax
0x4574D9: sub     eax, ecx
0x4574DB: jmp     short loc_4574DF
0x4574DD: xor     eax, eax
0x4574DF: push    eax
0x4574E0: push    esi
0x4574E1: lea     edx, [esp+0Ch+arg_20]
0x4574E5: push    offset aRunOnce08xI; "Run Once %08X(%i)"
0x4574EA: push    edx
0x4574EB: call    __sprintf
0x4574F0: lea     eax, [esp+14h+arg_20]
0x4574F4: add     esp, 10h
0x4574F7: lea     edx, [eax+1]
0x4574FA: lea     ebx, [ebx+0]
0x457500: mov     cl, [eax]
0x457502: add     eax, 1
0x457505: test    cl, cl
0x457507: jnz     short loc_457500
0x457509: mov     si, ds:0A36430h
0x457510: sub     eax, edx
0x457512: cmp     eax, 19h
0x457515: jnb     short loc_457550
0x457517: jmp     short loc_457520
0x457519: align 10h
0x457520: lea     edi, [esp+4+arg_20]
0x457524: add     edi, 0FFFFFFFFh
0x457527: mov     al, [edi+1]
0x45752A: add     edi, 1
0x45752D: test    al, al
0x45752F: jnz     short loc_457527
0x457531: lea     eax, [esp+4+arg_20]
0x457535: mov     [edi], si
0x457538: lea     edx, [eax+1]
0x45753B: jmp     short loc_457540
0x45753D: align 10h
0x457540: mov     cl, [eax]
0x457542: add     eax, 1
0x457545: test    cl, cl
0x457547: jnz     short loc_457540
0x457549: sub     eax, edx
0x45754B: cmp     eax, 19h
0x45754E: jb      short loc_457520
0x457550: lea     edi, [esp+4+arg_20]
0x457554: add     edi, 0FFFFFFFFh
0x457557: mov     al, [edi+1]
0x45755A: add     edi, 1
0x45755D: test    al, al
0x45755F: jnz     short loc_457557
0x457561: mov     [edi], si
0x457564: lea     eax, [esp+arg_24]
0x457568: mov     ecx, eax
0x45756A: lea     ebx, [ebx+0]
0x457570: mov     dl, [eax]
0x457572: add     eax, 1
0x457575: test    dl, dl
0x457577: jnz     short loc_457570
0x457579: mov     edi, [esp+arg_C]
0x45757D: sub     eax, ecx
0x45757F: mov     esi, ecx
0x457581: add     edi, 0FFFFFFFFh
0x457584: mov     cl, [edi+1]
0x457587: add     edi, 1
0x45758A: test    cl, cl
0x45758C: jnz     short loc_457584
0x45758E: mov     edx, [esp+arg_16C]
0x457595: mov     ecx, eax
0x457597: shr     ecx, 2
0x45759A: rep movsd
0x45759C: mov     ecx, eax
0x45759E: and     ecx, 3
0x4575A1: rep movsb
0x4575A3: test    edx, 40000h
0x4575A9: jz      loc_4576D3
0x4575AF: xor     edi, edi
0x4575B1: test    ebx, ebx
0x4575B3: jz      short loc_4575D1
0x4575B5: lea     esi, [ebx+44h]
0x4575B8: test    esi, esi
0x4575BA: jz      short loc_4575D1
0x4575BC: mov     ecx, esi
0x4575BE: call    sub_41FC70
0x4575C3: test    eax, eax
0x4575C5: jz      short loc_4575D1
0x4575C7: mov     ecx, esi
0x4575C9: call    sub_41FC70
0x4575CE: mov     edi, [eax+0Ch]
0x4575D1: cmp     [esp+arg_174], 0
0x4575D9: jz      short loc_4575F3
0x4575DB: push    edi
0x4575DC: lea     eax, [esp+4+arg_24]
0x4575E0: push    offset aChange_actor_0; "CHANGE_ACTOR_EXTRA_TRESPASS_PACKAGE %08"...
0x4575E5: push    eax
0x4575E6: call    __sprintf
0x4575EB: add     esp, 0Ch
0x4575EE: jmp     loc_457694
0x4575F3: test    ebp, ebp
0x4575F5: jz      short loc_457612
0x4575F7: mov     edx, [ebp+0]
0x4575FA: mov     eax, [edx+4Ch]
0x4575FD: push    40000h
0x457602: mov     ecx, ebp
0x457604: call    eax
0x457606: movzx   ecx, word ptr [esp+4+arg_C]
0x45760B: movzx   eax, ax
0x45760E: sub     eax, ecx
0x457610: jmp     short loc_457614
0x457612: xor     eax, eax
0x457614: push    eax
0x457615: push    edi
0x457616: lea     edx, [esp+0Ch+arg_20]
0x45761A: push    offset aTrespass08xI; "Trespass %08X(%i)"
0x45761F: push    edx
0x457620: call    __sprintf
0x457625: lea     eax, [esp+14h+arg_20]
0x457629: add     esp, 10h
0x45762C: lea     edx, [eax+1]
0x45762F: nop
0x457630: mov     cl, [eax]
0x457632: add     eax, 1
0x457635: test    cl, cl
0x457637: jnz     short loc_457630
0x457639: mov     si, ds:0A36430h
0x457640: sub     eax, edx
0x457642: cmp     eax, 19h
0x457645: jnb     short loc_457680
0x457647: jmp     short loc_457650
0x457649: align 10h
0x457650: lea     edi, [esp+4+arg_20]
0x457654: add     edi, 0FFFFFFFFh
0x457657: mov     al, [edi+1]
0x45765A: add     edi, 1
0x45765D: test    al, al
0x45765F: jnz     short loc_457657
0x457661: lea     eax, [esp+4+arg_20]
0x457665: mov     [edi], si
0x457668: lea     edx, [eax+1]
0x45766B: jmp     short loc_457670
0x45766D: align 10h
0x457670: mov     cl, [eax]
0x457672: add     eax, 1
0x457675: test    cl, cl
0x457677: jnz     short loc_457670
0x457679: sub     eax, edx
0x45767B: cmp     eax, 19h
0x45767E: jb      short loc_457650
0x457680: lea     edi, [esp+4+arg_20]
0x457684: add     edi, 0FFFFFFFFh
0x457687: mov     al, [edi+1]
0x45768A: add     edi, 1
0x45768D: test    al, al
0x45768F: jnz     short loc_457687
0x457691: mov     [edi], si
0x457694: lea     eax, [esp+arg_24]
0x457698: mov     ecx, eax
0x45769A: lea     ebx, [ebx+0]
0x4576A0: mov     dl, [eax]
0x4576A2: add     eax, 1
0x4576A5: test    dl, dl
0x4576A7: jnz     short loc_4576A0
0x4576A9: mov     edi, [esp+arg_C]
0x4576AD: sub     eax, ecx
0x4576AF: mov     esi, ecx
0x4576B1: add     edi, 0FFFFFFFFh
0x4576B4: mov     cl, [edi+1]
0x4576B7: add     edi, 1
0x4576BA: test    cl, cl
0x4576BC: jnz     short loc_4576B4
0x4576BE: mov     edx, [esp+arg_16C]
0x4576C5: mov     ecx, eax
0x4576C7: shr     ecx, 2
0x4576CA: rep movsd
0x4576CC: mov     ecx, eax
0x4576CE: and     ecx, 3
0x4576D1: rep movsb
0x4576D3: test    edx, 20000h
0x4576D9: jz      loc_457853
0x4576DF: xor     edi, edi
0x4576E1: test    ebx, ebx
0x4576E3: jz      short loc_4576F6
0x4576E5: mov     eax, [ebx+58h]
0x4576E8: test    eax, eax
0x4576EA: jz      short loc_4576F6
0x4576EC: mov     eax, [eax+8]
0x4576EF: test    eax, eax
0x4576F1: jz      short loc_4576F6
0x4576F3: mov     edi, [eax+0Ch]
0x4576F6: cmp     [esp+arg_174], 0
0x4576FE: jz      short loc_457718
0x457700: push    edi
0x457701: lea     eax, [esp+4+arg_24]
0x457705: push    offset aChange_actor_i; "CHANGE_ACTOR_INTERRUPT_PACKAGE %08X\r\n"
0x45770A: push    eax
0x45770B: call    __sprintf
0x457710: add     esp, 0Ch
0x457713: jmp     loc_457814
0x457718: test    edx, 10000h
0x45771E: mov     esi, 20000h
0x457723: jz      short loc_45772A
0x457725: mov     esi, 30000h
0x45772A: test    ebx, ebx
0x45772C: mov     ecx, ds:0A394E0h
0x457732: mov     edx, ds:0A394E4h
0x457738: mov     ax, ds:0A394E8h
0x45773E: mov     [esp+arg_58], ecx
0x457742: mov     [esp+arg_5C], edx
0x457746: mov     [esp+arg_60], ax
0x45774B: jz      short loc_457771
0x45774D: mov     ecx, ebx
0x45774F: call    sub_5E4080
0x457754: test    eax, eax
0x457756: jz      short loc_457771
0x457758: mov     ecx, ebx
0x45775A: call    sub_5E4080
0x45775F: lea     edx, [esp+arg_58]
0x457763: mov     cl, [eax]
0x457765: mov     [edx], cl
0x457767: add     eax, 1
0x45776A: add     edx, 1
0x45776D: test    cl, cl
0x45776F: jnz     short loc_457763
0x457771: test    ebp, ebp
0x457773: jz      short loc_45778C
0x457775: mov     edx, [ebp+0]
0x457778: mov     eax, [edx+4Ch]
0x45777B: push    esi
0x45777C: mov     ecx, ebp
0x45777E: call    eax
0x457780: movzx   ecx, word ptr [esp+4+arg_C]
0x457785: movzx   eax, ax
0x457788: sub     eax, ecx
0x45778A: jmp     short loc_45778E
0x45778C: xor     eax, eax
0x45778E: push    eax
0x45778F: push    edi
0x457790: lea     edx, [esp+0Ch+arg_54]
0x457794: push    edx
0x457795: lea     eax, [esp+10h+arg_20]
0x457799: push    offset aS08xI; "%s %08X(%i)"
0x45779E: push    eax
0x45779F: call    __sprintf
0x4577A4: lea     eax, [esp+18h+arg_20]
0x4577A8: add     esp, 14h
0x4577AB: lea     edx, [eax+1]
0x4577AE: mov     edi, edi
0x4577B0: mov     cl, [eax]
0x4577B2: add     eax, 1
0x4577B5: test    cl, cl
0x4577B7: jnz     short loc_4577B0
0x4577B9: mov     si, ds:0A36430h
0x4577C0: sub     eax, edx
0x4577C2: cmp     eax, 19h
0x4577C5: jnb     short loc_457800
0x4577C7: jmp     short loc_4577D0
0x4577C9: align 10h
0x4577D0: lea     edi, [esp+4+arg_20]
0x4577D4: add     edi, 0FFFFFFFFh
0x4577D7: mov     al, [edi+1]
0x4577DA: add     edi, 1
0x4577DD: test    al, al
0x4577DF: jnz     short loc_4577D7
0x4577E1: lea     eax, [esp+4+arg_20]
0x4577E5: mov     [edi], si
0x4577E8: lea     edx, [eax+1]
0x4577EB: jmp     short loc_4577F0
0x4577ED: align 10h
0x4577F0: mov     cl, [eax]
0x4577F2: add     eax, 1
0x4577F5: test    cl, cl
0x4577F7: jnz     short loc_4577F0
0x4577F9: sub     eax, edx
0x4577FB: cmp     eax, 19h
0x4577FE: jb      short loc_4577D0
0x457800: lea     edi, [esp+4+arg_20]
0x457804: add     edi, 0FFFFFFFFh
0x457807: mov     al, [edi+1]
0x45780A: add     edi, 1
0x45780D: test    al, al
0x45780F: jnz     short loc_457807
0x457811: mov     [edi], si
0x457814: lea     eax, [esp+arg_24]
0x457818: mov     ecx, eax
0x45781A: lea     ebx, [ebx+0]
0x457820: mov     dl, [eax]
0x457822: add     eax, 1
0x457825: test    dl, dl
0x457827: jnz     short loc_457820
0x457829: mov     edi, [esp+arg_C]
0x45782D: sub     eax, ecx
0x45782F: mov     esi, ecx
0x457831: add     edi, 0FFFFFFFFh
0x457834: mov     cl, [edi+1]
0x457837: add     edi, 1
0x45783A: test    cl, cl
0x45783C: jnz     short loc_457834
0x45783E: mov     edx, [esp+arg_16C]
0x457845: mov     ecx, eax
0x457847: shr     ecx, 2
0x45784A: rep movsd
0x45784C: mov     ecx, eax
0x45784E: and     ecx, 3
0x457851: rep movsb
0x457853: test    edx, 10000h
0x457859: jz      loc_457963
0x45785F: cmp     [esp+arg_174], 0
0x457867: jz      short loc_45788B
0x457869: mov     edi, [esp+arg_C]
0x45786D: add     edi, 0FFFFFFFFh
0x457870: mov     al, [edi+1]
0x457873: add     edi, 1
0x457876: test    al, al
0x457878: jnz     short loc_457870
0x45787A: mov     ecx, 8
0x45787F: mov     esi, offset aChange_actor_n; "CHANGE_ACTOR_NONSAVED_PACKAGE\r\n"
0x457884: rep movsd
0x457886: jmp     loc_457963
0x45788B: test    ebp, ebp
0x45788D: jz      short loc_4578AA
0x45788F: mov     edx, [ebp+0]
0x457892: mov     eax, [edx+4Ch]
0x457895: push    10000h
0x45789A: mov     ecx, ebp
0x45789C: call    eax
0x45789E: movzx   ecx, word ptr [esp+4+arg_C]
0x4578A3: movzx   eax, ax
0x4578A6: sub     eax, ecx
0x4578A8: jmp     short loc_4578AC
0x4578AA: xor     eax, eax
0x4578AC: push    eax
0x4578AD: lea     edx, [esp+8+arg_20]
0x4578B1: push    offset aNonSavedPackag; "Non-saved Package(%i)"
0x4578B6: push    edx
0x4578B7: call    __sprintf
0x4578BC: lea     eax, [esp+10h+arg_20]
0x4578C0: add     esp, 0Ch
0x4578C3: lea     edx, [eax+1]
0x4578C6: mov     cl, [eax]
0x4578C8: add     eax, 1
0x4578CB: test    cl, cl
0x4578CD: jnz     short loc_4578C6
0x4578CF: mov     si, ds:0A36430h
0x4578D6: sub     eax, edx
0x4578D8: cmp     eax, 19h
0x4578DB: jnb     short loc_457910
0x4578DD: lea     ecx, [ecx+0]
0x4578E0: lea     edi, [esp+4+arg_20]
0x4578E4: add     edi, 0FFFFFFFFh
0x4578E7: mov     al, [edi+1]
0x4578EA: add     edi, 1
0x4578ED: test    al, al
0x4578EF: jnz     short loc_4578E7
0x4578F1: lea     eax, [esp+4+arg_20]
0x4578F5: mov     [edi], si
0x4578F8: lea     edx, [eax+1]
0x4578FB: jmp     short loc_457900
0x4578FD: align 10h
0x457900: mov     cl, [eax]
0x457902: add     eax, 1
0x457905: test    cl, cl
0x457907: jnz     short loc_457900
0x457909: sub     eax, edx
0x45790B: cmp     eax, 19h
0x45790E: jb      short loc_4578E0
0x457910: lea     edi, [esp+4+arg_20]
0x457914: add     edi, 0FFFFFFFFh
0x457917: mov     al, [edi+1]
0x45791A: add     edi, 1
0x45791D: test    al, al
0x45791F: jnz     short loc_457917
0x457921: lea     eax, [esp+4+arg_20]
0x457925: mov     [edi], si
0x457928: mov     ecx, eax
0x45792A: lea     ebx, [ebx+0]
0x457930: mov     dl, [eax]
0x457932: add     eax, 1
0x457935: test    dl, dl
0x457937: jnz     short loc_457930
0x457939: mov     edi, [esp+4+arg_8]
0x45793D: sub     eax, ecx
0x45793F: mov     esi, ecx
0x457941: add     edi, 0FFFFFFFFh
0x457944: mov     cl, [edi+1]
0x457947: add     edi, 1
0x45794A: test    cl, cl
0x45794C: jnz     short loc_457944
0x45794E: mov     edx, [esp+4+arg_168]
0x457955: mov     ecx, eax
0x457957: shr     ecx, 2
0x45795A: rep movsd
0x45795C: mov     ecx, eax
0x45795E: and     ecx, 3
0x457961: rep movsb
0x457963: test    edx, 8000h
0x457969: jz      loc_457A87
0x45796F: cmp     [esp+arg_174], 0
0x457977: jz      short loc_45799E
0x457979: mov     ebx, [esp+arg_C]
0x45797D: mov     edi, ebx
0x45797F: add     edi, 0FFFFFFFFh
0x457982: mov     al, [edi+1]
0x457985: add     edi, 1
0x457988: test    al, al
0x45798A: jnz     short loc_457982
0x45798C: mov     ecx, 9
0x457991: mov     esi, offset aChange_actor_d; "CHANGE_ACTOR_DISPOSITION_MODIFIERS\r\n"
0x457996: rep movsd
0x457998: movsb
0x457999: jmp     loc_457A8B
0x45799E: test    ebp, ebp
0x4579A0: jz      short loc_4579BD
0x4579A2: mov     eax, [ebp+0]
0x4579A5: mov     edx, [eax+4Ch]
0x4579A8: push    8000h
0x4579AD: mov     ecx, ebp
0x4579AF: call    edx
0x4579B1: movzx   ecx, word ptr [esp+4+arg_C]
0x4579B6: movzx   eax, ax
0x4579B9: sub     eax, ecx
0x4579BB: jmp     short loc_4579BF
0x4579BD: xor     eax, eax
0x4579BF: push    eax
0x4579C0: lea     edx, [esp+8+arg_20]
0x4579C4: push    offset aDispModifiersI; "Disp Modifiers(%i)"
0x4579C9: push    edx
0x4579CA: call    __sprintf
0x4579CF: lea     eax, [esp+10h+arg_20]
0x4579D3: add     esp, 0Ch
0x4579D6: lea     edx, [eax+1]
0x4579D9: lea     esp, [esp+0]
0x4579E0: mov     cl, [eax]
0x4579E2: add     eax, 1
0x4579E5: test    cl, cl
0x4579E7: jnz     short loc_4579E0
0x4579E9: mov     si, ds:0A36430h
0x4579F0: sub     eax, edx
0x4579F2: cmp     eax, 19h
0x4579F5: jnb     short loc_457A30
0x4579F7: jmp     short loc_457A00
0x4579F9: align 10h
0x457A00: lea     edi, [esp+4+arg_20]
0x457A04: add     edi, 0FFFFFFFFh
0x457A07: mov     al, [edi+1]
0x457A0A: add     edi, 1
0x457A0D: test    al, al
0x457A0F: jnz     short loc_457A07
0x457A11: lea     eax, [esp+4+arg_20]
0x457A15: mov     [edi], si
0x457A18: lea     edx, [eax+1]
0x457A1B: jmp     short loc_457A20
0x457A1D: align 10h
0x457A20: mov     cl, [eax]
0x457A22: add     eax, 1
0x457A25: test    cl, cl
0x457A27: jnz     short loc_457A20
0x457A29: sub     eax, edx
0x457A2B: cmp     eax, 19h
0x457A2E: jb      short loc_457A00
0x457A30: lea     edi, [esp+4+arg_20]
0x457A34: add     edi, 0FFFFFFFFh
0x457A37: mov     al, [edi+1]
0x457A3A: add     edi, 1
0x457A3D: test    al, al
0x457A3F: jnz     short loc_457A37
0x457A41: lea     eax, [esp+4+arg_20]
0x457A45: mov     [edi], si
0x457A48: mov     ecx, eax
0x457A4A: lea     ebx, [ebx+0]
0x457A50: mov     dl, [eax]
0x457A52: add     eax, 1
0x457A55: test    dl, dl
0x457A57: jnz     short loc_457A50
0x457A59: mov     ebx, [esp+4+arg_8]
0x457A5D: mov     edi, ebx
0x457A5F: sub     eax, ecx
0x457A61: mov     esi, ecx
0x457A63: add     edi, 0FFFFFFFFh
0x457A66: mov     cl, [edi+1]
0x457A69: add     edi, 1
0x457A6C: test    cl, cl
0x457A6E: jnz     short loc_457A66
0x457A70: mov     edx, [esp+4+arg_168]
0x457A77: mov     ecx, eax
0x457A79: shr     ecx, 2
0x457A7C: rep movsd
0x457A7E: mov     ecx, eax
0x457A80: and     ecx, 3
0x457A83: rep movsb
0x457A85: jmp     short loc_457A8B
0x457A87: mov     ebx, [esp+arg_C]
0x457A8B: test    edx, 4000h
0x457A91: jz      loc_457BA1
0x457A97: cmp     [esp+arg_174], 0
0x457A9F: jz      short loc_457AC1
0x457AA1: mov     edi, ebx
0x457AA3: add     edi, 0FFFFFFFFh
0x457AA6: mov     al, [edi+1]
0x457AA9: add     edi, 1
0x457AAC: test    al, al
0x457AAE: jnz     short loc_457AA6
0x457AB0: mov     ecx, 9
0x457AB5: mov     esi, offset aChange_actor_1; "CHANGE_ACTOR_EXTRA_OBLIVION_ENTRY\r\n"
0x457ABA: rep movsd
0x457ABC: jmp     loc_457BA1
0x457AC1: test    ebp, ebp
0x457AC3: jz      short loc_457AE0
0x457AC5: mov     eax, [ebp+0]
0x457AC8: mov     edx, [eax+4Ch]
0x457ACB: push    4000h
0x457AD0: mov     ecx, ebp
0x457AD2: call    edx
0x457AD4: movzx   ecx, word ptr [esp+4+arg_C]
0x457AD9: movzx   eax, ax
0x457ADC: sub     eax, ecx
0x457ADE: jmp     short loc_457AE2
0x457AE0: xor     eax, eax
0x457AE2: push    eax
0x457AE3: lea     edx, [esp+8+arg_20]
0x457AE7: push    offset aOblivionEntryI; "Oblivion Entry(%i)"
0x457AEC: push    edx
0x457AED: call    __sprintf
0x457AF2: lea     eax, [esp+10h+arg_20]
0x457AF6: add     esp, 0Ch
0x457AF9: lea     edx, [eax+1]
0x457AFC: lea     esp, [esp+0]
0x457B00: mov     cl, [eax]
0x457B02: add     eax, 1
0x457B05: test    cl, cl
0x457B07: jnz     short loc_457B00
0x457B09: mov     si, ds:0A36430h
0x457B10: sub     eax, edx
0x457B12: cmp     eax, 19h
0x457B15: jnb     short loc_457B50
0x457B17: jmp     short loc_457B20
0x457B19: align 10h
0x457B20: lea     edi, [esp+4+arg_20]
0x457B24: add     edi, 0FFFFFFFFh
0x457B27: mov     al, [edi+1]
0x457B2A: add     edi, 1
0x457B2D: test    al, al
0x457B2F: jnz     short loc_457B27
0x457B31: lea     eax, [esp+4+arg_20]
0x457B35: mov     [edi], si
0x457B38: lea     edx, [eax+1]
0x457B3B: jmp     short loc_457B40
0x457B3D: align 10h
0x457B40: mov     cl, [eax]
0x457B42: add     eax, 1
0x457B45: test    cl, cl
0x457B47: jnz     short loc_457B40
0x457B49: sub     eax, edx
0x457B4B: cmp     eax, 19h
0x457B4E: jb      short loc_457B20
0x457B50: lea     edi, [esp+4+arg_20]
0x457B54: add     edi, 0FFFFFFFFh
0x457B57: mov     al, [edi+1]
0x457B5A: add     edi, 1
0x457B5D: test    al, al
0x457B5F: jnz     short loc_457B57
0x457B61: lea     eax, [esp+4+arg_20]
0x457B65: mov     [edi], si
0x457B68: mov     ecx, eax
0x457B6A: lea     ebx, [ebx+0]
0x457B70: mov     dl, [eax]
0x457B72: add     eax, 1
0x457B75: test    dl, dl
0x457B77: jnz     short loc_457B70
0x457B79: mov     edi, ebx
0x457B7B: sub     eax, ecx
0x457B7D: mov     esi, ecx
0x457B7F: add     edi, 0FFFFFFFFh
0x457B82: mov     cl, [edi+1]
0x457B85: add     edi, 1
0x457B88: test    cl, cl
0x457B8A: jnz     short loc_457B82
0x457B8C: mov     edx, [esp+4+arg_168]
0x457B93: mov     ecx, eax
0x457B95: shr     ecx, 2
0x457B98: rep movsd
0x457B9A: mov     ecx, eax
0x457B9C: and     ecx, 3
0x457B9F: rep movsb
0x457BA1: test    edx, 2000h
0x457BA7: jz      loc_457CB1
0x457BAD: cmp     [esp+arg_174], 0
0x457BB5: jz      short loc_457BDB
0x457BB7: mov     edi, ebx
0x457BB9: add     edi, 0FFFFFFFFh
0x457BBC: lea     esp, [esp+0]
0x457BC0: mov     al, [edi+1]
0x457BC3: add     edi, 1
0x457BC6: test    al, al
0x457BC8: jnz     short loc_457BC0
0x457BCA: mov     ecx, 9
0x457BCF: mov     esi, offset aChange_actor_2; "CHANGE_ACTOR_EXTRA_INVESTMENTGOLD\r\n"
0x457BD4: rep movsd
0x457BD6: jmp     loc_457CB1
0x457BDB: test    ebp, ebp
0x457BDD: jz      short loc_457BFA
0x457BDF: mov     eax, [ebp+0]
0x457BE2: mov     edx, [eax+4Ch]
0x457BE5: push    2000h
0x457BEA: mov     ecx, ebp
0x457BEC: call    edx
0x457BEE: movzx   ecx, word ptr [esp+4+arg_C]
0x457BF3: movzx   eax, ax
0x457BF6: sub     eax, ecx
0x457BF8: jmp     short loc_457BFC
0x457BFA: xor     eax, eax
0x457BFC: push    eax
0x457BFD: lea     edx, [esp+8+arg_20]
0x457C01: push    offset aInvestmentGold; "Investment Gold(%i)"
0x457C06: push    edx
0x457C07: call    __sprintf
0x457C0C: lea     eax, [esp+10h+arg_20]
0x457C10: add     esp, 0Ch
0x457C13: lea     edx, [eax+1]
0x457C16: mov     cl, [eax]
0x457C18: add     eax, 1
0x457C1B: test    cl, cl
0x457C1D: jnz     short loc_457C16
0x457C1F: mov     si, ds:0A36430h
0x457C26: sub     eax, edx
0x457C28: cmp     eax, 19h
0x457C2B: jnb     short loc_457C60
0x457C2D: lea     ecx, [ecx+0]
0x457C30: lea     edi, [esp+4+arg_20]
0x457C34: add     edi, 0FFFFFFFFh
0x457C37: mov     al, [edi+1]
0x457C3A: add     edi, 1
0x457C3D: test    al, al
0x457C3F: jnz     short loc_457C37
0x457C41: lea     eax, [esp+4+arg_20]
0x457C45: mov     [edi], si
0x457C48: lea     edx, [eax+1]
0x457C4B: jmp     short loc_457C50
0x457C4D: align 10h
0x457C50: mov     cl, [eax]
0x457C52: add     eax, 1
0x457C55: test    cl, cl
0x457C57: jnz     short loc_457C50
0x457C59: sub     eax, edx
0x457C5B: cmp     eax, 19h
0x457C5E: jb      short loc_457C30
0x457C60: lea     edi, [esp+4+arg_20]
0x457C64: add     edi, 0FFFFFFFFh
0x457C67: mov     al, [edi+1]
0x457C6A: add     edi, 1
0x457C6D: test    al, al
0x457C6F: jnz     short loc_457C67
0x457C71: lea     eax, [esp+4+arg_20]
0x457C75: mov     [edi], si
0x457C78: mov     ecx, eax
0x457C7A: lea     ebx, [ebx+0]
0x457C80: mov     dl, [eax]
0x457C82: add     eax, 1
0x457C85: test    dl, dl
0x457C87: jnz     short loc_457C80
0x457C89: mov     edi, ebx
0x457C8B: sub     eax, ecx
0x457C8D: mov     esi, ecx
0x457C8F: add     edi, 0FFFFFFFFh
0x457C92: mov     cl, [edi+1]
0x457C95: add     edi, 1
0x457C98: test    cl, cl
0x457C9A: jnz     short loc_457C92
0x457C9C: mov     edx, [esp+4+arg_168]
0x457CA3: mov     ecx, eax
0x457CA5: shr     ecx, 2
0x457CA8: rep movsd
0x457CAA: mov     ecx, eax
0x457CAC: and     ecx, 3
0x457CAF: rep movsb
0x457CB1: test    dl, 40h
0x457CB4: jz      loc_457DD1
0x457CBA: cmp     [esp+arg_174], 0
0x457CC2: jz      short loc_457CEC
0x457CC4: mov     edi, ebx
0x457CC6: add     edi, 0FFFFFFFFh
0x457CC9: lea     esp, [esp+0]
0x457CD0: mov     al, [edi+1]
0x457CD3: add     edi, 1
0x457CD6: test    al, al
0x457CD8: jnz     short loc_457CD0
0x457CDA: mov     ecx, 6
0x457CDF: mov     esi, offset aChange_actor_l; "CHANGE_ACTOR_LIFESTATE\r\n"
0x457CE4: rep movsd
0x457CE6: movsb
0x457CE7: jmp     loc_457DD1
0x457CEC: test    ebp, ebp
0x457CEE: jz      short loc_457D17
0x457CF0: mov     eax, [ebp+0]
0x457CF3: mov     edi, [esp+arg_20]
0x457CF7: mov     edx, [eax+4Ch]
0x457CFA: push    edi
0x457CFB: mov     ecx, ebp
0x457CFD: call    edx
0x457CFF: movzx   esi, ax
0x457D02: mov     eax, [ebp+0]
0x457D05: mov     edx, [eax+4Ch]
0x457D08: add     edi, 40h ; '@'
0x457D0B: push    edi
0x457D0C: mov     ecx, ebp
0x457D0E: call    edx
0x457D10: movzx   eax, ax
0x457D13: sub     eax, esi
0x457D15: jmp     short loc_457D19
0x457D17: xor     eax, eax
0x457D19: push    eax
0x457D1A: lea     eax, [esp+0Ch+arg_1C]
0x457D1E: push    offset aLifeStateI; "Life State(%i)"
0x457D23: push    eax
0x457D24: call    __sprintf
0x457D29: lea     eax, [esp+14h+arg_1C]
0x457D2D: add     esp, 0Ch
0x457D30: lea     edx, [eax+1]
0x457D33: mov     cl, [eax]
0x457D35: add     eax, 1
0x457D38: test    cl, cl
0x457D3A: jnz     short loc_457D33
0x457D3C: mov     si, ds:0A36430h
0x457D43: sub     eax, edx
0x457D45: cmp     eax, 19h
0x457D48: jnb     short loc_457D80
0x457D4A: lea     ebx, [ebx+0]
0x457D50: lea     edi, [esp+8+arg_1C]
0x457D54: add     edi, 0FFFFFFFFh
0x457D57: mov     al, [edi+1]
0x457D5A: add     edi, 1
0x457D5D: test    al, al
0x457D5F: jnz     short loc_457D57
0x457D61: lea     eax, [esp+8+arg_1C]
0x457D65: mov     [edi], si
0x457D68: lea     edx, [eax+1]
0x457D6B: jmp     short loc_457D70
0x457D6D: align 10h
0x457D70: mov     cl, [eax]
0x457D72: add     eax, 1
0x457D75: test    cl, cl
0x457D77: jnz     short loc_457D70
0x457D79: sub     eax, edx
0x457D7B: cmp     eax, 19h
0x457D7E: jb      short loc_457D50
0x457D80: lea     edi, [esp+8+arg_1C]
0x457D84: add     edi, 0FFFFFFFFh
0x457D87: mov     al, [edi+1]
0x457D8A: add     edi, 1
0x457D8D: test    al, al
0x457D8F: jnz     short loc_457D87
0x457D91: lea     eax, [esp+8+arg_1C]
0x457D95: mov     [edi], si
0x457D98: mov     ecx, eax
0x457D9A: lea     ebx, [ebx+0]
0x457DA0: mov     dl, [eax]
0x457DA2: add     eax, 1
0x457DA5: test    dl, dl
0x457DA7: jnz     short loc_457DA0
0x457DA9: mov     edi, ebx
0x457DAB: sub     eax, ecx
0x457DAD: mov     esi, ecx
0x457DAF: add     edi, 0FFFFFFFFh
0x457DB2: mov     cl, [edi+1]
0x457DB5: add     edi, 1
0x457DB8: test    cl, cl
0x457DBA: jnz     short loc_457DB2
0x457DBC: mov     edx, [esp+8+arg_164]
0x457DC3: mov     ecx, eax
0x457DC5: shr     ecx, 2
0x457DC8: rep movsd
0x457DCA: mov     ecx, eax
0x457DCC: and     ecx, 3
0x457DCF: rep movsb
0x457DD1: test    edx, 1000h
0x457DD7: jz      loc_457EE1
0x457DDD: cmp     [esp+arg_174], 0
0x457DE5: jz      short loc_457E0B
0x457DE7: mov     edi, ebx
0x457DE9: add     edi, 0FFFFFFFFh
0x457DEC: lea     esp, [esp+0]
0x457DF0: mov     al, [edi+1]
0x457DF3: add     edi, 1
0x457DF6: test    al, al
0x457DF8: jnz     short loc_457DF0
0x457DFA: mov     ecx, 8
0x457DFF: mov     esi, offset aChange_actor_3; "CHANGE_ACTOR_EXTRA_PERSUASION\r\n"
0x457E04: rep movsd
0x457E06: jmp     loc_457EE1
0x457E0B: test    ebp, ebp
0x457E0D: jz      short loc_457E2A
0x457E0F: mov     edx, [ebp+0]
0x457E12: mov     eax, [edx+4Ch]
0x457E15: push    1000h
0x457E1A: mov     ecx, ebp
0x457E1C: call    eax
0x457E1E: movzx   ecx, word ptr [esp+4+arg_C]
0x457E23: movzx   eax, ax
0x457E26: sub     eax, ecx
0x457E28: jmp     short loc_457E2C
0x457E2A: xor     eax, eax
0x457E2C: push    eax
0x457E2D: lea     edx, [esp+8+arg_20]
0x457E31: push    offset aPersuasionI; "Persuasion(%i)"
0x457E36: push    edx
0x457E37: call    __sprintf
0x457E3C: lea     eax, [esp+10h+arg_20]
0x457E40: add     esp, 0Ch
0x457E43: lea     edx, [eax+1]
0x457E46: mov     cl, [eax]
0x457E48: add     eax, 1
0x457E4B: test    cl, cl
0x457E4D: jnz     short loc_457E46
0x457E4F: mov     si, ds:0A36430h
0x457E56: sub     eax, edx
0x457E58: cmp     eax, 19h
0x457E5B: jnb     short loc_457E90
0x457E5D: lea     ecx, [ecx+0]
0x457E60: lea     edi, [esp+4+arg_20]
0x457E64: add     edi, 0FFFFFFFFh
0x457E67: mov     al, [edi+1]
0x457E6A: add     edi, 1
0x457E6D: test    al, al
0x457E6F: jnz     short loc_457E67
0x457E71: lea     eax, [esp+4+arg_20]
0x457E75: mov     [edi], si
0x457E78: lea     edx, [eax+1]
0x457E7B: jmp     short loc_457E80
0x457E7D: align 10h
0x457E80: mov     cl, [eax]
0x457E82: add     eax, 1
0x457E85: test    cl, cl
0x457E87: jnz     short loc_457E80
0x457E89: sub     eax, edx
0x457E8B: cmp     eax, 19h
0x457E8E: jb      short loc_457E60
0x457E90: lea     edi, [esp+4+arg_20]
0x457E94: add     edi, 0FFFFFFFFh
0x457E97: mov     al, [edi+1]
0x457E9A: add     edi, 1
0x457E9D: test    al, al
0x457E9F: jnz     short loc_457E97
0x457EA1: lea     eax, [esp+4+arg_20]
0x457EA5: mov     [edi], si
0x457EA8: mov     ecx, eax
0x457EAA: lea     ebx, [ebx+0]
0x457EB0: mov     dl, [eax]
0x457EB2: add     eax, 1
0x457EB5: test    dl, dl
0x457EB7: jnz     short loc_457EB0
0x457EB9: mov     edi, ebx
0x457EBB: sub     eax, ecx
0x457EBD: mov     esi, ecx
0x457EBF: add     edi, 0FFFFFFFFh
0x457EC2: mov     cl, [edi+1]
0x457EC5: add     edi, 1
0x457EC8: test    cl, cl
0x457ECA: jnz     short loc_457EC2
0x457ECC: mov     edx, [esp+4+arg_168]
0x457ED3: mov     ecx, eax
0x457ED5: shr     ecx, 2
0x457ED8: rep movsd
0x457EDA: mov     ecx, eax
0x457EDC: and     ecx, 3
0x457EDF: rep movsb
0x457EE1: cmp     [esp+arg_170], 32h ; '2'
0x457EE9: jnz     loc_458E1A
0x457EEF: test    dl, dl
0x457EF1: jns     loc_458E1A
0x457EF7: cmp     [esp+arg_174], 0
0x457EFF: jz      short loc_457F24
0x457F01: add     ebx, 0FFFFFFFFh
0x457F04: mov     edi, ebx
0x457F06: mov     al, [edi+1]
0x457F09: add     edi, 1
0x457F0C: test    al, al
0x457F0E: jnz     short loc_457F06
0x457F10: mov     ecx, 8
0x457F15: mov     esi, offset aChange_charact; "CHANGE_CHARACTER_EXTRA_CRIMEGOLD\r\n"
0x457F1A: rep movsd
0x457F1C: movsw
0x457F1E: movsb
0x457F1F: jmp     loc_458E1A
0x457F24: test    ebp, ebp
0x457F26: jz      short loc_457F43
0x457F28: mov     eax, [ebp+0]
0x457F2B: mov     edx, [eax+4Ch]
0x457F2E: push    80h ; '€'
0x457F33: mov     ecx, ebp
0x457F35: call    edx
0x457F37: movzx   ecx, word ptr [esp+4+arg_C]
0x457F3C: movzx   eax, ax
0x457F3F: sub     eax, ecx
0x457F41: jmp     short loc_457F45
0x457F43: xor     eax, eax
0x457F45: push    eax
0x457F46: lea     edx, [esp+8+arg_20]
0x457F4A: push    offset aCrimeGoldI; "Crime Gold(%i)"
0x457F4F: push    edx
0x457F50: call    __sprintf
0x457F55: lea     eax, [esp+10h+arg_20]
0x457F59: add     esp, 0Ch
0x457F5C: lea     edx, [eax+1]
0x457F5F: nop
0x457F60: mov     cl, [eax]
0x457F62: add     eax, 1
0x457F65: test    cl, cl
0x457F67: jnz     short loc_457F60
0x457F69: mov     si, ds:0A36430h
0x457F70: sub     eax, edx
0x457F72: cmp     eax, 19h
0x457F75: jnb     short loc_457FB0
0x457F77: jmp     short loc_457F80
0x457F79: align 10h
0x457F80: lea     edi, [esp+4+arg_20]
0x457F84: add     edi, 0FFFFFFFFh
0x457F87: mov     al, [edi+1]
0x457F8A: add     edi, 1
0x457F8D: test    al, al
0x457F8F: jnz     short loc_457F87
0x457F91: lea     eax, [esp+4+arg_20]
0x457F95: mov     [edi], si
0x457F98: lea     edx, [eax+1]
0x457F9B: jmp     short loc_457FA0
0x457F9D: align 10h
0x457FA0: mov     cl, [eax]
0x457FA2: add     eax, 1
0x457FA5: test    cl, cl
0x457FA7: jnz     short loc_457FA0
0x457FA9: sub     eax, edx
0x457FAB: cmp     eax, 19h
0x457FAE: jb      short loc_457F80
0x457FB0: lea     edi, [esp+4+arg_20]
0x457FB4: add     edi, 0FFFFFFFFh
0x457FB7: mov     al, [edi+1]
0x457FBA: add     edi, 1
0x457FBD: test    al, al
0x457FBF: jnz     short loc_457FB7
0x457FC1: lea     eax, [esp+4+arg_20]
0x457FC5: mov     [edi], si
0x457FC8: mov     ecx, eax
0x457FCA: lea     ebx, [ebx+0]
0x457FD0: mov     dl, [eax]
0x457FD2: add     eax, 1
0x457FD5: test    dl, dl
0x457FD7: jnz     short loc_457FD0
0x457FD9: sub     eax, ecx
0x457FDB: add     ebx, 0FFFFFFFFh
0x457FDE: mov     esi, ecx
0x457FE0: mov     edi, ebx
0x457FE2: mov     cl, [edi+1]
0x457FE5: add     edi, 1
0x457FE8: test    cl, cl
0x457FEA: jnz     short loc_457FE2
0x457FEC: jmp     loc_458E0C
0x457FF1: test    dl, 4
0x457FF4: jz      loc_458103
0x457FFA: cmp     [esp+arg_174], 0
0x458002: jz      short loc_45802E
0x458004: mov     edi, [esp+arg_C]
0x458008: add     edi, 0FFFFFFFFh
0x45800B: jmp     short loc_458010
0x45800D: align 10h
0x458010: mov     al, [edi+1]
0x458013: add     edi, 1
0x458016: test    al, al
0x458018: jnz     short loc_458010
0x45801A: mov     ecx, 6
0x45801F: mov     esi, offset aChange_actor_b; "CHANGE_ACTOR_BASE_HEALTH\r\n"
0x458024: rep movsd
0x458026: movsw
0x458028: movsb
0x458029: jmp     loc_458103
0x45802E: test    ebp, ebp
0x458030: jz      short loc_45804A
0x458032: mov     eax, [ebp+0]
0x458035: mov     edx, [eax+4Ch]
0x458038: push    4
0x45803A: mov     ecx, ebp
0x45803C: call    edx
0x45803E: movzx   ecx, word ptr [esp+4+arg_C]
0x458043: movzx   eax, ax
0x458046: sub     eax, ecx
0x458048: jmp     short loc_45804C
0x45804A: xor     eax, eax
0x45804C: push    eax
0x45804D: lea     edx, [esp+8+arg_20]
0x458051: push    offset aBaseHealthI; "Base Health(%i)"
0x458056: push    edx
0x458057: call    __sprintf
0x45805C: lea     eax, [esp+10h+arg_20]
0x458060: add     esp, 0Ch
0x458063: lea     edx, [eax+1]
0x458066: mov     cl, [eax]
0x458068: add     eax, 1
0x45806B: test    cl, cl
0x45806D: jnz     short loc_458066
0x45806F: mov     si, ds:0A36430h
0x458076: sub     eax, edx
0x458078: cmp     eax, 19h
0x45807B: jnb     short loc_4580B0
0x45807D: lea     ecx, [ecx+0]
0x458080: lea     edi, [esp+4+arg_20]
0x458084: add     edi, 0FFFFFFFFh
0x458087: mov     al, [edi+1]
0x45808A: add     edi, 1
0x45808D: test    al, al
0x45808F: jnz     short loc_458087
0x458091: lea     eax, [esp+4+arg_20]
0x458095: mov     [edi], si
0x458098: lea     edx, [eax+1]
0x45809B: jmp     short loc_4580A0
0x45809D: align 10h
0x4580A0: mov     cl, [eax]
0x4580A2: add     eax, 1
0x4580A5: test    cl, cl
0x4580A7: jnz     short loc_4580A0
0x4580A9: sub     eax, edx
0x4580AB: cmp     eax, 19h
0x4580AE: jb      short loc_458080
0x4580B0: lea     edi, [esp+4+arg_20]
0x4580B4: add     edi, 0FFFFFFFFh
0x4580B7: mov     al, [edi+1]
0x4580BA: add     edi, 1
0x4580BD: test    al, al
0x4580BF: jnz     short loc_4580B7
0x4580C1: lea     eax, [esp+4+arg_20]
0x4580C5: mov     [edi], si
0x4580C8: mov     ecx, eax
0x4580CA: lea     ebx, [ebx+0]
0x4580D0: mov     dl, [eax]
0x4580D2: add     eax, 1
0x4580D5: test    dl, dl
0x4580D7: jnz     short loc_4580D0
0x4580D9: mov     edi, [esp+4+arg_8]
0x4580DD: sub     eax, ecx
0x4580DF: mov     esi, ecx
0x4580E1: add     edi, 0FFFFFFFFh
0x4580E4: mov     cl, [edi+1]
0x4580E7: add     edi, 1
0x4580EA: test    cl, cl
0x4580EC: jnz     short loc_4580E4
0x4580EE: mov     edx, [esp+4+arg_168]
0x4580F5: mov     ecx, eax
0x4580F7: shr     ecx, 2
0x4580FA: rep movsd
0x4580FC: mov     ecx, eax
0x4580FE: and     ecx, 3
0x458101: rep movsb
0x458103: test    dl, 8
0x458106: jz      loc_458217
0x45810C: cmp     [esp+arg_174], 0
0x458114: jz      short loc_45813E
0x458116: mov     ebx, [esp+arg_C]
0x45811A: mov     edi, ebx
0x45811C: add     edi, 0FFFFFFFFh
0x45811F: nop
0x458120: mov     al, [edi+1]
0x458123: add     edi, 1
0x458126: test    al, al
0x458128: jnz     short loc_458120
0x45812A: mov     ecx, 7
0x45812F: mov     esi, offset aChange_actor_4; "CHANGE_ACTOR_BASE_ATTRIBUTES\r\n"
0x458134: rep movsd
0x458136: movsw
0x458138: movsb
0x458139: jmp     loc_45821B
0x45813E: test    ebp, ebp
0x458140: jz      short loc_45815A
0x458142: mov     eax, [ebp+0]
0x458145: mov     edx, [eax+4Ch]
0x458148: push    8
0x45814A: mov     ecx, ebp
0x45814C: call    edx
0x45814E: movzx   ecx, word ptr [esp+4+arg_C]
0x458153: movzx   eax, ax
0x458156: sub     eax, ecx
0x458158: jmp     short loc_45815C
0x45815A: xor     eax, eax
0x45815C: push    eax
0x45815D: lea     edx, [esp+8+arg_20]
0x458161: push    offset aBaseAttributes; "Base Attributes(%i)"
0x458166: push    edx
0x458167: call    __sprintf
0x45816C: lea     eax, [esp+10h+arg_20]
0x458170: add     esp, 0Ch
0x458173: lea     edx, [eax+1]
0x458176: mov     cl, [eax]
0x458178: add     eax, 1
0x45817B: test    cl, cl
0x45817D: jnz     short loc_458176
0x45817F: mov     si, ds:0A36430h
0x458186: sub     eax, edx
0x458188: cmp     eax, 19h
0x45818B: jnb     short loc_4581C0
0x45818D: lea     ecx, [ecx+0]
0x458190: lea     edi, [esp+4+arg_20]
0x458194: add     edi, 0FFFFFFFFh
0x458197: mov     al, [edi+1]
0x45819A: add     edi, 1
0x45819D: test    al, al
0x45819F: jnz     short loc_458197
0x4581A1: lea     eax, [esp+4+arg_20]
0x4581A5: mov     [edi], si
0x4581A8: lea     edx, [eax+1]
0x4581AB: jmp     short loc_4581B0
0x4581AD: align 10h
0x4581B0: mov     cl, [eax]
0x4581B2: add     eax, 1
0x4581B5: test    cl, cl
0x4581B7: jnz     short loc_4581B0
0x4581B9: sub     eax, edx
0x4581BB: cmp     eax, 19h
0x4581BE: jb      short loc_458190
0x4581C0: lea     edi, [esp+4+arg_20]
0x4581C4: add     edi, 0FFFFFFFFh
0x4581C7: mov     al, [edi+1]
0x4581CA: add     edi, 1
0x4581CD: test    al, al
0x4581CF: jnz     short loc_4581C7
0x4581D1: lea     eax, [esp+4+arg_20]
0x4581D5: mov     [edi], si
0x4581D8: mov     ecx, eax
0x4581DA: lea     ebx, [ebx+0]
0x4581E0: mov     dl, [eax]
0x4581E2: add     eax, 1
0x4581E5: test    dl, dl
0x4581E7: jnz     short loc_4581E0
0x4581E9: mov     ebx, [esp+4+arg_8]
0x4581ED: mov     edi, ebx
0x4581EF: sub     eax, ecx
0x4581F1: mov     esi, ecx
0x4581F3: add     edi, 0FFFFFFFFh
0x4581F6: mov     cl, [edi+1]
0x4581F9: add     edi, 1
0x4581FC: test    cl, cl
0x4581FE: jnz     short loc_4581F6
0x458200: mov     edx, [esp+4+arg_168]
0x458207: mov     ecx, eax
0x458209: shr     ecx, 2
0x45820C: rep movsd
0x45820E: mov     ecx, eax
0x458210: and     ecx, 3
0x458213: rep movsb
0x458215: jmp     short loc_45821B
0x458217: mov     ebx, [esp+arg_C]
0x45821B: test    dl, 10h
0x45821E: jz      loc_458321
0x458224: cmp     [esp+arg_174], 0
0x45822C: jz      short loc_45824F
0x45822E: mov     edi, ebx
0x458230: add     edi, 0FFFFFFFFh
0x458233: mov     al, [edi+1]
0x458236: add     edi, 1
0x458239: test    al, al
0x45823B: jnz     short loc_458233
0x45823D: mov     ecx, 6
0x458242: mov     esi, offset aChange_actor_5; "CHANGE_ACTOR_BASE_DATA\r\n"
0x458247: rep movsd
0x458249: movsb
0x45824A: jmp     loc_458321
0x45824F: test    ebp, ebp
0x458251: jz      short loc_45826B
0x458253: mov     eax, [ebp+0]
0x458256: mov     edx, [eax+4Ch]
0x458259: push    10h
0x45825B: mov     ecx, ebp
0x45825D: call    edx
0x45825F: movzx   ecx, word ptr [esp+4+arg_C]
0x458264: movzx   eax, ax
0x458267: sub     eax, ecx
0x458269: jmp     short loc_45826D
0x45826B: xor     eax, eax
0x45826D: push    eax
0x45826E: lea     edx, [esp+8+arg_20]
0x458272: push    offset aBaseDataI; "Base Data(%i)"
0x458277: push    edx
0x458278: call    __sprintf
0x45827D: lea     eax, [esp+10h+arg_20]
0x458281: add     esp, 0Ch
0x458284: lea     edx, [eax+1]
0x458287: mov     cl, [eax]
0x458289: add     eax, 1
0x45828C: test    cl, cl
0x45828E: jnz     short loc_458287
0x458290: mov     si, ds:0A36430h
0x458297: sub     eax, edx
0x458299: cmp     eax, 19h
0x45829C: jnb     short loc_4582D0
0x45829E: mov     edi, edi
0x4582A0: lea     edi, [esp+4+arg_20]
0x4582A4: add     edi, 0FFFFFFFFh
0x4582A7: mov     al, [edi+1]
0x4582AA: add     edi, 1
0x4582AD: test    al, al
0x4582AF: jnz     short loc_4582A7
0x4582B1: lea     eax, [esp+4+arg_20]
0x4582B5: mov     [edi], si
0x4582B8: lea     edx, [eax+1]
0x4582BB: jmp     short loc_4582C0
0x4582BD: align 10h
0x4582C0: mov     cl, [eax]
0x4582C2: add     eax, 1
0x4582C5: test    cl, cl
0x4582C7: jnz     short loc_4582C0
0x4582C9: sub     eax, edx
0x4582CB: cmp     eax, 19h
0x4582CE: jb      short loc_4582A0
0x4582D0: lea     edi, [esp+4+arg_20]
0x4582D4: add     edi, 0FFFFFFFFh
0x4582D7: mov     al, [edi+1]
0x4582DA: add     edi, 1
0x4582DD: test    al, al
0x4582DF: jnz     short loc_4582D7
0x4582E1: lea     eax, [esp+4+arg_20]
0x4582E5: mov     [edi], si
0x4582E8: mov     ecx, eax
0x4582EA: lea     ebx, [ebx+0]
0x4582F0: mov     dl, [eax]
0x4582F2: add     eax, 1
0x4582F5: test    dl, dl
0x4582F7: jnz     short loc_4582F0
0x4582F9: mov     edi, ebx
0x4582FB: sub     eax, ecx
0x4582FD: mov     esi, ecx
0x4582FF: add     edi, 0FFFFFFFFh
0x458302: mov     cl, [edi+1]
0x458305: add     edi, 1
0x458308: test    cl, cl
0x45830A: jnz     short loc_458302
0x45830C: mov     edx, [esp+4+arg_168]
0x458313: mov     ecx, eax
0x458315: shr     ecx, 2
0x458318: rep movsd
0x45831A: mov     ecx, eax
0x45831C: and     ecx, 3
0x45831F: rep movsb
0x458321: test    dl, 20h
0x458324: jz      loc_458431
0x45832A: cmp     [esp+arg_174], 0
0x458332: jz      short loc_45835D
0x458334: mov     edi, ebx
0x458336: add     edi, 0FFFFFFFFh
0x458339: lea     esp, [esp+0]
0x458340: mov     al, [edi+1]
0x458343: add     edi, 1
0x458346: test    al, al
0x458348: jnz     short loc_458340
0x45834A: mov     ecx, 7
0x45834F: mov     esi, offset aChange_actor_6; "CHANGE_ACTOR_BASE_SPELLLIST\r\n"
0x458354: rep movsd
0x458356: movsw
0x458358: jmp     loc_458431
0x45835D: test    ebp, ebp
0x45835F: jz      short loc_458379
0x458361: mov     eax, [ebp+0]
0x458364: mov     edx, [eax+4Ch]
0x458367: push    20h ; ' '
0x458369: mov     ecx, ebp
0x45836B: call    edx
0x45836D: movzx   ecx, word ptr [esp+4+arg_C]
0x458372: movzx   eax, ax
0x458375: sub     eax, ecx
0x458377: jmp     short loc_45837B
0x458379: xor     eax, eax
0x45837B: push    eax
0x45837C: lea     edx, [esp+8+arg_20]
0x458380: push    offset aSpellListI; "Spell List(%i)"
0x458385: push    edx
0x458386: call    __sprintf
0x45838B: lea     eax, [esp+10h+arg_20]
0x45838F: add     esp, 0Ch
0x458392: lea     edx, [eax+1]
0x458395: mov     cl, [eax]
0x458397: add     eax, 1
0x45839A: test    cl, cl
0x45839C: jnz     short loc_458395
0x45839E: mov     si, ds:0A36430h
0x4583A5: sub     eax, edx
0x4583A7: cmp     eax, 19h
0x4583AA: jnb     short loc_4583E0
0x4583AC: lea     esp, [esp+0]
0x4583B0: lea     edi, [esp+4+arg_20]
0x4583B4: add     edi, 0FFFFFFFFh
0x4583B7: mov     al, [edi+1]
0x4583BA: add     edi, 1
0x4583BD: test    al, al
0x4583BF: jnz     short loc_4583B7
0x4583C1: lea     eax, [esp+4+arg_20]
0x4583C5: mov     [edi], si
0x4583C8: lea     edx, [eax+1]
0x4583CB: jmp     short loc_4583D0
0x4583CD: align 10h
0x4583D0: mov     cl, [eax]
0x4583D2: add     eax, 1
0x4583D5: test    cl, cl
0x4583D7: jnz     short loc_4583D0
0x4583D9: sub     eax, edx
0x4583DB: cmp     eax, 19h
0x4583DE: jb      short loc_4583B0
0x4583E0: lea     edi, [esp+4+arg_20]
0x4583E4: add     edi, 0FFFFFFFFh
0x4583E7: mov     al, [edi+1]
0x4583EA: add     edi, 1
0x4583ED: test    al, al
0x4583EF: jnz     short loc_4583E7
0x4583F1: lea     eax, [esp+4+arg_20]
0x4583F5: mov     [edi], si
0x4583F8: mov     ecx, eax
0x4583FA: lea     ebx, [ebx+0]
0x458400: mov     dl, [eax]
0x458402: add     eax, 1
0x458405: test    dl, dl
0x458407: jnz     short loc_458400
0x458409: mov     edi, ebx
0x45840B: sub     eax, ecx
0x45840D: mov     esi, ecx
0x45840F: add     edi, 0FFFFFFFFh
0x458412: mov     cl, [edi+1]
0x458415: add     edi, 1
0x458418: test    cl, cl
0x45841A: jnz     short loc_458412
0x45841C: mov     edx, [esp+4+arg_168]
0x458423: mov     ecx, eax
0x458425: shr     ecx, 2
0x458428: rep movsd
0x45842A: mov     ecx, eax
0x45842C: and     ecx, 3
0x45842F: rep movsb
0x458431: test    dl, 40h
0x458434: jz      loc_458541
0x45843A: cmp     [esp+arg_174], 0
0x458442: jz      short loc_45846C
0x458444: mov     edi, ebx
0x458446: add     edi, 0FFFFFFFFh
0x458449: lea     esp, [esp+0]
0x458450: mov     al, [edi+1]
0x458453: add     edi, 1
0x458456: test    al, al
0x458458: jnz     short loc_458450
0x45845A: mov     ecx, 7
0x45845F: mov     esi, offset aChange_actor_7; "CHANGE_ACTOR_BASE_FACTIONS\r\n"
0x458464: rep movsd
0x458466: movsb
0x458467: jmp     loc_458541
0x45846C: test    ebp, ebp
0x45846E: jz      short loc_458488
0x458470: mov     eax, [ebp+0]
0x458473: mov     edx, [eax+4Ch]
0x458476: push    40h ; '@'
0x458478: mov     ecx, ebp
0x45847A: call    edx
0x45847C: movzx   ecx, word ptr [esp+4+arg_C]
0x458481: movzx   eax, ax
0x458484: sub     eax, ecx
0x458486: jmp     short loc_45848A
0x458488: xor     eax, eax
0x45848A: push    eax
0x45848B: lea     edx, [esp+8+arg_20]
0x45848F: push    offset aFactionsI; "Factions(%i)"
0x458494: push    edx
0x458495: call    __sprintf
0x45849A: lea     eax, [esp+10h+arg_20]
0x45849E: add     esp, 0Ch
0x4584A1: lea     edx, [eax+1]
0x4584A4: mov     cl, [eax]
0x4584A6: add     eax, 1
0x4584A9: test    cl, cl
0x4584AB: jnz     short loc_4584A4
0x4584AD: mov     si, ds:0A36430h
0x4584B4: sub     eax, edx
0x4584B6: cmp     eax, 19h
0x4584B9: jnb     short loc_4584F0
0x4584BB: jmp     short loc_4584C0
0x4584BD: align 10h
0x4584C0: lea     edi, [esp+4+arg_20]
0x4584C4: add     edi, 0FFFFFFFFh
0x4584C7: mov     al, [edi+1]
0x4584CA: add     edi, 1
0x4584CD: test    al, al
0x4584CF: jnz     short loc_4584C7
0x4584D1: lea     eax, [esp+4+arg_20]
0x4584D5: mov     [edi], si
0x4584D8: lea     edx, [eax+1]
0x4584DB: jmp     short loc_4584E0
0x4584DD: align 10h
0x4584E0: mov     cl, [eax]
0x4584E2: add     eax, 1
0x4584E5: test    cl, cl
0x4584E7: jnz     short loc_4584E0
0x4584E9: sub     eax, edx
0x4584EB: cmp     eax, 19h
0x4584EE: jb      short loc_4584C0
0x4584F0: lea     edi, [esp+4+arg_20]
0x4584F4: add     edi, 0FFFFFFFFh
0x4584F7: mov     al, [edi+1]
0x4584FA: add     edi, 1
0x4584FD: test    al, al
0x4584FF: jnz     short loc_4584F7
0x458501: lea     eax, [esp+4+arg_20]
0x458505: mov     [edi], si
0x458508: mov     ecx, eax
0x45850A: lea     ebx, [ebx+0]
0x458510: mov     dl, [eax]
0x458512: add     eax, 1
0x458515: test    dl, dl
0x458517: jnz     short loc_458510
0x458519: mov     edi, ebx
0x45851B: sub     eax, ecx
0x45851D: mov     esi, ecx
0x45851F: add     edi, 0FFFFFFFFh
0x458522: mov     cl, [edi+1]
0x458525: add     edi, 1
0x458528: test    cl, cl
0x45852A: jnz     short loc_458522
0x45852C: mov     edx, [esp+4+arg_168]
0x458533: mov     ecx, eax
0x458535: shr     ecx, 2
0x458538: rep movsd
0x45853A: mov     ecx, eax
0x45853C: and     ecx, 3
0x45853F: rep movsb
0x458541: test    edx, 10000000h
0x458547: jz      loc_458651
0x45854D: cmp     [esp+arg_174], 0
0x458555: jz      short loc_45857D
0x458557: mov     edi, ebx
0x458559: add     edi, 0FFFFFFFFh
0x45855C: lea     esp, [esp+0]
0x458560: mov     al, [edi+1]
0x458563: add     edi, 1
0x458566: test    al, al
0x458568: jnz     short loc_458560
0x45856A: mov     ecx, 7
0x45856F: mov     esi, offset aChange_actor_8; "CHANGE_ACTOR_BASE_MODIFIERS\r\n"
0x458574: rep movsd
0x458576: movsw
0x458578: jmp     loc_458651
0x45857D: test    ebp, ebp
0x45857F: jz      short loc_45859C
0x458581: mov     eax, [ebp+0]
0x458584: mov     edx, [eax+4Ch]
0x458587: push    10000000h
0x45858C: mov     ecx, ebp
0x45858E: call    edx
0x458590: movzx   ecx, word ptr [esp+4+arg_C]
0x458595: movzx   eax, ax
0x458598: sub     eax, ecx
0x45859A: jmp     short loc_45859E
0x45859C: xor     eax, eax
0x45859E: push    eax
0x45859F: lea     edx, [esp+8+arg_20]
0x4585A3: push    offset aBaseModifiersI; "Base Modifiers(%i)"
0x4585A8: push    edx
0x4585A9: call    __sprintf
0x4585AE: lea     eax, [esp+10h+arg_20]
0x4585B2: add     esp, 0Ch
0x4585B5: lea     edx, [eax+1]
0x4585B8: mov     cl, [eax]
0x4585BA: add     eax, 1
0x4585BD: test    cl, cl
0x4585BF: jnz     short loc_4585B8
0x4585C1: mov     si, ds:0A36430h
0x4585C8: sub     eax, edx
0x4585CA: cmp     eax, 19h
0x4585CD: jnb     short loc_458600
0x4585CF: nop
0x4585D0: lea     edi, [esp+4+arg_20]
0x4585D4: add     edi, 0FFFFFFFFh
0x4585D7: mov     al, [edi+1]
0x4585DA: add     edi, 1
0x4585DD: test    al, al
0x4585DF: jnz     short loc_4585D7
0x4585E1: lea     eax, [esp+4+arg_20]
0x4585E5: mov     [edi], si
0x4585E8: lea     edx, [eax+1]
0x4585EB: jmp     short loc_4585F0
0x4585ED: align 10h
0x4585F0: mov     cl, [eax]
0x4585F2: add     eax, 1
0x4585F5: test    cl, cl
0x4585F7: jnz     short loc_4585F0
0x4585F9: sub     eax, edx
0x4585FB: cmp     eax, 19h
0x4585FE: jb      short loc_4585D0
0x458600: lea     edi, [esp+4+arg_20]
0x458604: add     edi, 0FFFFFFFFh
0x458607: mov     al, [edi+1]
0x45860A: add     edi, 1
0x45860D: test    al, al
0x45860F: jnz     short loc_458607
0x458611: lea     eax, [esp+4+arg_20]
0x458615: mov     [edi], si
0x458618: mov     ecx, eax
0x45861A: lea     ebx, [ebx+0]
0x458620: mov     dl, [eax]
0x458622: add     eax, 1
0x458625: test    dl, dl
0x458627: jnz     short loc_458620
0x458629: mov     edi, ebx
0x45862B: sub     eax, ecx
0x45862D: mov     esi, ecx
0x45862F: add     edi, 0FFFFFFFFh
0x458632: mov     cl, [edi+1]
0x458635: add     edi, 1
0x458638: test    cl, cl
0x45863A: jnz     short loc_458632
0x45863C: mov     edx, [esp+4+arg_168]
0x458643: mov     ecx, eax
0x458645: shr     ecx, 2
0x458648: rep movsd
0x45864A: mov     ecx, eax
0x45864C: and     ecx, 3
0x45864F: rep movsb
0x458651: test    edx, 100h
0x458657: jz      loc_458771
0x45865D: cmp     [esp+arg_174], 0
0x458665: jz      short loc_45868E
0x458667: mov     edi, ebx
0x458669: add     edi, 0FFFFFFFFh
0x45866C: lea     esp, [esp+0]
0x458670: mov     al, [edi+1]
0x458673: add     edi, 1
0x458676: test    al, al
0x458678: jnz     short loc_458670
0x45867A: mov     ecx, 6
0x45867F: mov     esi, offset aChange_actor_9; "CHANGE_ACTOR_BASE_AIDATA\r\n"
0x458684: rep movsd
0x458686: movsw
0x458688: movsb
0x458689: jmp     loc_458771
0x45868E: test    ebp, ebp
0x458690: jz      short loc_4586AD
0x458692: mov     eax, [ebp+0]
0x458695: mov     edx, [eax+4Ch]
0x458698: push    100h
0x45869D: mov     ecx, ebp
0x45869F: call    edx
0x4586A1: movzx   ecx, word ptr [esp+4+arg_C]
0x4586A6: movzx   eax, ax
0x4586A9: sub     eax, ecx
0x4586AB: jmp     short loc_4586AF
0x4586AD: xor     eax, eax
0x4586AF: push    eax
0x4586B0: lea     edx, [esp+8+arg_20]
0x4586B4: push    offset aAiDataI; "AI Data(%i)"
0x4586B9: push    edx
0x4586BA: call    __sprintf
0x4586BF: lea     eax, [esp+10h+arg_20]
0x4586C3: add     esp, 0Ch
0x4586C6: lea     edx, [eax+1]
0x4586C9: lea     esp, [esp+0]
0x4586D0: mov     cl, [eax]
0x4586D2: add     eax, 1
0x4586D5: test    cl, cl
0x4586D7: jnz     short loc_4586D0
0x4586D9: mov     si, ds:0A36430h
0x4586E0: sub     eax, edx
0x4586E2: cmp     eax, 19h
0x4586E5: jnb     short loc_458720
0x4586E7: jmp     short loc_4586F0
0x4586E9: align 10h
0x4586F0: lea     edi, [esp+4+arg_20]
0x4586F4: add     edi, 0FFFFFFFFh
0x4586F7: mov     al, [edi+1]
0x4586FA: add     edi, 1
0x4586FD: test    al, al
0x4586FF: jnz     short loc_4586F7
0x458701: lea     eax, [esp+4+arg_20]
0x458705: mov     [edi], si
0x458708: lea     edx, [eax+1]
0x45870B: jmp     short loc_458710
0x45870D: align 10h
0x458710: mov     cl, [eax]
0x458712: add     eax, 1
0x458715: test    cl, cl
0x458717: jnz     short loc_458710
0x458719: sub     eax, edx
0x45871B: cmp     eax, 19h
0x45871E: jb      short loc_4586F0
0x458720: lea     edi, [esp+4+arg_20]
0x458724: add     edi, 0FFFFFFFFh
0x458727: mov     al, [edi+1]
0x45872A: add     edi, 1
0x45872D: test    al, al
0x45872F: jnz     short loc_458727
0x458731: lea     eax, [esp+4+arg_20]
0x458735: mov     [edi], si
0x458738: mov     ecx, eax
0x45873A: lea     ebx, [ebx+0]
0x458740: mov     dl, [eax]
0x458742: add     eax, 1
0x458745: test    dl, dl
0x458747: jnz     short loc_458740
0x458749: mov     edi, ebx
0x45874B: sub     eax, ecx
0x45874D: mov     esi, ecx
0x45874F: add     edi, 0FFFFFFFFh
0x458752: mov     cl, [edi+1]
0x458755: add     edi, 1
0x458758: test    cl, cl
0x45875A: jnz     short loc_458752
0x45875C: mov     edx, [esp+4+arg_168]
0x458763: mov     ecx, eax
0x458765: shr     ecx, 2
0x458768: rep movsd
0x45876A: mov     ecx, eax
0x45876C: and     ecx, 3
0x45876F: rep movsb
0x458771: test    dl, dl
0x458773: jns     loc_458881
0x458779: cmp     [esp+arg_174], 0
0x458781: jz      short loc_4587A4
0x458783: mov     edi, ebx
0x458785: add     edi, 0FFFFFFFFh
0x458788: mov     al, [edi+1]
0x45878B: add     edi, 1
0x45878E: test    al, al
0x458790: jnz     short loc_458788
0x458792: mov     ecx, 7
0x458797: mov     esi, offset aChange_acto_10; "CHANGE_ACTOR_BASE_FULLNAME\r\n"
0x45879C: rep movsd
0x45879E: movsb
0x45879F: jmp     loc_458881
0x4587A4: test    ebp, ebp
0x4587A6: jz      short loc_4587C3
0x4587A8: mov     eax, [ebp+0]
0x4587AB: mov     edx, [eax+4Ch]
0x4587AE: push    80h ; '€'
0x4587B3: mov     ecx, ebp
0x4587B5: call    edx
0x4587B7: movzx   ecx, word ptr [esp+4+arg_C]
0x4587BC: movzx   eax, ax
0x4587BF: sub     eax, ecx
0x4587C1: jmp     short loc_4587C5
0x4587C3: xor     eax, eax
0x4587C5: push    eax
0x4587C6: lea     edx, [esp+8+arg_20]
0x4587CA: push    offset aFullNameI; "Full Name(%i)"
0x4587CF: push    edx
0x4587D0: call    __sprintf
0x4587D5: lea     eax, [esp+10h+arg_20]
0x4587D9: add     esp, 0Ch
0x4587DC: lea     edx, [eax+1]
0x4587DF: nop
0x4587E0: mov     cl, [eax]
0x4587E2: add     eax, 1
0x4587E5: test    cl, cl
0x4587E7: jnz     short loc_4587E0
0x4587E9: mov     si, ds:0A36430h
0x4587F0: sub     eax, edx
0x4587F2: cmp     eax, 19h
0x4587F5: jnb     short loc_458830
0x4587F7: jmp     short loc_458800
0x4587F9: align 10h
0x458800: lea     edi, [esp+4+arg_20]
0x458804: add     edi, 0FFFFFFFFh
0x458807: mov     al, [edi+1]
0x45880A: add     edi, 1
0x45880D: test    al, al
0x45880F: jnz     short loc_458807
0x458811: lea     eax, [esp+4+arg_20]
0x458815: mov     [edi], si
0x458818: lea     edx, [eax+1]
0x45881B: jmp     short loc_458820
0x45881D: align 10h
0x458820: mov     cl, [eax]
0x458822: add     eax, 1
0x458825: test    cl, cl
0x458827: jnz     short loc_458820
0x458829: sub     eax, edx
0x45882B: cmp     eax, 19h
0x45882E: jb      short loc_458800
0x458830: lea     edi, [esp+4+arg_20]
0x458834: add     edi, 0FFFFFFFFh
0x458837: mov     al, [edi+1]
0x45883A: add     edi, 1
0x45883D: test    al, al
0x45883F: jnz     short loc_458837
0x458841: lea     eax, [esp+4+arg_20]
0x458845: mov     [edi], si
0x458848: mov     ecx, eax
0x45884A: lea     ebx, [ebx+0]
0x458850: mov     dl, [eax]
0x458852: add     eax, 1
0x458855: test    dl, dl
0x458857: jnz     short loc_458850
0x458859: mov     edi, ebx
0x45885B: sub     eax, ecx
0x45885D: mov     esi, ecx
0x45885F: add     edi, 0FFFFFFFFh
0x458862: mov     cl, [edi+1]
0x458865: add     edi, 1
0x458868: test    cl, cl
0x45886A: jnz     short loc_458862
0x45886C: mov     edx, [esp+4+arg_168]
0x458873: mov     ecx, eax
0x458875: shr     ecx, 2
0x458878: rep movsd
0x45887A: mov     ecx, eax
0x45887C: and     ecx, 3
0x45887F: rep movsb
0x458881: mov     al, [esp+arg_170]
0x458888: cmp     al, 23h ; '#'
0x45888A: jnz     loc_458BF1
0x458890: test    edx, 200h
0x458896: jz      loc_4589C1
0x45889C: cmp     [esp+arg_174], 0
0x4588A4: jz      short loc_4588EB
0x4588A6: mov     eax, ebx
0x4588A8: add     eax, 0FFFFFFFFh
0x4588AB: jmp     short loc_4588B0
0x4588AD: align 10h
0x4588B0: mov     cl, [eax+1]
0x4588B3: add     eax, 1
0x4588B6: test    cl, cl
0x4588B8: jnz     short loc_4588B0
0x4588BA: mov     ecx, ds:0A391E4h
0x4588C0: mov     [eax], ecx
0x4588C2: mov     ecx, ds:0A391E8h
0x4588C8: mov     [eax+4], ecx
0x4588CB: mov     ecx, ds:0A391ECh
0x4588D1: mov     [eax+8], ecx
0x4588D4: mov     ecx, ds:0A391F0h
0x4588DA: mov     [eax+0Ch], ecx
0x4588DD: mov     ecx, ds:0A391F4h
0x4588E3: mov     [eax+10h], ecx
0x4588E6: jmp     loc_4589C1
0x4588EB: test    ebp, ebp
0x4588ED: jz      short loc_45890A
0x4588EF: mov     edx, [ebp+0]
0x4588F2: mov     eax, [edx+4Ch]
0x4588F5: push    200h
0x4588FA: mov     ecx, ebp
0x4588FC: call    eax
0x4588FE: movzx   ecx, word ptr [esp+4+arg_C]
0x458903: movzx   eax, ax
0x458906: sub     eax, ecx
0x458908: jmp     short loc_45890C
0x45890A: xor     eax, eax
0x45890C: push    eax
0x45890D: lea     edx, [esp+8+arg_20]
0x458911: push    offset aSkillsI; "Skills(%i)"
0x458916: push    edx
0x458917: call    __sprintf
0x45891C: lea     eax, [esp+10h+arg_20]
0x458920: add     esp, 0Ch
0x458923: lea     edx, [eax+1]
0x458926: mov     cl, [eax]
0x458928: add     eax, 1
0x45892B: test    cl, cl
0x45892D: jnz     short loc_458926
0x45892F: mov     si, ds:0A36430h
0x458936: sub     eax, edx
0x458938: cmp     eax, 19h
0x45893B: jnb     short loc_458970
0x45893D: lea     ecx, [ecx+0]
0x458940: lea     edi, [esp+4+arg_20]
0x458944: add     edi, 0FFFFFFFFh
0x458947: mov     al, [edi+1]
0x45894A: add     edi, 1
0x45894D: test    al, al
0x45894F: jnz     short loc_458947
0x458951: lea     eax, [esp+4+arg_20]
0x458955: mov     [edi], si
0x458958: lea     edx, [eax+1]
0x45895B: jmp     short loc_458960
0x45895D: align 10h
0x458960: mov     cl, [eax]
0x458962: add     eax, 1
0x458965: test    cl, cl
0x458967: jnz     short loc_458960
0x458969: sub     eax, edx
0x45896B: cmp     eax, 19h
0x45896E: jb      short loc_458940
0x458970: lea     edi, [esp+4+arg_20]
0x458974: add     edi, 0FFFFFFFFh
0x458977: mov     al, [edi+1]
0x45897A: add     edi, 1
0x45897D: test    al, al
0x45897F: jnz     short loc_458977
0x458981: lea     eax, [esp+4+arg_20]
0x458985: mov     [edi], si
0x458988: mov     ecx, eax
0x45898A: lea     ebx, [ebx+0]
0x458990: mov     dl, [eax]
0x458992: add     eax, 1
0x458995: test    dl, dl
0x458997: jnz     short loc_458990
0x458999: mov     edi, ebx
0x45899B: sub     eax, ecx
0x45899D: mov     esi, ecx
0x45899F: add     edi, 0FFFFFFFFh
0x4589A2: mov     cl, [edi+1]
0x4589A5: add     edi, 1
0x4589A8: test    cl, cl
0x4589AA: jnz     short loc_4589A2
0x4589AC: mov     edx, [esp+4+arg_168]
0x4589B3: mov     ecx, eax
0x4589B5: shr     ecx, 2
0x4589B8: rep movsd
0x4589BA: mov     ecx, eax
0x4589BC: and     ecx, 3
0x4589BF: rep movsb
0x4589C1: test    edx, 400h
0x4589C7: jz      loc_458AD1
0x4589CD: cmp     [esp+arg_174], 0
0x4589D5: jz      short loc_4589FC
0x4589D7: mov     edi, ebx
0x4589D9: add     edi, 0FFFFFFFFh
0x4589DC: lea     esp, [esp+0]
0x4589E0: mov     al, [edi+1]
0x4589E3: add     edi, 1
0x4589E6: test    al, al
0x4589E8: jnz     short loc_4589E0
0x4589EA: mov     ecx, 6
0x4589EF: mov     esi, offset aChange_npc_com; "CHANGE_NPC_COMBATSTYLE\r\n"
0x4589F4: rep movsd
0x4589F6: movsb
0x4589F7: jmp     loc_458AD1
0x4589FC: test    ebp, ebp
0x4589FE: jz      short loc_458A1B
0x458A00: mov     eax, [ebp+0]
0x458A03: mov     edx, [eax+4Ch]
0x458A06: push    400h
0x458A0B: mov     ecx, ebp
0x458A0D: call    edx
0x458A0F: movzx   ecx, word ptr [esp+4+arg_C]
0x458A14: movzx   eax, ax
0x458A17: sub     eax, ecx
0x458A19: jmp     short loc_458A1D
0x458A1B: xor     eax, eax
0x458A1D: push    eax
0x458A1E: lea     edx, [esp+8+arg_20]
0x458A22: push    offset aCombatStyleI; "Combat Style(%i)"
0x458A27: push    edx
0x458A28: call    __sprintf
0x458A2D: lea     eax, [esp+10h+arg_20]
0x458A31: add     esp, 0Ch
0x458A34: lea     edx, [eax+1]
0x458A37: mov     cl, [eax]
0x458A39: add     eax, 1
0x458A3C: test    cl, cl
0x458A3E: jnz     short loc_458A37
0x458A40: mov     si, ds:0A36430h
0x458A47: sub     eax, edx
0x458A49: cmp     eax, 19h
0x458A4C: jnb     short loc_458A80
0x458A4E: mov     edi, edi
0x458A50: lea     edi, [esp+4+arg_20]
0x458A54: add     edi, 0FFFFFFFFh
0x458A57: mov     al, [edi+1]
0x458A5A: add     edi, 1
0x458A5D: test    al, al
0x458A5F: jnz     short loc_458A57
0x458A61: lea     eax, [esp+4+arg_20]
0x458A65: mov     [edi], si
0x458A68: lea     edx, [eax+1]
0x458A6B: jmp     short loc_458A70
0x458A6D: align 10h
0x458A70: mov     cl, [eax]
0x458A72: add     eax, 1
0x458A75: test    cl, cl
0x458A77: jnz     short loc_458A70
0x458A79: sub     eax, edx
0x458A7B: cmp     eax, 19h
0x458A7E: jb      short loc_458A50
0x458A80: lea     edi, [esp+4+arg_20]
0x458A84: add     edi, 0FFFFFFFFh
0x458A87: mov     al, [edi+1]
0x458A8A: add     edi, 1
0x458A8D: test    al, al
0x458A8F: jnz     short loc_458A87
0x458A91: lea     eax, [esp+4+arg_20]
0x458A95: mov     [edi], si
0x458A98: mov     ecx, eax
0x458A9A: lea     ebx, [ebx+0]
0x458AA0: mov     dl, [eax]
0x458AA2: add     eax, 1
0x458AA5: test    dl, dl
0x458AA7: jnz     short loc_458AA0
0x458AA9: mov     edi, ebx
0x458AAB: sub     eax, ecx
0x458AAD: mov     esi, ecx
0x458AAF: add     edi, 0FFFFFFFFh
0x458AB2: mov     cl, [edi+1]
0x458AB5: add     edi, 1
0x458AB8: test    cl, cl
0x458ABA: jnz     short loc_458AB2
0x458ABC: mov     edx, [esp+4+arg_168]
0x458AC3: mov     ecx, eax
0x458AC5: shr     ecx, 2
0x458AC8: rep movsd
0x458ACA: mov     ecx, eax
0x458ACC: and     ecx, 3
0x458ACF: rep movsb
0x458AD1: test    edx, 800h
0x458AD7: jz      loc_458E1A
0x458ADD: cmp     [esp+arg_174], 0
0x458AE5: jz      short loc_458B2D
0x458AE7: add     ebx, 0FFFFFFFFh
0x458AEA: mov     eax, ebx
0x458AEC: lea     esp, [esp+0]
0x458AF0: mov     cl, [eax+1]
0x458AF3: add     eax, 1
0x458AF6: test    cl, cl
0x458AF8: jnz     short loc_458AF0
0x458AFA: mov     ecx, ds:0A39194h
0x458B00: mov     [eax], ecx
0x458B02: mov     edx, ds:0A39198h
0x458B08: mov     [eax+4], edx
0x458B0B: mov     ecx, ds:0A3919Ch
0x458B11: mov     [eax+8], ecx
0x458B14: mov     edx, ds:0A391A0h
0x458B1A: mov     [eax+0Ch], edx
0x458B1D: mov     cx, ds:0A391A4h
0x458B24: mov     [eax+10h], cx
0x458B28: jmp     loc_458E1A
0x458B2D: test    ebp, ebp
0x458B2F: jz      short loc_458B4C
0x458B31: mov     edx, [ebp+0]
0x458B34: mov     eax, [edx+4Ch]
0x458B37: push    800h
0x458B3C: mov     ecx, ebp
0x458B3E: call    eax
0x458B40: movzx   ecx, word ptr [esp+4+arg_C]
0x458B45: movzx   eax, ax
0x458B48: sub     eax, ecx
0x458B4A: jmp     short loc_458B4E
0x458B4C: xor     eax, eax
0x458B4E: push    eax
0x458B4F: lea     edx, [esp+8+arg_20]
0x458B53: push    offset aFameI; "Fame(%i)"
0x458B58: push    edx
0x458B59: call    __sprintf
0x458B5E: lea     eax, [esp+10h+arg_20]
0x458B62: add     esp, 0Ch
0x458B65: lea     edx, [eax+1]
0x458B68: mov     cl, [eax]
0x458B6A: add     eax, 1
0x458B6D: test    cl, cl
0x458B6F: jnz     short loc_458B68
0x458B71: mov     si, ds:0A36430h
0x458B78: sub     eax, edx
0x458B7A: cmp     eax, 19h
0x458B7D: jnb     short loc_458BB0
0x458B7F: nop
0x458B80: lea     edi, [esp+4+arg_20]
0x458B84: add     edi, 0FFFFFFFFh
0x458B87: mov     al, [edi+1]
0x458B8A: add     edi, 1
0x458B8D: test    al, al
0x458B8F: jnz     short loc_458B87
0x458B91: lea     eax, [esp+4+arg_20]
0x458B95: mov     [edi], si
0x458B98: lea     edx, [eax+1]
0x458B9B: jmp     short loc_458BA0
0x458B9D: align 10h
0x458BA0: mov     cl, [eax]
0x458BA2: add     eax, 1
0x458BA5: test    cl, cl
0x458BA7: jnz     short loc_458BA0
0x458BA9: sub     eax, edx
0x458BAB: cmp     eax, 19h
0x458BAE: jb      short loc_458B80
0x458BB0: lea     edi, [esp+4+arg_20]
0x458BB4: add     edi, 0FFFFFFFFh
0x458BB7: mov     al, [edi+1]
0x458BBA: add     edi, 1
0x458BBD: test    al, al
0x458BBF: jnz     short loc_458BB7
0x458BC1: lea     eax, [esp+4+arg_20]
0x458BC5: mov     [edi], si
0x458BC8: mov     ecx, eax
0x458BCA: lea     ebx, [ebx+0]
0x458BD0: mov     dl, [eax]
0x458BD2: add     eax, 1
0x458BD5: test    dl, dl
0x458BD7: jnz     short loc_458BD0
0x458BD9: sub     eax, ecx
0x458BDB: add     ebx, 0FFFFFFFFh
0x458BDE: mov     esi, ecx
0x458BE0: mov     edi, ebx
0x458BE2: mov     cl, [edi+1]
0x458BE5: add     edi, 1
0x458BE8: test    cl, cl
0x458BEA: jnz     short loc_458BE2
0x458BEC: jmp     loc_458E0C
0x458BF1: cmp     al, 24h ; '$'
0x458BF3: jnz     loc_458E1A
0x458BF9: test    edx, 200h
0x458BFF: jz      loc_458D11
0x458C05: cmp     [esp+arg_174], 0
0x458C0D: jz      short loc_458C30
0x458C0F: mov     edi, ebx
0x458C11: add     edi, 0FFFFFFFFh
0x458C14: mov     al, [edi+1]
0x458C17: add     edi, 1
0x458C1A: test    al, al
0x458C1C: jnz     short loc_458C14
0x458C1E: mov     ecx, 6
0x458C23: mov     esi, offset aChange_creatur; "CHANGE_CREATURE_SKILLS\r\n"
0x458C28: rep movsd
0x458C2A: movsb
0x458C2B: jmp     loc_458D11
0x458C30: test    ebp, ebp
0x458C32: jz      short loc_458C4F
0x458C34: mov     eax, [ebp+0]
0x458C37: mov     edx, [eax+4Ch]
0x458C3A: push    200h
0x458C3F: mov     ecx, ebp
0x458C41: call    edx
0x458C43: movzx   ecx, word ptr [esp+4+arg_C]
0x458C48: movzx   eax, ax
0x458C4B: sub     eax, ecx
0x458C4D: jmp     short loc_458C51
0x458C4F: xor     eax, eax
0x458C51: push    eax
0x458C52: lea     edx, [esp+8+arg_20]
0x458C56: push    offset aSkillsI; "Skills(%i)"
0x458C5B: push    edx
0x458C5C: call    __sprintf
0x458C61: lea     eax, [esp+10h+arg_20]
0x458C65: add     esp, 0Ch
0x458C68: lea     edx, [eax+1]
0x458C6B: jmp     short loc_458C70
0x458C6D: align 10h
0x458C70: mov     cl, [eax]
0x458C72: add     eax, 1
0x458C75: test    cl, cl
0x458C77: jnz     short loc_458C70
0x458C79: mov     si, ds:0A36430h
0x458C80: sub     eax, edx
0x458C82: cmp     eax, 19h
0x458C85: jnb     short loc_458CC0
0x458C87: jmp     short loc_458C90
0x458C89: align 10h
0x458C90: lea     edi, [esp+4+arg_20]
0x458C94: add     edi, 0FFFFFFFFh
0x458C97: mov     al, [edi+1]
0x458C9A: add     edi, 1
0x458C9D: test    al, al
0x458C9F: jnz     short loc_458C97
0x458CA1: lea     eax, [esp+4+arg_20]
0x458CA5: mov     [edi], si
0x458CA8: lea     edx, [eax+1]
0x458CAB: jmp     short loc_458CB0
0x458CAD: align 10h
0x458CB0: mov     cl, [eax]
0x458CB2: add     eax, 1
0x458CB5: test    cl, cl
0x458CB7: jnz     short loc_458CB0
0x458CB9: sub     eax, edx
0x458CBB: cmp     eax, 19h
0x458CBE: jb      short loc_458C90
0x458CC0: lea     edi, [esp+4+arg_20]
0x458CC4: add     edi, 0FFFFFFFFh
0x458CC7: mov     al, [edi+1]
0x458CCA: add     edi, 1
0x458CCD: test    al, al
0x458CCF: jnz     short loc_458CC7
0x458CD1: lea     eax, [esp+4+arg_20]
0x458CD5: mov     [edi], si
0x458CD8: mov     ecx, eax
0x458CDA: lea     ebx, [ebx+0]
0x458CE0: mov     dl, [eax]
0x458CE2: add     eax, 1
0x458CE5: test    dl, dl
0x458CE7: jnz     short loc_458CE0
0x458CE9: mov     edi, ebx
0x458CEB: sub     eax, ecx
0x458CED: mov     esi, ecx
0x458CEF: add     edi, 0FFFFFFFFh
0x458CF2: mov     cl, [edi+1]
0x458CF5: add     edi, 1
0x458CF8: test    cl, cl
0x458CFA: jnz     short loc_458CF2
0x458CFC: mov     edx, [esp+4+arg_168]
0x458D03: mov     ecx, eax
0x458D05: shr     ecx, 2
0x458D08: rep movsd
0x458D0A: mov     ecx, eax
0x458D0C: and     ecx, 3
0x458D0F: rep movsb
0x458D11: test    edx, 400h
0x458D17: jz      loc_458E1A
0x458D1D: cmp     [esp+arg_174], 0
0x458D25: jz      short loc_458D4D
0x458D27: add     ebx, 0FFFFFFFFh
0x458D2A: mov     edi, ebx
0x458D2C: lea     esp, [esp+0]
0x458D30: mov     al, [edi+1]
0x458D33: add     edi, 1
0x458D36: test    al, al
0x458D38: jnz     short loc_458D30
0x458D3A: mov     ecx, 7
0x458D3F: mov     esi, offset aChange_creat_0; "CHANGE_CREATURE_COMBATSTYLE\r\n"
0x458D44: rep movsd
0x458D46: movsw
0x458D48: jmp     loc_458E1A
0x458D4D: test    ebp, ebp
0x458D4F: jz      short loc_458D6C
0x458D51: mov     eax, [ebp+0]
0x458D54: mov     edx, [eax+4Ch]
0x458D57: push    400h
0x458D5C: mov     ecx, ebp
0x458D5E: call    edx
0x458D60: movzx   ecx, word ptr [esp+4+arg_C]
0x458D65: movzx   eax, ax
0x458D68: sub     eax, ecx
0x458D6A: jmp     short loc_458D6E
0x458D6C: xor     eax, eax
0x458D6E: push    eax
0x458D6F: lea     edx, [esp+8+arg_20]
0x458D73: push    offset aCombatStyleI; "Combat Style(%i)"
0x458D78: push    edx
0x458D79: call    __sprintf
0x458D7E: lea     eax, [esp+10h+arg_20]
0x458D82: add     esp, 0Ch
0x458D85: lea     edx, [eax+1]
0x458D88: mov     cl, [eax]
0x458D8A: add     eax, 1
0x458D8D: test    cl, cl
0x458D8F: jnz     short loc_458D88
0x458D91: mov     si, ds:0A36430h
0x458D98: sub     eax, edx
0x458D9A: cmp     eax, 19h
0x458D9D: jnb     short loc_458DD0
0x458D9F: nop
0x458DA0: lea     edi, [esp+4+arg_20]
0x458DA4: add     edi, 0FFFFFFFFh
0x458DA7: mov     al, [edi+1]
0x458DAA: add     edi, 1
0x458DAD: test    al, al
0x458DAF: jnz     short loc_458DA7
0x458DB1: lea     eax, [esp+4+arg_20]
0x458DB5: mov     [edi], si
0x458DB8: lea     edx, [eax+1]
0x458DBB: jmp     short loc_458DC0
0x458DBD: align 10h
0x458DC0: mov     cl, [eax]
0x458DC2: add     eax, 1
0x458DC5: test    cl, cl
0x458DC7: jnz     short loc_458DC0
0x458DC9: sub     eax, edx
0x458DCB: cmp     eax, 19h
0x458DCE: jb      short loc_458DA0
0x458DD0: lea     edi, [esp+4+arg_20]
0x458DD4: add     edi, 0FFFFFFFFh
0x458DD7: mov     al, [edi+1]
0x458DDA: add     edi, 1
0x458DDD: test    al, al
0x458DDF: jnz     short loc_458DD7
0x458DE1: lea     eax, [esp+4+arg_20]
0x458DE5: mov     [edi], si
0x458DE8: mov     ecx, eax
0x458DEA: lea     ebx, [ebx+0]
0x458DF0: mov     dl, [eax]
0x458DF2: add     eax, 1
0x458DF5: test    dl, dl
0x458DF7: jnz     short loc_458DF0
0x458DF9: sub     eax, ecx
0x458DFB: add     ebx, 0FFFFFFFFh
0x458DFE: mov     esi, ecx
0x458E00: mov     edi, ebx
0x458E02: mov     cl, [edi+1]
0x458E05: add     edi, 1
0x458E08: test    cl, cl
0x458E0A: jnz     short loc_458E02
0x458E0C: mov     ecx, eax
0x458E0E: shr     ecx, 2
0x458E11: rep movsd
0x458E13: mov     ecx, eax
0x458E15: and     ecx, 3
0x458E18: rep movsb
0x458E1A: mov     ecx, [esp+arg_15C]
0x458E21: pop     edi
0x458E22: pop     esi
0x458E23: pop     ebp
0x458E24: pop     ebx
0x458E25: xor     ecx, esp
0x458E27: call    @__security_check_cookie@4; __security_check_cookie(x)
0x458E2C: add     esp, 154h
0x458E32: retn    14h
