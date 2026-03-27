0x755EE0: fldz
0x755EE2: sub     esp, 0F4h
0x755EE8: push    ebx
0x755EE9: push    ecx
0x755EEA: fstp    [esp+0FCh+var_FC]; float
0x755EED: mov     ebx, ecx
0x755EEF: push    offset Vector3_InitValue?; int
0x755EF4: lea     ecx, [esp+100h+var_E0]
0x755EF8: call    sub_716DE0
0x755EFD: fld     dword ptr [ebx+58h]
0x755F00: mov     ecx, eax
0x755F02: fld     dword ptr [ecx]
0x755F04: fucompp
0x755F06: fnstsw  ax
0x755F08: test    ah, 44h
0x755F0B: jp      short loc_755F3A
0x755F0D: fld     dword ptr [ebx+5Ch]
0x755F10: fld     dword ptr [ecx+4]
0x755F13: fucompp
0x755F15: fnstsw  ax
0x755F17: test    ah, 44h
0x755F1A: jp      short loc_755F3A
0x755F1C: fld     dword ptr [ebx+60h]
0x755F1F: fld     dword ptr [ecx+8]
0x755F22: fucompp
0x755F24: fnstsw  ax
0x755F26: test    ah, 44h
0x755F29: jp      short loc_755F3A
0x755F2B: fld     dword ptr [ebx+64h]
0x755F2E: fld     dword ptr [ecx+0Ch]
0x755F31: fucompp
0x755F33: fnstsw  ax
0x755F35: test    ah, 44h
0x755F38: jnp     short loc_755F75
0x755F3A: mov     eax, [ebx+2Ch]
0x755F3D: test    eax, eax
0x755F3F: jz      loc_756132
0x755F45: add     eax, 64h ; 'd'
0x755F48: push    eax
0x755F49: lea     ecx, [ebx+98h]
0x755F4F: call    sub_718B20
0x755F54: test    al, al
0x755F56: jnz     short loc_755F75
0x755F58: mov     eax, [ebx+24h]
0x755F5B: mov     eax, [eax+10h]
0x755F5E: add     eax, 64h ; 'd'
0x755F61: push    eax
0x755F62: lea     ecx, [ebx+0CCh]
0x755F68: call    sub_718B20
0x755F6D: test    al, al
0x755F6F: jz      loc_756132
0x755F75: mov     ecx, ds:0B3F9A8h
0x755F7B: mov     [ebx+68h], ecx
0x755F7E: mov     edx, ds:0B3F9ACh
0x755F84: mov     [ebx+6Ch], edx
0x755F87: mov     eax, ds:0B3F9B0h
0x755F8C: mov     [ebx+70h], eax
0x755F8F: push    ebp
0x755F90: lea     ebp, [ebx+68h]
0x755F93: push    esi
0x755F94: push    edi
0x755F95: lea     edi, [ebx+74h]
0x755F98: mov     ecx, 9
0x755F9D: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x755FA2: rep movsd
0x755FA4: fld     dword ptr [ebx+4Ch]
0x755FA7: fmul    dword ptr [ebx+3Ch]
0x755FAA: fld     dword ptr [ebx+48h]
0x755FAD: fmul    dword ptr [ebx+40h]
0x755FB0: fsubp   st(1), st
0x755FB2: fstp    [esp+104h+var_EC]
0x755FB6: fld     dword ptr [ebx+44h]
0x755FB9: fmul    dword ptr [ebx+40h]
0x755FBC: lea     ecx, [esp+104h+var_EC]
0x755FC0: fld     dword ptr [ebx+4Ch]
0x755FC3: fmul    dword ptr [ebx+38h]
0x755FC6: fsubp   st(1), st
0x755FC8: fstp    [esp+104h+var_E8]
0x755FCC: fld     dword ptr [ebx+38h]
0x755FCF: fmul    dword ptr [ebx+48h]
0x755FD2: fld     dword ptr [ebx+3Ch]
0x755FD5: fmul    dword ptr [ebx+44h]
0x755FD8: fsubp   st(1), st
0x755FDA: fstp    [esp+104h+var_E4]
0x755FDE: call    sub_43F350
0x755FE3: mov     eax, [ebx+2Ch]
0x755FE6: fstp    st
0x755FE8: test    eax, eax
0x755FEA: fld     dword ptr [ebx+30h]
0x755FED: fstp    [esp+104h+var_F0]
0x755FF1: fld     dword ptr [ebx+34h]
0x755FF4: fstp    [esp+104h+var_F4]
0x755FF8: jz      loc_7560DD
0x755FFE: lea     esi, [eax+64h]
0x756001: mov     ecx, 0Dh
0x756006: lea     edi, [esp+104h+var_9C]
0x75600A: rep movsd
0x75600C: mov     ecx, [ebx+24h]
0x75600F: mov     eax, [ecx+10h]
0x756012: lea     esi, [eax+64h]
0x756015: mov     ecx, 0Dh
0x75601A: lea     edi, [esp+104h+var_68]
0x756021: lea     edx, [esp+104h+var_34]
0x756028: rep movsd
0x75602A: push    edx
0x75602B: lea     ecx, [esp+108h+var_68]
0x756032: call    sub_718A80
0x756037: lea     eax, [esp+104h+var_9C]
0x75603B: push    eax
0x75603C: lea     ecx, [esp+108h+var_D0]
0x756040: push    ecx
0x756041: lea     ecx, [esp+10Ch+var_34]
0x756048: call    sub_53D7A0
0x75604D: mov     edx, [esp+104h+var_AC]
0x756051: mov     eax, [esp+104h+var_A8]
0x756055: mov     ecx, [esp+104h+var_A4]
0x756059: mov     [ebp+0], edx
0x75605C: mov     [ebp+4], eax
0x75605F: mov     [ebp+8], ecx
0x756062: lea     eax, [ebx+74h]
0x756065: mov     edi, eax
0x756067: mov     ecx, 9
0x75606C: lea     esi, [esp+104h+var_D0]
0x756070: rep movsd
0x756072: lea     edx, [esp+104h+var_EC]
0x756076: push    edx
0x756077: lea     ecx, [esp+108h+var_E0]
0x75607B: push    ecx
0x75607C: mov     ecx, eax
0x75607E: call    sub_7101F0
0x756083: mov     edx, [eax]
0x756085: mov     [esp+104h+var_EC], edx
0x756089: mov     ecx, [eax+4]
0x75608C: mov     [esp+104h+var_E8], ecx
0x756090: mov     edx, [eax+8]
0x756093: lea     ecx, [esp+104h+var_EC]
0x756097: mov     [esp+104h+var_E4], edx
0x75609B: call    sub_43F350
0x7560A0: fstp    st
0x7560A2: lea     edi, [ebx+98h]
0x7560A8: fld     [esp+104h+var_A0]
0x7560AC: mov     ecx, 0Dh
0x7560B1: fld     st
0x7560B3: lea     esi, [esp+104h+var_9C]
0x7560B7: fmul    [esp+104h+var_F0]
0x7560BB: rep movsd
0x7560BD: fstp    [esp+104h+var_F0]
0x7560C1: fmul    [esp+104h+var_F4]
0x7560C5: fstp    [esp+104h+var_F4]
0x7560C9: lea     edi, [ebx+0CCh]
0x7560CF: mov     ecx, 0Dh
0x7560D4: lea     esi, [esp+104h+var_68]
0x7560DB: rep movsd
0x7560DD: fld     [esp+104h+var_F0]
0x7560E1: push    ebp
0x7560E2: fld     qword ptr ds:0A2FAA0h
0x7560E8: lea     eax, [esp+108h+var_EC]
0x7560EC: fmul    st(1), st
0x7560EE: push    eax
0x7560EF: fxch    st(1)
0x7560F1: lea     ecx, [esp+10Ch+var_E0]
0x7560F5: fstp    [esp+10Ch+var_F0]
0x7560F9: fmul    [esp+10Ch+var_F4]
0x7560FD: fstp    [esp+10Ch+var_F4]
0x756101: fld     [esp+10Ch+var_F0]
0x756105: fmul    st, st
0x756107: fstp    dword ptr [ebx+50h]
0x75610A: fld     [esp+10Ch+var_F4]
0x75610E: fmul    st, st
0x756110: fstp    dword ptr [ebx+54h]
0x756113: call    sub_716E00
0x756118: mov     ecx, [eax]
0x75611A: mov     [ebx+58h], ecx
0x75611D: mov     edx, [eax+4]
0x756120: mov     [ebx+5Ch], edx
0x756123: mov     ecx, [eax+8]
0x756126: pop     edi
0x756127: mov     [ebx+60h], ecx
0x75612A: mov     edx, [eax+0Ch]
0x75612D: pop     esi
0x75612E: mov     [ebx+64h], edx
0x756131: pop     ebp
0x756132: mov     ebx, [ebx+28h]
0x756135: test    ebx, ebx
0x756137: jz      short loc_756149
0x756139: mov     eax, [ebx]
0x75613B: mov     edx, [eax+54h]
0x75613E: mov     ecx, ebx
0x756140: pop     ebx
0x756141: add     esp, 0F4h
0x756147: jmp     edx
0x756149: pop     ebx
0x75614A: add     esp, 0F4h
0x756150: retn
