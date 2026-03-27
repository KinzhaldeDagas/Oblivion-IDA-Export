0x5B0E70: sub     esp, 18h
0x5B0E73: push    ebx
0x5B0E74: push    ebp
0x5B0E75: push    esi
0x5B0E76: push    edi; a3
0x5B0E77: mov     ebx, 1
0x5B0E7C: push    ebx; arg1
0x5B0E7D: push    0; canCreate
0x5B0E7F: mov     esi, ecx
0x5B0E81: call    InterfaceManager_GetSingleton
0x5B0E86: add     esp, 8
0x5B0E89: mov     ebp, eax
0x5B0E8B: call    sub_57D7A0
0x5B0E90: fmul    qword ptr ds:0A2FAA0h
0x5B0E96: fadd    dword ptr [ebp+20h]
0x5B0E99: call    Double_To_SInt32
0x5B0E9E: mov     ecx, [esi+28h]
0x5B0EA1: push    0FADh
0x5B0EA6: mov     edi, eax
0x5B0EA8: call    Tile_GetFloat
0x5B0EAD: call    Double_To_SInt32
0x5B0EB2: sub     edi, eax
0x5B0EB4: mov     [esp+28h+var_14], edi
0x5B0EB8: call    sub_57D7F0
0x5B0EBD: fstp    [esp+28h+var_10]
0x5B0EC1: call    sub_57D7F0
0x5B0EC6: fmul    qword ptr ds:0A2FAA0h
0x5B0ECC: fadd    dword ptr [ebp+28h]
0x5B0ECF: fsubr   [esp+28h+var_10]
0x5B0ED3: call    Double_To_SInt32
0x5B0ED8: mov     ecx, [esi+28h]
0x5B0EDB: push    0FACh
0x5B0EE0: mov     ebp, eax
0x5B0EE2: call    Tile_GetFloat
0x5B0EE7: call    Double_To_SInt32
0x5B0EEC: sub     ebp, eax
0x5B0EEE: xor     eax, eax
0x5B0EF0: cmp     ebp, 28Ah
0x5B0EF6: setl    al
0x5B0EF9: sub     eax, ebx
0x5B0EFB: and     eax, 0FFh
0x5B0F00: push    eax
0x5B0F01: call    sub_583DF0
0x5B0F06: mov     ecx, [esi+28h]
0x5B0F09: add     esp, 4
0x5B0F0C: push    0FCBh
0x5B0F11: mov     dword ptr [esi+168h], 0FFFFFFFFh
0x5B0F1B: call    Tile_GetFloat
0x5B0F20: fstp    dword ptr [esp+28h+var_10]
0x5B0F24: fld     dword ptr [esp+28h+var_10]
0x5B0F28: fld     st
0x5B0F2A: call    Double_To_SInt32
0x5B0F2F: fdiv    qword ptr ds:0A3F3F0h
0x5B0F35: cmp     byte ptr [esi+94h], 0
0x5B0F3C: mov     [esp+28h+var_15], 0
0x5B0F41: fstp    dword ptr [esp+28h+var_10]
0x5B0F45: jz      short loc_5B0F4B
0x5B0F47: mov     [esp+28h+var_15], bl
0x5B0F4B: cmp     byte ptr [esi+0BCh], 0
0x5B0F52: jz      short loc_5B0F58
0x5B0F54: mov     [esp+28h+var_15], bl
0x5B0F58: cmp     byte ptr [esi+0E4h], 0
0x5B0F5F: jz      short loc_5B0F65
0x5B0F61: mov     [esp+28h+var_15], bl
0x5B0F65: cmp     byte ptr [esi+10Ch], 0
0x5B0F6C: jz      short loc_5B0F72
0x5B0F6E: mov     [esp+28h+var_15], bl
0x5B0F72: cmp     byte ptr [esi+134h], 0
0x5B0F79: jz      short loc_5B0F7F
0x5B0F7B: mov     [esp+28h+var_15], bl
0x5B0F7F: xor     ecx, ecx
0x5B0F81: test    edi, edi
0x5B0F83: setle   cl
0x5B0F86: sub     ecx, ebx
0x5B0F88: and     ecx, edi
0x5B0F8A: cmp     ecx, eax
0x5B0F8C: jge     short loc_5B0F9A
0x5B0F8E: test    edi, edi
0x5B0F90: jg      short loc_5B0FA0
0x5B0F92: xor     edi, edi
0x5B0F94: mov     [esp+28h+var_14], edi
0x5B0F98: jmp     short loc_5B0FA0
0x5B0F9A: mov     edi, eax
0x5B0F9C: mov     [esp+28h+var_14], eax
0x5B0FA0: fld     dword ptr [esp+28h+var_10]
0x5B0FA4: xor     ebp, ebp
0x5B0FA6: fst     [esp+28h+var_8]
0x5B0FAA: fldz
0x5B0FAC: lea     ecx, [ebp+1]
0x5B0FAF: mov     dword ptr [esp+28h+var_10], ecx
0x5B0FB3: fild    dword ptr [esp+28h+var_10]
0x5B0FB7: fmul    st, st(2)
0x5B0FB9: fld     st
0x5B0FBB: fsub    st, st(3)
0x5B0FBD: call    Double_To_SInt32
0x5B0FC2: cmp     edi, eax
0x5B0FC4: jl      short loc_5B0FD1
0x5B0FC6: call    Double_To_SInt32
0x5B0FCB: cmp     edi, eax
0x5B0FCD: jl      short loc_5B1002
0x5B0FCF: jmp     short loc_5B0FD3
0x5B0FD1: fstp    st
0x5B0FD3: test    ebp, ebp
0x5B0FD5: jnz     short loc_5B0FE0
0x5B0FD7: test    edi, edi
0x5B0FD9: jle     short loc_5B1002
0x5B0FDB: jmp     loc_5B114D
0x5B0FE0: cmp     ebp, 4
0x5B0FE3: jnz     loc_5B114D
0x5B0FE9: fild    [esp+28h+var_14]
0x5B0FED: fld     st(2)
0x5B0FEF: fmul    qword ptr ds:0A3F3F0h
0x5B0FF5: fcompp
0x5B0FF7: fnstsw  ax
0x5B0FF9: test    ah, 41h
0x5B0FFC: jp      loc_5B114D
0x5B1002: cmp     [esp+28h+var_15], 0
0x5B1007: jnz     short loc_5B100F
0x5B1009: mov     [esi+168h], ebp
0x5B100F: fcom    dword ptr [esi+14Ch]
0x5B1015: fnstsw  ax
0x5B1017: test    ah, 5
0x5B101A: jp      loc_5B1134
0x5B1020: mov     eax, [esi+160h]
0x5B1026: test    eax, eax
0x5B1028: jl      loc_5B1134
0x5B102E: lea     edx, [eax+eax*4]
0x5B1031: fcom    dword ptr [esi+edx*8+90h]
0x5B1038: lea     ecx, [esi+edx*8]
0x5B103B: fnstsw  ax
0x5B103D: test    ah, 44h
0x5B1040: jp      loc_5B1134
0x5B1046: cmp     byte ptr [ecx+94h], 0
0x5B104D: jnz     loc_5B1134
0x5B1053: cmp     byte ptr [ecx+95h], 0
0x5B105A: jnz     loc_5B1134
0x5B1060: fstp    st(1)
0x5B1062: push    offset aUilocktumblern; "UILockTumblerNudge"
0x5B1067: mov     ecx, esi
0x5B1069: fstp    st
0x5B106B: call    sub_5AFD50
0x5B1070: mov     eax, [esi+160h]
0x5B1076: push    eax
0x5B1077: mov     ecx, esi
0x5B1079: call    sub_5AFDA0
0x5B107E: mov     eax, [esi+160h]
0x5B1084: add     eax, 4
0x5B1087: lea     ecx, [eax+eax*4]
0x5B108A: mov     ecx, [esi+ecx*8]
0x5B108D: test    ecx, ecx
0x5B108F: jz      short loc_5B10AF
0x5B1091: call    sub_6B7260
0x5B1096: test    al, al
0x5B1098: jnz     short loc_5B10AF
0x5B109A: mov     eax, [esi+160h]
0x5B10A0: add     eax, 4
0x5B10A3: lea     edx, [eax+eax*4]
0x5B10A6: mov     ecx, [esi+edx*8]
0x5B10A9: push    ebx
0x5B10AA: call    sub_6B7190
0x5B10AF: mov     eax, [esi+160h]
0x5B10B5: lea     eax, [eax+eax*4]
0x5B10B8: fld     dword ptr [esi+eax*8+88h]
0x5B10BF: lea     eax, [esi+eax*8]
0x5B10C2: fstp    dword ptr [eax+90h]
0x5B10C8: mov     eax, [esi+160h]
0x5B10CE: fldz
0x5B10D0: lea     ecx, [eax+eax*4]
0x5B10D3: mov     [esi+ecx*8+96h], bl
0x5B10DA: mov     eax, [esi+160h]
0x5B10E0: lea     edx, [eax+eax*4]
0x5B10E3: fstp    dword ptr [esi+edx*8+7Ch]
0x5B10E7: mov     eax, [esi+160h]
0x5B10ED: fld1
0x5B10EF: lea     eax, [eax+eax*4]
0x5B10F2: mov     [esi+eax*8+94h], bl
0x5B10F9: mov     eax, [esi+160h]
0x5B10FF: push    ecx
0x5B1100: lea     ecx, [eax+eax*4]
0x5B1103: fstp    [esp+2Ch+a2]; a3
0x5B1106: mov     ecx, [esi+ecx*8+9Ch]; this
0x5B110D: push    0FAEh; a2
0x5B1112: call    Tile_SetFloat
0x5B1117: mov     eax, [esi+160h]
0x5B111D: lea     edx, [eax+eax*4]
0x5B1120: mov     ecx, [esi+edx*8+9Ch]
0x5B1127: push    0; a3
0x5B1129: call    sub_58FBA0
0x5B112E: fld     [esp+28h+var_8]
0x5B1132: fldz
0x5B1134: lea     eax, [ebp+ebp*4+0]
0x5B1138: mov     eax, [esi+eax*8+9Ch]
0x5B113F: cmp     [esi+174h], eax
0x5B1145: jz      short loc_5B114D
0x5B1147: mov     [esi+174h], eax
0x5B114D: mov     ebp, dword ptr [esp+28h+var_10]
0x5B1151: cmp     ebp, 5
0x5B1154: jl      loc_5B0FAC
0x5B115A: fstp    st(1)
0x5B115C: mov     ecx, esi
0x5B115E: fstp    st
0x5B1160: call    sub_5B0830
0x5B1165: add     esi, 9Ch ; 'œ'
0x5B116B: mov     edi, 5
0x5B1170: fld     dword ptr [esi-20h]
0x5B1173: call    Double_To_SInt32
0x5B1178: mov     dword ptr [esp+28h+var_10], eax
0x5B117C: fild    dword ptr [esp+28h+var_10]
0x5B1180: push    ecx
0x5B1181: mov     ecx, [esi]; this
0x5B1183: fstp    [esp+2Ch+a2]; a3
0x5B1186: push    0FB1h; a2
0x5B118B: call    Tile_SetFloat
0x5B1190: add     esi, 28h ; '('
0x5B1193: sub     edi, ebx
0x5B1195: jnz     short loc_5B1170
0x5B1197: pop     edi
0x5B1198: pop     esi
0x5B1199: pop     ebp
0x5B119A: pop     ebx
0x5B119B: add     esp, 18h
0x5B119E: retn
