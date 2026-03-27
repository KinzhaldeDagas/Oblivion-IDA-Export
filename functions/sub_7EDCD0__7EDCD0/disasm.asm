0x7EDCD0: mov     ecx, [esp+arg_0]
0x7EDCD4: sub     esp, 38h
0x7EDCD7: cmp     ecx, 14h
0x7EDCDA: push    ebx
0x7EDCDB: push    ebp
0x7EDCDC: push    esi
0x7EDCDD: push    edi
0x7EDCDE: jge     loc_7EE1C1
0x7EDCE4: mov     ebp, [esp+48h+arg_4]
0x7EDCE8: test    ebp, ebp
0x7EDCEA: jnz     short loc_7EDD25
0x7EDCEC: mov     edx, ds:0B25AD0h
0x7EDCF2: sub     esp, 10h
0x7EDCF5: mov     eax, esp
0x7EDCF7: mov     [eax], edx
0x7EDCF9: mov     edx, ds:0B25AD4h
0x7EDCFF: mov     [eax+4], edx
0x7EDD02: mov     edx, ds:0B25AD8h
0x7EDD08: mov     [eax+8], edx
0x7EDD0B: mov     edx, ds:0B25ADCh
0x7EDD11: push    ecx
0x7EDD12: mov     [eax+0Ch], edx
0x7EDD15: call    sub_7FAB00
0x7EDD1A: add     esp, 14h
0x7EDD1D: pop     edi
0x7EDD1E: pop     esi
0x7EDD1F: pop     ebp
0x7EDD20: pop     ebx
0x7EDD21: add     esp, 38h
0x7EDD24: retn
0x7EDD25: lea     eax, [esp+48h+var_34]
0x7EDD29: push    eax
0x7EDD2A: mov     ecx, ebp
0x7EDD2C: call    sub_405AD0
0x7EDD31: mov     esi, [eax]
0x7EDD33: mov     eax, [esp+48h+var_34]
0x7EDD37: test    eax, eax
0x7EDD39: jz      short loc_7EDD59
0x7EDD3B: mov     edi, eax
0x7EDD3D: add     eax, 4
0x7EDD40: push    eax; lpAddend
0x7EDD41: call    dword ptr ds:0A2807Ch
0x7EDD47: test    eax, eax
0x7EDD49: jnz     short loc_7EDD59
0x7EDD4B: test    edi, edi
0x7EDD4D: jz      short loc_7EDD59
0x7EDD4F: mov     edx, [edi]
0x7EDD51: mov     eax, [edx]
0x7EDD53: push    1
0x7EDD55: mov     ecx, edi
0x7EDD57: call    eax
0x7EDD59: mov     bl, [ebp+0FCh]
0x7EDD5F: fld     [esp+48h+arg_8]
0x7EDD63: test    bl, bl
0x7EDD65: jnz     loc_7EDF0D
0x7EDD6B: test    esi, esi
0x7EDD6D: jz      short loc_7EDDE9
0x7EDD6F: mov     ecx, [esi+108h]
0x7EDD75: fstp    st
0x7EDD77: mov     edx, [esi+10Ch]
0x7EDD7D: mov     eax, [esi+110h]
0x7EDD83: mov     [esp+48h+var_1C], ecx
0x7EDD87: lea     ecx, [esp+48h+var_1C]
0x7EDD8B: mov     [esp+48h+var_18], edx
0x7EDD8F: mov     [esp+48h+var_14], eax
0x7EDD93: call    sub_43F350
0x7EDD98: fstp    st
0x7EDD9A: fld     [esp+48h+var_1C]
0x7EDD9E: sub     esp, 10h
0x7EDDA1: fstp    [esp+58h+var_2C]
0x7EDDA5: mov     ecx, [esp+58h+var_2C]
0x7EDDA9: fld     [esp+58h+var_18]
0x7EDDAD: mov     eax, esp
0x7EDDAF: fstp    [esp+58h+var_28]
0x7EDDB3: mov     edx, [esp+58h+var_28]
0x7EDDB7: fld     [esp+58h+var_14]
0x7EDDBB: mov     [eax], ecx
0x7EDDBD: fstp    [esp+58h+var_24]
0x7EDDC1: mov     ecx, [esp+58h+var_24]
0x7EDDC5: fld1
0x7EDDC7: mov     [eax+4], edx
0x7EDDCA: fstp    [esp+58h+var_20]
0x7EDDCE: mov     [eax+8], ecx
0x7EDDD1: mov     edx, [esp+58h+var_20]
0x7EDDD5: mov     [eax+0Ch], edx
0x7EDDD8: mov     eax, [esp+58h+arg_0]
0x7EDDDC: push    eax
0x7EDDDD: call    sub_7FAAD0
0x7EDDE2: fld     [esp+5Ch+arg_8]
0x7EDDE6: add     esp, 14h
0x7EDDE9: cmp     byte ptr ds:0B42EA7h, 0
0x7EDDF0: jz      short loc_7EDE0E
0x7EDDF2: push    esi
0x7EDDF3: fstp    st
0x7EDDF5: push    offset dword_B40224
0x7EDDFA: call    NiRTTI__IsObjectOfRTTIType
0x7EDDFF: add     esp, 8
0x7EDE02: test    al, al
0x7EDE04: jz      loc_7EE053
0x7EDE0A: fld     [esp+48h+arg_8]
0x7EDE0E: cmp     byte ptr ds:0B43070h, 0
0x7EDE15: fld     dword ptr ds:0B46924h
0x7EDE1B: fstp    [esp+48h+var_30]
0x7EDE1F: fld     dword ptr [esi+0DCh]
0x7EDE25: fstp    [esp+48h+var_38]
0x7EDE29: fld     [esp+48h+var_38]
0x7EDE2D: jnz     short loc_7EDE48
0x7EDE2F: fcom    qword ptr ds:0A2F928h
0x7EDE35: fnstsw  ax
0x7EDE37: test    ah, 41h
0x7EDE3A: jnz     short loc_7EDE48
0x7EDE3C: fstp    st
0x7EDE3E: fld1
0x7EDE40: fstp    [esp+48h+var_38]
0x7EDE44: fld     [esp+48h+var_38]
0x7EDE48: mov     ecx, [esi+0E0h]
0x7EDE4E: mov     edx, [esi+0E4h]
0x7EDE54: mov     eax, [esi+0E8h]
0x7EDE5A: mov     [esp+48h+var_2C], ecx
0x7EDE5E: fld     [esp+48h+var_2C]
0x7EDE62: fmul    st, st(1)
0x7EDE64: mov     [esp+48h+var_28], edx
0x7EDE68: mov     [esp+48h+var_24], eax
0x7EDE6C: fstp    [esp+48h+var_2C]
0x7EDE70: fld     [esp+48h+var_28]
0x7EDE74: fmul    st, st(1)
0x7EDE76: fstp    [esp+48h+var_28]
0x7EDE7A: fmul    [esp+48h+var_24]
0x7EDE7E: fstp    [esp+48h+var_24]
0x7EDE82: fldz
0x7EDE84: fcom    [esp+48h+var_30]
0x7EDE88: fnstsw  ax
0x7EDE8A: test    ah, 5
0x7EDE8D: jp      loc_7EDFEF
0x7EDE93: fld     [esp+48h+var_28]
0x7EDE97: fld     qword ptr ds:0A924F8h
0x7EDE9D: fmul    st, st(1)
0x7EDE9F: fld     [esp+48h+var_2C]
0x7EDEA3: fld     st
0x7EDEA5: fld     qword ptr ds:0A924F0h
0x7EDEAB: fmul    st(1), st
0x7EDEAD: fxch    st(3)
0x7EDEAF: faddp   st(1), st
0x7EDEB1: fld     [esp+48h+var_24]
0x7EDEB5: fld     st
0x7EDEB7: faddp   st(2), st
0x7EDEB9: fxch    st(1)
0x7EDEBB: faddp   st(3), st
0x7EDEBD: fxch    st(2)
0x7EDEBF: fstp    [esp+48h+var_30]
0x7EDEC3: fld     [esp+48h+var_30]
0x7EDEC7: fcom    st(4)
0x7EDEC9: fnstsw  ax
0x7EDECB: fstp    st(4)
0x7EDECD: test    ah, 41h
0x7EDED0: jp      loc_7EDFA5
0x7EDED6: fstp    st(3)
0x7EDED8: fstp    st(2)
0x7EDEDA: fstp    st
0x7EDEDC: fstp    st
0x7EDEDE: fld     dword ptr ds:0B46924h
0x7EDEE4: fst     [esp+48h+var_1C]
0x7EDEE8: fst     [esp+48h+var_18]
0x7EDEEC: mov     ecx, [esp+48h+var_1C]
0x7EDEF0: fstp    [esp+48h+var_14]
0x7EDEF4: mov     edx, [esp+48h+var_18]
0x7EDEF8: mov     eax, [esp+48h+var_14]
0x7EDEFC: mov     [esp+48h+var_2C], ecx
0x7EDF00: mov     [esp+48h+var_28], edx
0x7EDF04: mov     [esp+48h+var_24], eax
0x7EDF08: jmp     loc_7EDFF1
0x7EDF0D: test    esi, esi
0x7EDF0F: jz      loc_7EE057
0x7EDF15: mov     ecx, [esi+88h]
0x7EDF1B: fstp    st
0x7EDF1D: mov     edx, [esi+8Ch]
0x7EDF23: mov     eax, [esi+90h]
0x7EDF29: mov     [esp+48h+var_1C], ecx
0x7EDF2D: fld     [esp+48h+var_1C]
0x7EDF31: mov     ecx, [esi+0F8h]
0x7EDF37: fstp    [esp+48h+var_10]
0x7EDF3B: mov     [esp+48h+var_18], edx
0x7EDF3F: fld     [esp+48h+var_18]
0x7EDF43: mov     edx, [esi+0FCh]
0x7EDF49: fstp    [esp+48h+var_C]
0x7EDF4D: mov     [esp+48h+var_14], eax
0x7EDF51: fld     [esp+48h+var_14]
0x7EDF55: mov     eax, [esi+100h]
0x7EDF5B: fstp    [esp+48h+var_8]
0x7EDF5F: mov     [esp+48h+var_2C], ecx
0x7EDF63: fld     [esp+48h+var_2C]
0x7EDF67: mov     ecx, [esp+48h+var_10]
0x7EDF6B: fstp    [esp+48h+var_4]
0x7EDF6F: mov     [esp+48h+var_24], eax
0x7EDF73: sub     esp, 10h
0x7EDF76: mov     eax, esp
0x7EDF78: mov     [eax], ecx
0x7EDF7A: mov     ecx, [esp+58h+var_8]
0x7EDF7E: mov     [esp+58h+var_28], edx
0x7EDF82: mov     edx, [esp+58h+var_C]
0x7EDF86: mov     [eax+4], edx
0x7EDF89: mov     edx, [esp+58h+var_4]
0x7EDF8D: mov     [eax+8], ecx
0x7EDF90: mov     [eax+0Ch], edx
0x7EDF93: mov     eax, [esp+58h+arg_0]
0x7EDF97: push    eax
0x7EDF98: call    sub_7FAAD0
0x7EDF9D: add     esp, 14h
0x7EDFA0: jmp     loc_7EE053
0x7EDFA5: fld     dword ptr ds:0B46924h
0x7EDFAB: fcom    st(4)
0x7EDFAD: fnstsw  ax
0x7EDFAF: test    ah, 5
0x7EDFB2: jp      short loc_7EDFBC
0x7EDFB4: fstp    st(4)
0x7EDFB6: fstp    st(3)
0x7EDFB8: fld1
0x7EDFBA: jmp     short loc_7EDFC0
0x7EDFBC: fdivrp  st(4), st
0x7EDFBE: fxch    st(3)
0x7EDFC0: fstp    [esp+48h+var_30]
0x7EDFC4: fld     qword ptr ds:0A2FC80h
0x7EDFCA: fadd    st(3), st
0x7EDFCC: fld     [esp+48h+var_30]
0x7EDFD0: fld     st
0x7EDFD2: fmulp   st(5), st
0x7EDFD4: fxch    st(4)
0x7EDFD6: fstp    [esp+48h+var_1C]
0x7EDFDA: fadd    st(2), st
0x7EDFDC: fld     st(3)
0x7EDFDE: fmulp   st(3), st
0x7EDFE0: fxch    st(2)
0x7EDFE2: fstp    [esp+48h+var_18]
0x7EDFE6: faddp   st(1), st
0x7EDFE8: fmulp   st(1), st
0x7EDFEA: jmp     loc_7EDEEC
0x7EDFEF: fstp    st
0x7EDFF1: fld     [esp+48h+var_2C]
0x7EDFF5: sub     esp, 10h
0x7EDFF8: fmul    st, st(1)
0x7EDFFA: mov     eax, esp
0x7EDFFC: fstp    [esp+58h+var_2C]
0x7EE000: fld     [esp+58h+var_28]
0x7EE004: fmul    st, st(1)
0x7EE006: fstp    [esp+58h+var_28]
0x7EE00A: fmul    [esp+58h+var_24]
0x7EE00E: fstp    [esp+58h+var_24]
0x7EE012: fld     [esp+58h+var_2C]
0x7EE016: fstp    [esp+58h+var_10]
0x7EE01A: mov     ecx, [esp+58h+var_10]
0x7EE01E: fld     [esp+58h+var_28]
0x7EE022: mov     [eax], ecx
0x7EE024: fstp    [esp+58h+var_C]
0x7EE028: mov     edx, [esp+58h+var_C]
0x7EE02C: fld     [esp+58h+var_24]
0x7EE030: mov     [eax+4], edx
0x7EE033: fstp    [esp+58h+var_8]
0x7EE037: mov     ecx, [esp+58h+var_8]
0x7EE03B: fld1
0x7EE03D: mov     [eax+8], ecx
0x7EE040: fstp    [esp+58h+var_4]
0x7EE044: mov     edx, [esp+58h+var_4]
0x7EE048: mov     [eax+0Ch], edx
0x7EE04B: call    sub_7FAB30
0x7EE050: add     esp, 10h
0x7EE053: fld     [esp+48h+arg_8]
0x7EE057: fld     dword ptr [esi+0DCh]
0x7EE05D: mov     cl, ds:0B43070h
0x7EE063: test    cl, cl
0x7EE065: fstp    [esp+48h+var_38]
0x7EE069: fld     [esp+48h+var_38]
0x7EE06D: jnz     short loc_7EE088
0x7EE06F: fcom    qword ptr ds:0A2F928h
0x7EE075: fnstsw  ax
0x7EE077: test    ah, 41h
0x7EE07A: jnz     short loc_7EE088
0x7EE07C: fstp    st
0x7EE07E: fld1
0x7EE080: fstp    [esp+48h+var_38]
0x7EE084: fld     [esp+48h+var_38]
0x7EE088: test    bl, bl
0x7EE08A: mov     eax, [esi+0ECh]
0x7EE090: mov     edx, [esi+0F0h]
0x7EE096: mov     [esp+48h+var_1C], eax
0x7EE09A: fld     [esp+48h+var_1C]
0x7EE09E: fmul    st, st(1)
0x7EE0A0: mov     eax, [esi+0F4h]
0x7EE0A6: mov     [esp+48h+var_18], edx
0x7EE0AA: mov     [esp+48h+var_14], eax
0x7EE0AE: fstp    [esp+48h+var_1C]
0x7EE0B2: mov     edx, [esp+48h+var_1C]
0x7EE0B6: fld     [esp+48h+var_18]
0x7EE0BA: mov     [esp+48h+var_2C], edx
0x7EE0BE: fmul    st, st(1)
0x7EE0C0: fstp    [esp+48h+var_18]
0x7EE0C4: mov     eax, [esp+48h+var_18]
0x7EE0C8: mov     [esp+48h+var_28], eax
0x7EE0CC: fmul    [esp+48h+var_14]
0x7EE0D0: fstp    [esp+48h+var_14]
0x7EE0D4: mov     edx, [esp+48h+var_14]
0x7EE0D8: fld     [esp+48h+var_1C]
0x7EE0DC: mov     [esp+48h+var_24], edx
0x7EE0E0: fmul    st, st(1)
0x7EE0E2: fstp    [esp+48h+var_2C]
0x7EE0E6: fld     [esp+48h+var_28]
0x7EE0EA: fmul    st, st(1)
0x7EE0EC: fstp    [esp+48h+var_28]
0x7EE0F0: fld     [esp+48h+var_24]
0x7EE0F4: fmul    st, st(1)
0x7EE0F6: fstp    [esp+48h+var_24]
0x7EE0FA: fld     dword ptr [ebp+0D4h]
0x7EE100: fstp    [esp+48h+var_30]
0x7EE104: fld     [esp+48h+var_30]
0x7EE108: fld     st
0x7EE10A: fmul    [esp+48h+var_2C]
0x7EE10E: fstp    [esp+48h+var_2C]
0x7EE112: fld     st
0x7EE114: fmul    [esp+48h+var_28]
0x7EE118: fstp    [esp+48h+var_28]
0x7EE11C: fmul    [esp+48h+var_24]
0x7EE120: fstp    [esp+48h+var_24]
0x7EE124: jz      short loc_7EE150
0x7EE126: fld1
0x7EE128: fcompp
0x7EE12A: fnstsw  ax
0x7EE12C: test    ah, 41h
0x7EE12F: jnz     short loc_7EE172
0x7EE131: mov     eax, ds:0B3FA90h
0x7EE136: mov     ecx, ds:0B3FA94h
0x7EE13C: mov     edx, ds:0B3FA98h
0x7EE142: mov     [esp+48h+var_2C], eax
0x7EE146: mov     [esp+48h+var_28], ecx
0x7EE14A: mov     [esp+48h+var_24], edx
0x7EE14E: jmp     short loc_7EE172
0x7EE150: test    cl, cl
0x7EE152: fstp    st
0x7EE154: jz      short loc_7EE172
0x7EE156: cmp     byte ptr ds:0B43074h, 0
0x7EE15D: jnz     short loc_7EE172
0x7EE15F: fld     dword ptr ds:0B42F4Ch
0x7EE165: push    ecx
0x7EE166: lea     ecx, [esp+4Ch+var_2C]
0x7EE16A: fstp    [esp+4Ch+var_4C]; float
0x7EE16D: call    NiPoint3__MutliplyByValue
0x7EE172: fld     [esp+48h+var_2C]
0x7EE176: sub     esp, 10h
0x7EE179: fstp    [esp+58h+var_10]
0x7EE17D: mov     ecx, [esp+58h+var_10]
0x7EE181: fld     [esp+58h+var_28]
0x7EE185: mov     eax, esp
0x7EE187: fstp    [esp+58h+var_C]
0x7EE18B: mov     edx, [esp+58h+var_C]
0x7EE18F: fld     [esp+58h+var_24]
0x7EE193: mov     [eax], ecx
0x7EE195: fstp    [esp+58h+var_8]
0x7EE199: mov     ecx, [esp+58h+var_8]
0x7EE19D: fld     dword ptr [ebp+0D8h]
0x7EE1A3: mov     [eax+4], edx
0x7EE1A6: fstp    [esp+58h+var_4]
0x7EE1AA: mov     edx, [esp+58h+var_4]
0x7EE1AE: mov     [eax+8], ecx
0x7EE1B1: mov     [eax+0Ch], edx
0x7EE1B4: mov     eax, [esp+58h+arg_0]
0x7EE1B8: push    eax
0x7EE1B9: call    sub_7FAB00
0x7EE1BE: add     esp, 14h
0x7EE1C1: pop     edi
0x7EE1C2: pop     esi
0x7EE1C3: pop     ebp
0x7EE1C4: pop     ebx
0x7EE1C5: add     esp, 38h
0x7EE1C8: retn
