0x49DD00: push    0FFFFFFFFh
0x49DD02: push    offset SEH_49DD00
0x49DD07: mov     eax, large fs:0
0x49DD0D: push    eax
0x49DD0E: sub     esp, 140h
0x49DD14: mov     eax, ds:0B30AACh
0x49DD19: xor     eax, esp
0x49DD1B: mov     [esp+14Ch+var_10], eax
0x49DD22: push    ebx
0x49DD23: push    ebp
0x49DD24: push    esi
0x49DD25: push    edi
0x49DD26: mov     eax, ds:0B30AACh
0x49DD2B: xor     eax, esp
0x49DD2D: push    eax; ArgList
0x49DD2E: lea     eax, [esp+160h+var_C]
0x49DD35: mov     large fs:0, eax
0x49DD3B: test    byte ptr ds:0B3526Ch, 1
0x49DD42: mov     eax, [esp+160h+arg_0]
0x49DD49: mov     ebp, ecx
0x49DD4B: mov     [esp+160h+var_118], eax
0x49DD4F: jnz     short loc_49DD8F
0x49DD51: or      dword ptr ds:0B3526Ch, 1
0x49DD58: push    80h ; '€'
0x49DD5D: push    offset aUsurfacetextur; "uSurfaceTextureSize:Water"
0x49DD62: mov     ecx, offset dword_B35264
0x49DD67: mov     [esp+168h+var_4], 0
0x49DD72: call    sub_444060
0x49DD77: push    offset sub_A1A660; void (__cdecl *)()
0x49DD7C: call    _atexit
0x49DD81: add     esp, 4
0x49DD84: mov     [esp+160h+var_4], 0FFFFFFFFh
0x49DD8F: mov     ecx, ebp
0x49DD91: mov     [esp+160h+var_149], 0
0x49DD96: call    sub_49CA50
0x49DD9B: mov     esi, [ebp+18h]
0x49DD9E: imul    esi, esi
0x49DDA1: test    esi, esi
0x49DDA3: jz      short loc_49DE09
0x49DDA5: xor     ecx, ecx
0x49DDA7: mov     eax, esi
0x49DDA9: mov     edx, 4
0x49DDAE: mul     edx
0x49DDB0: seto    cl
0x49DDB3: neg     ecx
0x49DDB5: or      ecx, eax
0x49DDB7: xor     eax, eax
0x49DDB9: add     ecx, 4
0x49DDBC: setb    al
0x49DDBF: neg     eax
0x49DDC1: or      eax, ecx
0x49DDC3: push    eax; Size
0x49DDC4: call    FormHeapAlloc
0x49DDC9: add     esp, 4
0x49DDCC: mov     [esp+160h+a2], eax
0x49DDD0: test    eax, eax
0x49DDD2: mov     [esp+160h+var_4], 1
0x49DDDD: jz      short loc_49DDF9
0x49DDDF: push    offset sub_7016A0; a5
0x49DDE4: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x49DDE9: push    esi; size
0x49DDEA: lea     edi, [eax+4]
0x49DDED: push    4; a2
0x49DDEF: push    edi; a1
0x49DDF0: mov     [eax], esi
0x49DDF2: call    ArrayConstructor
0x49DDF7: jmp     short loc_49DDFB
0x49DDF9: xor     edi, edi
0x49DDFB: mov     [esp+160h+var_4], 0FFFFFFFFh
0x49DE06: mov     [ebp+8], edi
0x49DE09: cmp     dword ptr [ebp+8], 0
0x49DE0D: jz      loc_49E24C
0x49DE13: cmp     byte ptr ds:0B07050h, 0
0x49DE1A: fld     dword ptr ds:0B07040h
0x49DE20: fstp    [esp+160h+var_140]
0x49DE24: fld     [esp+160h+var_140]
0x49DE28: fsub    [esp+160h+arg_4]
0x49DE2F: fstp    [esp+160h+var_128]
0x49DE33: jz      short loc_49DE42
0x49DE35: cmp     byte ptr ds:0B42F3Eh, 0
0x49DE3C: jnz     loc_49DFFB
0x49DE42: mov     ecx, [ebp+0Ch]
0x49DE45: push    ecx
0x49DE46: lea     edx, [esp+164h+ArgList]
0x49DE4A: push    offset aS00_dds; "%s00.DDS"
0x49DE4F: push    edx
0x49DE50: call    __sprintf
0x49DE55: mov     ecx, ds:0B33A04h
0x49DE5B: add     esp, 0Ch
0x49DE5E: test    ecx, ecx
0x49DE60: jz      short loc_49DE73
0x49DE62: mov     eax, [ecx]
0x49DE64: mov     eax, [eax+4]
0x49DE67: push    0FFFFFFFFh
0x49DE69: push    0
0x49DE6B: lea     edx, [esp+168h+ArgList]
0x49DE6F: push    edx
0x49DE70: push    edx
0x49DE71: call    eax
0x49DE73: cmp     dword ptr [ebp+10h], 0
0x49DE77: lea     edi, [ebp+10h]
0x49DE7A: jnz     short loc_49DEDB
0x49DE7C: push    0; char
0x49DE7E: push    1; char
0x49DE80: lea     ecx, [esp+168h+ArgList]
0x49DE84: push    ecx; ArgList
0x49DE85: mov     ecx, ds:0B333A0h
0x49DE8B: lea     edx, [esp+16Ch+var_148]
0x49DE8F: push    edx; int
0x49DE90: call    sub_442890
0x49DE95: mov     eax, [eax]
0x49DE97: push    eax; a2
0x49DE98: mov     ecx, edi; this
0x49DE9A: mov     [esp+164h+var_4], 2
0x49DEA5: call    NiSmartPointer_Set??
0x49DEAA: mov     eax, [esp+160h+var_148]
0x49DEAE: test    eax, eax
0x49DEB0: mov     [esp+160h+var_4], 0FFFFFFFFh
0x49DEBB: jz      short loc_49DEDB
0x49DEBD: mov     esi, eax
0x49DEBF: add     eax, 4
0x49DEC2: push    eax; lpAddend
0x49DEC3: call    dword ptr ds:0A2807Ch
0x49DEC9: test    eax, eax
0x49DECB: jnz     short loc_49DEDB
0x49DECD: test    esi, esi
0x49DECF: jz      short loc_49DEDB
0x49DED1: mov     eax, [esi]
0x49DED3: mov     edx, [eax]
0x49DED5: push    1
0x49DED7: mov     ecx, esi
0x49DED9: call    edx
0x49DEDB: cmp     dword ptr [ebp+1Ch], 0
0x49DEDF: lea     esi, [ebp+1Ch]
0x49DEE2: jnz     loc_49DFFB
0x49DEE8: push    5Ch ; '\'; Size
0x49DEEA: call    FormHeapAlloc
0x49DEEF: add     esp, 4
0x49DEF2: mov     [esp+160h+a2], eax
0x49DEF6: test    eax, eax
0x49DEF8: mov     [esp+160h+var_4], 3
0x49DF03: jz      short loc_49DF0E
0x49DF05: mov     ecx, eax; this
0x49DF07: call    ??0NiFlipController@@QAE@XZ; NiFlipController::NiFlipController(void)
0x49DF0C: jmp     short loc_49DF10
0x49DF0E: xor     eax, eax
0x49DF10: push    eax; a2
0x49DF11: mov     ecx, esi; this
0x49DF13: mov     [esp+164h+var_4], 0FFFFFFFFh
0x49DF1E: call    NiSmartPointer_Set??
0x49DF23: mov     eax, [edi]
0x49DF25: mov     ecx, [esi]
0x49DF27: push    0
0x49DF29: push    eax
0x49DF2A: call    sub_6D1BC0
0x49DF2F: mov     edi, 1
0x49DF34: mov     ecx, edi
0x49DF36: mov     eax, ds:0B07088h
0x49DF3B: cmp     ecx, eax
0x49DF3D: mov     [esp+160h+var_144], ecx
0x49DF41: jnb     loc_49DFD3
0x49DF47: mov     eax, [ebp+0Ch]
0x49DF4A: push    ecx
0x49DF4B: push    eax
0x49DF4C: lea     ecx, [esp+168h+ArgList]
0x49DF50: push    offset aS02d_dds; "%s%02d.DDS"
0x49DF55: push    ecx
0x49DF56: call    __sprintf
0x49DF5B: mov     ecx, ds:0B333A0h
0x49DF61: add     esp, 10h
0x49DF64: push    0; char
0x49DF66: push    1; char
0x49DF68: lea     edx, [esp+168h+ArgList]
0x49DF6C: push    edx; ArgList
0x49DF6D: lea     eax, [esp+16Ch+var_124]
0x49DF71: push    eax; int
0x49DF72: call    sub_442890
0x49DF77: mov     eax, [esp+160h+var_124]
0x49DF7B: test    eax, eax
0x49DF7D: mov     [esp+160h+var_4], 4
0x49DF88: jz      short loc_49DF9A
0x49DF8A: mov     ecx, [esi]
0x49DF8C: push    edi
0x49DF8D: push    eax
0x49DF8E: call    sub_6D1BC0
0x49DF93: mov     eax, [esp+160h+var_124]
0x49DF97: add     edi, 1
0x49DF9A: test    eax, eax
0x49DF9C: mov     [esp+160h+var_4], 0FFFFFFFFh
0x49DFA7: jz      short loc_49DFC7
0x49DFA9: mov     ebx, eax
0x49DFAB: add     eax, 4
0x49DFAE: push    eax; lpAddend
0x49DFAF: call    dword ptr ds:0A2807Ch
0x49DFB5: test    eax, eax
0x49DFB7: jnz     short loc_49DFC7
0x49DFB9: test    ebx, ebx
0x49DFBB: jz      short loc_49DFC7
0x49DFBD: mov     edx, [ebx]
0x49DFBF: mov     eax, [edx]
0x49DFC1: push    1
0x49DFC3: mov     ecx, ebx
0x49DFC5: call    eax
0x49DFC7: mov     ecx, [esp+160h+var_144]
0x49DFCB: add     ecx, 1
0x49DFCE: jmp     loc_49DF36
0x49DFD3: mov     ds:0B07088h, edi
0x49DFD9: cmp     eax, edi
0x49DFDB: mov     eax, [esi]
0x49DFDD: mov     cx, [eax+8]
0x49DFE1: setnbe  [esp+160h+var_149]
0x49DFE6: and     cx, 0FFF7h
0x49DFEB: or      cx, 1
0x49DFEF: mov     [eax+8], cx
0x49DFF3: mov     esi, [esi]
0x49DFF5: and     word ptr [esi+8], 0FFF9h
0x49DFFB: fld     [esp+160h+var_140]
0x49DFFF: fld     st
0x49E001: call    Double_To_SInt32
0x49E006: mov     edx, ds:0B35264h
0x49E00C: mov     [esp+160h+var_148], eax
0x49E010: fild    [esp+160h+var_148]
0x49E014: mov     eax, edx
0x49E016: test    eax, eax
0x49E018: mov     [esp+160h+a2], eax
0x49E01C: fild    [esp+160h+a2]
0x49E020: jge     short loc_49E028
0x49E022: fadd    dword ptr ds:0A2FC78h
0x49E028: fmul    dword ptr ds:0B07048h
0x49E02E: fnstcw  word ptr [esp+160h+var_144]
0x49E032: movzx   eax, word ptr [esp+160h+var_144]
0x49E037: fdivp   st(1), st
0x49E039: or      eax, 0C00h
0x49E03E: mov     [esp+160h+var_148], eax
0x49E042: fldcw   word ptr [esp+160h+var_148]
0x49E046: fistp   [esp+160h+var_120]
0x49E04A: mov     eax, dword ptr [esp+160h+var_120]
0x49E04E: cmp     eax, 1
0x49E051: fldcw   word ptr [esp+160h+var_144]
0x49E055: jnb     short loc_49E05C
0x49E057: mov     eax, 1
0x49E05C: mov     ecx, ds:0B333A0h
0x49E062: fadd    st, st
0x49E064: mov     ecx, [ecx+54h]
0x49E067: push    1; float
0x49E069: push    1; int
0x49E06B: fstp    [esp+168h+var_148]
0x49E06F: fld     [esp+168h+var_148]
0x49E073: push    eax; int
0x49E074: push    edx; int
0x49E075: sub     esp, 8
0x49E078: fst     [esp+178h+var_174]; float
0x49E07C: fstp    [esp+178h+var_178]; float
0x49E07F: call    sub_49D2A0
0x49E084: fld     [esp+160h+var_128]
0x49E088: mov     [esp+160h+a2], eax
0x49E08C: fstp    dword ptr [esp+160h+var_134]
0x49E090: xor     eax, eax
0x49E092: cmp     [ebp+18h], eax
0x49E095: fldz
0x49E097: fstp    dword ptr [esp+160h+var_134+4]
0x49E09B: mov     [esp+160h+var_144], eax
0x49E09F: fld     [esp+160h+var_140]
0x49E0A3: mov     [esp+160h+var_148], eax
0x49E0A7: fadd    st, st
0x49E0A9: fstp    [esp+160h+var_140]
0x49E0AD: jbe     loc_49E238
0x49E0B3: cmp     dword ptr [ebp+18h], 0
0x49E0B7: fld     [esp+160h+var_128]
0x49E0BB: fstp    [esp+160h+var_138]
0x49E0BF: mov     [esp+160h+var_12C], 0
0x49E0C7: jbe     loc_49E218
0x49E0CD: push    0C0h ; 'À'; Size
0x49E0D2: call    FormHeapAlloc
0x49E0D7: add     esp, 4
0x49E0DA: mov     dword ptr [esp+160h+var_120], eax
0x49E0DE: test    eax, eax
0x49E0E0: mov     [esp+160h+var_4], 5
0x49E0EB: jz      short loc_49E0FD
0x49E0ED: mov     edx, [esp+160h+a2]
0x49E0F1: push    edx; a2
0x49E0F2: mov     ecx, eax; this
0x49E0F4: call    NiTriShape_NiTriShape
0x49E0F9: mov     edi, eax
0x49E0FB: jmp     short loc_49E0FF
0x49E0FD: xor     edi, edi
0x49E0FF: test    edi, edi
0x49E101: mov     [esp+160h+var_4], 0FFFFFFFFh
0x49E10C: jz      loc_49E204
0x49E112: mov     eax, [ebp+8]
0x49E115: mov     ecx, [esp+160h+var_144]
0x49E119: mov     esi, [eax+ecx*4]
0x49E11C: cmp     esi, edi
0x49E11E: lea     ebx, [eax+ecx*4]
0x49E121: jz      short loc_49E14F
0x49E123: test    esi, esi
0x49E125: jz      short loc_49E143
0x49E127: lea     edx, [esi+4]
0x49E12A: push    edx; lpAddend
0x49E12B: call    dword ptr ds:0A2807Ch
0x49E131: test    eax, eax
0x49E133: jnz     short loc_49E143
0x49E135: test    esi, esi
0x49E137: jz      short loc_49E143
0x49E139: mov     eax, [esi]
0x49E13B: mov     edx, [eax]
0x49E13D: push    1
0x49E13F: mov     ecx, esi
0x49E141: call    edx
0x49E143: lea     eax, [edi+4]
0x49E146: push    eax; lpAddend
0x49E147: mov     [ebx], edi
0x49E149: call    dword ptr ds:0A28078h
0x49E14F: mov     ecx, [esp+160h+var_138]
0x49E153: mov     edx, dword ptr [esp+160h+var_134]
0x49E157: mov     eax, dword ptr [esp+160h+var_134+4]
0x49E15B: mov     [edi+54h], ecx
0x49E15E: mov     [edi+58h], edx
0x49E161: mov     [edi+5Ch], eax
0x49E164: call    sub_43F4D0
0x49E169: test    al, al
0x49E16B: jnz     short loc_49E1E2
0x49E16D: push    30h ; '0'; Size
0x49E16F: call    FormHeapAlloc
0x49E174: add     esp, 4
0x49E177: mov     dword ptr [esp+160h+var_120], eax
0x49E17B: test    eax, eax
0x49E17D: mov     [esp+160h+var_4], 6
0x49E188: jz      short loc_49E195
0x49E18A: mov     ecx, eax
0x49E18C: call    NiTexturingProperty__NiTexturingProperty
0x49E191: mov     esi, eax
0x49E193: jmp     short loc_49E197
0x49E195: xor     esi, esi
0x49E197: mov     ecx, [ebp+10h]
0x49E19A: push    ecx
0x49E19B: mov     ecx, esi
0x49E19D: mov     [esp+164h+var_4], 0FFFFFFFFh
0x49E1A8: call    NiTexturingProperty__SetUnk08
0x49E1AD: push    2; a2
0x49E1AF: mov     ecx, esi; this
0x49E1B1: call    sub_405900
0x49E1B6: mov     dx, [esi+18h]
0x49E1BA: and     dx, 0FFF5h
0x49E1BF: or      dx, 4
0x49E1C3: mov     [esi+18h], dx
0x49E1C7: mov     ecx, [ebp+1Ch]
0x49E1CA: mov     eax, [ecx]
0x49E1CC: mov     edx, [eax+58h]
0x49E1CF: push    esi
0x49E1D0: call    edx
0x49E1D2: mov     eax, [ebp+1Ch]
0x49E1D5: or      word ptr [eax+8], 8
0x49E1DA: push    esi; a2
0x49E1DB: mov     ecx, edi; this
0x49E1DD: call    sub_405680
0x49E1E2: mov     ecx, [esp+160h+var_118]
0x49E1E6: mov     eax, [ecx]
0x49E1E8: mov     edx, [eax+84h]
0x49E1EE: push    1
0x49E1F0: push    edi
0x49E1F1: call    edx
0x49E1F3: fld     [esp+160h+var_138]
0x49E1F7: fadd    [esp+160h+var_140]
0x49E1FB: add     [esp+160h+var_144], 1
0x49E200: fstp    [esp+160h+var_138]
0x49E204: mov     eax, [esp+160h+var_12C]
0x49E208: add     eax, 1
0x49E20B: cmp     eax, [ebp+18h]
0x49E20E: mov     [esp+160h+var_12C], eax
0x49E212: jb      loc_49E0CD
0x49E218: fld     dword ptr [esp+160h+var_134]
0x49E21C: mov     eax, [esp+160h+var_148]
0x49E220: fadd    [esp+160h+var_140]
0x49E224: add     eax, 1
0x49E227: cmp     eax, [ebp+18h]
0x49E22A: mov     [esp+160h+var_148], eax
0x49E22E: fstp    dword ptr [esp+160h+var_134]
0x49E232: jb      loc_49E0B3
0x49E238: cmp     [esp+160h+var_149], 0
0x49E23D: jz      short loc_49E24C
0x49E23F: push    offset aWaterArtAssets; "Water art assets don't match .ini setti"...
0x49E244: call    PrintError
0x49E249: add     esp, 4
0x49E24C: mov     ecx, dword ptr [esp+160h+var_C]
0x49E253: mov     large fs:0, ecx
0x49E25A: pop     ecx
0x49E25B: pop     edi
0x49E25C: pop     esi
0x49E25D: pop     ebp
0x49E25E: pop     ebx
0x49E25F: mov     ecx, [esp+14Ch+var_10]
0x49E266: xor     ecx, esp
0x49E268: call    @__security_check_cookie@4; __security_check_cookie(x)
0x49E26D: add     esp, 14Ch
0x49E273: retn    8
