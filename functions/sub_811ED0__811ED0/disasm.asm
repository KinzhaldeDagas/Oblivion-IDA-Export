0x811ED0: push    0FFFFFFFFh
0x811ED2: push    offset SEH_80E9A0
0x811ED7: mov     eax, large fs:0
0x811EDD: push    eax
0x811EDE: sub     esp, 28h
0x811EE1: push    ebx
0x811EE2: push    ebp
0x811EE3: push    esi
0x811EE4: push    edi
0x811EE5: mov     eax, ds:0B30AACh
0x811EEA: xor     eax, esp
0x811EEC: push    eax
0x811EED: lea     eax, [esp+48h+var_C]
0x811EF1: mov     large fs:0, eax
0x811EF7: mov     edi, ecx
0x811EF9: mov     eax, [edi]
0x811EFB: mov     edx, [eax+80h]
0x811F01: call    edx
0x811F03: mov     ebp, [esp+48h+arg_C]
0x811F07: mov     ebx, [ebp+18h]
0x811F0A: xor     esi, esi
0x811F0C: cmp     ebx, esi
0x811F0E: jz      loc_812288
0x811F14: mov     eax, [ebx]
0x811F16: mov     edx, [eax+54h]
0x811F19: mov     ecx, ebx
0x811F1B: call    edx
0x811F1D: xor     ecx, ecx
0x811F1F: cmp     eax, 2
0x811F22: setz    cl
0x811F25: mov     eax, ecx
0x811F27: cmp     eax, esi
0x811F29: jz      loc_812288
0x811F2F: cmp     byte ptr ds:0B42E86h, 0
0x811F36: jz      short loc_811F73
0x811F38: fld1
0x811F3A: sub     esp, 10h
0x811F3D: mov     eax, esp
0x811F3F: fst     [esp+58h+var_2C]
0x811F43: mov     edx, [esp+58h+var_2C]
0x811F47: fst     [esp+58h+var_28]
0x811F4B: mov     ecx, [esp+58h+var_28]
0x811F4F: fst     [esp+58h+var_24]
0x811F53: mov     [eax], edx
0x811F55: fstp    [esp+58h+var_20]
0x811F59: mov     edx, [esp+58h+var_24]
0x811F5D: mov     [eax+4], ecx
0x811F60: mov     ecx, [esp+58h+var_20]
0x811F64: mov     [eax+8], edx
0x811F67: push    esi
0x811F68: mov     [eax+0Ch], ecx
0x811F6B: call    sub_7ECAE0
0x811F70: add     esp, 14h
0x811F73: cmp     [ebp+8], esi
0x811F76: fldz
0x811F78: jz      short loc_811FBA
0x811F7A: fld     dword ptr ds:0B2E148h
0x811F80: fstp    [esp+48h+var_2C]
0x811F84: mov     edx, [esp+48h+var_2C]
0x811F88: mov     [edi+0E0h], edx
0x811F8E: fst     [esp+48h+var_28]
0x811F92: mov     eax, [esp+48h+var_28]
0x811F96: fst     [esp+48h+var_24]
0x811F9A: mov     ecx, [esp+48h+var_24]
0x811F9E: fst     [esp+48h+var_20]
0x811FA2: mov     edx, [esp+48h+var_20]
0x811FA6: mov     [edi+0E4h], eax
0x811FAC: mov     [edi+0E8h], ecx
0x811FB2: mov     [edi+0ECh], edx
0x811FB8: jmp     short loc_811FE8
0x811FBA: mov     eax, ds:0B25AD0h
0x811FBF: mov     [edi+0E0h], eax
0x811FC5: mov     ecx, ds:0B25AD4h
0x811FCB: mov     [edi+0E4h], ecx
0x811FD1: mov     edx, ds:0B25AD8h
0x811FD7: mov     [edi+0E8h], edx
0x811FDD: mov     eax, ds:0B25ADCh
0x811FE2: mov     [edi+0ECh], eax
0x811FE8: mov     eax, [ebp+0Ch]
0x811FEB: cmp     eax, esi
0x811FED: jz      loc_8120A4
0x811FF3: fld     dword ptr [eax+2Ch]
0x811FF6: mov     ecx, [eax+20h]
0x811FF9: mov     edx, [eax+24h]
0x811FFC: fstp    [esp+48h+var_34]
0x812000: fld     dword ptr [eax+30h]
0x812003: mov     eax, [eax+28h]
0x812006: fstp    [esp+48h+arg_C]
0x81200A: mov     [esp+48h+var_2C], ecx
0x81200E: fld     [esp+48h+arg_C]
0x812012: mov     [esp+48h+var_28], edx
0x812016: fld     st
0x812018: mov     [esp+48h+var_24], eax
0x81201C: fsub    [esp+48h+var_34]
0x812020: fstp    [esp+48h+arg_C]
0x812024: fstp    [esp+48h+var_1C]
0x812028: mov     ecx, [esp+48h+var_1C]
0x81202C: fld     [esp+48h+arg_C]
0x812030: mov     ds:0B46638h, ecx
0x812036: fstp    [esp+48h+var_18]
0x81203A: mov     edx, [esp+48h+var_18]
0x81203E: mov     ds:0B4663Ch, edx
0x812044: fst     [esp+48h+var_14]
0x812048: mov     eax, [esp+48h+var_14]
0x81204C: fst     [esp+48h+var_10]
0x812050: mov     ecx, [esp+48h+var_10]
0x812054: fld     [esp+48h+var_2C]
0x812058: mov     ds:0B46640h, eax
0x81205D: fstp    [esp+48h+var_1C]
0x812061: mov     edx, [esp+48h+var_1C]
0x812065: fld     [esp+48h+var_28]
0x812069: mov     ds:0B46644h, ecx
0x81206F: fstp    [esp+48h+var_18]
0x812073: mov     eax, [esp+48h+var_18]
0x812077: fld     [esp+48h+var_24]
0x81207B: mov     ds:0B46648h, edx
0x812081: fstp    [esp+48h+var_14]
0x812085: mov     ecx, [esp+48h+var_14]
0x812089: mov     ds:0B4664Ch, eax
0x81208E: fstp    [esp+48h+var_10]
0x812092: mov     edx, [esp+48h+var_10]
0x812096: mov     ds:0B46650h, ecx
0x81209C: mov     ds:0B46654h, edx
0x8120A2: jmp     short loc_81210E
0x8120A4: fld     dword ptr ds:0A8C690h
0x8120AA: fstp    [esp+48h+var_1C]
0x8120AE: mov     eax, [esp+48h+var_1C]
0x8120B2: mov     ds:0B46638h, eax
0x8120B7: fst     [esp+48h+var_18]
0x8120BB: mov     ecx, [esp+48h+var_18]
0x8120BF: fst     [esp+48h+var_14]
0x8120C3: mov     edx, [esp+48h+var_14]
0x8120C7: mov     ds:0B4663Ch, ecx
0x8120CD: fstp    [esp+48h+var_10]
0x8120D1: mov     eax, [esp+48h+var_10]
0x8120D5: mov     ecx, ds:0B25AD0h
0x8120DB: mov     ds:0B46640h, edx
0x8120E1: mov     edx, ds:0B25AD4h
0x8120E7: mov     ds:0B46644h, eax
0x8120EC: mov     eax, ds:0B25AD8h
0x8120F1: mov     ds:0B46648h, ecx
0x8120F7: mov     ecx, ds:0B25ADCh
0x8120FD: mov     ds:0B4664Ch, edx
0x812103: mov     ds:0B46650h, eax
0x812108: mov     ds:0B46654h, ecx
0x81210E: mov     edx, [ebx+0A0h]
0x812114: push    ebx
0x812115: mov     ecx, edi
0x812117: mov     [esp+4Ch+a2], edx
0x81211B: call    sub_8115C0
0x812120: xor     ebp, ebp
0x812122: cmp     dword ptr ds:0B42F48h, 2
0x812129: mov     [esp+48h+var_34], esi
0x81212D: jl      short loc_81213C
0x81212F: mov     ebp, 2
0x812134: mov     [esp+48h+var_34], 1
0x81213C: mov     [esp+48h+arg_C], esi
0x812140: mov     eax, [edi+7Ch]
0x812143: mov     eax, [eax+24h]
0x812146: mov     eax, [eax]
0x812148: test    eax, eax
0x81214A: mov     [esp+48h+var_4], esi
0x81214E: lea     esi, [edi+7Ch]
0x812151: jz      short loc_81215B
0x812153: add     dword ptr [eax+5Ch], 1
0x812157: mov     [esp+48h+arg_C], eax
0x81215B: mov     ecx, [esp+48h+a2]
0x81215F: push    ecx; a2
0x812160: mov     ecx, [esp+4Ch+arg_C]; this
0x812164: call    sub_76C910
0x812169: test    dword ptr [ebx+1Ch], 2000h
0x812170: mov     ecx, [esi]; this
0x812172: jbe     short loc_812180
0x812174: movzx   edx, bp
0x812177: mov     eax, [edi+edx*4+90h]
0x81217E: jmp     short loc_81218A
0x812180: movzx   eax, bp
0x812183: mov     eax, [edi+eax*4+8Ch]
0x81218A: push    eax; a2
0x81218B: call    sub_7AECB0
0x812190: movzx   ecx, word ptr [esp+48h+var_34]
0x812195: mov     eax, [edi+ecx*4+9Ch]
0x81219C: mov     ecx, [esi]; this
0x81219E: push    eax; a2
0x81219F: call    sub_7AEC60
0x8121A4: cmp     word ptr ds:0B42EACh, 4
0x8121AC: mov     ebx, [esi]
0x8121AE: jnz     loc_812242
0x8121B4: cmp     dword ptr [ebx+30h], 0
0x8121B8: jnz     short loc_8121C2
0x8121BA: call    sub_772DF0
0x8121BF: mov     [ebx+30h], eax
0x8121C2: mov     ecx, [ebx+30h]
0x8121C5: push    0
0x8121C7: push    1
0x8121C9: push    34h ; '4'
0x8121CB: call    sub_772CD0
0x8121D0: mov     ebx, [esi]
0x8121D2: cmp     dword ptr [ebx+30h], 0
0x8121D6: jnz     short loc_8121E0
0x8121D8: call    sub_772DF0
0x8121DD: mov     [ebx+30h], eax
0x8121E0: mov     ecx, [ebx+30h]
0x8121E3: push    0
0x8121E5: push    8
0x8121E7: push    38h ; '8'
0x8121E9: call    sub_772CD0
0x8121EE: mov     ebx, [esi]
0x8121F0: cmp     dword ptr [ebx+30h], 0
0x8121F4: jnz     short loc_8121FE
0x8121F6: call    sub_772DF0
0x8121FB: mov     [ebx+30h], eax
0x8121FE: mov     ecx, [ebx+30h]
0x812201: push    0
0x812203: push    7
0x812205: push    37h ; '7'
0x812207: call    sub_772CD0
0x81220C: mov     ebx, [esi]
0x81220E: cmp     dword ptr [ebx+30h], 0
0x812212: jnz     short loc_81221C
0x812214: call    sub_772DF0
0x812219: mov     [ebx+30h], eax
0x81221C: mov     ecx, [ebx+30h]
0x81221F: push    0
0x812221: push    1
0x812223: push    35h ; '5'
0x812225: call    sub_772CD0
0x81222A: mov     ebx, [esi]
0x81222C: cmp     dword ptr [ebx+30h], 0
0x812230: jnz     short loc_81223A
0x812232: call    sub_772DF0
0x812237: mov     [ebx+30h], eax
0x81223A: push    0
0x81223C: push    1
0x81223E: push    36h ; '6'
0x812240: jmp     short loc_812256
0x812242: cmp     dword ptr [ebx+30h], 0
0x812246: jnz     short loc_812250
0x812248: call    sub_772DF0
0x81224D: mov     [ebx+30h], eax
0x812250: push    0
0x812252: push    0
0x812254: push    34h ; '4'
0x812256: mov     ecx, [ebx+30h]
0x812259: call    sub_772CD0
0x81225E: mov     edx, [edi+38h]
0x812261: push    esi
0x812262: push    edx
0x812263: lea     ecx, [edi+40h]
0x812266: call    sub_76CE40
0x81226B: mov     ecx, [esp+48h+arg_C]
0x81226F: add     dword ptr [edi+38h], 1
0x812273: or      eax, 0FFFFFFFFh
0x812276: test    ecx, ecx
0x812278: mov     [esp+48h+var_4], eax
0x81227C: jz      short loc_812288
0x81227E: add     [ecx+5Ch], eax
0x812281: jnz     short loc_812288
0x812283: call    sub_772560
0x812288: xor     eax, eax
0x81228A: mov     ecx, [esp+48h+var_C]
0x81228E: mov     large fs:0, ecx
0x812295: pop     ecx
0x812296: pop     edi
0x812297: pop     esi
0x812298: pop     ebp
0x812299: pop     ebx
0x81229A: add     esp, 34h
0x81229D: retn    1Ch
