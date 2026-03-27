0x74AE30: sub     esp, 48h
0x74AE33: push    ebx
0x74AE34: push    ebp
0x74AE35: mov     ebp, [esp+50h+arg_0]
0x74AE39: xor     ebx, ebx
0x74AE3B: cmp     ebp, ebx
0x74AE3D: push    esi
0x74AE3E: push    edi
0x74AE3F: mov     [esp+58h+var_40], ecx
0x74AE43: mov     [esp+58h+var_44], ebx
0x74AE47: mov     [esp+58h+var_48], ebx
0x74AE4B: jz      loc_74AF23
0x74AE51: mov     eax, [ebp+0]
0x74AE54: mov     edx, [eax+10h]
0x74AE57: mov     ecx, ebp
0x74AE59: call    edx
0x74AE5B: test    eax, eax
0x74AE5D: jz      loc_74AF07
0x74AE63: mov     ecx, [ebp+0B4h]
0x74AE69: mov     [esp+58h+arg_0], ebx
0x74AE6D: mov     eax, [ecx]
0x74AE6F: mov     edx, [eax+5Ch]
0x74AE72: call    edx
0x74AE74: movzx   edi, ax
0x74AE77: call    _rand
0x74AE7C: xor     edx, edx
0x74AE7E: div     edi
0x74AE80: mov     esi, edx
0x74AE82: mov     ecx, [ebp+0B4h]
0x74AE88: mov     eax, [ecx]
0x74AE8A: mov     eax, [eax+60h]
0x74AE8D: lea     edx, [esp+58h+arg_0]
0x74AE91: push    edx
0x74AE92: lea     edx, [esp+5Ch+var_48]
0x74AE96: push    edx
0x74AE97: lea     edx, [esp+60h+var_44]
0x74AE9B: push    edx
0x74AE9C: push    esi
0x74AE9D: call    eax
0x74AE9F: mov     eax, [esp+58h+var_44]
0x74AEA3: mov     ecx, [esp+58h+var_48]
0x74AEA7: cmp     ax, cx
0x74AEAA: jz      short loc_74AEBA
0x74AEAC: mov     edx, [esp+58h+arg_0]
0x74AEB0: cmp     ax, dx
0x74AEB3: jz      short loc_74AEBA
0x74AEB5: cmp     cx, dx
0x74AEB8: jnz     short loc_74AECB
0x74AEBA: add     esi, 1
0x74AEBD: cmp     esi, edi
0x74AEBF: jb      short loc_74AEC3
0x74AEC1: xor     esi, esi
0x74AEC3: add     ebx, 1
0x74AEC6: cmp     ebx, 6
0x74AEC9: jl      short loc_74AE82
0x74AECB: call    _rand
0x74AED0: cdq
0x74AED1: mov     ecx, 3
0x74AED6: idiv    ecx
0x74AED8: sub     edx, 1
0x74AEDB: jz      short loc_74AEF0
0x74AEDD: sub     edx, 1
0x74AEE0: jnz     loc_74AF92
0x74AEE6: movzx   edx, word ptr [esp+58h+arg_0]
0x74AEEB: jmp     loc_74AF8E
0x74AEF0: movzx   eax, word ptr [esp+58h+var_48]
0x74AEF5: movzx   ecx, word ptr [esp+58h+arg_0]
0x74AEFA: mov     [esp+58h+var_44], eax
0x74AEFE: mov     [esp+58h+var_48], ecx
0x74AF02: jmp     loc_74AF92
0x74AF07: mov     edx, [ebp+0]
0x74AF0A: mov     eax, [edx+4]
0x74AF0D: mov     ecx, ebp
0x74AF0F: call    eax
0x74AF11: cmp     eax, ebx
0x74AF13: jz      short loc_74AF23
0x74AF15: cmp     eax, offset dword_B3FCDC
0x74AF1A: jz      short loc_74AF2F
0x74AF1C: mov     eax, [eax+4]
0x74AF1F: cmp     eax, ebx
0x74AF21: jnz     short loc_74AF15
0x74AF23: pop     edi
0x74AF24: pop     esi
0x74AF25: pop     ebp
0x74AF26: xor     al, al
0x74AF28: pop     ebx
0x74AF29: add     esp, 48h
0x74AF2C: retn    0Ch
0x74AF2F: call    _rand
0x74AF34: mov     [esp+58h+arg_0], eax
0x74AF38: fild    [esp+58h+arg_0]
0x74AF3C: mov     ecx, [ebp+0B4h]
0x74AF42: movzx   edx, word ptr [ecx+8]
0x74AF46: fdiv    qword ptr ds:0A3D5A8h
0x74AF4C: sub     edx, 1
0x74AF4F: mov     [esp+58h+arg_0], edx
0x74AF53: fstp    dword ptr [esp+58h+var_3C]
0x74AF57: fild    [esp+58h+arg_0]
0x74AF5B: fnstcw  word ptr [esp+58h+arg_0]
0x74AF5F: movzx   eax, word ptr [esp+58h+arg_0]
0x74AF64: fmul    dword ptr [esp+58h+var_3C]
0x74AF68: or      eax, 0C00h
0x74AF6D: mov     dword ptr [esp+58h+var_3C], eax
0x74AF71: fldcw   word ptr [esp+58h+var_3C]
0x74AF75: fistp   [esp+58h+var_3C]
0x74AF79: mov     eax, dword ptr [esp+58h+var_3C]
0x74AF7D: movzx   ecx, ax
0x74AF80: add     eax, 1
0x74AF83: mov     [esp+58h+var_44], ecx
0x74AF87: fldcw   word ptr [esp+58h+arg_0]
0x74AF8B: movzx   edx, ax
0x74AF8E: mov     [esp+58h+var_48], edx
0x74AF92: mov     eax, [ebp+0B4h]
0x74AF98: mov     edx, [eax+1Ch]
0x74AF9B: test    edx, edx
0x74AF9D: mov     ebx, [eax+20h]
0x74AFA0: jz      short loc_74AF23
0x74AFA2: movzx   eax, word ptr [esp+58h+var_44]
0x74AFA7: lea     eax, [eax+eax*2]
0x74AFAA: add     eax, eax
0x74AFAC: add     eax, eax
0x74AFAE: mov     ecx, [eax+edx]
0x74AFB1: mov     [esp+58h+var_30], ecx
0x74AFB5: mov     ecx, [eax+edx+4]
0x74AFB9: mov     [esp+58h+var_2C], ecx
0x74AFBD: mov     ecx, [eax+edx+8]
0x74AFC1: mov     [esp+58h+var_28], ecx
0x74AFC5: movzx   ecx, word ptr [esp+58h+var_48]
0x74AFCA: lea     ecx, [ecx+ecx*2]
0x74AFCD: add     ecx, ecx
0x74AFCF: add     ecx, ecx
0x74AFD1: mov     esi, [ecx+edx]
0x74AFD4: mov     dword ptr [esp+58h+var_3C], esi
0x74AFD8: mov     esi, [ecx+edx+4]
0x74AFDC: fld     dword ptr [esp+58h+var_3C]
0x74AFE0: mov     edx, [ecx+edx+8]
0x74AFE4: fadd    [esp+58h+var_30]
0x74AFE8: mov     dword ptr [esp+58h+var_3C+4], esi
0x74AFEC: mov     esi, [esp+58h+arg_4]
0x74AFF0: mov     [esp+58h+var_34], edx
0x74AFF4: fstp    [esp+58h+var_24]
0x74AFF8: mov     edi, [esp+58h+arg_8]
0x74AFFC: fld     [esp+58h+var_2C]
0x74B000: fadd    dword ptr [esp+58h+var_3C+4]
0x74B004: fstp    [esp+58h+var_20]
0x74B008: fld     [esp+58h+var_28]
0x74B00C: fadd    [esp+58h+var_34]
0x74B010: fstp    [esp+58h+var_1C]
0x74B014: fld     [esp+58h+var_24]
0x74B018: fld     qword ptr ds:0A2FAA0h
0x74B01E: fmul    st(1), st
0x74B020: fxch    st(1)
0x74B022: fstp    [esp+58h+var_18]
0x74B026: mov     edx, [esp+58h+var_18]
0x74B02A: fld     [esp+58h+var_20]
0x74B02E: mov     [esi], edx
0x74B030: fmul    st, st(1)
0x74B032: fstp    [esp+58h+var_14]
0x74B036: mov     edx, [esp+58h+var_14]
0x74B03A: fld     [esp+58h+var_1C]
0x74B03E: mov     [esi+4], edx
0x74B041: fmul    st, st(1)
0x74B043: fstp    [esp+58h+var_10]
0x74B047: mov     edx, [esp+58h+var_10]
0x74B04B: mov     [esi+8], edx
0x74B04E: mov     edx, [esp+58h+var_40]
0x74B052: cmp     dword ptr [edx+70h], 0
0x74B056: jnz     loc_74B14A
0x74B05C: test    ebx, ebx
0x74B05E: jz      loc_74B14A
0x74B064: mov     edx, [eax+ebx]
0x74B067: mov     [esp+58h+var_18], edx
0x74B06B: mov     edx, [eax+ebx+4]
0x74B06F: mov     eax, [eax+ebx+8]
0x74B073: mov     [esp+58h+var_14], edx
0x74B077: mov     edx, [ecx+ebx]
0x74B07A: mov     [esp+58h+var_24], edx
0x74B07E: fld     [esp+58h+var_24]
0x74B082: fadd    [esp+58h+var_18]
0x74B086: mov     [esp+58h+var_10], eax
0x74B08A: mov     eax, [ecx+ebx+4]
0x74B08E: mov     ecx, [ecx+ebx+8]
0x74B092: fstp    [esp+58h+var_C]
0x74B096: mov     [esp+58h+var_20], eax
0x74B09A: fld     [esp+58h+var_14]
0x74B09E: mov     [esp+58h+var_1C], ecx
0x74B0A2: fadd    [esp+58h+var_20]
0x74B0A6: lea     edx, [esp+58h+var_24]
0x74B0AA: push    edx
0x74B0AB: fstp    [esp+5Ch+var_8]
0x74B0AF: fld     [esp+5Ch+var_10]
0x74B0B3: fadd    [esp+5Ch+var_1C]
0x74B0B7: fstp    [esp+5Ch+var_4]
0x74B0BB: fld     [esp+5Ch+var_C]
0x74B0BF: fmul    st, st(1)
0x74B0C1: fstp    [esp+5Ch+var_24]
0x74B0C5: fld     [esp+5Ch+var_8]
0x74B0C9: fmul    st, st(1)
0x74B0CB: fstp    [esp+5Ch+var_20]
0x74B0CF: fmul    [esp+5Ch+var_4]
0x74B0D3: fstp    [esp+5Ch+var_1C]
0x74B0D7: call    sub_4BFAA0
0x74B0DC: fld     dword ptr [edi+4]
0x74B0DF: add     esp, 4
0x74B0E2: fld     dword ptr [edi]
0x74B0E4: fld     dword ptr [edi+8]
0x74B0E7: fld     st(1)
0x74B0E9: fmulp   st(2), st
0x74B0EB: fld     st(2)
0x74B0ED: fmulp   st(3), st
0x74B0EF: fxch    st(1)
0x74B0F1: faddp   st(2), st
0x74B0F3: fmul    st, st
0x74B0F5: faddp   st(1), st
0x74B0F7: fstp    [esp+58h+arg_0]
0x74B0FB: fld     [esp+58h+arg_0]
0x74B0FF: call    __CIsqrt
0x74B104: fstp    [esp+58h+arg_0]
0x74B108: fld     [esp+58h+arg_0]
0x74B10C: fstp    [esp+58h+arg_0]
0x74B110: fld     [esp+58h+var_24]
0x74B114: fld     [esp+58h+arg_0]
0x74B118: fld     st
0x74B11A: fmulp   st(2), st
0x74B11C: fxch    st(1)
0x74B11E: fstp    [esp+58h+var_C]
0x74B122: mov     eax, [esp+58h+var_C]
0x74B126: fld     [esp+58h+var_20]
0x74B12A: mov     [edi], eax
0x74B12C: fmul    st, st(1)
0x74B12E: fstp    [esp+58h+var_8]
0x74B132: mov     ecx, [esp+58h+var_8]
0x74B136: mov     [edi+4], ecx
0x74B139: fmul    [esp+58h+var_1C]
0x74B13D: fstp    [esp+58h+var_4]
0x74B141: mov     edx, [esp+58h+var_4]
0x74B145: mov     [edi+8], edx
0x74B148: jmp     short loc_74B14C
0x74B14A: fstp    st
0x74B14C: mov     ebx, [esp+58h+var_40]
0x74B150: cmp     dword ptr [ebx+74h], 4
0x74B154: jnz     loc_74B1FB
0x74B15A: call    _rand
0x74B15F: mov     [esp+58h+arg_0], eax
0x74B163: fild    [esp+58h+arg_0]
0x74B167: fdiv    qword ptr ds:0A3D5A8h
0x74B16D: fstp    [esp+58h+arg_0]
0x74B171: fld     dword ptr [esp+58h+var_3C]
0x74B175: fld     [esp+58h+var_30]
0x74B179: fld     st
0x74B17B: fsubp   st(2), st
0x74B17D: fxch    st(1)
0x74B17F: fstp    [esp+58h+var_C]
0x74B183: fld     dword ptr [esp+58h+var_3C+4]
0x74B187: fld     [esp+58h+var_2C]
0x74B18B: fld     st
0x74B18D: fsubp   st(2), st
0x74B18F: fxch    st(1)
0x74B191: fstp    [esp+58h+var_8]
0x74B195: fld     [esp+58h+var_34]
0x74B199: fld     [esp+58h+var_28]
0x74B19D: fld     st
0x74B19F: fsubp   st(2), st
0x74B1A1: fxch    st(1)
0x74B1A3: fstp    [esp+58h+var_4]
0x74B1A7: fld     [esp+58h+var_C]
0x74B1AB: fld     [esp+58h+arg_0]
0x74B1AF: fld     st
0x74B1B1: fmulp   st(2), st
0x74B1B3: fxch    st(1)
0x74B1B5: fstp    [esp+58h+var_18]
0x74B1B9: fld     [esp+58h+var_8]
0x74B1BD: fmul    st, st(1)
0x74B1BF: fstp    [esp+58h+var_14]
0x74B1C3: fmul    [esp+58h+var_4]
0x74B1C7: fstp    [esp+58h+var_10]
0x74B1CB: fld     [esp+58h+var_18]
0x74B1CF: faddp   st(3), st
0x74B1D1: fxch    st(2)
0x74B1D3: fstp    [esp+58h+var_C]
0x74B1D7: mov     eax, [esp+58h+var_C]
0x74B1DB: mov     [esi], eax
0x74B1DD: fadd    [esp+58h+var_14]
0x74B1E1: fstp    [esp+58h+var_8]
0x74B1E5: mov     ecx, [esp+58h+var_8]
0x74B1E9: mov     [esi+4], ecx
0x74B1EC: fadd    [esp+58h+var_10]
0x74B1F0: fstp    [esp+58h+var_4]
0x74B1F4: mov     edx, [esp+58h+var_4]
0x74B1F8: mov     [esi+8], edx
0x74B1FB: push    edi
0x74B1FC: push    esi
0x74B1FD: push    ebp
0x74B1FE: mov     ecx, ebx
0x74B200: call    sub_74A0A0
0x74B205: pop     edi
0x74B206: pop     esi
0x74B207: pop     ebp
0x74B208: mov     al, 1
0x74B20A: pop     ebx
0x74B20B: add     esp, 48h
0x74B20E: retn    0Ch
