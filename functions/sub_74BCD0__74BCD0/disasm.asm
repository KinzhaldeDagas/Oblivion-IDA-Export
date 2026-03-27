0x74BCD0: sub     esp, 68h
0x74BCD3: push    ebp
0x74BCD4: push    esi
0x74BCD5: xor     ebp, ebp
0x74BCD7: push    edi
0x74BCD8: mov     edi, [esp+74h+arg_0]
0x74BCDC: cmp     edi, ebp
0x74BCDE: mov     esi, ecx
0x74BCE0: mov     [esp+74h+var_58], esi
0x74BCE4: mov     [esp+74h+var_68], ebp
0x74BCE8: mov     [esp+74h+var_64], ebp
0x74BCEC: mov     [esp+74h+var_60], ebp
0x74BCF0: jz      loc_74C1AE
0x74BCF6: mov     eax, [edi]
0x74BCF8: mov     edx, [eax+10h]
0x74BCFB: mov     ecx, edi
0x74BCFD: call    edx
0x74BCFF: test    eax, eax
0x74BD01: jz      loc_74C18E
0x74BD07: mov     ecx, [edi+0B4h]
0x74BD0D: mov     eax, [ecx]
0x74BD0F: mov     edx, [eax+5Ch]
0x74BD12: push    ebx
0x74BD13: call    edx
0x74BD15: movzx   ebx, ax
0x74BD18: call    _rand
0x74BD1D: xor     edx, edx
0x74BD1F: div     ebx
0x74BD21: mov     esi, edx
0x74BD23: cmp     esi, ebx
0x74BD25: jnz     short loc_74BD2A
0x74BD27: lea     esi, [ebx-1]
0x74BD2A: mov     [esp+78h+var_5C], ebp
0x74BD2E: mov     edi, edi
0x74BD30: mov     ecx, [edi+0B4h]
0x74BD36: mov     eax, [ecx]
0x74BD38: mov     eax, [eax+60h]
0x74BD3B: lea     edx, [esp+78h+var_60]
0x74BD3F: push    edx
0x74BD40: lea     edx, [esp+7Ch+var_64]
0x74BD44: push    edx
0x74BD45: lea     edx, [esp+80h+var_68]
0x74BD49: push    edx
0x74BD4A: push    esi
0x74BD4B: call    eax
0x74BD4D: mov     ecx, [esp+78h+var_68]
0x74BD51: mov     edx, [esp+78h+var_64]
0x74BD55: cmp     cx, dx
0x74BD58: mov     ebp, [esp+78h+var_60]
0x74BD5C: jz      short loc_74BD68
0x74BD5E: cmp     cx, bp
0x74BD61: jz      short loc_74BD68
0x74BD63: cmp     dx, bp
0x74BD66: jnz     short loc_74BD81
0x74BD68: add     esi, 1
0x74BD6B: cmp     esi, ebx
0x74BD6D: jb      short loc_74BD71
0x74BD6F: xor     esi, esi
0x74BD71: mov     eax, [esp+78h+var_5C]
0x74BD75: add     eax, 1
0x74BD78: cmp     eax, 6
0x74BD7B: mov     [esp+78h+var_5C], eax
0x74BD7F: jl      short loc_74BD30
0x74BD81: mov     edi, [edi+0B4h]
0x74BD87: mov     eax, [edi+1Ch]
0x74BD8A: test    eax, eax
0x74BD8C: mov     ebx, [edi+20h]
0x74BD8F: jnz     short loc_74BD9D
0x74BD91: pop     ebx
0x74BD92: pop     edi
0x74BD93: pop     esi
0x74BD94: xor     al, al
0x74BD96: pop     ebp
0x74BD97: add     esp, 68h
0x74BD9A: retn    0Ch
0x74BD9D: movzx   ecx, cx
0x74BDA0: lea     ecx, [ecx+ecx*2]
0x74BDA3: add     ecx, ecx
0x74BDA5: add     ecx, ecx
0x74BDA7: mov     esi, [ecx+eax]
0x74BDAA: mov     [esp+78h+var_48], esi
0x74BDAE: mov     esi, [ecx+eax+4]
0x74BDB2: mov     [esp+78h+var_44], esi
0x74BDB6: mov     esi, [ecx+eax+8]
0x74BDBA: movzx   edx, dx
0x74BDBD: mov     [esp+78h+var_40], esi
0x74BDC1: lea     edx, [edx+edx*2]
0x74BDC4: add     edx, edx
0x74BDC6: add     edx, edx
0x74BDC8: mov     esi, [edx+eax]
0x74BDCB: mov     [esp+78h+var_3C], esi
0x74BDCF: mov     esi, [edx+eax+4]
0x74BDD3: fld     [esp+78h+var_3C]
0x74BDD7: mov     [esp+78h+var_38], esi
0x74BDDB: fld     [esp+78h+var_48]
0x74BDDF: mov     esi, [edx+eax+8]
0x74BDE3: fld     st
0x74BDE5: mov     [esp+78h+var_34], esi
0x74BDE9: faddp   st(2), st
0x74BDEB: movzx   esi, bp
0x74BDEE: fxch    st(1)
0x74BDF0: fstp    [esp+78h+var_54]
0x74BDF4: lea     esi, [esi+esi*2]
0x74BDF7: fld     [esp+78h+var_38]
0x74BDFB: add     esi, esi
0x74BDFD: fld     [esp+78h+var_44]
0x74BE01: add     esi, esi
0x74BE03: mov     edi, [esi+eax]
0x74BE06: fld     st
0x74BE08: faddp   st(2), st
0x74BE0A: mov     [esp+78h+var_30], edi
0x74BE0E: mov     edi, [esi+eax+4]
0x74BE12: fxch    st(1)
0x74BE14: mov     eax, [esi+eax+8]
0x74BE18: fstp    [esp+78h+var_50]
0x74BE1C: mov     [esp+78h+var_2C], edi
0x74BE20: fld     [esp+78h+var_40]
0x74BE24: mov     edi, [esp+78h+arg_4]
0x74BE2B: fld     st
0x74BE2D: mov     [esp+78h+var_28], eax
0x74BE31: fadd    [esp+78h+var_34]
0x74BE35: mov     ebp, [esp+78h+arg_8]
0x74BE3C: fstp    [esp+78h+var_4C]
0x74BE40: fld     [esp+78h+var_54]
0x74BE44: fadd    [esp+78h+var_30]
0x74BE48: fstp    [esp+78h+var_24]
0x74BE4C: fld     [esp+78h+var_2C]
0x74BE50: fadd    [esp+78h+var_50]
0x74BE54: fstp    [esp+78h+var_20]
0x74BE58: fld     [esp+78h+var_28]
0x74BE5C: fadd    [esp+78h+var_4C]
0x74BE60: fstp    [esp+78h+var_1C]
0x74BE64: fld     [esp+78h+var_24]
0x74BE68: fld     qword ptr ds:0A7C030h
0x74BE6E: fmul    st(1), st
0x74BE70: fxch    st(1)
0x74BE72: fstp    [esp+78h+var_54]
0x74BE76: mov     eax, [esp+78h+var_54]
0x74BE7A: fld     [esp+78h+var_20]
0x74BE7E: mov     [edi], eax
0x74BE80: fmul    st, st(1)
0x74BE82: fstp    [esp+78h+var_50]
0x74BE86: mov     eax, [esp+78h+var_50]
0x74BE8A: fld     [esp+78h+var_1C]
0x74BE8E: mov     [edi+4], eax
0x74BE91: fmul    st, st(1)
0x74BE93: fstp    [esp+78h+var_4C]
0x74BE97: mov     eax, [esp+78h+var_4C]
0x74BE9B: mov     [edi+8], eax
0x74BE9E: mov     eax, [esp+78h+var_58]
0x74BEA2: cmp     dword ptr [eax+70h], 0
0x74BEA6: jnz     loc_74C167
0x74BEAC: test    ebx, ebx
0x74BEAE: jz      loc_74C167
0x74BEB4: mov     eax, [ecx+ebx]
0x74BEB7: fstp    st(3)
0x74BEB9: fstp    st(1)
0x74BEBB: mov     [esp+78h+var_24], eax
0x74BEBF: mov     eax, [ecx+ebx+4]
0x74BEC3: fstp    st
0x74BEC5: mov     ecx, [ecx+ebx+8]
0x74BEC9: mov     [esp+78h+var_20], eax
0x74BECD: mov     eax, [edx+ebx]
0x74BED0: mov     [esp+78h+var_54], eax
0x74BED4: fld     [esp+78h+var_54]
0x74BED8: fadd    [esp+78h+var_24]
0x74BEDC: mov     eax, [esi+ebx]
0x74BEDF: mov     [esp+78h+var_1C], ecx
0x74BEE3: mov     ecx, [edx+ebx+4]
0x74BEE7: mov     edx, [edx+ebx+8]
0x74BEEB: fstp    [esp+78h+var_C]
0x74BEEF: fld     [esp+78h+var_20]
0x74BEF3: mov     [esp+78h+var_50], ecx
0x74BEF7: fadd    [esp+78h+var_50]
0x74BEFB: mov     ecx, [esi+ebx+4]
0x74BEFF: mov     [esp+78h+var_4C], edx
0x74BF03: mov     edx, [esi+ebx+8]
0x74BF07: fstp    [esp+78h+var_8]
0x74BF0B: mov     [esp+78h+var_18], eax
0x74BF0F: fld     [esp+78h+var_1C]
0x74BF13: mov     [esp+78h+var_14], ecx
0x74BF17: fadd    [esp+78h+var_4C]
0x74BF1B: mov     [esp+78h+var_10], edx
0x74BF1F: lea     eax, [esp+78h+var_54]
0x74BF23: push    eax
0x74BF24: fstp    [esp+7Ch+var_4]
0x74BF28: fld     [esp+7Ch+var_C]
0x74BF2C: fadd    [esp+7Ch+var_18]
0x74BF30: fstp    [esp+7Ch+var_24]
0x74BF34: fld     [esp+7Ch+var_14]
0x74BF38: fadd    [esp+7Ch+var_8]
0x74BF3C: fstp    [esp+7Ch+var_20]
0x74BF40: fld     [esp+7Ch+var_10]
0x74BF44: fadd    [esp+7Ch+var_4]
0x74BF48: fstp    [esp+7Ch+var_1C]
0x74BF4C: fld     [esp+7Ch+var_24]
0x74BF50: fmul    st, st(1)
0x74BF52: fstp    [esp+7Ch+var_54]
0x74BF56: fld     [esp+7Ch+var_20]
0x74BF5A: fmul    st, st(1)
0x74BF5C: fstp    [esp+7Ch+var_50]
0x74BF60: fmul    [esp+7Ch+var_1C]
0x74BF64: fstp    [esp+7Ch+var_4C]
0x74BF68: call    sub_4BFAA0
0x74BF6D: fld     dword ptr [ebp+4]
0x74BF70: add     esp, 4
0x74BF73: fld     dword ptr [ebp+0]
0x74BF76: fld     dword ptr [ebp+8]
0x74BF79: fld     st(1)
0x74BF7B: fmulp   st(2), st
0x74BF7D: fld     st(2)
0x74BF7F: fmulp   st(3), st
0x74BF81: fxch    st(1)
0x74BF83: faddp   st(2), st
0x74BF85: fmul    st, st
0x74BF87: faddp   st(1), st
0x74BF89: fstp    [esp+78h+arg_8]
0x74BF90: fld     [esp+78h+arg_8]
0x74BF97: call    __CIsqrt
0x74BF9C: fstp    [esp+78h+arg_8]
0x74BFA3: fld     [esp+78h+arg_8]
0x74BFAA: fstp    [esp+78h+arg_8]
0x74BFB1: fld     [esp+78h+var_54]
0x74BFB5: fld     [esp+78h+arg_8]
0x74BFBC: fld     st
0x74BFBE: fmulp   st(2), st
0x74BFC0: fxch    st(1)
0x74BFC2: fstp    [esp+78h+var_C]
0x74BFC6: mov     ecx, [esp+78h+var_C]
0x74BFCA: fld     [esp+78h+var_50]
0x74BFCE: mov     [ebp+0], ecx
0x74BFD1: fmul    st, st(1)
0x74BFD3: fstp    [esp+78h+var_8]
0x74BFD7: fmul    [esp+78h+var_4C]
0x74BFDB: fstp    [esp+78h+var_4]
0x74BFDF: fld     [esp+78h+var_40]
0x74BFE3: mov     edx, [esp+78h+var_8]
0x74BFE7: fld     [esp+78h+var_48]
0x74BFEB: mov     eax, [esp+78h+var_4]
0x74BFEF: fld     [esp+78h+var_44]
0x74BFF3: mov     [ebp+4], edx
0x74BFF6: fxch    st(1)
0x74BFF8: mov     [ebp+8], eax
0x74BFFB: fxch    st(2)
0x74BFFD: mov     esi, [esp+78h+var_58]
0x74C001: cmp     dword ptr [esi+74h], 3
0x74C005: jnz     loc_74C16E
0x74C00B: fld     [esp+78h+var_3C]
0x74C00F: fsub    st, st(3)
0x74C011: fstp    [esp+78h+var_54]
0x74C015: fld     [esp+78h+var_38]
0x74C019: fsub    st, st(2)
0x74C01B: fstp    [esp+78h+var_50]
0x74C01F: fld     [esp+78h+var_34]
0x74C023: fsub    st, st(1)
0x74C025: fstp    [esp+78h+var_4C]
0x74C029: fld     [esp+78h+var_30]
0x74C02D: fsubrp  st(3), st
0x74C02F: fxch    st(2)
0x74C031: fstp    [esp+78h+var_3C]
0x74C035: fsubr   [esp+78h+var_2C]
0x74C039: fstp    [esp+78h+var_38]
0x74C03D: fsubr   [esp+78h+var_28]
0x74C041: fstp    [esp+78h+var_34]
0x74C045: call    _rand
0x74C04A: mov     [esp+78h+arg_8], eax
0x74C051: fild    [esp+78h+arg_8]
0x74C058: fdiv    qword ptr ds:0A3D5A8h
0x74C05E: fstp    [esp+78h+arg_8]
0x74C065: fld     [esp+78h+var_54]
0x74C069: fld     [esp+78h+arg_8]
0x74C070: fld     st
0x74C072: fmulp   st(2), st
0x74C074: fxch    st(1)
0x74C076: fstp    [esp+78h+var_54]
0x74C07A: fld     [esp+78h+var_50]
0x74C07E: fmul    st, st(1)
0x74C080: fstp    [esp+78h+var_50]
0x74C084: fmul    [esp+78h+var_4C]
0x74C088: fstp    [esp+78h+var_4C]
0x74C08C: call    _rand
0x74C091: mov     [esp+78h+arg_4], eax
0x74C098: fild    [esp+78h+arg_4]
0x74C09F: push    ebp
0x74C0A0: push    edi
0x74C0A1: fdiv    qword ptr ds:0A3D5A8h
0x74C0A7: fstp    [esp+80h+arg_4]
0x74C0AE: fld     [esp+80h+arg_4]
0x74C0B5: fld     [esp+80h+arg_8]
0x74C0BC: fld1
0x74C0BE: fsubrp  st(1), st
0x74C0C0: fmulp   st(1), st
0x74C0C2: fstp    [esp+80h+arg_8]
0x74C0C9: fld     [esp+80h+var_3C]
0x74C0CD: fld     [esp+80h+arg_8]
0x74C0D4: fld     st
0x74C0D6: fmulp   st(2), st
0x74C0D8: fxch    st(1)
0x74C0DA: fstp    [esp+80h+var_3C]
0x74C0DE: fld     [esp+80h+var_38]
0x74C0E2: fmul    st, st(1)
0x74C0E4: fstp    [esp+80h+var_38]
0x74C0E8: fmul    [esp+80h+var_34]
0x74C0EC: fstp    [esp+80h+var_34]
0x74C0F0: fld     [esp+80h+var_54]
0x74C0F4: fadd    [esp+80h+var_48]
0x74C0F8: fstp    [esp+80h+var_C]
0x74C0FC: fld     [esp+80h+var_50]
0x74C100: fadd    [esp+80h+var_44]
0x74C104: fstp    [esp+80h+var_8]
0x74C108: fld     [esp+80h+var_4C]
0x74C10C: fadd    [esp+80h+var_40]
0x74C110: fstp    [esp+80h+var_4]
0x74C114: fld     [esp+80h+var_C]
0x74C118: fadd    [esp+80h+var_3C]
0x74C11C: fstp    [esp+80h+var_18]
0x74C120: mov     ecx, [esp+80h+var_18]
0x74C124: fld     [esp+80h+var_8]
0x74C128: mov     [edi], ecx
0x74C12A: fadd    [esp+80h+var_38]
0x74C12E: fstp    [esp+80h+var_14]
0x74C132: mov     edx, [esp+80h+var_14]
0x74C136: fld     [esp+80h+var_4]
0x74C13A: mov     [edi+4], edx
0x74C13D: fadd    [esp+80h+var_34]
0x74C141: fstp    [esp+80h+var_10]
0x74C145: mov     eax, [esp+80h+var_10]
0x74C149: mov     [edi+8], eax
0x74C14C: mov     ecx, [esp+80h+arg_0]
0x74C153: push    ecx
0x74C154: mov     ecx, esi
0x74C156: call    sub_74A0A0
0x74C15B: pop     ebx
0x74C15C: pop     edi
0x74C15D: pop     esi
0x74C15E: mov     al, 1
0x74C160: pop     ebp
0x74C161: add     esp, 68h
0x74C164: retn    0Ch
0x74C167: fstp    st
0x74C169: jmp     loc_74BFFD
0x74C16E: mov     ecx, [esp+78h+arg_0]
0x74C172: fstp    st(2)
0x74C174: push    ebp
0x74C175: fstp    st
0x74C177: push    edi
0x74C178: fstp    st
0x74C17A: push    ecx
0x74C17B: mov     ecx, esi
0x74C17D: call    sub_74A0A0
0x74C182: pop     ebx
0x74C183: pop     edi
0x74C184: pop     esi
0x74C185: mov     al, 1
0x74C187: pop     ebp
0x74C188: add     esp, 68h
0x74C18B: retn    0Ch
0x74C18E: mov     edx, [edi]
0x74C190: mov     eax, [edx+4]
0x74C193: mov     ecx, edi
0x74C195: call    eax
0x74C197: cmp     eax, ebp
0x74C199: jz      short loc_74C1AE
0x74C19B: jmp     short loc_74C1A0
0x74C19D: align 10h
0x74C1A0: cmp     eax, offset dword_B3FCDC
0x74C1A5: jz      short loc_74C1B9
0x74C1A7: mov     eax, [eax+4]
0x74C1AA: cmp     eax, ebp
0x74C1AC: jnz     short loc_74C1A0
0x74C1AE: pop     edi
0x74C1AF: pop     esi
0x74C1B0: xor     al, al
0x74C1B2: pop     ebp
0x74C1B3: add     esp, 68h
0x74C1B6: retn    0Ch
0x74C1B9: mov     ecx, [esp+74h+arg_8]
0x74C1C0: mov     edx, [esp+74h+arg_4]
0x74C1C4: push    ecx
0x74C1C5: push    edx
0x74C1C6: push    edi
0x74C1C7: mov     ecx, esi
0x74C1C9: call    sub_74AE30
0x74C1CE: pop     edi
0x74C1CF: pop     esi
0x74C1D0: pop     ebp
0x74C1D1: add     esp, 68h
0x74C1D4: retn    0Ch
