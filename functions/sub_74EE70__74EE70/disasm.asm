0x74EE70: sub     esp, 4Ch
0x74EE73: push    ebp
0x74EE74: push    esi
0x74EE75: mov     esi, ecx
0x74EE77: mov     eax, [esi+10h]
0x74EE7A: mov     ebp, [eax+0B4h]
0x74EE80: mov     ecx, [ebp+1Ch]
0x74EE83: mov     edx, [ebp+24h]
0x74EE86: mov     eax, [ebp+44h]
0x74EE89: push    edi
0x74EE8A: xor     edi, edi
0x74EE8C: cmp     [esp+58h+arg_4], di
0x74EE91: mov     [esp+58h+var_24], ecx
0x74EE95: mov     ecx, [ebp+4Ch]
0x74EE98: mov     [esp+58h+var_20], edx
0x74EE9C: mov     [esp+58h+var_34], eax
0x74EEA0: mov     [esp+58h+var_1C], ecx
0x74EEA4: mov     [esp+58h+var_30], edi
0x74EEA8: jbe     loc_74F14B
0x74EEAE: push    ebx
0x74EEAF: nop
0x74EEB0: mov     eax, [esp+5Ch+arg_8]
0x74EEB4: movzx   edx, di
0x74EEB7: fld     dword ptr [eax+edx*4]
0x74EEBA: fstp    [esp+5Ch+var_3C]
0x74EEBE: call    _rand
0x74EEC3: mov     [esp+5Ch+var_38], eax
0x74EEC7: fild    [esp+5Ch+var_38]
0x74EECB: fdiv    qword ptr ds:0A3D5A8h
0x74EED1: fstp    [esp+5Ch+var_38]
0x74EED5: fld     [esp+5Ch+var_38]
0x74EED9: fsub    qword ptr ds:0A2FAA0h
0x74EEDF: fmul    dword ptr [esi+4Ch]
0x74EEE2: fadd    dword ptr [esi+48h]
0x74EEE5: fstp    [esp+5Ch+var_38]
0x74EEE9: fld     [esp+5Ch+var_3C]
0x74EEED: fld     [esp+5Ch+var_38]
0x74EEF1: fcompp
0x74EEF3: fnstsw  ax
0x74EEF5: test    ah, 5
0x74EEF8: jnp     loc_74F138
0x74EEFE: movzx   eax, word ptr [ebp+64h]
0x74EF02: test    ax, ax
0x74EF05: jnz     short loc_74EF28
0x74EF07: movzx   eax, word ptr [ebp+48h]
0x74EF0B: cmp     ax, [ebp+8]
0x74EF0F: mov     [ebp+66h], ax
0x74EF13: jnb     loc_74F14A
0x74EF19: movzx   eax, ax
0x74EF1C: mov     [esp+5Ch+var_4C], eax
0x74EF20: mov     word ptr [ebp+64h], 1
0x74EF26: jmp     short loc_74EF52
0x74EF28: movzx   ecx, word ptr [ebp+66h]
0x74EF2C: movzx   edi, ax
0x74EF2F: movzx   edx, cx
0x74EF32: add     edx, edi
0x74EF34: movzx   edi, word ptr [ebp+8]
0x74EF38: cmp     edx, edi
0x74EF3A: jge     loc_74F14A
0x74EF40: add     ecx, eax
0x74EF42: movzx   ecx, cx
0x74EF45: add     eax, 1
0x74EF48: mov     [ebp+64h], ax
0x74EF4C: mov     [esp+5Ch+var_4C], ecx
0x74EF50: mov     eax, ecx
0x74EF52: cmp     ax, ds:0A877E8h
0x74EF59: jz      loc_74F14A
0x74EF5F: movzx   ebx, ax
0x74EF62: mov     eax, [ebp+5Ch]
0x74EF65: lea     edx, ds:0[ebx*8]
0x74EF6C: sub     edx, ebx
0x74EF6E: lea     edi, [eax+edx*4]
0x74EF71: call    _rand
0x74EF76: mov     [esp+5Ch+var_40], eax
0x74EF7A: fild    [esp+5Ch+var_40]
0x74EF7E: fdiv    qword ptr ds:0A3D5A8h
0x74EF84: fstp    [esp+5Ch+var_40]
0x74EF88: fld     [esp+5Ch+var_40]
0x74EF8C: fsub    qword ptr ds:0A2FAA0h
0x74EF92: fmul    dword ptr [esi+1Ch]
0x74EF95: fadd    dword ptr [esi+18h]
0x74EF98: fstp    [esp+5Ch+var_28]
0x74EF9C: call    _rand
0x74EFA1: mov     [esp+5Ch+var_40], eax
0x74EFA5: fild    [esp+5Ch+var_40]
0x74EFA9: fadd    st, st
0x74EFAB: fdiv    qword ptr ds:0A3D5A8h
0x74EFB1: fsub    qword ptr ds:0A2F928h
0x74EFB7: fstp    [esp+5Ch+var_40]
0x74EFBB: fld     dword ptr [esi+24h]
0x74EFBE: fmul    [esp+5Ch+var_40]
0x74EFC2: fadd    dword ptr [esi+20h]
0x74EFC5: fstp    [esp+5Ch+var_40]
0x74EFC9: call    _rand
0x74EFCE: mov     [esp+5Ch+var_44], eax
0x74EFD2: fild    [esp+5Ch+var_44]
0x74EFD6: fadd    st, st
0x74EFD8: fdiv    qword ptr ds:0A3D5A8h
0x74EFDE: fsub    qword ptr ds:0A2F928h
0x74EFE4: fstp    [esp+5Ch+var_44]
0x74EFE8: fld     dword ptr [esi+2Ch]
0x74EFEB: fmul    [esp+5Ch+var_44]
0x74EFEF: fadd    dword ptr [esi+28h]
0x74EFF2: fstp    [esp+5Ch+var_48]
0x74EFF6: fld     [esp+5Ch+var_40]
0x74EFFA: call    __CIsin
0x74EFFF: fstp    [esp+5Ch+var_44]
0x74F003: fld     [esp+5Ch+var_44]
0x74F007: fstp    [esp+5Ch+var_44]
0x74F00B: fld     [esp+5Ch+var_48]
0x74F00F: call    __CIcos
0x74F014: fstp    [esp+5Ch+var_2C]
0x74F018: fld     [esp+5Ch+var_2C]
0x74F01C: fmul    [esp+5Ch+var_44]
0x74F020: fstp    [esp+5Ch+var_18]
0x74F024: fld     [esp+5Ch+var_48]
0x74F028: call    __CIsin
0x74F02D: fstp    [esp+5Ch+var_2C]
0x74F031: fld     [esp+5Ch+var_2C]
0x74F035: fmul    [esp+5Ch+var_44]
0x74F039: fstp    [esp+5Ch+var_14]
0x74F03D: fld     [esp+5Ch+var_40]
0x74F041: call    __CIcos
0x74F046: fstp    [esp+5Ch+var_2C]
0x74F04A: fld     [esp+5Ch+var_2C]
0x74F04E: mov     word ptr [edi+18h], 0
0x74F054: fstp    [esp+5Ch+var_10]
0x74F058: fld     [esp+5Ch+var_18]
0x74F05C: fld     [esp+5Ch+var_28]
0x74F060: fld     st
0x74F062: fmulp   st(2), st
0x74F064: fxch    st(1)
0x74F066: fstp    [esp+5Ch+var_C]
0x74F06A: mov     ecx, [esp+5Ch+var_C]
0x74F06E: fld     [esp+5Ch+var_14]
0x74F072: mov     [edi], ecx
0x74F074: fmul    st, st(1)
0x74F076: fstp    [esp+5Ch+var_8]
0x74F07A: mov     edx, [esp+5Ch+var_8]
0x74F07E: mov     [edi+4], edx
0x74F081: fmul    [esp+5Ch+var_10]
0x74F085: fstp    [esp+5Ch+var_4]
0x74F089: mov     eax, [esp+5Ch+var_4]
0x74F08D: fld     [esp+5Ch+var_3C]
0x74F091: mov     [edi+8], eax
0x74F094: fstp    dword ptr [edi+0Ch]
0x74F097: fld     [esp+5Ch+var_38]
0x74F09B: fstp    dword ptr [edi+10h]
0x74F09E: mov     ecx, [esp+5Ch+var_24]
0x74F0A2: mov     edx, [esi]
0x74F0A4: mov     edx, [edx+60h]
0x74F0A7: lea     eax, [ebx+ebx*2]
0x74F0AA: lea     eax, [ecx+eax*4]
0x74F0AD: push    edi
0x74F0AE: push    eax
0x74F0AF: mov     ecx, esi
0x74F0B1: call    edx
0x74F0B3: mov     ecx, [esp+5Ch+var_20]
0x74F0B7: test    ecx, ecx
0x74F0B9: jz      short loc_74F0D9
0x74F0BB: mov     eax, ebx
0x74F0BD: shl     eax, 4
0x74F0C0: add     eax, ecx
0x74F0C2: mov     ecx, [esi+30h]
0x74F0C5: mov     [eax], ecx
0x74F0C7: mov     edx, [esi+34h]
0x74F0CA: mov     [eax+4], edx
0x74F0CD: mov     ecx, [esi+38h]
0x74F0D0: mov     [eax+8], ecx
0x74F0D3: mov     edx, [esi+3Ch]
0x74F0D6: mov     [eax+0Ch], edx
0x74F0D9: cmp     [esp+5Ch+var_34], 0
0x74F0DE: jz      short loc_74F110
0x74F0E0: call    _rand
0x74F0E5: mov     [esp+5Ch+var_28], eax
0x74F0E9: fild    [esp+5Ch+var_28]
0x74F0ED: mov     eax, [esp+5Ch+var_34]
0x74F0F1: fadd    st, st
0x74F0F3: fdiv    qword ptr ds:0A3D5A8h
0x74F0F9: fsub    qword ptr ds:0A2F928h
0x74F0FF: fstp    [esp+5Ch+var_28]
0x74F103: fld     dword ptr [esi+44h]
0x74F106: fmul    [esp+5Ch+var_28]
0x74F10A: fadd    dword ptr [esi+40h]
0x74F10D: fstp    dword ptr [eax+ebx*4]
0x74F110: mov     eax, [esp+5Ch+var_1C]
0x74F114: test    eax, eax
0x74F116: jz      short loc_74F11D
0x74F118: fld1
0x74F11A: fstp    dword ptr [eax+ebx*4]
0x74F11D: fld     [esp+5Ch+arg_0]
0x74F121: mov     ecx, [esp+5Ch+var_4C]
0x74F125: fsub    dword ptr [edi+0Ch]
0x74F128: push    ecx
0x74F129: fstp    dword ptr [edi+14h]
0x74F12C: mov     ecx, [esi+10h]
0x74F12F: call    sub_749510
0x74F134: mov     edi, [esp+5Ch+var_30]
0x74F138: add     edi, 1
0x74F13B: cmp     di, [esp+5Ch+arg_4]
0x74F140: mov     [esp+5Ch+var_30], edi
0x74F144: jb      loc_74EEB0
0x74F14A: pop     ebx
0x74F14B: pop     edi
0x74F14C: pop     esi
0x74F14D: pop     ebp
0x74F14E: add     esp, 4Ch
0x74F151: retn    0Ch
