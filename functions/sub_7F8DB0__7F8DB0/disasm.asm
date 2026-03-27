0x7F8DB0: push    0FFFFFFFFh
0x7F8DB2: push    offset SEH_7F8DB0
0x7F8DB7: mov     eax, large fs:0
0x7F8DBD: push    eax
0x7F8DBE: sub     esp, 78h
0x7F8DC1: push    ebx
0x7F8DC2: push    ebp
0x7F8DC3: push    esi
0x7F8DC4: push    edi
0x7F8DC5: mov     eax, ds:0B30AACh
0x7F8DCA: xor     eax, esp
0x7F8DCC: push    eax
0x7F8DCD: lea     eax, [esp+98h+var_C]
0x7F8DD4: mov     large fs:0, eax
0x7F8DDA: mov     esi, ecx
0x7F8DDC: mov     [esp+98h+var_80], esi
0x7F8DE0: mov     eax, ds:0B3F928h
0x7F8DE5: mov     edi, [esp+98h+arg_4]
0x7F8DEC: push    edi
0x7F8DED: mov     [esp+9Ch+var_70], eax
0x7F8DF1: mov     byte ptr [esp+9Ch+var_84+3], 0
0x7F8DF6: call    sub_7F5C40
0x7F8DFB: push    edi
0x7F8DFC: mov     ecx, esi
0x7F8DFE: mov     [esp+9Ch+var_68], eax
0x7F8E02: call    sub_7F5E80
0x7F8E07: mov     ecx, [esp+98h+arg_0]
0x7F8E0E: mov     [esp+98h+var_6C], eax
0x7F8E12: mov     eax, [ecx+4]
0x7F8E15: mov     edx, [eax]
0x7F8E17: lea     ecx, [eax+8]
0x7F8E1A: mov     ecx, [ecx]
0x7F8E1C: mov     ebx, [ecx]
0x7F8E1E: mov     eax, [ebx+0B4h]
0x7F8E24: mov     [esp+98h+var_78], ecx
0x7F8E28: lea     esi, [ebx+64h]
0x7F8E2B: mov     ecx, 0Dh
0x7F8E30: lea     edi, [esp+98h+var_40]
0x7F8E34: rep movsd
0x7F8E36: mov     ecx, [ebx+20h]
0x7F8E39: mov     [esp+98h+var_50], ecx
0x7F8E3D: mov     [esp+98h+var_74], edx
0x7F8E41: mov     edx, [ebx+24h]
0x7F8E44: mov     [esp+98h+var_4C], edx
0x7F8E48: mov     [esp+98h+var_7C], eax
0x7F8E4C: mov     eax, [ebx+28h]
0x7F8E4F: mov     [esp+98h+var_48], eax
0x7F8E53: mov     ecx, [ebx+2Ch]
0x7F8E56: lea     edx, [esp+98h+var_5C]
0x7F8E5A: mov     [esp+98h+var_44], ecx
0x7F8E5E: push    edx
0x7F8E5F: mov     ecx, ebx
0x7F8E61: call    sub_405760
0x7F8E66: mov     esi, [eax]
0x7F8E68: mov     eax, [esp+98h+var_5C]
0x7F8E6C: test    eax, eax
0x7F8E6E: jz      short loc_7F8E8E
0x7F8E70: mov     edi, eax
0x7F8E72: add     eax, 4
0x7F8E75: push    eax; lpAddend
0x7F8E76: call    dword ptr ds:0A2807Ch
0x7F8E7C: test    eax, eax
0x7F8E7E: jnz     short loc_7F8E8E
0x7F8E80: test    edi, edi
0x7F8E82: jz      short loc_7F8E8E
0x7F8E84: mov     eax, [edi]
0x7F8E86: mov     edx, [eax]
0x7F8E88: push    1
0x7F8E8A: mov     ecx, edi
0x7F8E8C: call    edx
0x7F8E8E: movzx   eax, word ptr [esp+98h+arg_4]
0x7F8E96: mov     ebp, [ebx+0BCh]
0x7F8E9C: mov     edi, [esi+18h]
0x7F8E9F: mov     ds:0B42E90h, eax
0x7F8EA4: mov     eax, [esp+98h+var_78]
0x7F8EA8: mov     ds:0B42EB8h, eax
0x7F8EAD: call    sub_7ECB20
0x7F8EB2: mov     ecx, [esp+98h+var_78]
0x7F8EB6: mov     edx, [esp+98h+arg_4]
0x7F8EBD: push    0
0x7F8EBF: push    edi
0x7F8EC0: mov     edi, [esp+0A0h+var_80]
0x7F8EC4: push    ecx
0x7F8EC5: push    edx
0x7F8EC6: mov     ecx, edi
0x7F8EC8: call    sub_7F60F0
0x7F8ECD: push    ebx
0x7F8ECE: mov     ecx, edi
0x7F8ED0: call    sub_7F6A30
0x7F8ED5: mov     eax, [esp+98h+var_7C]
0x7F8ED9: mov     edi, [eax+38h]
0x7F8EDC: lea     ecx, [esp+98h+var_60]
0x7F8EE0: push    ecx
0x7F8EE1: mov     ecx, ebx
0x7F8EE3: call    sub_7016D0
0x7F8EE8: mov     eax, [eax]
0x7F8EEA: mov     edx, [ebp+0]
0x7F8EED: mov     edx, [edx+28h]
0x7F8EF0: lea     ecx, [esp+98h+var_50]
0x7F8EF4: push    ecx
0x7F8EF5: lea     ecx, [esp+9Ch+var_40]
0x7F8EF9: push    ecx
0x7F8EFA: push    eax
0x7F8EFB: push    esi
0x7F8EFC: push    edi
0x7F8EFD: push    0
0x7F8EFF: push    ebx
0x7F8F00: mov     ecx, ebp
0x7F8F02: mov     [esp+0B4h+var_4], 0
0x7F8F0D: call    edx
0x7F8F0F: mov     eax, [esp+98h+var_60]
0x7F8F13: test    eax, eax
0x7F8F15: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F8F20: jz      short loc_7F8F44
0x7F8F22: mov     [esp+98h+var_64], eax
0x7F8F26: add     eax, 4
0x7F8F29: push    eax; lpAddend
0x7F8F2A: call    dword ptr ds:0A2807Ch
0x7F8F30: test    eax, eax
0x7F8F32: jnz     short loc_7F8F44
0x7F8F34: mov     ecx, [esp+98h+var_64]
0x7F8F38: test    ecx, ecx
0x7F8F3A: jz      short loc_7F8F44
0x7F8F3C: mov     eax, [ecx]
0x7F8F3E: mov     edx, [eax]
0x7F8F40: push    1
0x7F8F42: call    edx
0x7F8F44: lea     eax, [esp+98h+var_60]
0x7F8F48: push    eax
0x7F8F49: mov     ecx, ebx
0x7F8F4B: call    sub_7016D0
0x7F8F50: mov     eax, [eax]
0x7F8F52: mov     edx, [ebp+0]
0x7F8F55: mov     edx, [edx+2Ch]
0x7F8F58: lea     ecx, [esp+98h+var_50]
0x7F8F5C: push    ecx
0x7F8F5D: lea     ecx, [esp+9Ch+var_40]
0x7F8F61: push    ecx
0x7F8F62: push    eax
0x7F8F63: push    esi
0x7F8F64: push    edi
0x7F8F65: push    0
0x7F8F67: push    ebx
0x7F8F68: mov     ecx, ebp
0x7F8F6A: mov     [esp+0B4h+var_4], 1
0x7F8F75: call    edx
0x7F8F77: mov     eax, [esp+98h+var_60]
0x7F8F7B: test    eax, eax
0x7F8F7D: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F8F88: jz      short loc_7F8FAC
0x7F8F8A: mov     [esp+98h+var_64], eax
0x7F8F8E: add     eax, 4
0x7F8F91: push    eax; lpAddend
0x7F8F92: call    dword ptr ds:0A2807Ch
0x7F8F98: test    eax, eax
0x7F8F9A: jnz     short loc_7F8FAC
0x7F8F9C: mov     ecx, [esp+98h+var_64]
0x7F8FA0: test    ecx, ecx
0x7F8FA2: jz      short loc_7F8FAC
0x7F8FA4: mov     eax, [ecx]
0x7F8FA6: mov     edx, [eax]
0x7F8FA8: push    1
0x7F8FAA: call    edx
0x7F8FAC: mov     eax, [ebp+0]
0x7F8FAF: mov     edx, [eax+48h]
0x7F8FB2: mov     ecx, ebp
0x7F8FB4: call    edx
0x7F8FB6: mov     eax, [ebp+3Ch]
0x7F8FB9: lea     ecx, [esp+98h+var_64]
0x7F8FBD: push    ecx
0x7F8FBE: mov     ecx, ebx
0x7F8FC0: mov     [esp+9Ch+var_60], eax
0x7F8FC4: call    sub_7016D0
0x7F8FC9: mov     eax, [eax]
0x7F8FCB: mov     edx, [ebp+0]
0x7F8FCE: mov     edx, [edx+30h]
0x7F8FD1: lea     ecx, [esp+98h+var_50]
0x7F8FD5: push    ecx
0x7F8FD6: lea     ecx, [esp+9Ch+var_40]
0x7F8FDA: push    ecx
0x7F8FDB: push    eax
0x7F8FDC: push    esi
0x7F8FDD: push    edi
0x7F8FDE: push    0
0x7F8FE0: push    ebx
0x7F8FE1: mov     ecx, ebp
0x7F8FE3: mov     [esp+0B4h+var_4], 2
0x7F8FEE: call    edx
0x7F8FF0: mov     eax, [esp+98h+var_64]
0x7F8FF4: test    eax, eax
0x7F8FF6: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F9001: jz      short loc_7F9025
0x7F9003: mov     [esp+98h+var_78], eax
0x7F9007: add     eax, 4
0x7F900A: push    eax; lpAddend
0x7F900B: call    dword ptr ds:0A2807Ch
0x7F9011: test    eax, eax
0x7F9013: jnz     short loc_7F9025
0x7F9015: mov     ecx, [esp+98h+var_78]
0x7F9019: test    ecx, ecx
0x7F901B: jz      short loc_7F9025
0x7F901D: mov     eax, [ecx]
0x7F901F: mov     edx, [eax]
0x7F9021: push    1
0x7F9023: call    edx
0x7F9025: lea     eax, [esp+98h+var_64]
0x7F9029: push    eax
0x7F902A: mov     ecx, ebx
0x7F902C: call    sub_7016D0
0x7F9031: mov     eax, [eax]
0x7F9033: mov     edx, [ebp+0]
0x7F9036: mov     edx, [edx+34h]
0x7F9039: lea     ecx, [esp+98h+var_50]
0x7F903D: push    ecx
0x7F903E: lea     ecx, [esp+9Ch+var_40]
0x7F9042: push    ecx
0x7F9043: push    eax
0x7F9044: push    esi
0x7F9045: push    edi
0x7F9046: push    0
0x7F9048: push    0
0x7F904A: push    ebx
0x7F904B: mov     ecx, ebp
0x7F904D: mov     [esp+0B8h+var_4], 3
0x7F9058: call    edx
0x7F905A: mov     eax, [esp+98h+var_64]
0x7F905E: test    eax, eax
0x7F9060: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F906B: jz      short loc_7F908F
0x7F906D: mov     [esp+98h+var_78], eax
0x7F9071: add     eax, 4
0x7F9074: push    eax; lpAddend
0x7F9075: call    dword ptr ds:0A2807Ch
0x7F907B: test    eax, eax
0x7F907D: jnz     short loc_7F908F
0x7F907F: mov     ecx, [esp+98h+var_78]
0x7F9083: test    ecx, ecx
0x7F9085: jz      short loc_7F908F
0x7F9087: mov     eax, [ecx]
0x7F9089: mov     edx, [eax]
0x7F908B: push    1
0x7F908D: call    edx
0x7F908F: mov     eax, [ebp+0]
0x7F9092: mov     edx, [eax+3Ch]
0x7F9095: push    esi
0x7F9096: push    edi
0x7F9097: push    0
0x7F9099: push    ebx
0x7F909A: mov     ecx, ebp
0x7F909C: call    edx
0x7F909E: lea     eax, [esp+98h+var_64]
0x7F90A2: push    eax
0x7F90A3: mov     ecx, ebx
0x7F90A5: call    sub_7016D0
0x7F90AA: mov     eax, [eax]
0x7F90AC: mov     edx, [ebp+0]
0x7F90AF: mov     edx, [edx+38h]
0x7F90B2: lea     ecx, [esp+98h+var_50]
0x7F90B6: push    ecx
0x7F90B7: lea     ecx, [esp+9Ch+var_40]
0x7F90BB: push    ecx
0x7F90BC: push    eax
0x7F90BD: push    esi
0x7F90BE: push    edi
0x7F90BF: push    0
0x7F90C1: push    0
0x7F90C3: push    ebx
0x7F90C4: mov     ecx, ebp
0x7F90C6: mov     [esp+0B8h+var_4], 4
0x7F90D1: call    edx
0x7F90D3: mov     eax, [esp+98h+var_64]
0x7F90D7: test    eax, eax
0x7F90D9: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F90E4: jz      short loc_7F9104
0x7F90E6: mov     esi, eax
0x7F90E8: add     eax, 4
0x7F90EB: push    eax; lpAddend
0x7F90EC: call    dword ptr ds:0A2807Ch
0x7F90F2: test    eax, eax
0x7F90F4: jnz     short loc_7F9104
0x7F90F6: test    esi, esi
0x7F90F8: jz      short loc_7F9104
0x7F90FA: mov     eax, [esi]
0x7F90FC: mov     edx, [eax]
0x7F90FE: push    1
0x7F9100: mov     ecx, esi
0x7F9102: call    edx
0x7F9104: mov     ecx, ds:0B3F928h
0x7F910A: mov     eax, [ebx]
0x7F910C: mov     edx, [eax+88h]
0x7F9112: push    ecx
0x7F9113: mov     ecx, ebx
0x7F9115: call    edx
0x7F9117: mov     eax, [esp+98h+arg_4]
0x7F911E: push    eax
0x7F911F: call    sub_7D1800
0x7F9124: mov     edx, ds:0B28CB0h
0x7F912A: mov     ecx, [esp+9Ch+var_7C]
0x7F912E: lea     eax, ds:0[edx*4]
0x7F9135: mov     [esp+9Ch+var_5C], ecx
0x7F9139: mov     ecx, [esp+9Ch+var_80]
0x7F913D: mov     edx, [ecx]
0x7F913F: push    eax
0x7F9140: push    0
0x7F9142: push    edx
0x7F9143: call    __memset
0x7F9148: mov     edx, ds:0B430A8h
0x7F914E: mov     edi, [esp+0A8h+var_70]
0x7F9152: mov     eax, [edi+280h]
0x7F9158: mov     ecx, [eax]
0x7F915A: add     esp, 10h
0x7F915D: push    edx
0x7F915E: push    8
0x7F9160: push    0
0x7F9162: push    eax
0x7F9163: mov     eax, [ecx+114h]
0x7F9169: call    eax
0x7F916B: mov     eax, [esp+98h+var_74]
0x7F916F: test    eax, eax
0x7F9171: jz      loc_7F93A0
0x7F9177: jmp     short loc_7F9184
0x7F9179: align 10h
0x7F9180: mov     eax, [esp+98h+var_74]
0x7F9184: mov     edx, [eax]
0x7F9186: lea     ecx, [eax+8]
0x7F9189: mov     eax, [ecx]
0x7F918B: movzx   ecx, word ptr [esp+98h+arg_4]
0x7F9193: mov     ds:0B42E90h, ecx
0x7F9199: mov     ds:0B42EB8h, eax
0x7F919E: mov     ebx, [eax]
0x7F91A0: mov     eax, [ebx+0B4h]
0x7F91A6: lea     ecx, [esp+98h+var_58]
0x7F91AA: push    ecx
0x7F91AB: mov     ecx, ebx
0x7F91AD: mov     [esp+9Ch+var_74], edx
0x7F91B1: mov     [esp+9Ch+var_7C], eax
0x7F91B5: call    sub_405760
0x7F91BA: mov     esi, [eax]
0x7F91BC: mov     eax, [esp+98h+var_58]
0x7F91C0: test    eax, eax
0x7F91C2: mov     [esp+98h+var_78], esi
0x7F91C6: jz      short loc_7F91E6
0x7F91C8: mov     edi, eax
0x7F91CA: add     eax, 4
0x7F91CD: push    eax; lpAddend
0x7F91CE: call    dword ptr ds:0A2807Ch
0x7F91D4: test    eax, eax
0x7F91D6: jnz     short loc_7F91E6
0x7F91D8: test    edi, edi
0x7F91DA: jz      short loc_7F91E6
0x7F91DC: mov     edx, [edi]
0x7F91DE: mov     eax, [edx]
0x7F91E0: push    1
0x7F91E2: mov     ecx, edi
0x7F91E4: call    eax
0x7F91E6: mov     ecx, [esi+18h]
0x7F91E9: mov     [esp+98h+var_64], ecx
0x7F91ED: lea     esi, [ebx+64h]
0x7F91F0: mov     ecx, 0Dh
0x7F91F5: lea     edi, [esp+98h+var_40]
0x7F91F9: rep movsd
0x7F91FB: mov     edx, [ebx+20h]
0x7F91FE: mov     edi, [esp+98h+var_7C]
0x7F9202: cmp     [esp+98h+var_5C], edi
0x7F9206: mov     esi, [esp+98h+var_80]
0x7F920A: mov     [esp+98h+var_50], edx
0x7F920E: mov     eax, [ebx+24h]
0x7F9211: mov     [esp+98h+var_4C], eax
0x7F9215: mov     ecx, [ebx+28h]
0x7F9218: mov     [esp+98h+var_48], ecx
0x7F921C: mov     edx, [ebx+2Ch]
0x7F921F: mov     [esp+98h+var_44], edx
0x7F9223: jz      loc_7F931E
0x7F9229: cmp     byte ptr [esp+98h+var_84+3], 0
0x7F922E: jz      short loc_7F9251
0x7F9230: mov     eax, [esp+98h+var_6C]
0x7F9234: mov     ecx, [esp+98h+var_68]
0x7F9238: mov     edx, [esp+98h+arg_4]
0x7F923F: push    ebp
0x7F9240: push    eax
0x7F9241: push    ecx
0x7F9242: push    0
0x7F9244: push    edx
0x7F9245: mov     ecx, esi
0x7F9247: call    sub_7F68C0
0x7F924C: mov     byte ptr [esp+98h+var_84+3], 0
0x7F9251: push    ebx
0x7F9252: mov     ecx, esi
0x7F9254: call    sub_7F6A30
0x7F9259: mov     eax, [esp+98h+var_64]
0x7F925D: mov     ecx, [esp+98h+var_78]
0x7F9261: mov     edx, [esp+98h+arg_4]
0x7F9268: mov     edi, [edi+38h]
0x7F926B: push    ebp
0x7F926C: push    eax
0x7F926D: push    ecx
0x7F926E: push    edx
0x7F926F: push    ebx
0x7F9270: mov     ecx, esi
0x7F9272: call    sub_7F6AE0
0x7F9277: lea     eax, [esp+98h+var_54]
0x7F927B: push    eax
0x7F927C: mov     ecx, ebx
0x7F927E: call    sub_7016D0
0x7F9283: mov     eax, [eax]
0x7F9285: mov     edx, [ebp+0]
0x7F9288: mov     edx, [edx+34h]
0x7F928B: lea     ecx, [esp+98h+var_50]
0x7F928F: push    ecx
0x7F9290: lea     ecx, [esp+9Ch+var_40]
0x7F9294: push    ecx
0x7F9295: push    eax
0x7F9296: mov     eax, [esp+0A4h+var_78]
0x7F929A: push    eax
0x7F929B: push    edi
0x7F929C: push    0
0x7F929E: push    0
0x7F92A0: push    ebx
0x7F92A1: mov     ecx, ebp
0x7F92A3: mov     [esp+0B8h+var_4], 5
0x7F92AE: call    edx
0x7F92B0: mov     eax, dword ptr [esp+98h+var_54]
0x7F92B4: test    eax, eax
0x7F92B6: mov     [esp+98h+var_4], 0FFFFFFFFh
0x7F92C1: jz      short loc_7F92E5
0x7F92C3: mov     [esp+98h+var_5C], eax
0x7F92C7: add     eax, 4
0x7F92CA: push    eax; lpAddend
0x7F92CB: call    dword ptr ds:0A2807Ch
0x7F92D1: test    eax, eax
0x7F92D3: jnz     short loc_7F92E5
0x7F92D5: mov     ecx, [esp+98h+var_5C]
0x7F92D9: test    ecx, ecx
0x7F92DB: jz      short loc_7F92E5
0x7F92DD: mov     eax, [ecx]
0x7F92DF: mov     edx, [eax]
0x7F92E1: push    1
0x7F92E3: call    edx
0x7F92E5: mov     ecx, [esp+98h+var_78]
0x7F92E9: mov     eax, [ebp+0]
0x7F92EC: mov     edx, [eax+3Ch]
0x7F92EF: push    ecx
0x7F92F0: push    edi
0x7F92F1: push    0
0x7F92F3: push    ebx
0x7F92F4: mov     ecx, ebp
0x7F92F6: call    edx
0x7F92F8: mov     ecx, [esp+98h+var_70]
0x7F92FC: push    0
0x7F92FE: lea     eax, [esp+9Ch+var_40]
0x7F9302: push    eax
0x7F9303: call    sub_765480
0x7F9308: mov     ecx, [esp+98h+var_60]
0x7F930C: push    1
0x7F930E: push    ecx
0x7F930F: push    ebp
0x7F9310: push    ebx
0x7F9311: mov     ecx, esi
0x7F9313: call    sub_7F6BF0
0x7F9318: mov     edi, [esp+98h+var_7C]
0x7F931C: jmp     short loc_7F938D
0x7F931E: cmp     byte ptr [esp+98h+var_84+3], 0
0x7F9323: jnz     short loc_7F9346
0x7F9325: mov     edx, [esp+98h+var_6C]
0x7F9329: mov     eax, [esp+98h+var_68]
0x7F932D: mov     ecx, [esp+98h+arg_4]
0x7F9334: push    ebp
0x7F9335: push    edx
0x7F9336: push    eax
0x7F9337: push    1
0x7F9339: push    ecx
0x7F933A: mov     ecx, esi
0x7F933C: call    sub_7F68C0
0x7F9341: mov     byte ptr [esp+98h+var_84+3], 1
0x7F9346: lea     edx, [esp+98h+var_40]
0x7F934A: push    edx
0x7F934B: mov     ecx, ebp
0x7F934D: call    sub_7C8520
0x7F9352: mov     eax, [esp+98h+var_64]
0x7F9356: mov     ecx, [esp+98h+var_78]
0x7F935A: mov     edx, [esp+98h+arg_4]
0x7F9361: push    ebp
0x7F9362: push    eax
0x7F9363: push    ecx
0x7F9364: push    edx
0x7F9365: push    ebx
0x7F9366: mov     ecx, esi
0x7F9368: call    sub_7F6AE0
0x7F936D: mov     ecx, [esp+98h+var_70]
0x7F9371: push    0
0x7F9373: lea     eax, [esp+9Ch+var_40]
0x7F9377: push    eax
0x7F9378: call    sub_765480
0x7F937D: mov     ecx, [esp+98h+var_60]
0x7F9381: push    1
0x7F9383: push    ecx
0x7F9384: push    ebp
0x7F9385: push    ebx
0x7F9386: mov     ecx, esi
0x7F9388: call    sub_7F6BF0
0x7F938D: cmp     [esp+98h+var_74], 0
0x7F9392: mov     [esp+98h+var_5C], edi
0x7F9396: jnz     loc_7F9180
0x7F939C: mov     edi, [esp+98h+var_70]
0x7F93A0: mov     esi, [esp+98h+arg_0]
0x7F93A7: mov     ecx, esi
0x7F93A9: call    sub_7A9C30
0x7F93AE: mov     edx, [esi+4]
0x7F93B1: xor     ebx, ebx
0x7F93B3: mov     [esi+0Ch], edx
0x7F93B6: mov     [esi+4], ebx
0x7F93B9: mov     [esi+8], ebx
0x7F93BC: mov     [esi+10h], ebx
0x7F93BF: mov     eax, [ebp+0]
0x7F93C2: mov     edx, [eax+4Ch]
0x7F93C5: mov     ecx, ebp
0x7F93C7: call    edx
0x7F93C9: mov     ecx, [edi+8ACh]
0x7F93CF: mov     eax, [ecx]
0x7F93D1: mov     edx, [eax+0FCh]
0x7F93D7: push    ebx
0x7F93D8: call    edx
0x7F93DA: mov     edi, [edi+280h]
0x7F93E0: mov     eax, [edi]
0x7F93E2: mov     ecx, [eax+114h]
0x7F93E8: push    ebx
0x7F93E9: push    8
0x7F93EB: push    ebx
0x7F93EC: push    edi
0x7F93ED: call    ecx
0x7F93EF: mov     ecx, dword ptr [esp+98h+var_C]
0x7F93F6: mov     large fs:0, ecx
0x7F93FD: pop     ecx
0x7F93FE: pop     edi
0x7F93FF: pop     esi
0x7F9400: pop     ebp
0x7F9401: pop     ebx
0x7F9402: add     esp, 84h
0x7F9408: retn    8
