0x80B7A0: sub     esp, 0F8h
0x80B7A6: mov     eax, [esp+0F8h+arg_10]
0x80B7AD: push    ebx
0x80B7AE: mov     ebx, [eax+18h]
0x80B7B1: test    ebx, ebx
0x80B7B3: push    ebp
0x80B7B4: push    esi
0x80B7B5: mov     [esp+104h+var_48], ecx
0x80B7BC: mov     [esp+104h+var_14], ebx
0x80B7C3: jz      loc_80BF57
0x80B7C9: mov     esi, 2
0x80B7CE: cmp     ds:0B42F48h, esi
0x80B7D4: jl      loc_80BF57
0x80B7DA: mov     ecx, ebx
0x80B7DC: call    sub_7ED160
0x80B7E1: mov     eax, [ebx+1Ch]
0x80B7E4: test    eax, 800h
0x80B7E9: mov     ecx, 1
0x80B7EE: mov     [esp+104h+var_F8], ecx
0x80B7F2: jbe     short loc_80B7F8
0x80B7F4: mov     [esp+104h+var_F8], esi
0x80B7F8: test    eax, 1000h
0x80B7FD: jbe     short loc_80B803
0x80B7FF: add     [esp+104h+var_F8], ecx
0x80B803: mov     ecx, ebx
0x80B805: call    sub_7ED160
0x80B80A: cmp     [esp+104h+var_F8], 0
0x80B80F: mov     ebp, eax
0x80B811: mov     eax, [esp+104h+arg_0]
0x80B818: mov     ecx, [eax+88h]
0x80B81E: mov     edx, [eax+8Ch]
0x80B824: mov     [esp+104h+var_DC], ecx
0x80B828: mov     ecx, [eax+90h]
0x80B82E: mov     [esp+104h+var_D8], edx
0x80B832: mov     [esp+104h+var_D4], ecx
0x80B836: jle     loc_80BF5E
0x80B83C: mov     eax, [esp+104h+var_F8]
0x80B840: lea     edx, [ebx+11Ch]
0x80B846: push    edi
0x80B847: lea     edi, [ebx+128h]
0x80B84D: mov     esi, offset flt_B46528
0x80B852: mov     [esp+108h+var_E0], edx
0x80B856: add     ebx, 0F8h ; 'ø'
0x80B85C: mov     [esp+108h+var_98], eax
0x80B860: test    ebp, ebp
0x80B862: fld     qword ptr ds:0A2FC70h
0x80B868: jz      loc_80BEEA
0x80B86E: cmp     byte ptr [ebp+0FCh], 0
0x80B875: jz      short loc_80B8E6
0x80B877: lea     ecx, [esp+108h+var_44]
0x80B87E: fstp    st
0x80B880: push    ecx
0x80B881: mov     ecx, ebp
0x80B883: call    sub_405AD0
0x80B888: mov     eax, [eax]
0x80B88A: mov     edx, [eax+88h]
0x80B890: mov     ecx, [eax+8Ch]
0x80B896: mov     [esp+108h+var_EC], edx
0x80B89A: mov     edx, [eax+90h]
0x80B8A0: mov     eax, [esp+108h+var_44]
0x80B8A7: test    eax, eax
0x80B8A9: mov     [esp+108h+var_E8], ecx
0x80B8AD: mov     [esp+108h+var_E4], edx
0x80B8B1: jz      loc_80B9E2
0x80B8B7: mov     [esp+108h+var_F8], eax
0x80B8BB: add     eax, 4
0x80B8BE: push    eax; lpAddend
0x80B8BF: call    dword ptr ds:0A2807Ch
0x80B8C5: test    eax, eax
0x80B8C7: jnz     loc_80B9E2
0x80B8CD: mov     ecx, [esp+108h+var_F8]
0x80B8D1: test    ecx, ecx
0x80B8D3: jz      loc_80B9E2
0x80B8D9: mov     eax, [ecx]
0x80B8DB: mov     edx, [eax]
0x80B8DD: push    1
0x80B8DF: call    edx
0x80B8E1: jmp     loc_80B9E2
0x80B8E6: mov     eax, [esi+80h]
0x80B8EC: mov     ecx, [esi+84h]
0x80B8F2: mov     edx, [esi+88h]
0x80B8F8: mov     [esp+108h+var_10], eax
0x80B8FF: fld     [esp+108h+var_10]
0x80B906: fmul    st, st(1)
0x80B908: mov     [esp+108h+var_C], ecx
0x80B90F: mov     [esp+108h+var_8], edx
0x80B916: mov     eax, [esi+8Ch]
0x80B91C: fstp    [esp+108h+var_88]
0x80B923: mov     [esp+108h+var_4], eax
0x80B92A: fld     [esp+108h+var_C]
0x80B931: fmul    st, st(1)
0x80B933: fstp    [esp+108h+var_84]
0x80B93A: fmul    [esp+108h+var_8]
0x80B941: fstp    [esp+108h+var_80]
0x80B948: fld     [esp+108h+var_88]
0x80B94F: fadd    [esp+108h+var_DC]
0x80B953: fstp    [esp+108h+var_C0]
0x80B957: fld     [esp+108h+var_D8]
0x80B95B: fadd    [esp+108h+var_84]
0x80B962: fstp    [esp+108h+var_BC]
0x80B966: fld     [esp+108h+var_D4]
0x80B96A: fadd    [esp+108h+var_80]
0x80B971: fstp    [esp+108h+var_B8]
0x80B975: fld     [esp+108h+var_C0]
0x80B979: fstp    [esp+108h+var_40]
0x80B980: mov     ecx, [esp+108h+var_40]
0x80B987: fld     [esp+108h+var_BC]
0x80B98B: mov     [esi], ecx
0x80B98D: fstp    [esp+108h+var_3C]
0x80B994: mov     edx, [esp+108h+var_3C]
0x80B99B: fld     [esp+108h+var_B8]
0x80B99F: mov     [esi+4], edx
0x80B9A2: mov     edx, [esp+108h+var_C0]
0x80B9A6: fstp    [esp+108h+var_38]
0x80B9AD: fld     dword ptr ds:0A3F3D8h
0x80B9B3: mov     eax, [esp+108h+var_38]
0x80B9BA: fstp    [esp+108h+var_34]
0x80B9C1: mov     ecx, [esp+108h+var_34]
0x80B9C8: mov     [esi+8], eax
0x80B9CB: mov     eax, [esp+108h+var_BC]
0x80B9CF: mov     [esi+0Ch], ecx
0x80B9D2: mov     ecx, [esp+108h+var_B8]
0x80B9D6: mov     [esp+108h+var_EC], edx
0x80B9DA: mov     [esp+108h+var_E8], eax
0x80B9DE: mov     [esp+108h+var_E4], ecx
0x80B9E2: mov     eax, [esi-7Ch]
0x80B9E5: mov     edx, [esi-80h]
0x80B9E8: mov     ecx, [esi-78h]
0x80B9EB: mov     [esp+108h+var_B0], eax
0x80B9EF: mov     [esp+108h+var_B4], edx
0x80B9F3: mov     edx, [esi-74h]
0x80B9F6: lea     eax, [esp+108h+var_64]
0x80B9FD: mov     [esp+108h+var_AC], ecx
0x80BA01: push    eax
0x80BA02: mov     ecx, ebp
0x80BA04: mov     [esp+10Ch+var_A8], edx
0x80BA08: call    sub_405AD0
0x80BA0D: mov     ecx, [eax]
0x80BA0F: mov     eax, [esp+108h+var_64]
0x80BA16: fld     dword ptr [ecx+0F8h]
0x80BA1C: test    eax, eax
0x80BA1E: fstp    [esp+108h+var_F8]
0x80BA22: jz      short loc_80BA43
0x80BA24: mov     ebp, eax
0x80BA26: add     eax, 4
0x80BA29: push    eax; lpAddend
0x80BA2A: call    dword ptr ds:0A2807Ch
0x80BA30: test    eax, eax
0x80BA32: jnz     short loc_80BA43
0x80BA34: test    ebp, ebp
0x80BA36: jz      short loc_80BA43
0x80BA38: mov     edx, [ebp+0]
0x80BA3B: mov     eax, [edx]
0x80BA3D: push    1
0x80BA3F: mov     ecx, ebp
0x80BA41: call    eax
0x80BA43: fldz
0x80BA45: mov     ebp, [esp+108h+var_E0]
0x80BA49: fcomp   dword ptr [ebp+0]
0x80BA4C: fnstsw  ax
0x80BA4E: test    ah, 44h
0x80BA51: jp      short loc_80BA73
0x80BA53: mov     ecx, [esp+108h+var_EC]
0x80BA57: fld     [esp+108h+var_F8]
0x80BA5B: mov     edx, [esp+108h+var_E8]
0x80BA5F: mov     eax, [esp+108h+var_E4]
0x80BA63: mov     [ebx], ecx
0x80BA65: mov     [ebx+4], edx
0x80BA68: mov     [ebx+8], eax
0x80BA6B: fstp    dword ptr [ebp+0]
0x80BA6E: jmp     loc_80BE83
0x80BA73: lea     ecx, [esp+108h+var_EC]
0x80BA77: push    ecx
0x80BA78: mov     ecx, ebx
0x80BA7A: call    sub_8AA390
0x80BA7F: test    al, al
0x80BA81: jnz     short loc_80BAA7
0x80BA83: fld     dword ptr [ebp+0]
0x80BA86: fld     [esp+108h+var_F8]
0x80BA8A: fucompp
0x80BA8C: fnstsw  ax
0x80BA8E: test    ah, 44h
0x80BA91: jp      short loc_80BAA7
0x80BA93: lea     edx, [esp+108h+var_B4]
0x80BA97: push    edx
0x80BA98: mov     ecx, edi
0x80BA9A: call    sub_632310
0x80BA9F: test    al, al
0x80BAA1: jz      loc_80BE83
0x80BAA7: fld     [esp+108h+var_F8]
0x80BAAB: lea     ecx, [esp+108h+var_94]
0x80BAAF: fsub    dword ptr [ebp+0]
0x80BAB2: fstp    [esp+108h+var_F4]
0x80BAB6: fld     [esp+108h+var_EC]
0x80BABA: fsub    [esp+108h+var_DC]
0x80BABE: fstp    [esp+108h+var_94]
0x80BAC2: fld     [esp+108h+var_E8]
0x80BAC6: fsub    [esp+108h+var_D8]
0x80BACA: fstp    [esp+108h+var_90]
0x80BACE: fld     [esp+108h+var_E4]
0x80BAD2: fsub    [esp+108h+var_D4]
0x80BAD6: fstp    [esp+108h+var_8C]
0x80BADA: call    sub_43F350
0x80BADF: fdiv    [esp+108h+var_F8]
0x80BAE3: lea     ecx, [esp+108h+var_CC]
0x80BAE7: fstp    [esp+108h+var_D0]
0x80BAEB: fld     dword ptr [ebx]
0x80BAED: fsub    [esp+108h+var_DC]
0x80BAF1: fstp    [esp+108h+var_CC]
0x80BAF5: fld     dword ptr [ebx+4]
0x80BAF8: fsub    [esp+108h+var_D8]
0x80BAFC: fstp    [esp+108h+var_C8]
0x80BB00: fld     dword ptr [ebx+8]
0x80BB03: fsub    [esp+108h+var_D4]
0x80BB07: fstp    [esp+108h+var_C4]
0x80BB0B: call    sub_43F350
0x80BB10: fstp    st
0x80BB12: fld     [esp+108h+var_94]
0x80BB16: fld     st
0x80BB18: fld     [esp+108h+var_CC]
0x80BB1C: fld     st
0x80BB1E: fsubp   st(2), st
0x80BB20: fxch    st(1)
0x80BB22: fstp    [esp+108h+var_A4]
0x80BB26: fld     [esp+108h+var_90]
0x80BB2A: fld     st
0x80BB2C: fld     [esp+108h+var_C8]
0x80BB30: fld     st
0x80BB32: fsubp   st(2), st
0x80BB34: fxch    st(1)
0x80BB36: fstp    [esp+108h+var_A0]
0x80BB3A: fld     [esp+108h+var_8C]
0x80BB3E: fld     st
0x80BB40: fld     [esp+108h+var_C4]
0x80BB44: fld     st
0x80BB46: fsubp   st(2), st
0x80BB48: fxch    st(1)
0x80BB4A: fstp    [esp+108h+var_9C]
0x80BB4E: fld     st(4)
0x80BB50: fmulp   st(6), st
0x80BB52: fld     st(2)
0x80BB54: fmulp   st(4), st
0x80BB56: fxch    st(5)
0x80BB58: faddp   st(3), st
0x80BB5A: fmul    st, st(4)
0x80BB5C: faddp   st(2), st
0x80BB5E: fxch    st(1)
0x80BB60: fstp    [esp+108h+var_F0]
0x80BB64: fld     [esp+108h+var_F0]
0x80BB68: fcomp   qword ptr ds:0A94368h
0x80BB6E: fnstsw  ax
0x80BB70: test    ah, 5
0x80BB73: jnp     loc_80BD62
0x80BB79: fstp    st(1)
0x80BB7B: fstp    st
0x80BB7D: fstp    st
0x80BB7F: fld     [esp+108h+var_A4]
0x80BB83: fld     [esp+108h+var_A0]
0x80BB87: fld     [esp+108h+var_9C]
0x80BB8B: fld     st(1)
0x80BB8D: fmulp   st(2), st
0x80BB8F: fld     st(2)
0x80BB91: fmulp   st(3), st
0x80BB93: fxch    st(1)
0x80BB95: faddp   st(2), st
0x80BB97: fmul    st, st
0x80BB99: faddp   st(1), st
0x80BB9B: fstp    [esp+108h+var_F0]
0x80BB9F: fld     [esp+108h+var_F0]
0x80BBA3: call    __CIsqrt
0x80BBA8: fstp    [esp+108h+var_F0]
0x80BBAC: fld     [esp+108h+var_F0]
0x80BBB0: fld     dword ptr ds:0A45FF4h
0x80BBB6: fcom    st(1)
0x80BBB8: fnstsw  ax
0x80BBBA: fstp    st(1)
0x80BBBC: test    ah, 5
0x80BBBF: jnp     loc_80BD50
0x80BBC5: fld     [esp+108h+var_F4]
0x80BBC9: mov     eax, [esp+108h+var_EC]
0x80BBCD: mov     ecx, [esp+108h+var_E8]
0x80BBD1: fld     st
0x80BBD3: mov     edx, [esp+108h+var_E4]
0x80BBD7: fabs
0x80BBD9: fstp    [esp+108h+var_F4]
0x80BBDD: mov     [ebx], eax
0x80BBDF: fld     [esp+108h+var_F4]
0x80BBE3: mov     [ebx+4], ecx
0x80BBE6: fcomp   st(2)
0x80BBE8: mov     [ebx+8], edx
0x80BBEB: fnstsw  ax
0x80BBED: fstp    st(1)
0x80BBEF: test    ah, 41h
0x80BBF2: jnz     short loc_80BC05
0x80BBF4: fmul    qword ptr ds:0A38538h
0x80BBFA: fadd    dword ptr [ebp+0]
0x80BBFD: fstp    dword ptr [ebp+0]
0x80BC00: jmp     loc_80BE83
0x80BC05: fstp    st
0x80BC07: fld     [esp+108h+var_F8]
0x80BC0B: fstp    dword ptr [ebp+0]
0x80BC0E: fld     [esp+108h+var_B4]
0x80BC12: fld     st
0x80BC14: fsub    dword ptr [edi]
0x80BC16: fstp    [esp+108h+var_F4]
0x80BC1A: fld     [esp+108h+var_B0]
0x80BC1E: fld     st
0x80BC20: fsub    dword ptr [edi+4]
0x80BC23: fstp    [esp+108h+var_F0]
0x80BC27: fld     [esp+108h+var_AC]
0x80BC2B: fld     st
0x80BC2D: fsub    dword ptr [edi+8]
0x80BC30: fstp    [esp+108h+var_F8]
0x80BC34: fld     [esp+108h+var_F4]
0x80BC38: fld     st
0x80BC3A: fabs
0x80BC3C: fstp    [esp+108h+var_F4]
0x80BC40: fld     [esp+108h+var_F4]
0x80BC44: fld     qword ptr ds:0A2FC80h
0x80BC4A: fcom    st(1)
0x80BC4C: fnstsw  ax
0x80BC4E: fld     [esp+108h+var_F0]
0x80BC52: test    ah, 5
0x80BC55: jnp     short loc_80BCB1
0x80BC57: fld     st
0x80BC59: fabs
0x80BC5B: fstp    [esp+108h+var_F4]
0x80BC5F: fld     [esp+108h+var_F4]
0x80BC63: fcomp   st(2)
0x80BC65: fnstsw  ax
0x80BC67: test    ah, 41h
0x80BC6A: jz      short loc_80BCB1
0x80BC6C: fld     [esp+108h+var_F8]
0x80BC70: fabs
0x80BC72: fstp    [esp+108h+var_F4]
0x80BC76: fld     [esp+108h+var_F4]
0x80BC7A: fcomp   st(2)
0x80BC7C: fnstsw  ax
0x80BC7E: fstp    st(1)
0x80BC80: test    ah, 41h
0x80BC83: jz      short loc_80BCB3
0x80BC85: mov     eax, [esp+108h+var_B4]
0x80BC89: fstp    st(1)
0x80BC8B: mov     ecx, [esp+108h+var_B0]
0x80BC8F: fstp    st(1)
0x80BC91: mov     edx, [esp+108h+var_AC]
0x80BC95: fstp    st(3)
0x80BC97: mov     [edi], eax
0x80BC99: fstp    st(1)
0x80BC9B: mov     eax, [esp+108h+var_A8]
0x80BC9F: fstp    st(1)
0x80BCA1: mov     [edi+4], ecx
0x80BCA4: fstp    st
0x80BCA6: mov     [edi+8], edx
0x80BCA9: mov     [edi+0Ch], eax
0x80BCAC: jmp     loc_80BE83
0x80BCB1: fstp    st(1)
0x80BCB3: fld     qword ptr ds:0A30068h
0x80BCB9: fcom    st(2)
0x80BCBB: fnstsw  ax
0x80BCBD: fstp    st(2)
0x80BCBF: test    ah, 5
0x80BCC2: jp      short loc_80BCD8
0x80BCC4: fstp    st(5)
0x80BCC6: fld     qword ptr ds:0A38538h
0x80BCCC: fmul    st(2), st
0x80BCCE: fld     dword ptr [edi]
0x80BCD0: faddp   st(3), st
0x80BCD2: fxch    st(2)
0x80BCD4: fstp    dword ptr [edi]
0x80BCD6: jmp     short loc_80BCE8
0x80BCD8: fstp    st(2)
0x80BCDA: fxch    st(4)
0x80BCDC: fstp    dword ptr [edi]
0x80BCDE: fld     qword ptr ds:0A38538h
0x80BCE4: fxch    st(1)
0x80BCE6: fxch    st(4)
0x80BCE8: fld     st(4)
0x80BCEA: fabs
0x80BCEC: fstp    [esp+108h+var_F4]
0x80BCF0: fld     [esp+108h+var_F4]
0x80BCF4: fcomp   st(1)
0x80BCF6: fnstsw  ax
0x80BCF8: test    ah, 41h
0x80BCFB: jnz     short loc_80BD0D
0x80BCFD: fstp    st(3)
0x80BCFF: fmul    st(3), st
0x80BD01: fld     dword ptr [edi+4]
0x80BD04: faddp   st(4), st
0x80BD06: fxch    st(3)
0x80BD08: fstp    dword ptr [edi+4]
0x80BD0B: jmp     short loc_80BD1A
0x80BD0D: fstp    st(4)
0x80BD0F: fxch    st(2)
0x80BD11: fstp    dword ptr [edi+4]
0x80BD14: fxch    st(1)
0x80BD16: fxch    st(2)
0x80BD18: fxch    st(1)
0x80BD1A: fld     [esp+108h+var_F8]
0x80BD1E: fld     st
0x80BD20: fabs
0x80BD22: fstp    [esp+108h+var_F4]
0x80BD26: fld     [esp+108h+var_F4]
0x80BD2A: fcomp   st(3)
0x80BD2C: fnstsw  ax
0x80BD2E: fstp    st(2)
0x80BD30: test    ah, 41h
0x80BD33: jnz     short loc_80BD44
0x80BD35: fstp    st
0x80BD37: fmulp   st(1), st
0x80BD39: fadd    dword ptr [edi+8]
0x80BD3C: fstp    dword ptr [edi+8]
0x80BD3F: jmp     loc_80BE83
0x80BD44: fstp    st(2)
0x80BD46: fstp    st
0x80BD48: fstp    dword ptr [edi+8]
0x80BD4B: jmp     loc_80BE83
0x80BD50: fstp    st
0x80BD52: fld     [esp+108h+var_CC]
0x80BD56: fld     [esp+108h+var_C8]
0x80BD5A: fld     [esp+108h+var_C4]
0x80BD5E: fxch    st(2)
0x80BD60: fxch    st(1)
0x80BD62: fld     [esp+108h+var_A4]
0x80BD66: fld     qword ptr ds:0A38538h
0x80BD6C: fmul    st(1), st
0x80BD6E: fxch    st(1)
0x80BD70: fstp    [esp+108h+var_54]
0x80BD77: fld     [esp+108h+var_A0]
0x80BD7B: fmul    st, st(1)
0x80BD7D: fstp    [esp+108h+var_50]
0x80BD84: fmul    [esp+108h+var_9C]
0x80BD88: fstp    [esp+108h+var_4C]
0x80BD8F: fld     [esp+108h+var_54]
0x80BD96: faddp   st(2), st
0x80BD98: fxch    st(1)
0x80BD9A: fstp    [esp+108h+var_30]
0x80BDA1: fadd    [esp+108h+var_50]
0x80BDA8: fstp    [esp+108h+var_2C]
0x80BDAF: fadd    [esp+108h+var_4C]
0x80BDB6: fstp    [esp+108h+var_28]
0x80BDBD: fld     [esp+108h+var_30]
0x80BDC4: fld     [esp+108h+var_D0]
0x80BDC8: fld     st
0x80BDCA: fmulp   st(2), st
0x80BDCC: fxch    st(1)
0x80BDCE: fstp    [esp+108h+var_7C]
0x80BDD5: fld     [esp+108h+var_2C]
0x80BDDC: fmul    st, st(1)
0x80BDDE: fstp    [esp+108h+var_78]
0x80BDE5: fmul    [esp+108h+var_28]
0x80BDEC: fstp    [esp+108h+var_74]
0x80BDF3: fld     dword ptr [ebp+0]
0x80BDF6: fstp    [esp+108h+var_D0]
0x80BDFA: fld     [esp+108h+var_7C]
0x80BE01: fld     [esp+108h+var_D0]
0x80BE05: fld     st
0x80BE07: fmulp   st(2), st
0x80BE09: fxch    st(1)
0x80BE0B: fstp    [esp+108h+var_70]
0x80BE12: fld     [esp+108h+var_78]
0x80BE19: fmul    st, st(1)
0x80BE1B: fstp    [esp+108h+var_6C]
0x80BE22: fmul    [esp+108h+var_74]
0x80BE29: fstp    [esp+108h+var_68]
0x80BE30: fld     [esp+108h+var_70]
0x80BE37: fadd    [esp+108h+var_DC]
0x80BE3B: fstp    [esp+108h+var_60]
0x80BE42: mov     ecx, [esp+108h+var_60]
0x80BE49: fld     [esp+108h+var_6C]
0x80BE50: mov     [ebx], ecx
0x80BE52: fadd    [esp+108h+var_D8]
0x80BE56: fstp    [esp+108h+var_5C]
0x80BE5D: mov     edx, [esp+108h+var_5C]
0x80BE64: fld     [esp+108h+var_68]
0x80BE6B: mov     [ebx+4], edx
0x80BE6E: fadd    [esp+108h+var_D4]
0x80BE72: fstp    [esp+108h+var_58]
0x80BE79: mov     eax, [esp+108h+var_58]
0x80BE80: mov     [ebx+8], eax
0x80BE83: fld     dword ptr [ebx]
0x80BE85: fstp    [esp+108h+var_24]
0x80BE8C: mov     ecx, [esp+108h+var_24]
0x80BE93: fld     dword ptr [ebx+4]
0x80BE96: fstp    [esp+108h+var_20]
0x80BE9D: mov     edx, [esp+108h+var_20]
0x80BEA4: fld     dword ptr [ebx+8]
0x80BEA7: fstp    [esp+108h+var_1C]
0x80BEAE: mov     eax, [esp+108h+var_1C]
0x80BEB5: fld     dword ptr [ebp+0]
0x80BEB8: mov     [esi], ecx
0x80BEBA: mov     [esi+4], edx
0x80BEBD: fstp    [esp+108h+var_18]
0x80BEC4: mov     ecx, [esp+108h+var_18]
0x80BECB: mov     [esi+8], eax
0x80BECE: mov     [esi+0Ch], ecx
0x80BED1: mov     edx, [edi]
0x80BED3: mov     [esi-80h], edx
0x80BED6: mov     eax, [edi+4]
0x80BED9: mov     [esi-7Ch], eax
0x80BEDC: mov     ecx, [edi+8]
0x80BEDF: mov     [esi-78h], ecx
0x80BEE2: mov     edx, [edi+0Ch]
0x80BEE5: mov     [esi-74h], edx
0x80BEE8: jmp     short loc_80BF2F
0x80BEEA: mov     eax, ds:0B3F9A8h
0x80BEEF: fstp    st
0x80BEF1: fldz
0x80BEF3: mov     [ebx], eax
0x80BEF5: mov     ecx, ds:0B3F9ACh
0x80BEFB: mov     eax, [esp+108h+var_E0]
0x80BEFF: mov     [ebx+4], ecx
0x80BF02: mov     edx, ds:0B3F9B0h
0x80BF08: mov     [ebx+8], edx
0x80BF0B: fstp    dword ptr [eax]
0x80BF0D: mov     ecx, ds:0B25AD0h
0x80BF13: mov     [edi], ecx
0x80BF15: mov     edx, ds:0B25AD4h
0x80BF1B: mov     [edi+4], edx
0x80BF1E: mov     eax, ds:0B25AD8h
0x80BF23: mov     [edi+8], eax
0x80BF26: mov     ecx, ds:0B25ADCh
0x80BF2C: mov     [edi+0Ch], ecx
0x80BF2F: mov     ecx, [esp+108h+var_14]
0x80BF36: call    sub_7ED180
0x80BF3B: add     [esp+108h+var_E0], 4
0x80BF40: add     ebx, 0Ch
0x80BF43: add     esi, 10h
0x80BF46: add     edi, 10h
0x80BF49: sub     [esp+108h+var_98], 1
0x80BF4E: mov     ebp, eax
0x80BF50: jnz     loc_80B860
0x80BF56: pop     edi
0x80BF57: mov     eax, [esp+104h+arg_0]
0x80BF5E: mov     edx, [esp+104h+arg_1C]
0x80BF65: mov     ecx, [esp+104h+arg_18]
0x80BF6C: push    edx
0x80BF6D: mov     edx, [esp+108h+arg_14]
0x80BF74: push    ecx
0x80BF75: mov     ecx, [esp+10Ch+arg_10]
0x80BF7C: push    edx
0x80BF7D: mov     edx, [esp+110h+arg_C]
0x80BF84: push    ecx
0x80BF85: mov     ecx, [esp+114h+arg_8]
0x80BF8C: push    edx
0x80BF8D: mov     edx, [esp+118h+arg_4]
0x80BF94: push    ecx
0x80BF95: mov     ecx, [esp+11Ch+var_48]
0x80BF9C: push    edx
0x80BF9D: push    eax
0x80BF9E: call    sub_7C9230
0x80BFA3: pop     esi
0x80BFA4: pop     ebp
0x80BFA5: pop     ebx
0x80BFA6: add     esp, 0F8h
0x80BFAC: retn    20h ; ' '
