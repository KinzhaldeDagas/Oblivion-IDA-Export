0x6AE860: sub     esp, 38h
0x6AE863: push    ebp
0x6AE864: push    esi
0x6AE865: xor     ebp, ebp
0x6AE867: mov     esi, ecx
0x6AE869: cmp     [esi+8], ebp
0x6AE86C: mov     [esp+40h+var_38], ebp
0x6AE870: jz      loc_6AF64E
0x6AE876: cmp     byte ptr ds:0B16178h, 0
0x6AE87D: jz      loc_6AF64E
0x6AE883: mov     eax, ds:0B33428h
0x6AE888: cmp     eax, ebp
0x6AE88A: push    ebx
0x6AE88B: jz      short loc_6AE89E
0x6AE88D: mov     eax, [eax+20h]
0x6AE890: cmp     eax, ebp
0x6AE892: setnz   cl
0x6AE895: test    cl, cl
0x6AE897: jz      short loc_6AE89E
0x6AE899: cmp     eax, 2
0x6AE89C: jnz     short loc_6AE8AA
0x6AE89E: call    sub_578FE0
0x6AE8A3: cmp     eax, 3EFh
0x6AE8A8: jnz     short loc_6AE8AE
0x6AE8AA: mov     bl, 1
0x6AE8AC: jmp     short loc_6AE8B2
0x6AE8AE: mov     bl, byte ptr [esp+44h+arg_0]
0x6AE8B2: mov     al, [esi+0A6h]
0x6AE8B8: test    al, al
0x6AE8BA: jnz     short loc_6AE8CD
0x6AE8BC: test    bl, bl
0x6AE8BE: jz      short loc_6AE8C9
0x6AE8C0: mov     ecx, esi
0x6AE8C2: call    sub_6A9B40
0x6AE8C7: jmp     short loc_6AE8EF
0x6AE8C9: test    al, al
0x6AE8CB: jz      short loc_6AE8DA
0x6AE8CD: test    bl, bl
0x6AE8CF: jnz     short loc_6AE8DE
0x6AE8D1: mov     ecx, esi
0x6AE8D3: call    sub_6A9C00
0x6AE8D8: jmp     short loc_6AE8EF
0x6AE8DA: test    bl, bl
0x6AE8DC: jz      short loc_6AE8EF
0x6AE8DE: test    al, al
0x6AE8E0: jnz     short loc_6AE8E8
0x6AE8E2: cmp     byte ptr [esp+44h+arg_4], al
0x6AE8E6: jz      short loc_6AE8EF
0x6AE8E8: mov     ecx, esi
0x6AE8EA: call    sub_6AD030
0x6AE8EF: test    bl, bl
0x6AE8F1: push    edi
0x6AE8F2: mov     [esi+0A6h], bl
0x6AE8F8: jz      loc_6AE9DC
0x6AE8FE: cmp     byte ptr [esp+48h+arg_4], 0
0x6AE903: jnz     loc_6AEA5E
0x6AE909: mov     ecx, [esi+300h]
0x6AE90F: call    sub_6A9030
0x6AE914: cmp     eax, ebp
0x6AE916: mov     [esp+48h+arg_0], eax
0x6AE91A: jz      short loc_6AE972
0x6AE91C: lea     esp, [esp+0]
0x6AE920: lea     eax, [esp+48h+var_38]
0x6AE924: push    eax
0x6AE925: lea     ecx, [esp+4Ch+var_30]
0x6AE929: push    ecx
0x6AE92A: mov     ecx, [esi+300h]
0x6AE930: lea     edx, [esp+50h+arg_0]
0x6AE934: push    edx
0x6AE935: call    sub_452600
0x6AE93A: mov     ecx, [esp+48h+var_38]
0x6AE93E: mov     eax, [ecx]
0x6AE940: test    eax, 100h
0x6AE945: jz      short loc_6AE96C
0x6AE947: test    al, 21h
0x6AE949: jz      short loc_6AE96C
0x6AE94B: call    sub_6B6AF0
0x6AE950: test    al, al
0x6AE952: jnz     short loc_6AE96C
0x6AE954: mov     eax, [esp+48h+var_30]
0x6AE958: lea     ecx, [esp+48h+arg_4]
0x6AE95C: push    ecx
0x6AE95D: mov     ecx, [esi+320h]
0x6AE963: mov     [esp+4Ch+arg_4], eax
0x6AE967: call    sub_6AA320
0x6AE96C: cmp     [esp+48h+arg_0], ebp
0x6AE970: jnz     short loc_6AE920
0x6AE972: mov     edx, [esi+320h]
0x6AE978: cmp     [edx+0Ch], ebp
0x6AE97B: jz      loc_6AF64C
0x6AE981: or      ebx, 0FFFFFFFFh
0x6AE984: jmp     short loc_6AE992
0x6AE986: jmp     short loc_6AE990
0x6AE988: align 10h
0x6AE990: xor     ebp, ebp
0x6AE992: mov     edi, [esi+320h]
0x6AE998: mov     eax, [edi+4]
0x6AE99B: mov     ecx, [eax]
0x6AE99D: cmp     ecx, ebp
0x6AE99F: mov     [edi+4], ecx
0x6AE9A2: jz      short loc_6AE9A9
0x6AE9A4: mov     [ecx+4], ebp
0x6AE9A7: jmp     short loc_6AE9AC
0x6AE9A9: mov     [edi+8], ebp
0x6AE9AC: mov     edx, [edi]
0x6AE9AE: mov     ebp, [eax+8]
0x6AE9B1: push    eax
0x6AE9B2: mov     eax, [edx+8]
0x6AE9B5: mov     ecx, edi
0x6AE9B7: call    eax
0x6AE9B9: add     [edi+0Ch], ebx
0x6AE9BC: push    ebp
0x6AE9BD: mov     ecx, esi
0x6AE9BF: call    sub_6AC9F0
0x6AE9C4: mov     ecx, [esi+320h]
0x6AE9CA: cmp     dword ptr [ecx+0Ch], 0
0x6AE9CE: jnz     short loc_6AE990
0x6AE9D0: pop     edi
0x6AE9D1: pop     ebx
0x6AE9D2: pop     esi
0x6AE9D3: xor     eax, eax
0x6AE9D5: pop     ebp
0x6AE9D6: add     esp, 38h
0x6AE9D9: retn    8
0x6AE9DC: cmp     byte ptr [esp+48h+arg_4], 0
0x6AE9E1: jnz     short loc_6AEA5E
0x6AE9E3: mov     edx, ds:0B33EA0h
0x6AE9E9: fild    dword ptr ds:0B33EA0h
0x6AE9EF: test    edx, edx
0x6AE9F1: jge     short loc_6AE9F9
0x6AE9F3: fadd    dword ptr ds:0A2FC78h
0x6AE9F9: mov     eax, [esi+0CCh]
0x6AE9FF: fstp    [esp+48h+arg_4]
0x6AEA03: test    eax, eax
0x6AEA05: fld     [esp+48h+arg_4]
0x6AEA09: fld     st
0x6AEA0B: fild    dword ptr [esi+0CCh]
0x6AEA11: jge     short loc_6AEA19
0x6AEA13: fadd    dword ptr ds:0A2FC78h
0x6AEA19: fsubp   st(1), st
0x6AEA1B: call    Double_To_SInt32
0x6AEA20: add     eax, 0FFFFFFFFh
0x6AEA23: cmp     eax, 1Ch
0x6AEA26: ja      short loc_6AEA36
0x6AEA28: pop     edi
0x6AEA29: fstp    st
0x6AEA2B: pop     ebx
0x6AEA2C: pop     esi
0x6AEA2D: xor     eax, eax
0x6AEA2F: pop     ebp
0x6AEA30: add     esp, 38h
0x6AEA33: retn    8
0x6AEA36: fnstcw  word ptr [esp+48h+arg_4]
0x6AEA3A: movzx   eax, word ptr [esp+48h+arg_4]
0x6AEA3F: or      eax, 0C00h
0x6AEA44: mov     [esp+48h+arg_0], eax
0x6AEA48: fldcw   word ptr [esp+48h+arg_0]
0x6AEA4C: fistp   [esp+48h+var_24+4]
0x6AEA50: mov     ecx, dword ptr [esp+48h+var_24+4]
0x6AEA54: mov     [esi+0CCh], ecx
0x6AEA5A: fldcw   word ptr [esp+48h+arg_4]
0x6AEA5E: fld     dword ptr [esi+84h]
0x6AEA64: push    1
0x6AEA66: fld     qword ptr ds:0A77238h
0x6AEA6C: sub     esp, 0Ch
0x6AEA6F: fdiv    st(1), st
0x6AEA71: mov     eax, [esi+78h]
0x6AEA74: mov     edx, [eax]
0x6AEA76: fxch    st(1)
0x6AEA78: fstp    [esp+58h+arg_4]
0x6AEA7C: fld     [esp+58h+arg_4]
0x6AEA80: fstp    [esp+58h+var_50]
0x6AEA84: fld     dword ptr [esi+88h]
0x6AEA8A: fdiv    st, st(1)
0x6AEA8C: fstp    [esp+58h+arg_4]
0x6AEA90: fld     [esp+58h+arg_4]
0x6AEA94: fstp    [esp+58h+var_54]
0x6AEA98: fdivr   dword ptr [esi+80h]
0x6AEA9E: fstp    [esp+58h+arg_4]
0x6AEAA2: fld     [esp+58h+arg_4]
0x6AEAA6: fstp    [esp+58h+var_58]
0x6AEAA9: push    eax
0x6AEAAA: mov     eax, [edx+38h]
0x6AEAAD: call    eax
0x6AEAAF: fld     dword ptr [esi+9Ch]
0x6AEAB5: mov     eax, [esi+78h]
0x6AEAB8: mov     ecx, [eax]
0x6AEABA: mov     edx, [ecx+34h]
0x6AEABD: push    1
0x6AEABF: sub     esp, 18h
0x6AEAC2: fstp    [esp+60h+var_4C]
0x6AEAC6: fld     dword ptr [esi+0A0h]
0x6AEACC: fstp    [esp+60h+var_50]
0x6AEAD0: fld     dword ptr [esi+98h]
0x6AEAD6: fstp    [esp+60h+var_54]
0x6AEADA: fld     dword ptr [esi+90h]
0x6AEAE0: fstp    [esp+60h+var_58]
0x6AEAE4: fld     dword ptr [esi+94h]
0x6AEAEA: fstp    [esp+60h+var_5C]
0x6AEAEE: fld     dword ptr [esi+8Ch]
0x6AEAF4: fstp    [esp+60h+var_60]
0x6AEAF7: push    eax
0x6AEAF8: call    edx
0x6AEAFA: mov     eax, [esi+78h]
0x6AEAFD: mov     ecx, [eax]
0x6AEAFF: mov     edx, [ecx+44h]
0x6AEB02: push    eax
0x6AEB03: call    edx
0x6AEB05: mov     ecx, esi
0x6AEB07: call    sub_6AA730
0x6AEB0C: mov     eax, [esi+308h]
0x6AEB12: cmp     [eax+0Ch], ebp
0x6AEB15: jz      loc_6AEEC4
0x6AEB1B: mov     ebx, [eax+4]
0x6AEB1E: test    ebx, ebx
0x6AEB20: mov     [esp+44h+var_30], ebx
0x6AEB24: jz      loc_6AEEC4
0x6AEB2A: lea     ebx, [ebx+0]
0x6AEB30: mov     eax, [ebx+4]
0x6AEB33: mov     ebp, [ebx+8]
0x6AEB36: mov     [esp+44h+arg_4], eax
0x6AEB3A: mov     eax, [ebp+0]
0x6AEB3D: sub     eax, 3
0x6AEB40: jz      loc_6AED41
0x6AEB46: sub     eax, 4
0x6AEB49: jz      loc_6AEC7E
0x6AEB4F: sub     eax, 1
0x6AEB52: jnz     loc_6AEEAA
0x6AEB58: mov     edx, [ebp+4]
0x6AEB5B: lea     ecx, [esp+44h+arg_8]
0x6AEB5F: push    ecx
0x6AEB60: mov     ecx, [esi+300h]
0x6AEB66: push    edx
0x6AEB67: mov     [esp+4Ch+arg_8], 0
0x6AEB6F: call    NiTMap_GetAt
0x6AEB74: mov     edi, [esp+44h+arg_8]
0x6AEB78: test    edi, edi
0x6AEB7A: jz      loc_6AEEAA
0x6AEB80: mov     ecx, edi
0x6AEB82: call    sub_6B6AF0
0x6AEB87: test    al, al
0x6AEB89: jnz     short loc_6AEBB1
0x6AEB8B: fld     dword ptr [edi+3Ch]
0x6AEB8E: push    ecx
0x6AEB8F: mov     ecx, edi
0x6AEB91: fstp    [esp+48h+var_48]; float
0x6AEB94: mov     word ptr [edi+46h], 2710h
0x6AEB9A: call    sub_6B6F20
0x6AEB9F: mov     eax, [edi]
0x6AEBA1: shr     eax, 4
0x6AEBA4: and     eax, 0FFFFFF01h
0x6AEBA9: push    eax
0x6AEBAA: mov     ecx, edi
0x6AEBAC: call    sub_6B6E60
0x6AEBB1: mov     eax, [ebp+0Ch]
0x6AEBB4: mov     ecx, ds:0B33EA0h
0x6AEBBA: cmp     ecx, eax
0x6AEBBC: jnb     short loc_6AEC37
0x6AEBBE: cmp     word ptr [edi+46h], 0
0x6AEBC3: jz      short loc_6AEC37
0x6AEBC5: mov     edx, eax
0x6AEBC7: sub     edx, ecx
0x6AEBC9: test    edx, edx
0x6AEBCB: mov     [esp+44h+arg_8], edx
0x6AEBCF: fild    [esp+44h+arg_8]
0x6AEBD3: jge     short loc_6AEBDB
0x6AEBD5: fadd    dword ptr ds:0A2FC78h
0x6AEBDB: sub     eax, [ebp+8]
0x6AEBDE: test    eax, eax
0x6AEBE0: mov     [esp+44h+arg_8], eax
0x6AEBE4: fild    [esp+44h+arg_8]
0x6AEBE8: jge     short loc_6AEBF0
0x6AEBEA: fadd    dword ptr ds:0A2FC78h
0x6AEBF0: fdivp   st(1), st
0x6AEBF2: fstp    [esp+44h+arg_8]
0x6AEBF6: fld     [esp+44h+arg_8]
0x6AEBFA: fld1
0x6AEBFC: fsubrp  st(1), st
0x6AEBFE: fstp    [esp+44h+arg_8]
0x6AEC02: fld     [esp+44h+arg_8]
0x6AEC06: call    __CIlog10
0x6AEC0B: fstp    [esp+44h+arg_8]
0x6AEC0F: fld     [esp+44h+arg_8]
0x6AEC13: fmul    qword ptr ds:0A77230h
0x6AEC19: call    Double_To_SInt32
0x6AEC1E: cmp     eax, 2710h
0x6AEC23: jl      short loc_6AEC2A
0x6AEC25: mov     eax, 2710h
0x6AEC2A: push    eax
0x6AEC2B: mov     ecx, edi
0x6AEC2D: call    sub_6A90C0
0x6AEC32: jmp     loc_6AEEAA
0x6AEC37: mov     word ptr [edi+46h], 0
0x6AEC3D: fld     dword ptr [edi+3Ch]
0x6AEC40: push    ecx
0x6AEC41: mov     ecx, edi
0x6AEC43: fstp    [esp+48h+var_48]; float
0x6AEC46: call    sub_6B6F20
0x6AEC4B: lea     eax, [esp+44h+var_30]
0x6AEC4F: mov     byte ptr [edi+4Bh], 0
0x6AEC53: mov     ecx, [esi+308h]
0x6AEC59: push    eax
0x6AEC5A: call    sub_7AA860
0x6AEC5F: push    1
0x6AEC61: mov     ecx, ebp
0x6AEC63: call    sub_6AA6F0
0x6AEC68: cmp     [esp+44h+arg_4], 0
0x6AEC6D: jz      loc_6AED33
0x6AEC73: mov     ecx, [esp+44h+arg_4]
0x6AEC77: mov     ebx, [ecx]
0x6AEC79: jmp     loc_6AEEAA
0x6AEC7E: mov     ecx, [ebp+4]
0x6AEC81: lea     eax, [esp+44h+arg_8]
0x6AEC85: push    eax
0x6AEC86: push    ecx
0x6AEC87: mov     ecx, [esi+300h]
0x6AEC8D: mov     [esp+4Ch+arg_8], 0
0x6AEC95: call    NiTMap_GetAt
0x6AEC9A: mov     edi, [esp+44h+arg_8]
0x6AEC9E: test    edi, edi
0x6AECA0: jz      loc_6AEEAA
0x6AECA6: mov     eax, [ebp+0Ch]
0x6AECA9: mov     ecx, ds:0B33EA0h
0x6AECAF: cmp     ecx, eax
0x6AECB1: jnb     short loc_6AED21
0x6AECB3: cmp     word ptr [edi+46h], 2710h
0x6AECB9: jnb     short loc_6AED21
0x6AECBB: mov     edx, eax
0x6AECBD: sub     edx, ecx
0x6AECBF: test    edx, edx
0x6AECC1: mov     [esp+44h+arg_8], edx
0x6AECC5: fild    [esp+44h+arg_8]
0x6AECC9: jge     short loc_6AECD1
0x6AECCB: fadd    dword ptr ds:0A2FC78h
0x6AECD1: sub     eax, [ebp+8]
0x6AECD4: test    eax, eax
0x6AECD6: mov     [esp+44h+arg_8], eax
0x6AECDA: fild    [esp+44h+arg_8]
0x6AECDE: jge     short loc_6AECE6
0x6AECE0: fadd    dword ptr ds:0A2FC78h
0x6AECE6: fdivp   st(1), st
0x6AECE8: fstp    [esp+44h+arg_8]
0x6AECEC: fld     [esp+44h+arg_8]
0x6AECF0: call    __CIlog10
0x6AECF5: fstp    [esp+44h+arg_8]
0x6AECF9: fld     [esp+44h+arg_8]
0x6AECFD: fmul    qword ptr ds:0A77230h
0x6AED03: call    Double_To_SInt32
0x6AED08: cmp     eax, 2710h
0x6AED0D: jl      short loc_6AED14
0x6AED0F: mov     eax, 2710h
0x6AED14: push    eax
0x6AED15: mov     ecx, edi
0x6AED17: call    sub_6A90C0
0x6AED1C: jmp     loc_6AEEAA
0x6AED21: mov     ecx, edi
0x6AED23: call    sub_6B6AC0
0x6AED28: mov     word ptr [edi+46h], 2710h
0x6AED2E: jmp     loc_6AEC3D
0x6AED33: mov     edx, [esi+308h]
0x6AED39: mov     ebx, [edx+4]
0x6AED3C: jmp     loc_6AEEAA
0x6AED41: mov     eax, [ebp+8]
0x6AED44: test    eax, eax
0x6AED46: jge     short loc_6AED58
0x6AED48: mov     ecx, ds:0B33EA0h
0x6AED4E: sub     ecx, eax
0x6AED50: mov     [ebp+8], ecx
0x6AED53: jmp     loc_6AEEAA
0x6AED58: add     eax, 0FFFFFFECh
0x6AED5B: cmp     ds:0B33EA0h, eax
0x6AED61: jb      loc_6AEEAA
0x6AED67: mov     eax, [ebp+4]
0x6AED6A: push    eax
0x6AED6B: mov     ecx, esi
0x6AED6D: call    sub_6AB130
0x6AED72: mov     edi, eax
0x6AED74: test    edi, edi
0x6AED76: jz      loc_6AEE79
0x6AED7C: mov     eax, [ebp+8]
0x6AED7F: sub     eax, ds:0B33EA0h
0x6AED85: cmp     eax, 2Dh ; '-'
0x6AED88: mov     dword ptr [esp+44h+ArgList], eax
0x6AED8C: jg      short loc_6AED93
0x6AED8E: cmp     eax, 0FFFFFF83h
0x6AED91: jge     short loc_6AEE03
0x6AED93: mov     edx, dword ptr [esp+44h+ArgList]
0x6AED97: push    edx; ArgList
0x6AED98: push    offset aVoiceWasOffByI; "Voice was off by %i milliseconds, attem"...
0x6AED9D: call    sub_40FEC0
0x6AEDA2: add     esp, 8
0x6AEDA5: mov     ecx, edi
0x6AEDA7: call    NiDX9TextureData__GetTexture
0x6AEDAC: mov     ebx, eax
0x6AEDAE: test    ebx, ebx
0x6AEDB0: jz      short loc_6AEE03
0x6AEDB2: mov     edx, [ebx]
0x6AEDB4: mov     [esp+44h+var_34], 0
0x6AEDBC: mov     eax, [edi+40h]
0x6AEDBF: mov     cl, [edi+11h]
0x6AEDC2: mov     [esp+44h+var_28], eax
0x6AEDC6: push    0
0x6AEDC8: lea     eax, [esp+48h+var_34]
0x6AEDCC: push    eax
0x6AEDCD: mov     byte ptr [esp+4Ch+arg_8], cl
0x6AEDD1: mov     ecx, [edx+10h]
0x6AEDD4: push    ebx
0x6AEDD5: call    ecx
0x6AEDD7: test    eax, eax
0x6AEDD9: jl      short loc_6AEE03
0x6AEDDB: mov     eax, 10624DD3h
0x6AEDE0: mul     [esp+44h+var_28]
0x6AEDE4: movzx   eax, byte ptr [esp+44h+arg_8]
0x6AEDE9: mov     ecx, [ebx]
0x6AEDEB: mov     ecx, [ecx+34h]
0x6AEDEE: shr     edx, 6
0x6AEDF1: imul    edx, eax
0x6AEDF4: imul    edx, dword ptr [esp+44h+ArgList]
0x6AEDF9: mov     eax, [esp+44h+var_34]
0x6AEDFD: sub     eax, edx
0x6AEDFF: push    eax
0x6AEE00: push    ebx
0x6AEE01: call    ecx
0x6AEE03: cmp     byte ptr [esi+0A5h], 0
0x6AEE0A: jz      short loc_6AEE4F
0x6AEE0C: test    dword ptr [edi], 1000h
0x6AEE12: jz      short loc_6AEE21
0x6AEE14: fldz
0x6AEE16: push    ecx
0x6AEE17: mov     ecx, edi
0x6AEE19: fstp    [esp+48h+var_48]; float
0x6AEE1C: call    sub_6B6F20
0x6AEE21: mov     ecx, edi
0x6AEE23: call    sub_6B6B90
0x6AEE28: fstp    [esp+44h+var_24+8]
0x6AEE2C: mov     ecx, offset flt_B161B8
0x6AEE31: call    GameSetting_GetSafeFloatPointer
0x6AEE36: fld     dword ptr [eax]
0x6AEE38: fsubr   [esp+44h+var_24+8]
0x6AEE3C: push    ecx
0x6AEE3D: mov     ecx, edi
0x6AEE3F: fstp    [esp+48h+arg_8]
0x6AEE43: fld     [esp+48h+arg_8]
0x6AEE47: fstp    [esp+48h+var_48]; float
0x6AEE4A: call    sub_6B6B20
0x6AEE4F: and     dword ptr [edi], 0FFFFFDFFh
0x6AEE55: test    byte ptr [edi], 10h
0x6AEE58: mov     ecx, edi
0x6AEE5A: jz      short loc_6AEE65
0x6AEE5C: push    1
0x6AEE5E: call    sub_6B6E60
0x6AEE63: jmp     short loc_6AEE79
0x6AEE65: push    0
0x6AEE67: call    sub_6B6E60
0x6AEE6C: mov     eax, [edi]
0x6AEE6E: test    al, 4
0x6AEE70: jz      short loc_6AEE79
0x6AEE72: or      eax, 100h
0x6AEE77: mov     [edi], eax
0x6AEE79: mov     ecx, [esi+308h]
0x6AEE7F: lea     edx, [esp+44h+var_30]
0x6AEE83: push    edx
0x6AEE84: call    sub_7AA860
0x6AEE89: push    1
0x6AEE8B: mov     ecx, ebp
0x6AEE8D: call    sub_6AA6F0
0x6AEE92: cmp     [esp+44h+arg_4], 0
0x6AEE97: jz      short loc_6AEEA1
0x6AEE99: mov     eax, [esp+44h+arg_4]
0x6AEE9D: mov     ebx, [eax]
0x6AEE9F: jmp     short loc_6AEEAA
0x6AEEA1: mov     ecx, [esi+308h]
0x6AEEA7: mov     ebx, [ecx+4]
0x6AEEAA: test    ebx, ebx
0x6AEEAC: mov     [esp+44h+var_34], 0
0x6AEEB4: jz      short loc_6AEEC4
0x6AEEB6: mov     ebx, [ebx]
0x6AEEB8: test    ebx, ebx
0x6AEEBA: mov     [esp+44h+var_30], ebx
0x6AEEBE: jnz     loc_6AEB30
0x6AEEC4: mov     ecx, ds:0B333C4h; this
0x6AEECA: lea     ebx, [ecx+6ECh]
0x6AEED0: mov     byte ptr [esp+44h+arg_8], 0
0x6AEED5: mov     [esp+44h+arg_4], ebx
0x6AEED9: call    TESObjectREFR_GetParentCell
0x6AEEDE: test    eax, eax
0x6AEEE0: jz      short loc_6AEEFC
0x6AEEE2: mov     ecx, ds:0B333C4h; this
0x6AEEE8: call    TESObjectREFR_GetParentCell
0x6AEEED: mov     ecx, eax; this
0x6AEEEF: call    TESObjectCELL_IsInterior
0x6AEEF4: test    al, al
0x6AEEF6: jnz     loc_6AF317
0x6AEEFC: mov     eax, ds:0B33EA0h
0x6AEF01: sub     eax, [esi+0C8h]
0x6AEF07: cdq
0x6AEF08: xor     eax, edx
0x6AEF0A: sub     eax, edx
0x6AEF0C: cmp     eax, 1F4h
0x6AEF11: jle     loc_6AF317
0x6AEF17: mov     eax, ds:0B333C4h
0x6AEF1C: cmp     dword ptr [eax+6F0h], 0
0x6AEF23: jnz     short loc_6AEF32
0x6AEF25: cmp     dword ptr [eax+6ECh], 0
0x6AEF2C: jz      loc_6AF317
0x6AEF32: test    ebx, ebx
0x6AEF34: mov     edx, ds:0B333A0h
0x6AEF3A: mov     edx, [edx+5Ch]
0x6AEF3D: fld     dword ptr [edx+0D0h]
0x6AEF43: mov     byte ptr [esp+44h+arg_8], 1
0x6AEF48: fstp    [esp+44h+var_30]
0x6AEF4C: mov     dword ptr [esp+44h+ArgList], 0
0x6AEF54: mov     dword ptr [esp+44h+var_24+8], edx
0x6AEF58: jz      loc_6AF317
0x6AEF5E: fld     qword ptr ds:0A771C8h
0x6AEF64: fld     [esp+44h+var_30]
0x6AEF68: mov     ebp, [ebx]
0x6AEF6A: test    ebp, ebp
0x6AEF6C: jz      loc_6AF313
0x6AEF72: mov     edi, [ebp+0]
0x6AEF75: movzx   eax, byte ptr [edi+43h]
0x6AEF79: movzx   ecx, byte ptr [edi+42h]
0x6AEF7D: mov     [esp+44h+var_28], eax
0x6AEF81: fild    [esp+44h+var_28]
0x6AEF85: mov     [esp+44h+var_28], ecx
0x6AEF89: mov     ecx, [ebp+4]
0x6AEF8C: movzx   eax, cx
0x6AEF8F: test    eax, eax
0x6AEF91: fmul    st, st(2)
0x6AEF93: fstp    dword ptr [esp+44h+var_24]
0x6AEF97: fild    [esp+44h+var_28]
0x6AEF9B: fmul    st, st(2)
0x6AEF9D: fstp    [esp+44h+var_28]
0x6AEFA1: jz      short loc_6AEFBB
0x6AEFA3: mov     eax, [edx+10h]
0x6AEFA6: test    eax, eax
0x6AEFA8: jz      short loc_6AEFBB
0x6AEFAA: test    [eax+53h], cl
0x6AEFAD: jnz     short loc_6AEFBB
0x6AEFAF: mov     ebx, [ebx+4]
0x6AEFB2: mov     [esp+44h+arg_4], ebx
0x6AEFB6: jmp     loc_6AF30B
0x6AEFBB: fld     [esp+44h+var_28]
0x6AEFBF: fld     st
0x6AEFC1: fld     dword ptr [esp+44h+var_24]
0x6AEFC5: fld     st
0x6AEFC7: fsubp   st(2), st
0x6AEFC9: fxch    st(1)
0x6AEFCB: fstp    dword ptr [esp+44h+var_24]
0x6AEFCF: fld     dword ptr [esp+44h+var_24]
0x6AEFD3: fabs
0x6AEFD5: fstp    dword ptr [esp+44h+var_24]
0x6AEFD9: fld     dword ptr [esp+44h+var_24]
0x6AEFDD: fcomp   dword ptr ds:0A771F0h
0x6AEFE3: fnstsw  ax
0x6AEFE5: test    ah, 1
0x6AEFE8: jnz     short loc_6AF050
0x6AEFEA: fcom    st(1)
0x6AEFEC: fnstsw  ax
0x6AEFEE: test    ah, 5
0x6AEFF1: jp      short loc_6AF009
0x6AEFF3: fcom    st(2)
0x6AEFF5: fnstsw  ax
0x6AEFF7: test    ah, 41h
0x6AEFFA: jz      short loc_6AF030
0x6AEFFC: fxch    st(1)
0x6AEFFE: fcom    st(2)
0x6AF000: fnstsw  ax
0x6AF002: test    ah, 5
0x6AF005: jnp     short loc_6AF040
0x6AF007: fxch    st(1)
0x6AF009: fcom    st(1)
0x6AF00B: fnstsw  ax
0x6AF00D: test    ah, 41h
0x6AF010: jnz     short loc_6AF050
0x6AF012: fcomp   st(2)
0x6AF014: fnstsw  ax
0x6AF016: test    ah, 41h
0x6AF019: jnz     short loc_6AF052
0x6AF01B: fcomp   st(1)
0x6AF01D: fnstsw  ax
0x6AF01F: test    ah, 5
0x6AF022: jp      short loc_6AF054
0x6AF024: mov     ebx, [ebx+4]
0x6AF027: mov     [esp+44h+arg_4], ebx
0x6AF02B: jmp     loc_6AF30B
0x6AF030: mov     ebx, [ebx+4]
0x6AF033: fstp    st
0x6AF035: fstp    st
0x6AF037: mov     [esp+44h+arg_4], ebx
0x6AF03B: jmp     loc_6AF30B
0x6AF040: mov     ebx, [ebx+4]
0x6AF043: fstp    st(1)
0x6AF045: fstp    st
0x6AF047: mov     [esp+44h+arg_4], ebx
0x6AF04B: jmp     loc_6AF30B
0x6AF050: fstp    st
0x6AF052: fstp    st
0x6AF054: mov     eax, [edi+3Ch]
0x6AF057: fstp    st
0x6AF059: test    al, 40h
0x6AF05B: fstp    st
0x6AF05D: mov     ecx, [edi+38h]
0x6AF060: mov     edx, [edi+40h]
0x6AF063: mov     [esp+44h+var_8], ecx
0x6AF067: mov     [esp+44h], edx
0x6AF06B: jz      loc_6AF11F
0x6AF071: mov     eax, ecx
0x6AF073: mov     [esp+44h+var_8], eax
0x6AF077: mov     eax, [edi+3Ch]
0x6AF07A: test    al, 10h
0x6AF07C: mov     ecx, edx
0x6AF07E: mov     [esp+44h], ecx
0x6AF082: jz      loc_6AF11F
0x6AF088: mov     eax, [edi+0Ch]
0x6AF08B: push    eax
0x6AF08C: mov     ecx, esi
0x6AF08E: call    sub_6ACA40
0x6AF093: test    al, al
0x6AF095: jnz     loc_6AF11F
0x6AF09B: mov     eax, [edi+0Ch]
0x6AF09E: push    0
0x6AF0A0: push    1011h
0x6AF0A5: push    eax
0x6AF0A6: mov     ecx, esi
0x6AF0A8: call    OSGLobals_PlaySound
0x6AF0AD: mov     ecx, [esi+300h]
0x6AF0B3: lea     edx, [esp+44h+ArgList]
0x6AF0B7: mov     ebx, eax
0x6AF0B9: mov     eax, [edi+0Ch]
0x6AF0BC: push    edx
0x6AF0BD: push    eax
0x6AF0BE: call    NiTMap_GetAt
0x6AF0C3: test    al, al
0x6AF0C5: jz      short loc_6AF10A
0x6AF0C7: movzx   eax, word ptr [ebp+4]
0x6AF0CB: mov     ebp, dword ptr [esp+44h+ArgList]
0x6AF0CF: mov     ecx, ebp
0x6AF0D1: mov     [ebp+34h], eax
0x6AF0D4: call    sub_6B7050
0x6AF0D9: test    al, al
0x6AF0DB: jnz     short loc_6AF0F4
0x6AF0DD: push    2710h
0x6AF0E2: mov     ecx, ebp
0x6AF0E4: call    sub_6A90C0
0x6AF0E9: push    1
0x6AF0EB: mov     ecx, ebp
0x6AF0ED: call    sub_6B6E60
0x6AF0F2: jmp     short loc_6AF10A
0x6AF0F4: push    1388h
0x6AF0F9: mov     byte ptr [ebp+4Bh], 1
0x6AF0FD: mov     ecx, [edi+0Ch]
0x6AF100: push    0
0x6AF102: push    ecx
0x6AF103: mov     ecx, esi
0x6AF105: call    sub_6AB8D0
0x6AF10A: test    ebx, ebx
0x6AF10C: jz      loc_6AF2EE
0x6AF112: mov     ecx, ebx; this
0x6AF114: call    sub_6B73E0
0x6AF119: push    ebx
0x6AF11A: jmp     loc_6AF2E6
0x6AF11F: mov     eax, [edi+3Ch]
0x6AF122: test    al, 10h
0x6AF124: mov     edx, [edi+38h]
0x6AF127: mov     ecx, [edi+40h]
0x6AF12A: mov     [esp+44h+var_8], edx
0x6AF12E: mov     [esp+44h], ecx
0x6AF132: jnz     loc_6AF2EE
0x6AF138: mov     edx, [ebp+8]
0x6AF13B: fild    dword ptr [ebp+8]
0x6AF13E: test    edx, edx
0x6AF140: jge     short loc_6AF148
0x6AF142: fadd    dword ptr ds:0A2FC78h
0x6AF148: fdiv    qword ptr ds:0A771E8h
0x6AF14E: push    0; Seed
0x6AF150: fmul    qword ptr ds:0A2FAA0h
0x6AF156: fstp    [esp+48h+var_28]
0x6AF15A: call    GetRandomLargeInteger?
0x6AF15F: mov     dword ptr [esp+48h+var_24], eax
0x6AF163: fild    dword ptr [esp+48h+var_24]
0x6AF167: add     esp, 4
0x6AF16A: fdiv    qword ptr ds:0A3D5A8h
0x6AF170: fld     [esp+44h+var_28]
0x6AF174: fcompp
0x6AF176: fnstsw  ax
0x6AF178: test    ah, 41h
0x6AF17B: jnz     loc_6AF2EE
0x6AF181: mov     eax, [edi+38h]
0x6AF184: mov     ecx, [edi+40h]
0x6AF187: mov     [esp+44h+var_8], eax
0x6AF18B: mov     eax, [edi+3Ch]
0x6AF18E: mov     [esp+44h], ecx
0x6AF192: test    al, 40h
0x6AF194: mov     eax, [edi+0Ch]
0x6AF197: push    0
0x6AF199: mov     ecx, esi
0x6AF19B: jz      short loc_6AF1A4
0x6AF19D: push    1101h
0x6AF1A2: jmp     short loc_6AF1A9
0x6AF1A4: push    1102h
0x6AF1A9: push    eax
0x6AF1AA: call    OSGLobals_PlaySound
0x6AF1AF: mov     ebp, eax
0x6AF1B1: test    ebp, ebp
0x6AF1B3: jz      loc_6AF2EE
0x6AF1B9: mov     eax, [edi+3Ch]
0x6AF1BC: test    al, 40h
0x6AF1BE: mov     edx, [edi+38h]
0x6AF1C1: mov     ecx, [edi+40h]
0x6AF1C4: mov     [esp+44h+var_8], edx
0x6AF1C8: mov     [esp+44h], ecx
0x6AF1CC: jnz     loc_6AF2D5
0x6AF1D2: mov     ecx, ds:0B333C4h
0x6AF1D8: mov     edx, [ecx]
0x6AF1DA: mov     eax, [edx+174h]
0x6AF1E0: call    eax
0x6AF1E2: mov     ecx, [eax]
0x6AF1E4: mov     edx, [eax+4]
0x6AF1E7: mov     eax, [eax+8]
0x6AF1EA: push    0; Seed
0x6AF1EC: mov     [esp+48h+var_14], ecx
0x6AF1F0: mov     [esp+48h+var_10], edx
0x6AF1F4: mov     [esp+48h+var_C], eax
0x6AF1F8: call    GetRandomLargeInteger?
0x6AF1FD: mov     edi, eax
0x6AF1FF: and     edi, 80000001h
0x6AF205: jns     short loc_6AF20C
0x6AF207: dec     edi
0x6AF208: or      edi, 0FFFFFFFEh
0x6AF20B: inc     edi
0x6AF20C: push    0; Seed
0x6AF20E: call    GetRandomLargeInteger?
0x6AF213: mov     dword ptr [esp+4Ch+var_24], eax
0x6AF217: fild    dword ptr [esp+4Ch+var_24]
0x6AF21B: add     esp, 8
0x6AF21E: push    edi; int
0x6AF21F: push    ecx
0x6AF220: fdiv    qword ptr ds:0A3D5A8h
0x6AF226: fmul    qword ptr ds:0A3F470h
0x6AF22C: fstp    [esp+4Ch+var_24]
0x6AF230: fld     dword ptr ds:0A30634h
0x6AF236: fstp    [esp+4Ch+var_4C]; float
0x6AF239: call    sub_507010
0x6AF23E: fmul    qword ptr ds:0A771E0h
0x6AF244: push    0; Seed
0x6AF246: fadd    [esp+50h+var_24]
0x6AF24A: fadd    [esp+50h+var_14]
0x6AF24E: fstp    [esp+50h+var_14]
0x6AF252: call    GetRandomLargeInteger?
0x6AF257: add     esp, 0Ch
0x6AF25A: and     eax, 80000001h
0x6AF25F: jns     short loc_6AF266
0x6AF261: dec     eax
0x6AF262: or      eax, 0FFFFFFFEh
0x6AF265: inc     eax
0x6AF266: fld     dword ptr ds:0A30634h
0x6AF26C: push    eax; int
0x6AF26D: push    ecx
0x6AF26E: fstp    [esp+4Ch+var_4C]; float
0x6AF271: call    sub_507010
0x6AF276: push    0; Seed
0x6AF278: fstp    [esp+50h+var_28]
0x6AF27C: call    GetRandomLargeInteger?
0x6AF281: mov     dword ptr [esp+50h+var_24], eax
0x6AF285: fild    dword ptr [esp+50h+var_24]
0x6AF289: mov     ecx, ebp
0x6AF28B: fdiv    qword ptr ds:0A3D5A8h
0x6AF291: fmul    qword ptr ds:0A3F470h
0x6AF297: fld     [esp+50h+var_28]
0x6AF29B: fmul    qword ptr ds:0A771E0h
0x6AF2A1: faddp   st(1), st
0x6AF2A3: fadd    [esp+50h+var_10]
0x6AF2A7: fstp    [esp+50h+var_10]
0x6AF2AB: fld     [esp+50h+var_C]
0x6AF2AF: fadd    qword ptr ds:0A3B1B8h
0x6AF2B5: fstp    [esp+50h+var_C]
0x6AF2B9: fld     [esp+50h+var_C]
0x6AF2BD: fstp    [esp+50h+var_48]; float
0x6AF2C1: fld     [esp+50h+var_10]
0x6AF2C5: fstp    [esp+50h+var_4C]; float
0x6AF2C9: fld     [esp+50h+var_14]
0x6AF2CD: fstp    [esp+50h+var_50]; float
0x6AF2D0: call    sub_6B7360
0x6AF2D5: push    0
0x6AF2D7: mov     ecx, ebp
0x6AF2D9: call    sub_6B7190
0x6AF2DE: mov     ecx, ebp; this
0x6AF2E0: call    sub_6B73E0
0x6AF2E5: push    ebp
0x6AF2E6: call    FormHeapFree
0x6AF2EB: add     esp, 4
0x6AF2EE: mov     ecx, [esp+44h+arg_4]
0x6AF2F2: fld     qword ptr ds:0A771C8h
0x6AF2F8: mov     edx, [ecx+4]
0x6AF2FB: fld     [esp+44h+var_30]
0x6AF2FF: mov     [esp+44h+arg_4], edx
0x6AF303: mov     edx, dword ptr [esp+44h+var_24+8]
0x6AF307: mov     ebx, [esp+44h+arg_4]
0x6AF30B: test    ebx, ebx
0x6AF30D: jnz     loc_6AEF68
0x6AF313: fstp    st
0x6AF315: fstp    st
0x6AF317: mov     ecx, esi
0x6AF319: call    sub_6AD030
0x6AF31E: mov     ecx, [esi+300h]
0x6AF324: call    sub_6A9030
0x6AF329: test    eax, eax
0x6AF32B: mov     [esp+44h+arg_4], eax
0x6AF32F: jz      loc_6AF5B6
0x6AF335: lea     eax, [esp+44h+var_34]
0x6AF339: push    eax
0x6AF33A: lea     ecx, [esp+48h+ArgList]
0x6AF33E: push    ecx
0x6AF33F: mov     ecx, [esi+300h]
0x6AF345: lea     edx, [esp+4Ch+arg_4]
0x6AF349: push    edx
0x6AF34A: call    sub_452600
0x6AF34F: mov     edi, [esp+44h+var_34]
0x6AF353: mov     eax, [edi]
0x6AF355: test    eax, 1000h
0x6AF35A: jz      short loc_6AF3CF
0x6AF35C: test    al, 10h
0x6AF35E: jz      short loc_6AF3CF
0x6AF360: mov     eax, ds:0B33EA0h
0x6AF365: sub     eax, [esi+0C8h]
0x6AF36B: cdq
0x6AF36C: xor     eax, edx
0x6AF36E: sub     eax, edx
0x6AF370: cmp     eax, 1F4h
0x6AF375: jle     short loc_6AF3CF
0x6AF377: mov     eax, ds:0B333C4h
0x6AF37C: xor     dl, dl
0x6AF37E: add     eax, 6ECh
0x6AF383: mov     byte ptr [esp+44h+arg_8], 1
0x6AF388: jz      short loc_6AF3AD
0x6AF38A: lea     ebx, [ebx+0]
0x6AF390: mov     ecx, [eax]
0x6AF392: test    ecx, ecx
0x6AF394: jz      short loc_6AF3A9
0x6AF396: mov     ecx, [ecx]
0x6AF398: mov     ecx, [ecx+0Ch]
0x6AF39B: cmp     ecx, [edi+0Ch]
0x6AF39E: jnz     short loc_6AF3A2
0x6AF3A0: mov     dl, 1
0x6AF3A2: mov     eax, [eax+4]
0x6AF3A5: test    eax, eax
0x6AF3A7: jnz     short loc_6AF390
0x6AF3A9: test    dl, dl
0x6AF3AB: jnz     short loc_6AF3CF
0x6AF3AD: cmp     byte ptr [edi+4Bh], 0
0x6AF3B1: jnz     short loc_6AF3CF
0x6AF3B3: push    1388h
0x6AF3B8: mov     byte ptr [edi+4Bh], 1
0x6AF3BC: mov     edx, [edi+0Ch]
0x6AF3BF: push    1
0x6AF3C1: push    edx
0x6AF3C2: mov     ecx, esi
0x6AF3C4: call    sub_6AB8D0
0x6AF3C9: or      dword ptr [edi], 100h
0x6AF3CF: mov     ebx, [edi]
0x6AF3D1: test    bl, 2
0x6AF3D4: jz      loc_6AF4B8
0x6AF3DA: mov     eax, [edi+20h]
0x6AF3DD: mov     ecx, [edi+24h]
0x6AF3E0: mov     edx, [edi+28h]
0x6AF3E3: mov     [esp+44h+var_14], eax
0x6AF3E7: fld     [esp+44h+var_14]
0x6AF3EB: fsub    dword ptr [esi+80h]
0x6AF3F1: mov     [esp+44h+var_10], ecx
0x6AF3F5: mov     [esp+44h+var_C], edx
0x6AF3F9: fstp    [esp+44h+var_8]
0x6AF3FD: fld     [esp+44h+var_10]
0x6AF401: fsub    dword ptr [esi+84h]
0x6AF407: fstp    [esp+44h+var_4]
0x6AF40B: fld     [esp+44h+var_C]
0x6AF40F: fsub    dword ptr [esi+88h]
0x6AF415: fstp    dword ptr [esp+44h]
0x6AF419: fld     [esp+44h+var_4]
0x6AF41D: fld     [esp+44h+var_8]
0x6AF421: fld     dword ptr [esp+44h]
0x6AF425: fld     st(1)
0x6AF427: fmulp   st(2), st
0x6AF429: fld     st(2)
0x6AF42B: fmulp   st(3), st
0x6AF42D: fxch    st(1)
0x6AF42F: faddp   st(2), st
0x6AF431: fmul    st, st
0x6AF433: faddp   st(1), st
0x6AF435: fstp    dword ptr [esp+44h+var_24+8]
0x6AF439: fld     dword ptr [esp+44h+var_24+8]
0x6AF43D: call    __CIsqrt
0x6AF442: fstp    dword ptr [esp+44h+var_24+8]
0x6AF446: fld     dword ptr [esp+44h+var_24+8]
0x6AF44A: mov     eax, [edi+38h]
0x6AF44D: test    eax, eax
0x6AF44F: fstp    dword ptr [esp+44h+var_24+8]
0x6AF453: fild    dword ptr [edi+38h]
0x6AF456: jge     short loc_6AF45E
0x6AF458: fadd    dword ptr ds:0A2FC78h
0x6AF45E: cmp     byte ptr ds:0B333B8h, 0
0x6AF465: fstp    [esp+44h+var_30]
0x6AF469: jz      short loc_6AF47E
0x6AF46B: test    bl, 4
0x6AF46E: jnz     short loc_6AF47E
0x6AF470: fld     [esp+44h+var_30]
0x6AF474: fmul    qword ptr ds:0A3C770h
0x6AF47A: fstp    [esp+44h+var_30]
0x6AF47E: fld     dword ptr [esp+44h+var_24+8]
0x6AF482: fld     [esp+44h+var_30]
0x6AF486: fcompp
0x6AF488: fnstsw  ax
0x6AF48A: test    ah, 5
0x6AF48D: jp      short loc_6AF493
0x6AF48F: mov     bl, 1
0x6AF491: jmp     short loc_6AF495
0x6AF493: xor     bl, bl
0x6AF495: mov     byte ptr [esp+44h+var_28], bl
0x6AF499: mov     ecx, [esp+44h+var_28]
0x6AF49D: push    ecx
0x6AF49E: mov     ecx, edi
0x6AF4A0: call    sub_6B7130
0x6AF4A5: test    bl, bl
0x6AF4A7: jz      short loc_6AF4B8
0x6AF4A9: test    dword ptr [edi], 100h
0x6AF4AF: jz      short loc_6AF4B8
0x6AF4B1: mov     ecx, edi
0x6AF4B3: call    sub_6B6AC0
0x6AF4B8: mov     ecx, edi
0x6AF4BA: call    sub_6B6AF0
0x6AF4BF: test    al, al
0x6AF4C1: jz      short loc_6AF4FB
0x6AF4C3: mov     ecx, edi
0x6AF4C5: call    sub_6B7050
0x6AF4CA: test    al, al
0x6AF4CC: jnz     short loc_6AF4FB
0x6AF4CE: cmp     [edi+4Bh], al
0x6AF4D1: jnz     short loc_6AF4FB
0x6AF4D3: mov     byte ptr [edi+4Bh], 1
0x6AF4D7: mov     eax, [edi]
0x6AF4D9: test    al, 20h
0x6AF4DB: jnz     short loc_6AF4E4
0x6AF4DD: or      eax, 100h
0x6AF4E2: mov     [edi], eax
0x6AF4E4: test    dword ptr [edi], 1000h
0x6AF4EA: push    1388h
0x6AF4EF: mov     ecx, esi
0x6AF4F1: push    1
0x6AF4F3: jnz     short loc_6AF54F
0x6AF4F5: mov     eax, [edi+0Ch]
0x6AF4F8: push    eax
0x6AF4F9: jmp     short loc_6AF553
0x6AF4FB: mov     ecx, edi
0x6AF4FD: call    sub_6B7050
0x6AF502: test    al, al
0x6AF504: jz      short loc_6AF558
0x6AF506: mov     eax, [edi]
0x6AF508: test    al, 10h
0x6AF50A: jz      short loc_6AF558
0x6AF50C: cmp     byte ptr [edi+4Bh], 0
0x6AF510: jnz     short loc_6AF558
0x6AF512: cmp     word ptr [edi+46h], 0
0x6AF517: jz      short loc_6AF558
0x6AF519: test    eax, 100h
0x6AF51E: jnz     short loc_6AF558
0x6AF520: cmp     byte ptr ds:0B333B8h, 0
0x6AF527: jnz     short loc_6AF561
0x6AF529: push    1
0x6AF52B: mov     ecx, edi
0x6AF52D: call    sub_6B6E60
0x6AF532: mov     byte ptr [edi+4Bh], 1
0x6AF536: test    dword ptr [edi], 1000h
0x6AF53C: push    1388h
0x6AF541: push    0
0x6AF543: jz      short loc_6AF54D
0x6AF545: mov     ecx, [edi+0Ch]
0x6AF548: push    ecx
0x6AF549: mov     ecx, esi
0x6AF54B: jmp     short loc_6AF553
0x6AF54D: mov     ecx, esi
0x6AF54F: mov     edx, [edi+0Ch]
0x6AF552: push    edx
0x6AF553: call    sub_6AB8D0
0x6AF558: cmp     byte ptr ds:0B333B8h, 0
0x6AF55F: jz      short loc_6AF578
0x6AF561: mov     eax, [edi]
0x6AF563: test    eax, 1000h
0x6AF568: jz      short loc_6AF578
0x6AF56A: or      eax, 100h
0x6AF56F: mov     ecx, edi
0x6AF571: mov     [edi], eax
0x6AF573: call    sub_6B6AC0
0x6AF578: test    dword ptr [edi], 100h
0x6AF57E: jz      short loc_6AF5AB
0x6AF580: mov     ecx, edi
0x6AF582: call    sub_6B6AF0
0x6AF587: test    al, al
0x6AF589: jnz     short loc_6AF5AB
0x6AF58B: test    dword ptr [edi], 200h
0x6AF591: jnz     short loc_6AF5AB
0x6AF593: mov     eax, dword ptr [esp+44h+ArgList]
0x6AF597: lea     ecx, [esp+44h+var_24+8]
0x6AF59B: push    ecx
0x6AF59C: mov     ecx, [esi+320h]
0x6AF5A2: mov     dword ptr [esp+48h+var_24+8], eax
0x6AF5A6: call    sub_6AA320
0x6AF5AB: cmp     [esp+44h+arg_4], 0
0x6AF5B0: jnz     loc_6AF335
0x6AF5B6: mov     eax, [esi+78h]
0x6AF5B9: mov     edx, [eax]
0x6AF5BB: push    eax
0x6AF5BC: mov     eax, [edx+44h]
0x6AF5BF: call    eax
0x6AF5C1: mov     ecx, [esi+320h]
0x6AF5C7: cmp     dword ptr [ecx+0Ch], 0
0x6AF5CB: jz      short loc_6AF639
0x6AF5CD: or      ebx, 0FFFFFFFFh
0x6AF5D0: mov     edi, [esi+320h]
0x6AF5D6: mov     eax, [edi+4]
0x6AF5D9: mov     ecx, [eax]
0x6AF5DB: xor     edx, edx
0x6AF5DD: cmp     ecx, edx
0x6AF5DF: mov     [edi+4], ecx
0x6AF5E2: jz      short loc_6AF5E9
0x6AF5E4: mov     [ecx+4], edx
0x6AF5E7: jmp     short loc_6AF5EC
0x6AF5E9: mov     [edi+8], edx
0x6AF5EC: mov     edx, [edi]
0x6AF5EE: mov     ebp, [eax+8]
0x6AF5F1: push    eax
0x6AF5F2: mov     eax, [edx+8]
0x6AF5F5: mov     ecx, edi
0x6AF5F7: call    eax
0x6AF5F9: add     [edi+0Ch], ebx
0x6AF5FC: lea     ecx, [esp+48h+arg_0]
0x6AF600: push    ecx
0x6AF601: mov     ecx, [esi+300h]
0x6AF607: push    ebp
0x6AF608: mov     [esp+50h+arg_0], 0
0x6AF610: call    NiTMap_GetAt
0x6AF615: mov     eax, [esp+48h+arg_0]
0x6AF619: test    eax, eax
0x6AF61B: mov     [esp+48h+arg_0], eax
0x6AF61F: jz      short loc_6AF62D
0x6AF621: lea     edx, [esp+48h+arg_0]
0x6AF625: push    edx
0x6AF626: mov     ecx, esi
0x6AF628: call    sub_6AA9C0
0x6AF62D: mov     eax, [esi+320h]
0x6AF633: cmp     dword ptr [eax+0Ch], 0
0x6AF637: jnz     short loc_6AF5D0
0x6AF639: cmp     byte ptr [esp+48h+arg_4], 0
0x6AF63E: jz      short loc_6AF64C
0x6AF640: mov     ecx, ds:0B33EA0h
0x6AF646: mov     [esi+0C8h], ecx
0x6AF64C: pop     edi
0x6AF64D: pop     ebx
0x6AF64E: pop     esi
0x6AF64F: xor     eax, eax
0x6AF651: pop     ebp
0x6AF652: add     esp, 38h
0x6AF655: retn    8
