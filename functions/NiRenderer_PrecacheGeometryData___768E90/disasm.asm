0x768E90: sub     esp, 8
0x768E93: push    ebp
0x768E94: push    edi
0x768E95: mov     edi, [esp+10h+arg_0]
0x768E99: test    edi, edi
0x768E9B: mov     ebp, ecx
0x768E9D: jz      short loc_768EBE
0x768E9F: mov     eax, [edi]
0x768EA1: mov     edx, [eax+4]
0x768EA4: mov     ecx, edi
0x768EA6: call    edx
0x768EA8: test    eax, eax
0x768EAA: jz      short loc_768EBE
0x768EAC: lea     esp, [esp+0]
0x768EB0: cmp     eax, offset dword_B3FD54
0x768EB5: jz      short loc_768EC8
0x768EB7: mov     eax, [eax+4]
0x768EBA: test    eax, eax
0x768EBC: jnz     short loc_768EB0
0x768EBE: pop     edi
0x768EBF: xor     al, al
0x768EC1: pop     ebp
0x768EC2: add     esp, 8
0x768EC5: retn    10h
0x768EC8: push    ebx
0x768EC9: mov     ebx, [edi+0B8h]
0x768ECF: push    esi
0x768ED0: mov     esi, [edi+0B4h]
0x768ED6: push    0
0x768ED8: push    edi
0x768ED9: mov     ecx, ebp
0x768EDB: mov     [esp+20h+var_4], ebx
0x768EDF: call    sub_768890
0x768EE4: test    ebx, ebx
0x768EE6: mov     [esp+18h+var_8], al
0x768EEA: jz      short loc_768F00
0x768EEC: test    al, al
0x768EEE: jnz     short loc_768F00
0x768EF0: mov     ax, [esi+2Eh]
0x768EF4: and     ax, 0FFFh
0x768EF8: or      ax, 8000h
0x768EFC: mov     [esi+2Eh], ax
0x768F00: mov     cx, [esi+2Eh]
0x768F04: and     cx, 0F000h
0x768F09: cmp     cx, 8000h
0x768F0E: jnz     short loc_768F1C
0x768F10: pop     esi
0x768F11: pop     ebx
0x768F12: pop     edi
0x768F13: mov     al, 1
0x768F15: pop     ebp
0x768F16: add     esp, 8
0x768F19: retn    10h
0x768F1C: mov     ecx, ebp; this
0x768F1E: call    sub_763FE0
0x768F23: mov     eax, [esp+18h+arg_C]
0x768F27: test    eax, eax
0x768F29: mov     [esp+18h+arg_0], eax
0x768F2D: jnz     short loc_768F54
0x768F2F: mov     eax, [edi+0BCh]
0x768F35: push    eax
0x768F36: push    offset NiD3DShaderInterfaceString
0x768F3B: call    NiRTTI_Cast
0x768F40: add     esp, 8
0x768F43: test    eax, eax
0x768F45: jz      short loc_768F54
0x768F47: mov     edx, [eax]
0x768F49: mov     ecx, eax
0x768F4B: mov     eax, [edx+50h]
0x768F4E: call    eax
0x768F50: mov     [esp+18h+arg_0], eax
0x768F54: mov     ecx, [esp+18h+arg_8]
0x768F58: mov     edx, [esp+18h+arg_4]
0x768F5C: mov     eax, dword ptr [esp+18h+var_8]
0x768F60: push    ecx; int
0x768F61: mov     ecx, [ebp+8A4h]
0x768F67: push    edx; int
0x768F68: push    eax; char
0x768F69: push    ebx; NiSkinInstance *
0x768F6A: push    esi; NiGeometryData *
0x768F6B: push    ecx; NiGeometryGroup *
0x768F6C: mov     ecx, [ebp+8A0h]
0x768F72: call    NiGeometryGroup__AddGeometryDataToGroup
0x768F77: xor     bl, bl
0x768F79: cmp     [esp+18h+var_8], bl
0x768F7D: jz      short loc_768FB1
0x768F7F: mov     edx, [esp+18h+arg_8]
0x768F83: mov     eax, [esp+18h+arg_4]
0x768F87: mov     ecx, [esp+18h+arg_0]
0x768F8B: push    edx
0x768F8C: mov     edx, [esp+1Ch+var_4]
0x768F90: push    eax
0x768F91: push    ecx
0x768F92: push    edx
0x768F93: push    esi
0x768F94: push    edi
0x768F95: mov     ecx, ebp
0x768F97: call    sub_768580
0x768F9C: mov     ecx, ebp
0x768F9E: mov     bl, al
0x768FA0: call    sub_764040
0x768FA5: pop     esi
0x768FA6: mov     al, bl
0x768FA8: pop     ebx
0x768FA9: pop     edi
0x768FAA: pop     ebp
0x768FAB: add     esp, 8
0x768FAE: retn    10h
0x768FB1: push    edi
0x768FB2: push    offset dword_B3FCD4
0x768FB7: call    NiRTTI__IsObjectOfRTTIType
0x768FBC: add     esp, 8
0x768FBF: test    al, al
0x768FC1: jz      short loc_768FDA
0x768FC3: mov     eax, [esi]
0x768FC5: mov     edx, [eax+5Ch]
0x768FC8: mov     ecx, esi
0x768FCA: call    edx
0x768FCC: mov     ebx, [esp+18h+arg_0]
0x768FD0: mov     edx, [esi+48h]
0x768FD3: push    ebx
0x768FD4: push    1
0x768FD6: push    0
0x768FD8: jmp     short loc_769006
0x768FDA: push    edi
0x768FDB: push    offset dword_B3FD04
0x768FE0: call    NiRTTI__IsObjectOfRTTIType
0x768FE5: add     esp, 8
0x768FE8: test    al, al
0x768FEA: jz      short loc_76901B
0x768FEC: mov     eax, [esi]
0x768FEE: mov     edx, [eax+5Ch]
0x768FF1: mov     ecx, esi
0x768FF3: call    edx
0x768FF5: mov     ebx, [esp+18h+arg_0]
0x768FF9: mov     edx, [esi+4Ch]
0x768FFC: push    ebx
0x768FFD: movzx   ebx, word ptr [esi+44h]
0x769001: push    ebx
0x769002: mov     ebx, [esi+48h]
0x769005: push    ebx
0x769006: movzx   ecx, word ptr [esi+40h]
0x76900A: push    edx
0x76900B: push    ecx
0x76900C: movzx   eax, ax
0x76900F: push    eax
0x769010: push    esi
0x769011: push    edi
0x769012: mov     ecx, ebp
0x769014: call    sub_768470
0x769019: mov     bl, al
0x76901B: mov     ecx, ebp
0x76901D: call    sub_764040
0x769022: pop     esi
0x769023: mov     al, bl
0x769025: pop     ebx
0x769026: pop     edi
0x769027: pop     ebp
0x769028: add     esp, 8
0x76902B: retn    10h
