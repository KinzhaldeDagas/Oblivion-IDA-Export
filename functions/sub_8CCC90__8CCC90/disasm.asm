0x8CCC90: mov     eax, [esp+arg_0]
0x8CCC94: mov     cl, [eax+0A4h]
0x8CCC9A: sub     esp, 1BCh
0x8CCCA0: test    cl, cl
0x8CCCA2: jz      loc_8CD314
0x8CCCA8: mov     ecx, [eax+3Ch]
0x8CCCAB: dec     ecx
0x8CCCAC: mov     [esp+1BCh+var_190], ecx
0x8CCCB0: js      loc_8CD314
0x8CCCB6: push    ebx
0x8CCCB7: push    ebp
0x8CCCB8: push    esi
0x8CCCB9: push    edi
0x8CCCBA: jmp     short loc_8CCCC7
0x8CCCBC: mov     ecx, [esp+1CCh+var_190]
0x8CCCC0: mov     eax, [esp+1CCh+arg_0]
0x8CCCC7: add     eax, 38h ; '8'
0x8CCCCA: mov     eax, [eax]
0x8CCCCC: mov     ebx, [eax+ecx*4]
0x8CCCCF: mov     al, [ebx+26h]
0x8CCCD2: test    al, al
0x8CCCD4: jz      loc_8CD306
0x8CCCDA: mov     ecx, large fs:2Ch
0x8CCCE1: mov     eax, ds:0BA9DE4h
0x8CCCE6: mov     eax, [ecx+eax*4]
0x8CCCE9: mov     ecx, [eax+19Ch]
0x8CCCEF: mov     esi, [ebx+38h]
0x8CCCF2: xor     edx, edx
0x8CCCF4: cmp     ecx, edx
0x8CCCF6: mov     [esp+1CCh+var_188], edx
0x8CCCFA: mov     [esp+1CCh+var_184], edx
0x8CCCFE: mov     [esp+1CCh+var_180], 80000000h
0x8CCD06: mov     [esp+1CCh+var_1B4], eax
0x8CCD0A: jnz     short loc_8CCD12
0x8CCD0C: mov     ecx, ds:0BA7D9Ch
0x8CCD12: mov     edx, [ecx+20h]
0x8CCD15: mov     ebp, [ecx+2Ch]
0x8CCD18: lea     eax, ds:10h[esi*4]
0x8CCD1F: and     eax, 0FFFFFFF0h
0x8CCD22: lea     edi, [edx+eax]
0x8CCD25: cmp     edi, ebp
0x8CCD27: ja      short loc_8CCD30
0x8CCD29: mov     [ecx+20h], edi
0x8CCD2C: mov     eax, edx
0x8CCD2E: jmp     short loc_8CCD36
0x8CCD30: mov     edx, [ecx]
0x8CCD32: push    eax
0x8CCD33: call    dword ptr [edx+0Ch]
0x8CCD36: mov     [esp+1CCh+var_188], eax
0x8CCD3A: mov     [esp+1CCh+var_17C], eax
0x8CCD3E: mov     eax, [ebx+38h]
0x8CCD41: push    eax
0x8CCD42: lea     ecx, [esp+1D0h+var_188]
0x8CCD46: push    ecx
0x8CCD47: or      esi, 80000000h
0x8CCD4D: lea     ecx, [esp+1D4h+var_18C]
0x8CCD51: mov     [esp+1D4h+var_180], esi
0x8CCD55: call    sub_91F340
0x8CCD5A: lea     edx, [esp+1CCh+var_18C]
0x8CCD5E: push    edx
0x8CCD5F: lea     eax, [esp+1D0h+var_178]
0x8CCD63: push    eax
0x8CCD64: mov     ecx, ebx
0x8CCD66: call    sub_8DE0C0
0x8CCD6B: mov     al, [esp+1CCh+var_178]
0x8CCD6F: test    al, al
0x8CCD71: jnz     loc_8CD2AE
0x8CCD77: lea     ecx, [esp+1CCh+var_80]
0x8CCD7E: lea     edx, [esp+1CCh+var_8C]
0x8CCD85: mov     [esp+1CCh+var_8C], ecx
0x8CCD8C: xor     esi, esi
0x8CCD8E: mov     edi, 80000020h
0x8CCD93: push    edx
0x8CCD94: lea     ecx, [esp+1D0h+var_18C]
0x8CCD98: mov     [esp+1D0h+var_88], esi
0x8CCD9F: mov     [esp+1D0h+var_84], edi
0x8CCDA6: call    sub_91F3A0
0x8CCDAB: mov     ecx, [esp+1CCh+var_88]
0x8CCDB2: lea     eax, [esp+1CCh+var_158]
0x8CCDB6: mov     [esp+1CCh+var_164], eax
0x8CCDBA: mov     eax, 1
0x8CCDBF: cmp     ecx, eax
0x8CCDC1: mov     [esp+1CCh+var_15C], edi
0x8CCDC5: mov     [esp+1CCh+var_158], ebx
0x8CCDC9: mov     [esp+1CCh+var_160], eax
0x8CCDCD: mov     [esp+1CCh+var_1BC], eax
0x8CCDD1: jle     loc_8CCEAA
0x8CCDD7: mov     ebp, [esp+1CCh+arg_0]
0x8CCDDE: mov     edi, edi
0x8CCDE0: mov     ecx, ds:0BA7D98h
0x8CCDE6: mov     edx, [ecx]
0x8CCDE8: push    2Fh ; '/'
0x8CCDEA: push    6Ch ; 'l'
0x8CCDEC: call    dword ptr [edx+10h]
0x8CCDEF: push    ebp
0x8CCDF0: mov     ecx, eax
0x8CCDF2: mov     word ptr [eax+4], 6Ch ; 'l'
0x8CCDF8: call    sub_8DE400
0x8CCDFD: mov     ecx, [ebp+3Ch]
0x8CCE00: lea     esi, [ebp+38h]
0x8CCE03: mov     edi, eax
0x8CCE05: mov     eax, [esi+8]
0x8CCE08: and     eax, 3FFFFFFFh
0x8CCE0D: cmp     ecx, eax
0x8CCE0F: jnz     short loc_8CCE1C
0x8CCE11: push    4
0x8CCE13: push    esi
0x8CCE14: call    sub_8A6EE0
0x8CCE19: add     esp, 8
0x8CCE1C: mov     ecx, [esi+4]
0x8CCE1F: mov     edx, [esi]
0x8CCE21: mov     [edx+ecx*4], edi
0x8CCE24: inc     dword ptr [esi+4]
0x8CCE27: mov     ax, [ebp+3Ch]
0x8CCE2B: dec     ax
0x8CCE2D: mov     [edi+20h], ax
0x8CCE31: mov     ecx, [esp+1CCh+var_15C]
0x8CCE35: mov     eax, [esp+1CCh+var_160]
0x8CCE39: and     ecx, 3FFFFFFFh
0x8CCE3F: cmp     eax, ecx
0x8CCE41: jnz     short loc_8CCE52
0x8CCE43: lea     edx, [esp+1CCh+var_164]
0x8CCE47: push    4
0x8CCE49: push    edx
0x8CCE4A: call    sub_8A6EE0
0x8CCE4F: add     esp, 8
0x8CCE52: mov     ecx, [esp+1CCh+var_160]
0x8CCE56: mov     eax, [esp+1CCh+var_164]
0x8CCE5A: mov     [eax+ecx*4], edi
0x8CCE5D: mov     eax, [esp+1CCh+var_160]
0x8CCE61: mov     edx, [esp+1CCh+var_8C]
0x8CCE68: inc     eax
0x8CCE69: mov     [esp+1CCh+var_160], eax
0x8CCE6D: mov     eax, [esp+1CCh+var_1BC]
0x8CCE71: mov     eax, [edx+eax*4]
0x8CCE74: mov     edx, [edi+3Ch]
0x8CCE77: lea     ecx, [edi+34h]
0x8CCE7A: and     edx, 3FFFFFFFh
0x8CCE80: cmp     edx, eax
0x8CCE82: jge     short loc_8CCE90
0x8CCE84: push    4
0x8CCE86: push    eax
0x8CCE87: push    ecx
0x8CCE88: call    sub_8A6E40
0x8CCE8D: add     esp, 0Ch
0x8CCE90: mov     eax, [esp+1CCh+var_1BC]
0x8CCE94: mov     ecx, [esp+1CCh+var_88]
0x8CCE9B: inc     eax
0x8CCE9C: cmp     eax, ecx
0x8CCE9E: mov     [esp+1CCh+var_1BC], eax
0x8CCEA2: jl      loc_8CCDE0
0x8CCEA8: xor     esi, esi
0x8CCEAA: mov     eax, [ebx+34h]
0x8CCEAD: mov     [esp+1CCh+var_198], eax
0x8CCEB1: mov     eax, [ebx+38h]
0x8CCEB4: cmp     eax, esi
0x8CCEB6: mov     [esp+1CCh+var_194], eax
0x8CCEBA: mov     [ebx+38h], esi
0x8CCEBD: mov     [esp+1CCh+var_1BC], esi
0x8CCEC1: jle     loc_8CCFA2
0x8CCEC7: jmp     short loc_8CCED0
0x8CCEC9: align 10h
0x8CCED0: mov     ecx, [esp+1CCh+var_188]
0x8CCED4: mov     eax, [esp+1CCh+var_1BC]
0x8CCED8: mov     edx, [ecx+eax*4]
0x8CCEDB: mov     ecx, [esp+1CCh+var_164]
0x8CCEDF: mov     esi, [ecx+edx*4]
0x8CCEE2: mov     edx, [esp+1CCh+var_198]
0x8CCEE6: mov     ebp, [edx+eax*4]
0x8CCEE9: mov     [ebp+54h], esi
0x8CCEEC: mov     ax, [esi+38h]
0x8CCEF0: lea     edi, [esi+34h]
0x8CCEF3: mov     [ebp+8Ch], ax
0x8CCEFA: mov     ecx, [edi+8]
0x8CCEFD: mov     eax, [edi+4]
0x8CCF00: and     ecx, 3FFFFFFFh
0x8CCF06: cmp     eax, ecx
0x8CCF08: jnz     short loc_8CCF15
0x8CCF0A: push    4
0x8CCF0C: push    edi
0x8CCF0D: call    sub_8A6EE0
0x8CCF12: add     esp, 8
0x8CCF15: mov     edx, [edi+4]
0x8CCF18: mov     eax, [edi]
0x8CCF1A: mov     [eax+edx*4], ebp
0x8CCF1D: mov     ecx, [edi+4]
0x8CCF20: inc     ecx
0x8CCF21: cmp     ebx, esi
0x8CCF23: mov     [edi+4], ecx
0x8CCF26: jz      short loc_8CCF8D
0x8CCF28: mov     ecx, [ebp+50h]
0x8CCF2B: mov     edx, [ecx]
0x8CCF2D: call    dword ptr [edx+1Ch]
0x8CCF30: sub     [ebx+14h], eax
0x8CCF33: add     [esi+14h], eax
0x8CCF36: mov     eax, [ebp+6Ch]
0x8CCF39: test    eax, eax
0x8CCF3B: mov     edi, [ebp+68h]
0x8CCF3E: mov     [esp+1CCh+var_1B8], 0
0x8CCF46: jle     short loc_8CCF8D
0x8CCF48: mov     eax, [edi]
0x8CCF4A: mov     ecx, [eax+0Ch]
0x8CCF4D: mov     edx, [ecx]
0x8CCF4F: lea     eax, [esp+1CCh+var_174]
0x8CCF53: push    eax
0x8CCF54: call    dword ptr [edx+20h]
0x8CCF57: mov     ecx, [edi]
0x8CCF59: mov     edx, [ebx]
0x8CCF5B: lea     eax, [esp+1CCh+var_174]
0x8CCF5F: push    eax
0x8CCF60: push    ecx
0x8CCF61: mov     ecx, ebx
0x8CCF63: call    dword ptr [edx+10h]
0x8CCF66: mov     ecx, [edi]
0x8CCF68: mov     edx, [esi]
0x8CCF6A: lea     eax, [esp+1CCh+var_174]
0x8CCF6E: push    eax
0x8CCF6F: push    ecx
0x8CCF70: mov     ecx, esi
0x8CCF72: call    dword ptr [edx+0Ch]
0x8CCF75: mov     edx, [edi]
0x8CCF77: mov     eax, [esp+1CCh+var_1B8]
0x8CCF7B: add     edi, 1Ch
0x8CCF7E: mov     [edx+8], esi
0x8CCF81: mov     ecx, [ebp+6Ch]
0x8CCF84: inc     eax
0x8CCF85: cmp     eax, ecx
0x8CCF87: mov     [esp+1CCh+var_1B8], eax
0x8CCF8B: jl      short loc_8CCF48
0x8CCF8D: mov     eax, [esp+1CCh+var_1BC]
0x8CCF91: mov     ecx, [esp+1CCh+var_194]
0x8CCF95: inc     eax
0x8CCF96: cmp     eax, ecx
0x8CCF98: mov     [esp+1CCh+var_1BC], eax
0x8CCF9C: jl      loc_8CCED0
0x8CCFA2: mov     eax, [esp+1CCh+arg_0]
0x8CCFA9: mov     ecx, [eax+30h]
0x8CCFAC: mov     edx, [ebx+5Ch]
0x8CCFAF: mov     [esp+1CCh+var_198], ecx
0x8CCFB3: mov     ecx, [ebx+60h]
0x8CCFB6: xor     ebp, ebp
0x8CCFB8: xor     eax, eax
0x8CCFBA: cmp     ecx, ebp
0x8CCFBC: mov     [esp+1CCh+var_194], edx
0x8CCFC0: mov     [esp+1CCh+var_1BC], ecx
0x8CCFC4: mov     [ebx+60h], ebp
0x8CCFC7: mov     [esp+1CCh+var_1B8], eax
0x8CCFCB: jle     loc_8CD0AD
0x8CCFD1: mov     edx, [esp+1CCh+var_194]
0x8CCFD5: mov     edi, [edx+eax*4]
0x8CCFD8: cmp     edi, ebp
0x8CCFDA: jz      loc_8CD0A0
0x8CCFE0: mov     edx, [edi]
0x8CCFE2: lea     eax, [esp+1CCh+var_CC]
0x8CCFE9: mov     [esp+1CCh+var_D8], eax
0x8CCFF0: lea     eax, [esp+1CCh+var_D8]
0x8CCFF7: push    eax
0x8CCFF8: mov     ecx, edi
0x8CCFFA: xor     esi, esi
0x8CCFFC: mov     [esp+1D0h+var_D4], ebp
0x8CD003: mov     [esp+1D0h+var_D0], 80000010h
0x8CD00E: call    dword ptr [edx+0Ch]
0x8CD011: mov     ecx, [esp+1CCh+var_D4]
0x8CD018: mov     edx, [esp+1CCh+var_D8]
0x8CD01F: xor     eax, eax
0x8CD021: cmp     ecx, ebp
0x8CD023: jle     short loc_8CD038
0x8CD025: mov     esi, [edx+eax*4]
0x8CD028: mov     esi, [esi+54h]
0x8CD02B: cmp     esi, [esp+1CCh+var_198]
0x8CD02F: jnz     short loc_8CD036
0x8CD031: inc     eax
0x8CD032: cmp     eax, ecx
0x8CD034: jl      short loc_8CD025
0x8CD036: xor     ebp, ebp
0x8CD038: mov     eax, [esp+1CCh+var_D0]
0x8CD03F: test    eax, eax
0x8CD041: js      short loc_8CD068
0x8CD043: mov     ecx, [esp+1CCh+var_1B4]
0x8CD047: mov     ecx, [ecx+19Ch]
0x8CD04D: cmp     ecx, ebp
0x8CD04F: jnz     short loc_8CD057
0x8CD051: mov     ecx, ds:0BA7D9Ch
0x8CD057: and     eax, 3FFFFFFFh
0x8CD05C: push    14h
0x8CD05E: shl     eax, 2
0x8CD061: push    eax
0x8CD062: push    edx
0x8CD063: call    sub_8A75D0
0x8CD068: mov     [edi+0Ch], esi
0x8CD06B: mov     edx, [esi+64h]
0x8CD06E: mov     eax, [esi+60h]
0x8CD071: add     esi, 5Ch ; '\'
0x8CD074: and     edx, 3FFFFFFFh
0x8CD07A: cmp     eax, edx
0x8CD07C: jnz     short loc_8CD089
0x8CD07E: push    4
0x8CD080: push    esi
0x8CD081: call    sub_8A6EE0
0x8CD086: add     esp, 8
0x8CD089: mov     eax, [esi+4]
0x8CD08C: mov     ecx, [esi]
0x8CD08E: mov     [ecx+eax*4], edi
0x8CD091: mov     eax, [esi+4]
0x8CD094: mov     ecx, [esp+1CCh+var_1BC]
0x8CD098: inc     eax
0x8CD099: mov     [esi+4], eax
0x8CD09C: mov     eax, [esp+1CCh+var_1B8]
0x8CD0A0: inc     eax
0x8CD0A1: cmp     eax, ecx
0x8CD0A3: mov     [esp+1CCh+var_1B8], eax
0x8CD0A7: jl      loc_8CCFD1
0x8CD0AD: mov     edx, [esp+1CCh+arg_0]
0x8CD0B4: mov     eax, [edx+7Ch]
0x8CD0B7: mov     ecx, [eax+1BF8h]
0x8CD0BD: mov     esi, [eax+1BFCh]
0x8CD0C3: mov     [esp+1CCh+var_19A], cx
0x8CD0C8: movzx   ecx, cx
0x8CD0CB: lea     eax, [esp+1CCh+var_1A4]
0x8CD0CF: mov     [esp+1CCh+var_1A0], ecx
0x8CD0D3: mov     ecx, [ebx+48h]
0x8CD0D6: mov     [esp+1CCh+var_1B0], eax
0x8CD0DA: xor     eax, eax
0x8CD0DC: cmp     ecx, 1
0x8CD0DF: mov     edx, 80000001h
0x8CD0E4: mov     [esp+1CCh+var_1AC], eax
0x8CD0E8: mov     [esp+1CCh+var_1A8], edx
0x8CD0EC: mov     [esp+1CCh+var_19C], si
0x8CD0F1: jnz     short loc_8CD106
0x8CD0F3: mov     eax, [ebx+44h]
0x8CD0F6: mov     ecx, [eax]
0x8CD0F8: mov     [esp+1CCh+var_1A4], ecx
0x8CD0FC: mov     eax, 1
0x8CD101: mov     [ebx+48h], ebp
0x8CD104: jmp     short loc_8CD13F
0x8CD106: jle     short loc_8CD143
0x8CD108: push    4
0x8CD10A: lea     edx, [esp+1D0h+var_1B0]
0x8CD10E: push    2
0x8CD110: push    edx
0x8CD111: call    sub_8A6E40
0x8CD116: mov     ecx, [ebx+44h]
0x8CD119: mov     eax, [esp+1D8h+var_1B0]
0x8CD11D: mov     edx, [ebx+4Ch]
0x8CD120: mov     [esp+1D8h+var_1B0], ecx
0x8CD124: mov     ecx, [esp+1D8h+var_1AC]
0x8CD128: mov     [ebx+44h], eax
0x8CD12B: mov     eax, [ebx+48h]
0x8CD12E: mov     [ebx+48h], ecx
0x8CD131: mov     ecx, [esp+1D8h+var_1A8]
0x8CD135: add     esp, 0Ch
0x8CD138: mov     [esp+1CCh+var_1A8], edx
0x8CD13C: mov     [ebx+4Ch], ecx
0x8CD13F: mov     [esp+1CCh+var_1AC], eax
0x8CD143: cmp     eax, ebp
0x8CD145: mov     ecx, [esp+1CCh+var_1A0]
0x8CD149: mov     esi, [ebx+54h]
0x8CD14C: mov     [esp+1CCh+var_1A0], esi
0x8CD150: mov     [ebx+54h], ecx
0x8CD153: mov     [esp+1CCh+var_1BC], ebp
0x8CD157: jle     loc_8CD1E9
0x8CD15D: lea     ecx, [ecx+0]
0x8CD160: mov     ecx, [esp+1CCh+var_1BC]
0x8CD164: mov     edx, [esp+1CCh+var_1B0]
0x8CD168: mov     edi, [edx+ecx*4]
0x8CD16B: inc     ecx
0x8CD16C: cmp     ecx, eax
0x8CD16E: mov     esi, edi
0x8CD170: mov     [esp+1CCh+var_1BC], ecx
0x8CD174: jnz     short loc_8CD17F
0x8CD176: mov     eax, [esp+1CCh+var_1A0]
0x8CD17A: lea     ebp, [eax+edi]
0x8CD17D: jmp     short loc_8CD186
0x8CD17F: movzx   ebp, [esp+1CCh+var_19A]
0x8CD184: add     ebp, edi
0x8CD186: cmp     edi, ebp
0x8CD188: jnb     short loc_8CD1C3
0x8CD18A: lea     ebx, [ebx+0]
0x8CD190: mov     eax, [esi+14h]
0x8CD193: mov     ecx, [eax+10h]
0x8CD196: mov     eax, [ecx+eax+54h]
0x8CD19A: cmp     word ptr [eax+20h], 0FFFFh
0x8CD1A0: jnz     short loc_8CD1AC
0x8CD1A2: mov     eax, [esi+18h]
0x8CD1A5: mov     edx, [eax+10h]
0x8CD1A8: mov     eax, [edx+eax+54h]
0x8CD1AC: add     eax, 44h ; 'D'
0x8CD1AF: push    esi
0x8CD1B0: push    eax
0x8CD1B1: call    sub_8E68A0
0x8CD1B6: movzx   eax, byte ptr [esi+3]
0x8CD1BA: add     esi, eax
0x8CD1BC: add     esp, 8
0x8CD1BF: cmp     esi, ebp
0x8CD1C1: jb      short loc_8CD190
0x8CD1C3: movzx   eax, [esp+1CCh+var_19A]
0x8CD1C8: mov     ecx, ds:0BA7D98h
0x8CD1CE: mov     edx, [ecx]
0x8CD1D0: push    24h ; '$'
0x8CD1D2: push    eax
0x8CD1D3: push    edi
0x8CD1D4: call    dword ptr [edx+14h]
0x8CD1D7: mov     eax, [esp+1CCh+var_1AC]
0x8CD1DB: cmp     [esp+1CCh+var_1BC], eax
0x8CD1DF: jl      loc_8CD160
0x8CD1E5: mov     edx, [esp+1CCh+var_1A8]
0x8CD1E9: test    edx, edx
0x8CD1EB: mov     esi, [esp+1CCh+var_1B4]
0x8CD1EF: mov     [esp+1CCh+var_1AC], 0
0x8CD1F7: js      short loc_8CD21F
0x8CD1F9: mov     ecx, [esi+19Ch]
0x8CD1FF: test    ecx, ecx
0x8CD201: jnz     short loc_8CD209
0x8CD203: mov     ecx, ds:0BA7D9Ch
0x8CD209: and     edx, 3FFFFFFFh
0x8CD20F: push    14h
0x8CD211: shl     edx, 2
0x8CD214: push    edx
0x8CD215: mov     edx, [esp+1D4h+var_1B0]
0x8CD219: push    edx
0x8CD21A: call    sub_8A75D0
0x8CD21F: mov     ecx, [ebx+4Ch]
0x8CD222: test    ecx, ecx
0x8CD224: lea     eax, [ebx+44h]
0x8CD227: js      short loc_8CD24E
0x8CD229: mov     edx, [eax+4]
0x8CD22C: cmp     edx, 1
0x8CD22F: jl      short loc_8CD23D
0x8CD231: and     ecx, 3FFFFFFFh
0x8CD237: add     edx, edx
0x8CD239: cmp     edx, ecx
0x8CD23B: jge     short loc_8CD24E
0x8CD23D: push    1
0x8CD23F: lea     ecx, [eax+0Ch]
0x8CD242: push    ecx
0x8CD243: push    4
0x8CD245: push    eax
0x8CD246: call    sub_8A6F90
0x8CD24B: add     esp, 10h
0x8CD24E: mov     eax, [esp+1CCh+var_15C]
0x8CD252: test    eax, eax
0x8CD254: js      short loc_8CD27B
0x8CD256: mov     ecx, [esi+19Ch]
0x8CD25C: test    ecx, ecx
0x8CD25E: jnz     short loc_8CD266
0x8CD260: mov     ecx, ds:0BA7D9Ch
0x8CD266: mov     edx, [esp+1CCh+var_164]
0x8CD26A: and     eax, 3FFFFFFFh
0x8CD26F: push    14h
0x8CD271: shl     eax, 2
0x8CD274: push    eax
0x8CD275: push    edx
0x8CD276: call    sub_8A75D0
0x8CD27B: mov     eax, [esp+1CCh+var_84]
0x8CD282: test    eax, eax
0x8CD284: js      short loc_8CD2AE
0x8CD286: mov     ecx, [esi+19Ch]
0x8CD28C: test    ecx, ecx
0x8CD28E: jnz     short loc_8CD296
0x8CD290: mov     ecx, ds:0BA7D9Ch
0x8CD296: and     eax, 3FFFFFFFh
0x8CD29B: push    14h
0x8CD29D: shl     eax, 2
0x8CD2A0: push    eax
0x8CD2A1: mov     eax, [esp+1D4h+var_8C]
0x8CD2A8: push    eax
0x8CD2A9: call    sub_8A75D0
0x8CD2AE: mov     esi, [esp+1CCh+var_1B4]
0x8CD2B2: mov     ecx, [esp+1CCh+var_17C]
0x8CD2B6: mov     byte ptr [ebx+26h], 0
0x8CD2BA: mov     eax, [esi+19Ch]
0x8CD2C0: test    eax, eax
0x8CD2C2: jnz     short loc_8CD2C9
0x8CD2C4: mov     eax, ds:0BA7D9Ch
0x8CD2C9: cmp     ecx, [eax+28h]
0x8CD2CC: mov     [eax+20h], ecx
0x8CD2CF: jnz     short loc_8CD2D9
0x8CD2D1: mov     edx, [eax]
0x8CD2D3: push    ecx
0x8CD2D4: mov     ecx, eax
0x8CD2D6: call    dword ptr [edx+10h]
0x8CD2D9: mov     eax, [esp+1CCh+var_180]
0x8CD2DD: test    eax, eax
0x8CD2DF: js      short loc_8CD306
0x8CD2E1: mov     ecx, [esi+19Ch]
0x8CD2E7: test    ecx, ecx
0x8CD2E9: jnz     short loc_8CD2F1
0x8CD2EB: mov     ecx, ds:0BA7D9Ch
0x8CD2F1: and     eax, 3FFFFFFFh
0x8CD2F6: push    14h
0x8CD2F8: shl     eax, 2
0x8CD2FB: push    eax
0x8CD2FC: mov     eax, [esp+1D4h+var_188]
0x8CD300: push    eax
0x8CD301: call    sub_8A75D0
0x8CD306: dec     [esp+1CCh+var_190]
0x8CD30A: jns     loc_8CCCBC
0x8CD310: pop     edi
0x8CD311: pop     esi
0x8CD312: pop     ebp
0x8CD313: pop     ebx
0x8CD314: add     esp, 1BCh
0x8CD31A: retn
