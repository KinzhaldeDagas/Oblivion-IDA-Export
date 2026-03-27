0x697A80: fldz
0x697A82: sub     esp, 68h
0x697A85: fcomp   [esp+68h+arg_0]
0x697A89: push    ebx
0x697A8A: push    ebp
0x697A8B: push    esi
0x697A8C: push    edi
0x697A8D: mov     ebp, ecx
0x697A8F: fnstsw  ax
0x697A91: test    ah, 44h
0x697A94: jnp     loc_6980A4
0x697A9A: mov     eax, [ebp+8]
0x697A9D: shr     eax, 5
0x697AA0: test    al, 1
0x697AA2: jnz     loc_6980A4
0x697AA8: mov     edx, [ebp+0]
0x697AAB: mov     eax, [edx+154h]
0x697AB1: call    eax
0x697AB3: cmp     dword ptr [ebp+7Ch], 0
0x697AB7: mov     ecx, [eax+54h]
0x697ABA: mov     edx, [eax+58h]
0x697ABD: mov     eax, [eax+5Ch]
0x697AC0: mov     [esp+78h+var_48], ecx
0x697AC4: mov     [esp+78h+var_44], edx
0x697AC8: mov     [esp+78h+var_40], eax
0x697ACC: jz      loc_697C6F
0x697AD2: cmp     dword ptr [ebp+80h], 0
0x697AD9: jnz     loc_697C6F
0x697ADF: mov     ecx, ebp; this
0x697AE1: call    MobileObject_GetCharProxy
0x697AE6: fld     dword ptr [eax+318h]
0x697AEC: mov     edx, [ebp+0]
0x697AEF: fstp    [esp+78h+var_68]
0x697AF3: fld     [esp+78h+var_68]
0x697AF7: mov     eax, [edx+174h]
0x697AFD: fmul    qword ptr ds:0A372E0h
0x697B03: mov     ecx, ebp
0x697B05: fstp    [esp+78h+var_68]
0x697B09: fld     [esp+78h+var_68]
0x697B0D: fstp    [esp+78h+var_68]
0x697B11: call    eax
0x697B13: fld     dword ptr [eax+8]
0x697B16: fld     dword ptr [esp+6Ch+var_60+4]
0x697B1A: fcompp
0x697B1C: fnstsw  ax
0x697B1E: test    ah, 1
0x697B21: jnz     short loc_697B55
0x697B23: mov     esi, [ebp+0]
0x697B26: mov     edx, [esi+174h]
0x697B2C: mov     ecx, ebp
0x697B2E: call    edx
0x697B30: mov     edx, [eax]
0x697B32: push    1
0x697B34: push    0
0x697B36: push    0
0x697B38: sub     esp, 0Ch
0x697B3B: mov     ecx, esp
0x697B3D: mov     [ecx], edx
0x697B3F: mov     edx, [eax+4]
0x697B42: mov     eax, [eax+8]
0x697B45: mov     [ecx+4], edx
0x697B48: mov     edx, [esi+208h]
0x697B4E: mov     [ecx+8], eax
0x697B51: mov     ecx, ebp
0x697B53: call    edx
0x697B55: fldz
0x697B57: mov     ecx, ds:0B3F9ACh
0x697B5D: mov     eax, ds:0B3F9A8h
0x697B62: fst     [esp+6Ch+var_30]
0x697B66: fld     dword ptr [ebp+5Ch]
0x697B69: mov     edx, ds:0B3F9B0h
0x697B6F: fmul    [esp+6Ch+arg_C]
0x697B73: mov     dword ptr [esp+6Ch+var_54+4], ecx
0x697B77: mov     ecx, ebp; this
0x697B79: mov     dword ptr [esp+6Ch+var_54], eax
0x697B7D: mov     [esp+6Ch+var_4C], edx
0x697B81: fstp    [esp+6Ch+var_2C]
0x697B85: fstp    [esp+6Ch+var_28]
0x697B89: call    MobileObject_GetCharProxy
0x697B8E: test    eax, eax
0x697B90: jz      short loc_697BA5
0x697B92: lea     eax, [esp+6Ch+var_54]
0x697B96: push    eax
0x697B97: mov     ecx, ebp; this
0x697B99: call    MobileObject_GetCharProxy
0x697B9E: mov     ecx, eax
0x697BA0: call    sub_5E1500
0x697BA5: mov     edx, [ebp+0]
0x697BA8: fld     [esp+6Ch+arg_C]
0x697BAC: mov     edx, [edx+1B4h]
0x697BB2: push    0Fh
0x697BB4: lea     eax, [esp+70h+var_30]
0x697BB8: push    eax
0x697BB9: push    ecx
0x697BBA: mov     ecx, ebp
0x697BBC: fstp    [esp+78h+var_78]
0x697BBF: call    edx
0x697BC1: mov     ecx, ds:0B3F9ACh
0x697BC7: mov     eax, ds:0B3F9A8h
0x697BCC: mov     edx, ds:0B3F9B0h
0x697BD2: mov     dword ptr [esp+78h+var_54+4], ecx
0x697BD6: mov     ecx, ebp; this
0x697BD8: mov     dword ptr [esp+78h+var_54], eax
0x697BDC: mov     [esp+78h+var_4C], edx
0x697BE0: call    MobileObject_GetCharProxy
0x697BE5: test    eax, eax
0x697BE7: jz      short loc_697BFC
0x697BE9: lea     eax, [esp+78h+var_54]
0x697BED: push    eax
0x697BEE: mov     ecx, ebp; this
0x697BF0: call    MobileObject_GetCharProxy
0x697BF5: mov     ecx, eax
0x697BF7: call    sub_5E1500
0x697BFC: fld     dword ptr [esp+78h+var_54]
0x697C00: lea     ecx, [esp+78h+var_30]
0x697C04: fsub    dword ptr [esp+78h+var_60]
0x697C08: fstp    [esp+78h+var_30]
0x697C0C: fld     dword ptr [esp+78h+var_54+4]
0x697C10: fsub    dword ptr [esp+78h+var_60+4]
0x697C14: fstp    [esp+78h+var_2C]
0x697C18: fld     [esp+78h+var_4C]
0x697C1C: fsub    [esp+78h+var_58]
0x697C20: fstp    [esp+78h+var_28]
0x697C24: call    sub_404C90
0x697C29: fadd    dword ptr [ebp+60h]
0x697C2C: fstp    [esp+78h+var_68]
0x697C30: fld     [esp+78h+var_68]
0x697C34: fst     dword ptr [ebp+60h]
0x697C37: fld     dword ptr ds:0B37E88h
0x697C3D: fcompp
0x697C3F: fnstsw  ax
0x697C41: test    ah, 5
0x697C44: jp      short loc_697C55
0x697C46: mov     edx, [ebp+0]
0x697C49: mov     eax, [edx+8Ch]
0x697C4F: push    1
0x697C51: mov     ecx, ebp
0x697C53: call    eax
0x697C55: mov     edx, [ebp+0]
0x697C58: mov     eax, [edx+210h]
0x697C5E: mov     ecx, ebp
0x697C60: call    eax
0x697C62: test    al, al
0x697C64: jz      loc_6980A4
0x697C6A: jmp     loc_697DDF
0x697C6F: cmp     dword ptr [ebp+80h], 1
0x697C76: jnz     loc_697DDF
0x697C7C: mov     esi, [ebp+84h]
0x697C82: xor     ebx, ebx
0x697C84: test    esi, esi
0x697C86: mov     [esp+78h+var_68], ebx
0x697C8A: jz      loc_697DDF
0x697C90: jmp     short loc_697C96
0x697C92: mov     ebx, [esp+78h+var_68]
0x697C96: fld     [esp+78h+arg_0]
0x697C9A: push    esi; int
0x697C9B: push    ecx
0x697C9C: mov     ecx, ebp
0x697C9E: fstp    [esp+80h+var_80]; float
0x697CA1: call    sub_696460
0x697CA6: mov     eax, [esi]
0x697CA8: cmp     byte ptr [eax+180h], 0
0x697CAF: mov     ecx, [esi+1Ch]
0x697CB2: mov     dword ptr [esp+78h+var_60], ecx
0x697CB6: jnz     loc_697DD1
0x697CBC: mov     edx, [eax+84h]
0x697CC2: cmp     edx, [eax+88h]
0x697CC8: jl      loc_697DD1
0x697CCE: mov     eax, [esi+4]
0x697CD1: mov     ecx, [eax+1Ch]
0x697CD4: test    ecx, ecx
0x697CD6: jz      short loc_697D0E
0x697CD8: mov     edx, [ecx]
0x697CDA: mov     edx, [edx+88h]
0x697CE0: push    eax
0x697CE1: lea     eax, [esp+7Ch+var_64]
0x697CE5: push    eax
0x697CE6: call    edx
0x697CE8: mov     eax, dword ptr [esp+78h+var_64]
0x697CEC: test    eax, eax
0x697CEE: jz      short loc_697D0E
0x697CF0: mov     edi, eax
0x697CF2: add     eax, 4
0x697CF5: push    eax; lpAddend
0x697CF6: call    dword ptr ds:0A2807Ch
0x697CFC: test    eax, eax
0x697CFE: jnz     short loc_697D0E
0x697D00: test    edi, edi
0x697D02: jz      short loc_697D0E
0x697D04: mov     eax, [edi]
0x697D06: mov     edx, [eax]
0x697D08: push    1
0x697D0A: mov     ecx, edi
0x697D0C: call    edx
0x697D0E: test    ebx, ebx
0x697D10: jnz     short loc_697D1D
0x697D12: mov     eax, [esi+1Ch]
0x697D15: mov     [ebp+84h], eax
0x697D1B: jmp     short loc_697D23
0x697D1D: mov     ecx, [esi+1Ch]
0x697D20: mov     [ebx+1Ch], ecx
0x697D23: mov     edi, [esi+4]
0x697D26: xor     ebx, ebx
0x697D28: cmp     edi, ebx
0x697D2A: jz      short loc_697D4B
0x697D2C: lea     edx, [edi+4]
0x697D2F: push    edx; lpAddend
0x697D30: call    dword ptr ds:0A2807Ch
0x697D36: test    eax, eax
0x697D38: jnz     short loc_697D48
0x697D3A: cmp     edi, ebx
0x697D3C: jz      short loc_697D48
0x697D3E: mov     eax, [edi]
0x697D40: mov     edx, [eax]
0x697D42: push    1
0x697D44: mov     ecx, edi
0x697D46: call    edx
0x697D48: mov     [esi+4], ebx
0x697D4B: mov     edi, [esi]
0x697D4D: cmp     edi, ebx
0x697D4F: jz      short loc_697D6F
0x697D51: lea     eax, [edi+4]
0x697D54: push    eax; lpAddend
0x697D55: call    dword ptr ds:0A2807Ch
0x697D5B: test    eax, eax
0x697D5D: jnz     short loc_697D6D
0x697D5F: cmp     edi, ebx
0x697D61: jz      short loc_697D6D
0x697D63: mov     edx, [edi]
0x697D65: mov     eax, [edx]
0x697D67: push    1
0x697D69: mov     ecx, edi
0x697D6B: call    eax
0x697D6D: mov     [esi], ebx
0x697D6F: mov     edi, [esi+14h]
0x697D72: cmp     edi, ebx
0x697D74: jz      short loc_697D95
0x697D76: lea     ecx, [edi+4]
0x697D79: push    ecx; lpAddend
0x697D7A: call    dword ptr ds:0A2807Ch
0x697D80: test    eax, eax
0x697D82: jnz     short loc_697D92
0x697D84: cmp     edi, ebx
0x697D86: jz      short loc_697D92
0x697D88: mov     edx, [edi]
0x697D8A: mov     eax, [edx]
0x697D8C: push    1
0x697D8E: mov     ecx, edi
0x697D90: call    eax
0x697D92: mov     [esi+14h], ebx
0x697D95: mov     edi, [esi+18h]
0x697D98: cmp     edi, ebx
0x697D9A: jz      short loc_697DBB
0x697D9C: lea     ecx, [edi+4]
0x697D9F: push    ecx; lpAddend
0x697DA0: call    dword ptr ds:0A2807Ch
0x697DA6: test    eax, eax
0x697DA8: jnz     short loc_697DB8
0x697DAA: cmp     edi, ebx
0x697DAC: jz      short loc_697DB8
0x697DAE: mov     edx, [edi]
0x697DB0: mov     eax, [edx]
0x697DB2: push    1
0x697DB4: mov     ecx, edi
0x697DB6: call    eax
0x697DB8: mov     [esi+18h], ebx
0x697DBB: mov     ecx, esi
0x697DBD: call    sub_696C00
0x697DC2: push    esi
0x697DC3: call    FormHeapFree
0x697DC8: mov     ecx, dword ptr [esp+7Ch+var_60]
0x697DCC: add     esp, 4
0x697DCF: jmp     short loc_697DD5
0x697DD1: mov     [esp+78h+var_68], esi
0x697DD5: test    ecx, ecx
0x697DD7: mov     esi, ecx
0x697DD9: jnz     loc_697C92
0x697DDF: cmp     dword ptr ds:0B381F0h, 0
0x697DE6: jg      loc_697FEF
0x697DEC: cmp     byte ptr ds:0B3C0BAh, 0
0x697DF3: jnz     loc_697FEF
0x697DF9: cmp     dword ptr [ebp+80h], 0
0x697E00: mov     eax, [ebp+90h]
0x697E06: setnz   bl
0x697E09: test    eax, eax
0x697E0B: mov     byte ptr [esp+78h+var_68], bl
0x697E0F: jz      loc_697F10
0x697E15: test    bl, bl
0x697E17: fld     dword ptr [eax+88h]
0x697E1D: fsub    [esp+78h+var_48]
0x697E21: fstp    dword ptr [esp+78h+var_54]
0x697E25: fld     dword ptr [eax+8Ch]
0x697E2B: fsub    [esp+78h+var_44]
0x697E2F: fstp    dword ptr [esp+78h+var_54+4]
0x697E33: fld     dword ptr [eax+90h]
0x697E39: fsub    [esp+78h+var_40]
0x697E3D: fstp    [esp+78h+var_4C]
0x697E41: jz      short loc_697E61
0x697E43: mov     eax, [ebp+7Ch]
0x697E46: fld     dword ptr [ebp+64h]
0x697E49: fmul    dword ptr [ebp+5Ch]
0x697E4C: fild    dword ptr [eax+14Ch]
0x697E52: fmul    dword ptr [eax+150h]
0x697E58: fcompp
0x697E5A: fnstsw  ax
0x697E5C: test    ah, 5
0x697E5F: jp      short loc_697E8F
0x697E61: mov     ecx, [esp+78h+var_68]
0x697E65: fld     dword ptr [ebp+5Ch]
0x697E68: push    ecx; float
0x697E69: push    ecx
0x697E6A: lea     ecx, [esp+80h+var_54]
0x697E6E: fstp    [esp+80h+var_80]; float
0x697E71: call    sub_404C90
0x697E76: mov     ecx, [ebp+7Ch]
0x697E79: sub     esp, 8
0x697E7C: fstp    [esp+88h+var_84]; float
0x697E80: fld     [esp+88h+arg_0]
0x697E87: fstp    [esp+88h+var_88]; float
0x697E8A: call    sub_7F3530
0x697E8F: fld     [esp+78h+var_4C]
0x697E93: lea     ecx, [esp+78h+var_54]
0x697E97: fstp    [esp+78h+arg_0]
0x697E9B: fldz
0x697E9D: fstp    [esp+78h+var_4C]
0x697EA1: fld     [esp+78h+arg_0]
0x697EA5: fstp    [esp+78h+var_60]
0x697EA9: call    sub_404C90
0x697EAE: fld     [esp+78h+var_60]
0x697EB2: fxch    st(1)
0x697EB4: call    sub_98598A
0x697EB9: fstp    [esp+78h+arg_0]
0x697EBD: fld     [esp+78h+arg_0]
0x697EC1: sub     esp, 8
0x697EC4: fchs
0x697EC6: fstp    [esp+80h+var_7C]; float
0x697ECA: fldz
0x697ECC: fstp    [esp+80h+var_80]; float
0x697ECF: fld     dword ptr [esp+80h+var_54]
0x697ED3: fld     dword ptr [esp+80h+var_54+4]
0x697ED7: call    sub_98598A
0x697EDC: fstp    [esp+80h+arg_0]
0x697EE3: fld     [esp+80h+arg_0]
0x697EEA: push    ecx
0x697EEB: lea     ecx, [esp+84h+var_24]
0x697EEF: fstp    [esp+84h+var_84]; float
0x697EF2: call    sub_7118E0
0x697EF7: mov     edi, [ebp+88h]
0x697EFD: add     edi, 30h ; '0'
0x697F00: mov     ecx, 9
0x697F05: lea     esi, [esp+78h+var_24]
0x697F09: rep movsd
0x697F0B: jmp     loc_697FEF
0x697F10: mov     ecx, ebp; this
0x697F12: call    MobileObject_GetCharProxy
0x697F17: test    eax, eax
0x697F19: jz      loc_697FEF
0x697F1F: lea     edx, [esp+78h+var_30]
0x697F23: push    edx
0x697F24: mov     ecx, ebp; this
0x697F26: call    MobileObject_GetCharProxy
0x697F2B: mov     ecx, eax
0x697F2D: call    sub_5E1500
0x697F32: fld     [esp+78h+var_48]
0x697F36: fsub    [esp+78h+var_30]
0x697F3A: lea     ecx, [esp+78h+var_3C]
0x697F3E: fstp    [esp+78h+var_3C]
0x697F42: fld     [esp+78h+var_44]
0x697F46: fsub    [esp+78h+var_2C]
0x697F4A: fstp    [esp+78h+var_38]
0x697F4E: fld     [esp+78h+var_40]
0x697F52: fsub    [esp+78h+var_28]
0x697F56: fstp    [esp+78h+var_34]
0x697F5A: call    sub_404C90
0x697F5F: test    bl, bl
0x697F61: fstp    dword ptr [esp+78h+var_60]
0x697F65: jz      short loc_697F85
0x697F67: mov     eax, [ebp+7Ch]
0x697F6A: fld     dword ptr [ebp+64h]
0x697F6D: fmul    dword ptr [ebp+5Ch]
0x697F70: fild    dword ptr [eax+14Ch]
0x697F76: fmul    dword ptr [eax+150h]
0x697F7C: fcompp
0x697F7E: fnstsw  ax
0x697F80: test    ah, 5
0x697F83: jp      short loc_697FAE
0x697F85: mov     eax, [esp+78h+var_68]
0x697F89: fld     dword ptr [ebp+5Ch]
0x697F8C: mov     ecx, [ebp+7Ch]
0x697F8F: push    eax; float
0x697F90: sub     esp, 0Ch
0x697F93: fstp    [esp+88h+var_80]; float
0x697F97: fld     dword ptr [esp+88h+var_60]
0x697F9B: fstp    [esp+88h+var_84]; float
0x697F9F: fld     [esp+88h+arg_0]
0x697FA6: fstp    [esp+88h+var_88]; float
0x697FA9: call    sub_7F3530
0x697FAE: mov     ecx, [ebp+7Ch]
0x697FB1: call    nullsub_returnFalse_0arg
0x697FB6: test    al, al
0x697FB8: jz      short loc_697FEF
0x697FBA: lea     ecx, [esp+78h+arg_0]
0x697FBE: push    ecx
0x697FBF: mov     ecx, ebp; this
0x697FC1: mov     dword ptr [ebp+80h], 2
0x697FCB: call    MobileObject_GetCharProxy
0x697FD0: mov     ecx, eax
0x697FD2: call    sub_57E270
0x697FD7: mov     eax, [esp+78h+arg_0]
0x697FDB: or      eax, 4000h
0x697FE0: push    eax
0x697FE1: mov     ecx, ebp; this
0x697FE3: call    MobileObject_GetCharProxy
0x697FE8: mov     ecx, eax
0x697FEA: call    sub_694FC0
0x697FEF: mov     esi, [ebp+94h]
0x697FF5: test    esi, esi
0x697FF7: jz      short loc_698020
0x697FF9: mov     edx, [ebp+0]
0x697FFC: mov     eax, [edx+174h]
0x698002: mov     ecx, ebp
0x698004: call    eax
0x698006: mov     ecx, [eax]
0x698008: mov     [esi+88h], ecx
0x69800E: mov     edx, [eax+4]
0x698011: mov     [esi+8Ch], edx
0x698017: mov     eax, [eax+8]
0x69801A: mov     [esi+90h], eax
0x698020: mov     eax, [ebp+7Ch]
0x698023: cmp     byte ptr [eax+180h], 0
0x69802A: jnz     short loc_69803A
0x69802C: mov     ecx, [eax+84h]
0x698032: cmp     ecx, [eax+88h]
0x698038: jge     short loc_698059
0x69803A: cmp     dword ptr [ebp+80h], 1
0x698041: jnz     short loc_6980A4
0x698043: fld     dword ptr [ebp+78h]
0x698046: fsub    dword ptr [ebp+0A0h]
0x69804C: fcomp   qword ptr ds:0A30E48h
0x698052: fnstsw  ax
0x698054: test    ah, 41h
0x698057: jnz     short loc_6980A4
0x698059: mov     ecx, [ebp+9Ch]
0x69805F: test    ecx, ecx
0x698061: jz      short loc_69808C
0x698063: call    sub_6B7240
0x698068: mov     esi, [ebp+9Ch]
0x69806E: test    esi, esi
0x698070: jz      short loc_69808C
0x698072: mov     ecx, esi; this
0x698074: call    sub_6B73E0
0x698079: push    esi
0x69807A: call    FormHeapFree
0x69807F: add     esp, 4
0x698082: mov     dword ptr [ebp+9Ch], 0
0x69808C: cmp     dword ptr [ebp+84h], 0
0x698093: jnz     short loc_6980A4
0x698095: mov     edx, [ebp+0]
0x698098: mov     eax, [edx+8Ch]
0x69809E: push    1
0x6980A0: mov     ecx, ebp
0x6980A2: call    eax
0x6980A4: pop     edi
0x6980A5: pop     esi
0x6980A6: pop     ebp
0x6980A7: pop     ebx
0x6980A8: add     esp, 68h
0x6980AB: retn    4
