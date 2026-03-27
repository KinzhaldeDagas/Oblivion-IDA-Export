0x7A8FC0: push    0FFFFFFFFh
0x7A8FC2: push    offset SEH_7A8FC0
0x7A8FC7: mov     eax, large fs:0
0x7A8FCD: push    eax
0x7A8FCE: sub     esp, 54h
0x7A8FD1: push    ebx
0x7A8FD2: push    ebp
0x7A8FD3: push    esi
0x7A8FD4: push    edi
0x7A8FD5: mov     eax, ds:0B30AACh
0x7A8FDA: xor     eax, esp
0x7A8FDC: push    eax
0x7A8FDD: lea     eax, [esp+74h+var_C]
0x7A8FE1: mov     large fs:0, eax
0x7A8FE7: mov     ebp, ecx
0x7A8FE9: xor     esi, esi
0x7A8FEB: mov     [esp+74h+var_5C], esi
0x7A8FEF: test    byte ptr ds:0B42CA4h, 1
0x7A8FF6: mov     edi, 1
0x7A8FFB: jnz     short loc_7A901E
0x7A8FFD: or      ds:0B42CA4h, edi
0x7A9003: mov     ecx, offset unk_B42CA0
0x7A9008: mov     [esp+74h+var_4], edi
0x7A900C: call    sub_78EAF0
0x7A9011: push    offset sub_A27070; void (__cdecl *)()
0x7A9016: call    _atexit
0x7A901B: add     esp, 4
0x7A901E: mov     ebx, [esp+74h+arg_0]
0x7A9022: mov     [ebx+4], esi
0x7A9025: mov     [ebx+8], esi
0x7A9028: mov     [ebx+0Ch], esi
0x7A902B: mov     [esp+74h+var_5C], edi
0x7A902F: mov     edi, [ebp+4]
0x7A9032: cmp     edi, [ebp+8]
0x7A9035: mov     [esp+74h+var_4], esi
0x7A9039: jbe     short loc_7A9040
0x7A903B: call    __invalid_parameter_noinfo
0x7A9040: mov     esi, [ebp+8]
0x7A9043: cmp     [ebp+4], esi
0x7A9046: jbe     short loc_7A904D
0x7A9048: call    __invalid_parameter_noinfo
0x7A904D: cmp     edi, esi
0x7A904F: jz      loc_7A9221
0x7A9055: fld1
0x7A9057: sub     esp, 8
0x7A905A: fstp    [esp+7Ch+var_78]; float
0x7A905E: mov     ecx, offset unk_B42CA0
0x7A9063: fldz
0x7A9065: fstp    [esp+7Ch+var_7C]; float
0x7A9068: call    sub_78EA00
0x7A906D: fld     dword ptr [ebp+14h]
0x7A9070: fcompp
0x7A9072: fnstsw  ax
0x7A9074: test    ah, 5
0x7A9077: jp      loc_7A920F
0x7A907D: cmp     edi, [ebp+8]
0x7A9080: jb      short loc_7A9087
0x7A9082: call    __invalid_parameter_noinfo
0x7A9087: mov     ecx, [edi]
0x7A9089: call    sub_7A7E50
0x7A908E: cmp     edi, [ebp+8]
0x7A9091: mov     [esp+74h+var_60], eax
0x7A9095: jb      short loc_7A909C
0x7A9097: call    __invalid_parameter_noinfo
0x7A909C: mov     esi, [edi+4]
0x7A909F: add     esi, 4
0x7A90A2: cmp     edi, [ebp+8]
0x7A90A5: jb      short loc_7A90AC
0x7A90A7: call    __invalid_parameter_noinfo
0x7A90AC: mov     eax, [edi]
0x7A90AE: fld     dword ptr [esi]
0x7A90B0: fadd    dword ptr [eax+4]
0x7A90B3: add     eax, 4
0x7A90B6: cmp     edi, [ebp+8]
0x7A90B9: fstp    [esp+74h+var_48]
0x7A90BD: fld     dword ptr [esi+4]
0x7A90C0: fadd    dword ptr [eax+4]
0x7A90C3: fstp    [esp+74h+var_44]
0x7A90C7: fld     dword ptr [esi+8]
0x7A90CA: fadd    dword ptr [eax+8]
0x7A90CD: fstp    [esp+74h+var_40]
0x7A90D1: fld     [esp+74h+var_48]
0x7A90D5: fld     qword ptr ds:0A2FAA0h
0x7A90DB: fmul    st(1), st
0x7A90DD: fxch    st(1)
0x7A90DF: fstp    [esp+74h+var_54]
0x7A90E3: fld     [esp+74h+var_44]
0x7A90E7: fmul    st, st(1)
0x7A90E9: fstp    [esp+74h+var_50]
0x7A90ED: fld     [esp+74h+var_40]
0x7A90F1: fmul    st, st(1)
0x7A90F3: fstp    [esp+74h+var_4C]
0x7A90F7: jb      short loc_7A9106
0x7A90F9: fstp    st
0x7A90FB: call    __invalid_parameter_noinfo
0x7A9100: fld     qword ptr ds:0A2FAA0h
0x7A9106: mov     eax, [edi]
0x7A9108: movzx   esi, byte ptr [eax+40h]
0x7A910C: mov     ebx, [ebp+18h]
0x7A910F: mov     eax, [ebx+14h]
0x7A9112: add     ebx, 10h
0x7A9115: shr     esi, 1
0x7A9117: test    eax, eax
0x7A9119: jz      short loc_7A9135
0x7A911B: mov     ecx, [ebx+8]
0x7A911E: sub     ecx, eax
0x7A9120: mov     eax, 30C30C31h
0x7A9125: imul    ecx
0x7A9127: sar     edx, 4
0x7A912A: mov     eax, edx
0x7A912C: shr     eax, 1Fh
0x7A912F: add     eax, edx
0x7A9131: cmp     esi, eax
0x7A9133: jb      short loc_7A9142
0x7A9135: fstp    st
0x7A9137: call    __invalid_parameter_noinfo
0x7A913C: fld     qword ptr ds:0A2FAA0h
0x7A9142: imul    esi, 54h ; 'T'
0x7A9145: add     esi, [ebx+4]
0x7A9148: mov     ebx, [esp+74h+var_60]
0x7A914C: mov     ecx, [esp+74h+var_54]
0x7A9150: mov     edx, [esp+74h+var_50]
0x7A9154: fld     dword ptr [esi+4Ch]
0x7A9157: fmul    dword ptr [ebp+1Ch]
0x7A915A: fmul    st, st(1)
0x7A915C: fld     dword ptr [esi+34h]
0x7A915F: mov     [ebx+4], ecx
0x7A9162: fsubrp  st(2), st
0x7A9164: mov     [ebx+8], edx
0x7A9167: fmulp   st(1), st
0x7A9169: fstp    [esp+74h+var_58]
0x7A916D: fld     [esp+74h+var_58]
0x7A9171: fadd    [esp+74h+var_4C]
0x7A9175: fstp    [esp+74h+var_4C]
0x7A9179: mov     eax, [esp+74h+var_4C]
0x7A917D: mov     [ebx+0Ch], eax
0x7A9180: cmp     edi, [ebp+8]
0x7A9183: jb      short loc_7A9194
0x7A9185: call    __invalid_parameter_noinfo
0x7A918A: cmp     edi, [ebp+8]
0x7A918D: jb      short loc_7A9194
0x7A918F: call    __invalid_parameter_noinfo
0x7A9194: lea     ecx, [esp+74h+var_24]
0x7A9198: push    ecx
0x7A9199: mov     ecx, [edi+4]
0x7A919C: call    sub_7A7EC0
0x7A91A1: mov     ecx, [edi]
0x7A91A3: lea     edx, [esp+74h+var_18]
0x7A91A7: push    edx
0x7A91A8: mov     esi, eax
0x7A91AA: call    sub_7A7EC0
0x7A91AF: fld     dword ptr [eax]
0x7A91B1: fadd    dword ptr [esi]
0x7A91B3: push    0
0x7A91B5: mov     ecx, ebx
0x7A91B7: fstp    [esp+78h+var_3C]
0x7A91BB: fld     dword ptr [esi+4]
0x7A91BE: fadd    dword ptr [eax+4]
0x7A91C1: fstp    [esp+78h+var_38]
0x7A91C5: fld     dword ptr [esi+8]
0x7A91C8: fadd    dword ptr [eax+8]
0x7A91CB: lea     eax, [esp+78h+var_30]
0x7A91CF: push    eax
0x7A91D0: fstp    [esp+7Ch+var_34]
0x7A91D4: fld     [esp+7Ch+var_3C]
0x7A91D8: fld     qword ptr ds:0A2FAA0h
0x7A91DE: fmul    st(1), st
0x7A91E0: fxch    st(1)
0x7A91E2: fstp    [esp+7Ch+var_30]
0x7A91E6: fld     [esp+7Ch+var_38]
0x7A91EA: fmul    st, st(1)
0x7A91EC: fstp    [esp+7Ch+var_2C]
0x7A91F0: fmul    [esp+7Ch+var_34]
0x7A91F4: fstp    [esp+7Ch+var_28]
0x7A91F8: call    sub_7A7F10
0x7A91FD: lea     ecx, [esp+74h+var_60]
0x7A9201: push    ecx
0x7A9202: mov     ecx, [esp+78h+arg_0]
0x7A9206: call    sub_791770
0x7A920B: mov     ebx, [esp+74h+arg_0]
0x7A920F: cmp     edi, [ebp+8]
0x7A9212: jb      short loc_7A9219
0x7A9214: call    __invalid_parameter_noinfo
0x7A9219: add     edi, 8
0x7A921C: jmp     loc_7A9040
0x7A9221: mov     eax, ebx
0x7A9223: mov     ecx, [esp+74h+var_C]
0x7A9227: mov     large fs:0, ecx
0x7A922E: pop     ecx
0x7A922F: pop     edi
0x7A9230: pop     esi
0x7A9231: pop     ebp
0x7A9232: pop     ebx
0x7A9233: add     esp, 60h
0x7A9236: retn    4
