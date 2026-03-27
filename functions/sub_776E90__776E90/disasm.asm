0x776E90: sub     esp, 4Ch
0x776E93: push    ebx
0x776E94: push    ebp
0x776E95: mov     ebp, [esp+54h+arg_0]
0x776E99: mov     eax, [ebp+0]
0x776E9C: mov     edx, [eax+50h]
0x776E9F: push    edi
0x776EA0: mov     edi, ecx
0x776EA2: mov     ecx, ebp
0x776EA4: mov     [esp+58h+var_48], edi
0x776EA8: call    edx
0x776EAA: movzx   eax, ax
0x776EAD: xor     ebx, ebx
0x776EAF: cmp     ax, bx
0x776EB2: mov     [esp+58h+var_3C], eax
0x776EB6: jnz     short loc_776EC5
0x776EB8: mov     eax, [esp+58h+arg_C]
0x776EBC: pop     edi
0x776EBD: pop     ebp
0x776EBE: pop     ebx
0x776EBF: add     esp, 4Ch
0x776EC2: retn    14h
0x776EC5: mov     eax, [ebp+1Ch]
0x776EC8: mov     ecx, [ebp+20h]
0x776ECB: mov     [esp+58h+Src], eax
0x776ECF: movzx   eax, byte ptr [ebp+2Ch]
0x776ED3: and     eax, 3Fh
0x776ED6: cmp     eax, 8
0x776ED9: push    esi
0x776EDA: mov     esi, [ebp+24h]
0x776EDD: mov     [esp+5Ch+var_2C], ecx
0x776EE1: mov     [esp+5Ch+var_38], eax
0x776EE5: jbe     short loc_776EEF
0x776EE7: mov     [esp+5Ch+var_38], 8
0x776EEF: lea     edx, [esp+5Ch+var_20]
0x776EF3: push    edx
0x776EF4: lea     eax, [esp+60h+var_24]
0x776EF8: push    eax
0x776EF9: lea     ecx, [esp+64h+var_28]
0x776EFD: push    ecx
0x776EFE: lea     edx, [esp+68h+var_1C]
0x776F02: push    edx
0x776F03: lea     eax, [esp+6Ch+var_30]
0x776F07: push    eax
0x776F08: lea     ecx, [esp+70h+var_44]
0x776F0C: push    ecx
0x776F0D: lea     edx, [esp+74h+var_40]
0x776F11: push    edx
0x776F12: push    ebx
0x776F13: push    ebp
0x776F14: mov     ecx, edi
0x776F16: mov     [esp+80h+var_40], ebx
0x776F1A: mov     [esp+80h+var_44], ebx
0x776F1E: call    sub_776DD0
0x776F23: mov     edi, [ebp+38h]
0x776F26: mov     eax, [esp+5Ch+var_40]
0x776F2A: push    eax
0x776F2B: mov     ecx, edi
0x776F2D: call    sub_7780A0
0x776F32: cmp     [edi+1Ch], ebx
0x776F35: jbe     short loc_776F40
0x776F37: mov     ecx, [edi+20h]
0x776F3A: mov     edx, [esp+5Ch+var_44]
0x776F3E: mov     [ecx], edx
0x776F40: mov     ebx, [esp+5Ch+arg_10]
0x776F44: test    ebx, ebx
0x776F46: mov     [esp+5Ch+var_49], 1
0x776F4B: jz      short loc_776F5F
0x776F4D: mov     eax, [esp+5Ch+arg_C]
0x776F51: mov     [esp+5Ch+var_40], eax
0x776F55: mov     [esp+5Ch+var_49], 0
0x776F5A: jmp     loc_777008
0x776F5F: mov     ebx, [esp+5Ch+arg_C]
0x776F63: test    ebx, ebx
0x776F65: jz      short loc_776FB4
0x776F67: mov     eax, [ebx+8]
0x776F6A: test    eax, eax
0x776F6C: jz      short loc_776FB4
0x776F6E: mov     cx, [ebp+2Eh]
0x776F72: and     cx, 0F000h
0x776F77: cmp     cx, 8000h
0x776F7C: jz      short loc_776FB4
0x776F7E: mov     edx, [eax]
0x776F80: mov     edx, [edx+34h]
0x776F83: lea     ecx, [esp+5Ch+var_18]
0x776F87: push    ecx
0x776F88: push    eax
0x776F89: call    edx
0x776F8B: cmp     dword ptr [esp+5Ch+var_18], 64h ; 'd'
0x776F90: jnz     short loc_776FB4
0x776F92: mov     eax, [esp+5Ch+var_40]
0x776F96: cmp     [esp+5Ch+var_4], eax
0x776F9A: jnz     short loc_776FB4
0x776F9C: movzx   ecx, word ptr [esp+5Ch+var_3C]
0x776FA1: imul    ecx, [esp+5Ch+var_44]
0x776FA6: cmp     [esp+5Ch+var_8], ecx
0x776FAA: jb      short loc_776FB4
0x776FAC: mov     eax, ebx
0x776FAE: mov     [esp+5Ch+var_40], eax
0x776FB2: jmp     short loc_776FED
0x776FB4: mov     ecx, [esp+5Ch+var_48]
0x776FB8: push    0
0x776FBA: push    edi
0x776FBB: call    NiGeometryBufferData__RefreshVBChips
0x776FC0: test    al, al
0x776FC2: jz      loc_7771AA
0x776FC8: cmp     dword ptr [edi+1Ch], 0
0x776FCC: jbe     short loc_776FD9
0x776FCE: mov     edx, [edi+24h]
0x776FD1: mov     eax, [edx]
0x776FD3: mov     [esp+5Ch+var_40], eax
0x776FD7: jmp     short loc_776FE1
0x776FD9: mov     [esp+5Ch+var_40], 0
0x776FE1: mov     eax, [esp+5Ch+var_40]
0x776FE5: mov     [esp+5Ch+arg_8], 0FFFh
0x776FED: mov     ecx, [eax+10h]
0x776FF0: mov     edx, [eax+14h]
0x776FF3: mov     edi, [eax+0Ch]
0x776FF6: mov     eax, [eax+8]
0x776FF9: push    ecx; int
0x776FFA: mov     ecx, [esp+60h+var_48]
0x776FFE: push    edx; Size
0x776FFF: push    edi; int
0x777000: push    eax; int
0x777001: call    sub_776C90
0x777006: mov     ebx, eax
0x777008: mov     ecx, [esp+5Ch+arg_4]
0x77700C: test    ecx, ecx
0x77700E: jz      loc_7771B6
0x777014: cmp     [esp+5Ch+Src], 0
0x777019: jz      short loc_77704A
0x77701B: test    byte ptr [esp+5Ch+arg_8], 1
0x777020: jz      short loc_77704A
0x777022: mov     edx, [esp+5Ch+var_30]
0x777026: add     edx, ebx
0x777028: cmp     [esp+5Ch+var_2C], 0
0x77702D: jz      short loc_777037
0x77702F: mov     eax, [esp+5Ch+var_28]
0x777033: add     eax, ebx
0x777035: jmp     short loc_777039
0x777037: xor     eax, eax
0x777039: mov     edi, [esp+5Ch+var_44]
0x77703D: push    edi
0x77703E: push    0
0x777040: push    0
0x777042: push    eax
0x777043: push    edx
0x777044: push    ebp
0x777045: call    sub_56CD20
0x77704A: mov     edi, [esp+5Ch+var_48]
0x77704E: test    esi, esi
0x777050: jz      loc_777106
0x777056: test    byte ptr [esp+5Ch+arg_8], 4
0x77705B: jz      loc_777106
0x777061: movzx   eax, word ptr [esp+5Ch+var_3C]
0x777066: mov     ecx, [esp+5Ch+var_24]
0x77706A: add     ecx, ebx
0x77706C: test    eax, eax
0x77706E: jbe     loc_777106
0x777074: mov     ebp, eax
0x777076: jmp     short loc_777080
0x777078: align 10h
0x777080: fld     dword ptr [esi+0Ch]
0x777083: fmul    qword ptr ds:0A3DDD8h
0x777089: fstp    [esp+5Ch+var_24]
0x77708D: fld     [esp+5Ch+var_24]
0x777091: fistp   [esp+5Ch+arg_C]
0x777095: fld     dword ptr [esi]
0x777097: mov     eax, [esp+5Ch+arg_C]
0x77709B: fmul    qword ptr ds:0A3DDD8h
0x7770A1: fstp    [esp+5Ch+var_24]
0x7770A5: fld     [esp+5Ch+var_24]
0x7770A9: fistp   [esp+5Ch+arg_10]
0x7770AD: fld     dword ptr [esi+4]
0x7770B0: mov     edx, [esp+5Ch+arg_10]
0x7770B4: fmul    qword ptr ds:0A3DDD8h
0x7770BA: fstp    [esp+5Ch+var_24]
0x7770BE: fld     [esp+5Ch+var_24]
0x7770C2: fistp   [esp+5Ch+arg_4]
0x7770C6: fld     dword ptr [esi+8]
0x7770C9: mov     edi, [esp+5Ch+arg_4]
0x7770CD: fmul    qword ptr ds:0A3DDD8h
0x7770D3: fstp    [esp+5Ch+var_24]
0x7770D7: fld     [esp+5Ch+var_24]
0x7770DB: fistp   [esp+5Ch+var_28]
0x7770DF: shl     eax, 8
0x7770E2: or      eax, edx
0x7770E4: shl     eax, 8
0x7770E7: or      eax, edi
0x7770E9: shl     eax, 8
0x7770EC: or      eax, [esp+5Ch+var_28]
0x7770F0: add     esi, 10h
0x7770F3: mov     [ecx], eax
0x7770F5: add     ecx, [esp+5Ch+var_44]
0x7770F9: sub     ebp, 1
0x7770FC: jnz     short loc_777080
0x7770FE: mov     ebp, [esp+5Ch+arg_0]
0x777102: mov     edi, [esp+5Ch+var_48]
0x777106: test    byte ptr [esp+5Ch+arg_8], 8
0x77710B: jz      short loc_77715A
0x77710D: xor     esi, esi
0x77710F: cmp     [esp+5Ch+var_38], esi
0x777113: jbe     short loc_77715A
0x777115: mov     edx, [esp+5Ch+var_20]
0x777119: movzx   edi, word ptr [esp+5Ch+var_3C]
0x77711E: add     ebx, edx
0x777120: push    esi; a2
0x777121: mov     ecx, ebp; this
0x777123: call    sub_7282F0
0x777128: test    edi, edi
0x77712A: mov     ecx, ebx
0x77712C: jbe     short loc_77714A
0x77712E: mov     edx, edi
0x777130: mov     ebp, [eax]
0x777132: mov     [ecx], ebp
0x777134: mov     ebp, [eax+4]
0x777137: mov     [ecx+4], ebp
0x77713A: add     ecx, [esp+5Ch+var_44]
0x77713E: add     eax, 8
0x777141: sub     edx, 1
0x777144: jnz     short loc_777130
0x777146: mov     ebp, [esp+5Ch+arg_0]
0x77714A: add     esi, 1
0x77714D: add     ebx, 8
0x777150: cmp     esi, [esp+5Ch+var_38]
0x777154: jb      short loc_777120
0x777156: mov     edi, [esp+5Ch+var_48]
0x77715A: cmp     [esp+5Ch+var_49], 0
0x77715F: jz      loc_777223
0x777165: mov     ecx, [edi+4Ch]
0x777168: mov     eax, [esp+5Ch+var_40]
0x77716C: mov     edx, [edi+40h]
0x77716F: mov     esi, [eax+8]
0x777172: mov     eax, [edi+48h]
0x777175: push    ecx; Size
0x777176: push    edx; Src
0x777177: push    eax; Dst
0x777178: call    _memcpy
0x77717D: xor     ecx, ecx
0x77717F: lea     eax, [edi+80h]
0x777185: add     esp, 0Ch
0x777188: mov     [edi+48h], ecx
0x77718B: mov     [edi+4Ch], ecx
0x77718E: add     dword ptr [eax+7Ch], 0FFFFFFFFh
0x777192: jnz     short loc_777197
0x777194: mov     [eax+78h], ecx
0x777197: push    eax; lpCriticalSection
0x777198: call    dword ptr ds:0A28074h
0x77719E: mov     ecx, [esi]
0x7771A0: mov     edx, [ecx+30h]
0x7771A3: push    esi
0x7771A4: call    edx
0x7771A6: test    eax, eax
0x7771A8: jge     short loc_777223
0x7771AA: pop     esi
0x7771AB: pop     edi
0x7771AC: pop     ebp
0x7771AD: xor     eax, eax
0x7771AF: pop     ebx
0x7771B0: add     esp, 4Ch
0x7771B3: retn    14h
0x7771B6: mov     eax, [esp+5Ch+Src]
0x7771BA: test    eax, eax
0x7771BC: jz      short loc_7771E7
0x7771BE: test    byte ptr [esp+5Ch+arg_8], 1
0x7771C3: jz      short loc_7771E7
0x7771C5: movzx   ecx, word ptr [esp+5Ch+var_3C]
0x7771CA: mov     edx, [esp+5Ch+var_44]
0x7771CE: mov     edi, [esp+5Ch+var_48]
0x7771D2: push    ecx; int
0x7771D3: push    0Ch; Size
0x7771D5: push    edx; int
0x7771D6: push    eax; Src
0x7771D7: mov     eax, [esp+6Ch+var_30]
0x7771DB: add     eax, ebx
0x7771DD: push    eax; Dst
0x7771DE: mov     ecx, edi
0x7771E0: call    sub_776D40
0x7771E5: jmp     short loc_7771EB
0x7771E7: mov     edi, [esp+5Ch+var_48]
0x7771EB: mov     eax, [esp+5Ch+var_2C]
0x7771EF: test    eax, eax
0x7771F1: jz      loc_77704E
0x7771F7: test    byte ptr [esp+5Ch+arg_8], 2
0x7771FC: jz      loc_77704E
0x777202: movzx   ecx, word ptr [esp+5Ch+var_3C]
0x777207: mov     edx, [esp+5Ch+var_44]
0x77720B: push    ecx; int
0x77720C: push    0Ch; Size
0x77720E: push    edx; int
0x77720F: push    eax; Src
0x777210: mov     eax, [esp+6Ch+var_28]
0x777214: add     eax, ebx
0x777216: push    eax; Dst
0x777217: mov     ecx, edi
0x777219: call    sub_776D40
0x77721E: jmp     loc_77704E
0x777223: mov     eax, [esp+5Ch+var_40]
0x777227: pop     esi
0x777228: pop     edi
0x777229: pop     ebp
0x77722A: pop     ebx
0x77722B: add     esp, 4Ch
0x77722E: retn    14h
