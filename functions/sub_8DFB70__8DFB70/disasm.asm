0x8DFB70: push    ebp
0x8DFB71: mov     ebp, esp
0x8DFB73: and     esp, 0FFFFFFF0h
0x8DFB76: mov     eax, 30E4h
0x8DFB7B: call    __alloca_probe
0x8DFB80: fld     [ebp+arg_8]
0x8DFB83: mov     eax, [ebp+arg_8]
0x8DFB86: push    ebx
0x8DFB87: mov     ebx, [ebp+arg_0]
0x8DFB8A: push    esi
0x8DFB8B: mov     esi, ecx
0x8DFB8D: mov     [esi+8], eax
0x8DFB90: mov     byte ptr [esi+44h], 1
0x8DFB94: fadd    dword ptr [ebx+10h]
0x8DFB97: mov     eax, [ebx+88h]
0x8DFB9D: inc     eax
0x8DFB9E: fstp    dword ptr [ebx+10h]
0x8DFBA1: mov     [ebx+88h], eax
0x8DFBA7: mov     ecx, [esi+20h]
0x8DFBAA: mov     edx, [ecx]
0x8DFBAC: push    edi
0x8DFBAD: mov     [esp+30F0h+var_30BC], esi
0x8DFBB1: call    dword ptr [edx+8]
0x8DFBB4: fld     [ebp+arg_8]
0x8DFBB7: fadd    dword ptr [ebx+18h]
0x8DFBBA: mov     eax, [ebx+18h]
0x8DFBBD: mov     [ebx+14h], eax
0x8DFBC0: fst     dword ptr [ebx+18h]
0x8DFBC3: fld     dword ptr [ebx+14h]
0x8DFBC6: fst     [esp+30E4h+var_30CC]
0x8DFBCA: fld     st(1)
0x8DFBCC: fstp    [esp+30E4h+var_30C8]
0x8DFBD0: fxch    st(1)
0x8DFBD2: fsub    st, st(1)
0x8DFBD4: fstp    [esp+30E4h+var_30C4]
0x8DFBD8: fstp    st
0x8DFBDA: fld     dword ptr ds:0A2FAA8h
0x8DFBE0: fld     [esp+30E4h+var_30C4]
0x8DFBE4: fucompp
0x8DFBE6: fnstsw  ax
0x8DFBE8: test    ah, 44h
0x8DFBEB: jp      short loc_8DFBF7
0x8DFBED: mov     [esp+30E4h+var_30C0], 0
0x8DFBF5: jmp     short loc_8DFC05
0x8DFBF7: fld     dword ptr ds:0A2F948h
0x8DFBFD: fdiv    [esp+30E4h+var_30C4]
0x8DFC01: fstp    [esp+30E4h+var_30C0]
0x8DFC05: mov     ecx, [ebx+14h]
0x8DFC08: mov     eax, [esp+30E4h+var_30CC]
0x8DFC0C: mov     [ebx+0Ch], ecx
0x8DFC0F: mov     ecx, [esp+30E4h+var_30C8]
0x8DFC13: lea     edi, [ebx+160h]
0x8DFC19: mov     edx, edi
0x8DFC1B: mov     [edx], eax
0x8DFC1D: mov     [edx+4], ecx
0x8DFC20: mov     ecx, [esp+30E4h+var_30C4]
0x8DFC24: mov     [edx+8], ecx
0x8DFC27: mov     ecx, [esp+30E4h+var_30C0]
0x8DFC2B: mov     [edx+0Ch], ecx
0x8DFC2E: mov     edx, [ebx+74h]
0x8DFC31: add     edx, 10h
0x8DFC34: mov     [edx], eax
0x8DFC36: mov     eax, [esp+30E4h+var_30C8]
0x8DFC3A: mov     [edx+4], eax
0x8DFC3D: mov     ecx, [esp+30E4h+var_30C4]
0x8DFC41: mov     [edx+8], ecx
0x8DFC44: mov     eax, [esp+30E4h+var_30C0]
0x8DFC48: mov     [edx+0Ch], eax
0x8DFC4B: mov     ecx, [ebx+5Ch]
0x8DFC4E: mov     edx, [ecx]
0x8DFC50: lea     eax, [esp+30E4h+var_30CC]
0x8DFC54: push    eax
0x8DFC55: push    ebx
0x8DFC56: call    dword ptr [edx+0Ch]
0x8DFC59: push    ebx
0x8DFC5A: call    sub_8CC3F0
0x8DFC5F: add     esp, 4
0x8DFC62: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x8DFC67: fld     [esp+30E4h+var_30C4]
0x8DFC6B: mov     ecx, [esp+30E4h+var_30CC]
0x8DFC6F: mov     edx, [esp+30E4h+var_30C8]
0x8DFC73: mov     eax, [esp+30E4h+var_30C4]
0x8DFC77: mov     [edi], ecx
0x8DFC79: mov     ecx, [esp+30E4h+var_30C0]
0x8DFC7D: mov     [edi+4], edx
0x8DFC80: mov     [edi+8], eax
0x8DFC83: mov     [edi+0Ch], ecx
0x8DFC86: fmul    dword ptr [ebx+270h]
0x8DFC8C: mov     edx, eax
0x8DFC8E: xor     edi, edi
0x8DFC90: fst     dword ptr [ebx+264h]
0x8DFC96: fild    dword ptr [ebx+26Ch]
0x8DFC9C: fmul    [esp+30E4h+var_30C0]
0x8DFCA0: fstp    dword ptr [ebx+268h]
0x8DFCA6: movaps  xmm1, xmmword ptr [ebx+20h]
0x8DFCAA: fstp    [esp+30E4h+var_30BC]
0x8DFCAE: movss   xmm0, [esp+30E4h+var_30BC]
0x8DFCB4: movaps  xmm2, xmm0
0x8DFCB7: shufps  xmm2, xmm0, 0
0x8DFCBB: mulps   xmm2, xmm1
0x8DFCBE: movaps  xmmword ptr [ebx+180h], xmm2
0x8DFCC5: movaps  xmm1, xmmword ptr [ebx+20h]
0x8DFCC9: mov     [esp+30E4h+var_30BC], edx
0x8DFCCD: movss   xmm0, [esp+30E4h+var_30BC]
0x8DFCD3: movaps  xmm2, xmm0
0x8DFCD6: shufps  xmm2, xmm0, 0
0x8DFCDA: mulps   xmm2, xmm1
0x8DFCDD: movaps  xmmword ptr [ebx+190h], xmm2
0x8DFCE4: mov     eax, [ebx+3Ch]
0x8DFCE7: cmp     eax, edi
0x8DFCE9: jle     short loc_8DFD0B
0x8DFCEB: mov     [esp+30E4h+var_30B4], eax
0x8DFCEF: push    1; int
0x8DFCF1: lea     eax, [esp+30E8h+var_30B8]
0x8DFCF5: push    eax; int
0x8DFCF6: lea     ecx, [esi+0C0h]; lpCriticalSection
0x8DFCFC: mov     byte ptr [esp+30ECh+var_30B8], 0
0x8DFD01: mov     word ptr [esp+30ECh+var_30B8+2], di
0x8DFD06: call    sub_9264D0
0x8DFD0B: lea     ecx, [esi+0C0h]
0x8DFD11: push    ecx; lpCriticalSection
0x8DFD12: call    dword ptr ds:0A28074h
0x8DFD18: mov     edx, [ebx+264h]
0x8DFD1E: mov     eax, [ebx+268h]
0x8DFD24: mov     [esp+30E4h+var_30A4], edi
0x8DFD28: mov     [esp+30E4h+var_30A8], esi
0x8DFD2C: mov     esi, [ebx+74h]
0x8DFD2F: mov     [esp+30E4h+var_30AC], ebx
0x8DFD33: mov     ecx, 0Bh
0x8DFD38: lea     edi, [esp+30E4h+var_30A0]
0x8DFD3C: rep movsd
0x8DFD3E: mov     ecx, [ebx+270h]
0x8DFD44: mov     edi, [esp+30E4h+var_30B0]
0x8DFD48: mov     [esp+30E4h+var_3064], ecx
0x8DFD4F: lea     ecx, [esp+30E4h+var_30AC]
0x8DFD53: mov     [esp+30E4h+var_3074], edx
0x8DFD57: mov     edx, [ebx+168h]
0x8DFD5D: mov     [esp+30E4h+var_3070], eax
0x8DFD61: mov     eax, [ebx+16Ch]
0x8DFD67: push    ecx
0x8DFD68: mov     ecx, edi
0x8DFD6A: mov     [esp+30E8h+var_306C], edx
0x8DFD6E: mov     [esp+30E8h+var_3068], eax
0x8DFD75: call    sub_8DF6B0
0x8DFD7A: lea     eax, [edi+6Ch]
0x8DFD7D: lea     ecx, [edi+48h]
0x8DFD80: push    eax
0x8DFD81: push    ecx
0x8DFD82: call    sub_8D84F0
0x8DFD87: mov     ecx, [edi+4Ch]
0x8DFD8A: xor     eax, eax
0x8DFD8C: add     esp, 8
0x8DFD8F: test    ecx, ecx
0x8DFD91: mov     [esp+30E4h+var_10], 7F7FFFFFh
0x8DFD9C: mov     [esp+30E4h+var_30BC], eax
0x8DFDA0: jle     loc_8DFE38
0x8DFDA6: mov     edx, [edi+48h]
0x8DFDA9: lea     ecx, [edx+eax*8]
0x8DFDAC: mov     edx, [ecx]
0x8DFDAE: mov     ecx, [ecx+4]
0x8DFDB1: movsx   esi, byte ptr [ecx+5]
0x8DFDB5: movsx   eax, byte ptr [edx+5]
0x8DFDB9: add     esi, ecx
0x8DFDBB: mov     ecx, [edi+28h]
0x8DFDBE: mov     ecx, [ecx+74h]
0x8DFDC1: mov     edi, [ecx]
0x8DFDC3: mov     [esp+30E4h+var_30B8], ecx
0x8DFDC7: movzx   ecx, word ptr [esi+1Ah]
0x8DFDCB: add     eax, edx
0x8DFDCD: movzx   edx, word ptr [eax+1Ah]
0x8DFDD1: add     ecx, edi
0x8DFDD3: mov     cl, [ecx+edx*8+19D4h]
0x8DFDDA: test    cl, cl
0x8DFDDC: jz      short loc_8DFE20
0x8DFDDE: movsx   edx, cl
0x8DFDE1: imul    edx, 3Ch ; '<'
0x8DFDE4: mov     cl, [edx+edi+1A24h]
0x8DFDEB: mov     edi, [esp+30E4h+var_30B8]
0x8DFDEF: push    edi
0x8DFDF0: push    esi
0x8DFDF1: push    eax
0x8DFDF2: mov     [edi+0Ch], cl
0x8DFDF5: call    sub_8E7850
0x8DFDFA: mov     edi, [esp+30F0h+var_30B0]
0x8DFDFE: add     esp, 0Ch
0x8DFE01: test    eax, eax
0x8DFE03: jz      short loc_8DFE24
0x8DFE05: mov     ecx, [edi+28h]
0x8DFE08: push    edi
0x8DFE09: lea     edx, [esp+30E8h+var_3044]
0x8DFE10: push    edx
0x8DFE11: mov     edx, [ecx+74h]
0x8DFE14: push    edx
0x8DFE15: push    eax
0x8DFE16: call    sub_8DF5C0
0x8DFE1B: add     esp, 10h
0x8DFE1E: jmp     short loc_8DFE24
0x8DFE20: mov     edi, [esp+30E4h+var_30B0]
0x8DFE24: mov     eax, [esp+30E4h+var_30BC]
0x8DFE28: mov     ecx, [edi+4Ch]
0x8DFE2B: inc     eax
0x8DFE2C: cmp     eax, ecx
0x8DFE2E: mov     [esp+30E4h+var_30BC], eax
0x8DFE32: jl      loc_8DFDA6
0x8DFE38: mov     eax, [edi+70h]
0x8DFE3B: xor     esi, esi
0x8DFE3D: cmp     eax, esi
0x8DFE3F: mov     [edi+4Ch], esi
0x8DFE42: jle     short loc_8DFE7B
0x8DFE44: mov     eax, [edi+6Ch]
0x8DFE47: mov     edx, [eax+esi*8]
0x8DFE4A: lea     ecx, [eax+esi*8]
0x8DFE4D: movsx   eax, byte ptr [edx+5]
0x8DFE51: add     eax, edx
0x8DFE53: mov     edx, [ecx+4]
0x8DFE56: movsx   ecx, byte ptr [edx+5]
0x8DFE5A: add     ecx, edx
0x8DFE5C: push    ecx
0x8DFE5D: push    eax
0x8DFE5E: call    sub_8E66D0
0x8DFE63: add     esp, 8
0x8DFE66: test    eax, eax
0x8DFE68: jz      short loc_8DFE73
0x8DFE6A: push    eax
0x8DFE6B: call    sub_8E7920
0x8DFE70: add     esp, 4
0x8DFE73: mov     eax, [edi+70h]
0x8DFE76: inc     esi
0x8DFE77: cmp     esi, eax
0x8DFE79: jl      short loc_8DFE44
0x8DFE7B: mov     dword ptr [edi+70h], 0
0x8DFE82: mov     byte ptr [edi+44h], 0
0x8DFE86: dec     dword ptr [ebx+88h]
0x8DFE8C: jnz     short loc_8DFEA9
0x8DFE8E: mov     eax, [ebx+84h]
0x8DFE94: test    eax, eax
0x8DFE96: jz      short loc_8DFEA9
0x8DFE98: mov     al, [ebx+90h]
0x8DFE9E: test    al, al
0x8DFEA0: jnz     short loc_8DFEA9
0x8DFEA2: mov     ecx, ebx
0x8DFEA4: call    sub_899210
0x8DFEA9: mov     eax, [edi+18h]
0x8DFEAC: test    eax, eax
0x8DFEAE: jz      short loc_8DFEBC
0x8DFEB0: mov     ecx, [ebx+18h]
0x8DFEB3: push    ecx; float
0x8DFEB4: push    ebx; int
0x8DFEB5: mov     ecx, edi
0x8DFEB7: call    sub_8D33E0
0x8DFEBC: mov     eax, [ebx+110h]
0x8DFEC2: test    eax, eax
0x8DFEC4: mov     edx, [ebx+18h]
0x8DFEC7: mov     [ebx+0Ch], edx
0x8DFECA: jz      loc_8DFF9D
0x8DFED0: mov     esi, large fs:2Ch
0x8DFED7: mov     edi, ds:0BA9DE4h
0x8DFEDD: mov     eax, [esi+edi*4]
0x8DFEE0: mov     ecx, [eax+1A4h]
0x8DFEE6: cmp     ecx, [eax+1A8h]
0x8DFEEC: jnb     short loc_8DFF13
0x8DFEEE: mov     ecx, [eax+1A4h]
0x8DFEF4: mov     dword ptr [ecx], offset aTtpostsimulate; "TtPostSimulateCb"
0x8DFEFA: rdtsc
0x8DFEFC: mov     [esp+30E4h+var_30B8], eax
0x8DFF00: mov     edx, [esp+30E4h+var_30B8]
0x8DFF04: mov     eax, [esi+edi*4]
0x8DFF07: mov     [ecx+4], edx
0x8DFF0A: add     ecx, 0Ch
0x8DFF0D: mov     [eax+1A4h], ecx
0x8DFF13: fld     dword ptr [ebx+18h]
0x8DFF16: fld     dword ptr [ebx+14h]
0x8DFF19: fst     [esp+30E4h+var_30CC]
0x8DFF1D: fld     st(1)
0x8DFF1F: fstp    [esp+30E4h+var_30C8]
0x8DFF23: fxch    st(1)
0x8DFF25: fsub    st, st(1)
0x8DFF27: fstp    [esp+30E4h+var_30C4]
0x8DFF2B: fstp    st
0x8DFF2D: fld     dword ptr ds:0A2FAA8h
0x8DFF33: fld     [esp+30E4h+var_30C4]
0x8DFF37: fucompp
0x8DFF39: fnstsw  ax
0x8DFF3B: test    ah, 44h
0x8DFF3E: jp      short loc_8DFF4A
0x8DFF40: mov     [esp+30E4h+var_30C0], 0
0x8DFF48: jmp     short loc_8DFF58
0x8DFF4A: fld     dword ptr ds:0A2F948h
0x8DFF50: fdiv    [esp+30E4h+var_30C4]
0x8DFF54: fstp    [esp+30E4h+var_30C0]
0x8DFF58: lea     eax, [esp+30E4h+var_30CC]
0x8DFF5C: push    eax
0x8DFF5D: push    ebx
0x8DFF5E: call    sub_8DCD60
0x8DFF63: mov     eax, [esi+edi*4]
0x8DFF66: mov     ecx, [eax+1A4h]
0x8DFF6C: mov     edx, [eax+1A8h]
0x8DFF72: add     esp, 8
0x8DFF75: cmp     ecx, edx
0x8DFF77: jnb     short loc_8DFF9D
0x8DFF79: mov     esi, eax
0x8DFF7B: mov     ecx, [esi+1A4h]
0x8DFF81: mov     dword ptr [ecx], offset aEt; "Et"
0x8DFF87: rdtsc
0x8DFF89: mov     [esp+30E4h+var_30B8], eax
0x8DFF8D: mov     edx, [esp+30E4h+var_30B8]
0x8DFF91: mov     [ecx+4], edx
0x8DFF94: add     ecx, 0Ch
0x8DFF97: mov     [esi+1A4h], ecx
0x8DFF9D: pop     edi
0x8DFF9E: pop     esi
0x8DFF9F: pop     ebx
0x8DFFA0: mov     esp, ebp
0x8DFFA2: pop     ebp
0x8DFFA3: retn    0Ch
