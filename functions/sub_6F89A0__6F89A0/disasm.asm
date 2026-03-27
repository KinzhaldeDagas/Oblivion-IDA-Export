0x6F89A0: push    0FFFFFFFFh
0x6F89A2: push    offset SEH_6F89A0
0x6F89A7: mov     eax, large fs:0
0x6F89AD: push    eax
0x6F89AE: sub     esp, 88h
0x6F89B4: mov     eax, ds:0B30AACh
0x6F89B9: xor     eax, esp
0x6F89BB: push    eax
0x6F89BC: lea     eax, [esp+98h+var_C]
0x6F89C3: mov     large fs:0, eax
0x6F89C9: mov     eax, [esp+98h+arg_0]
0x6F89D0: and     eax, 17h
0x6F89D3: mov     [ecx+8], eax
0x6F89D6: mov     ecx, [ecx+0Ch]
0x6F89D9: and     ecx, eax
0x6F89DB: jz      loc_6F8AB8
0x6F89E1: cmp     byte ptr [esp+98h+arg_4], 0
0x6F89E9: jz      short loc_6F89F4
0x6F89EB: push    0
0x6F89ED: push    0
0x6F89EF: call    ThrowException??
0x6F89F4: test    cl, 4
0x6F89F7: jz      short loc_6F8A37
0x6F89F9: push    offset aIos_baseBadbit; "ios_base::badbit set"
0x6F89FE: lea     ecx, [esp+9Ch+var_6C]
0x6F8A02: call    sub_414750
0x6F8A07: lea     eax, [esp+98h+var_6C]
0x6F8A0B: push    eax
0x6F8A0C: lea     ecx, [esp+9Ch+var_94]
0x6F8A10: mov     [esp+9Ch+var_4], 0
0x6F8A1B: call    sub_6F7DD0
0x6F8A20: push    offset __TI3?AVfailure@ios_base@std@@; throw info for 'class std::ios_base::failure'
0x6F8A25: lea     ecx, [esp+9Ch+var_94]
0x6F8A29: push    ecx
0x6F8A2A: mov     [esp+0A0h+var_94], offset ??_7failure@ios_base@std@@6B@; const std::ios_base::failure::`vftable'
0x6F8A32: call    ThrowException??
0x6F8A37: test    cl, 2
0x6F8A3A: jz      short loc_6F8A7A
0x6F8A3C: push    offset aIos_baseFailbi; "ios_base::failbit set"
0x6F8A41: lea     ecx, [esp+9Ch+var_6C]
0x6F8A45: call    sub_414750
0x6F8A4A: lea     edx, [esp+98h+var_6C]
0x6F8A4E: push    edx
0x6F8A4F: lea     ecx, [esp+9Ch+var_94]
0x6F8A53: mov     [esp+9Ch+var_4], 1
0x6F8A5E: call    sub_6F7DD0
0x6F8A63: push    offset __TI3?AVfailure@ios_base@std@@; throw info for 'class std::ios_base::failure'
0x6F8A68: lea     eax, [esp+9Ch+var_94]
0x6F8A6C: push    eax
0x6F8A6D: mov     [esp+0A0h+var_94], offset ??_7failure@ios_base@std@@6B@; const std::ios_base::failure::`vftable'
0x6F8A75: call    ThrowException??
0x6F8A7A: push    offset aIos_baseEofbit; "ios_base::eofbit set"
0x6F8A7F: lea     ecx, [esp+9Ch+var_28]
0x6F8A83: call    sub_414750
0x6F8A88: lea     ecx, [esp+98h+var_28]
0x6F8A8C: push    ecx
0x6F8A8D: lea     ecx, [esp+9Ch+var_50]
0x6F8A91: mov     [esp+9Ch+var_4], 2
0x6F8A9C: call    sub_6F7DD0
0x6F8AA1: push    offset __TI3?AVfailure@ios_base@std@@; throw info for 'class std::ios_base::failure'
0x6F8AA6: lea     edx, [esp+9Ch+var_50]
0x6F8AAA: push    edx
0x6F8AAB: mov     [esp+0A0h+var_50], offset ??_7failure@ios_base@std@@6B@; const std::ios_base::failure::`vftable'
0x6F8AB3: call    ThrowException??
0x6F8AB8: mov     ecx, [esp+98h+var_C]
0x6F8ABF: mov     large fs:0, ecx
0x6F8AC6: pop     ecx
0x6F8AC7: add     esp, 94h
0x6F8ACD: retn    8
