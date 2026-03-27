0x4D5000: push    ebp
0x4D5001: mov     ebp, esp
0x4D5003: and     esp, 0FFFFFFF0h
0x4D5006: push    0FFFFFFFFh
0x4D5008: push    offset SEH_4D5000
0x4D500D: mov     eax, large fs:0
0x4D5013: push    eax
0x4D5014: sub     esp, 0D8h
0x4D501A: mov     eax, ds:0B30AACh
0x4D501F: xor     eax, esp
0x4D5021: mov     [esp+0E4h+var_14], eax
0x4D5028: push    ebx
0x4D5029: push    esi
0x4D502A: push    edi
0x4D502B: mov     eax, ds:0B30AACh
0x4D5030: xor     eax, esp
0x4D5032: push    eax
0x4D5033: lea     eax, [esp+0F4h+var_C]
0x4D503A: mov     large fs:0, eax
0x4D5040: mov     esi, [ebp+arg_0]
0x4D5043: lea     ecx, [esp+0F4h+var_C0]
0x4D5047: call    sub_88A4F0
0x4D504C: fldz
0x4D504E: fst     dword ptr [esp+0F4h+var_D0]
0x4D5052: push    ecx
0x4D5053: fst     dword ptr [esp+0F8h+var_D0+4]
0x4D5057: xor     ebx, ebx
0x4D5059: fld     dword ptr ds:0A46B20h
0x4D505F: lea     ecx, [esp+0F8h+var_C0]
0x4D5063: fstp    dword ptr [esp+0F8h+var_D0+8]
0x4D5067: mov     [esp+0F8h+var_4], ebx
0x4D506E: fstp    dword ptr [esp+0F8h+var_D0+0Ch]
0x4D5072: movaps  xmm0, [esp+0F8h+var_D0]
0x4D5077: fld     dword ptr ds:0A46B30h
0x4D507D: movaps  [esp+0F8h+var_B0], xmm0
0x4D5082: fstp    [esp+0F8h+var_F8]; float
0x4D5085: call    sub_8A9460
0x4D508A: mov     edx, [esi+8]
0x4D508D: fldz
0x4D508F: mov     eax, [esi]
0x4D5091: mov     ecx, [esi+4]
0x4D5094: mov     [esp+0F4h+var_D4], edx
0x4D5098: fstp    [esp+0F4h+var_D4]
0x4D509C: fld1
0x4D509E: mov     [esp+0F4h+var_DC], eax
0x4D50A2: mov     eax, ds:0B097D8h
0x4D50A7: fstp    [esp+0F4h+var_70]
0x4D50AE: push    1
0x4D50B0: mov     [esp+0F8h+var_D8], ecx
0x4D50B4: push    0C0h ; 'À'
0x4D50B9: mov     ecx, offset FormHeap
0x4D50BE: mov     ds:0B2E2D4h, eax
0x4D50C3: call    j_MemoryHeap_Alloc
0x4D50C8: mov     dl, al
0x4D50CA: and     dl, 0Fh
0x4D50CD: mov     cl, 10h
0x4D50CF: sub     cl, dl
0x4D50D1: movzx   edx, cl
0x4D50D4: add     eax, edx
0x4D50D6: mov     [eax-1], cl
0x4D50D9: mov     [esp+0F4h+var_E0], eax
0x4D50DD: lea     ecx, [esp+0F4h+var_C0]
0x4D50E1: push    ecx
0x4D50E2: mov     ecx, eax
0x4D50E4: mov     byte ptr [esp+0F8h+var_4], 1
0x4D50EC: call    sub_8A7B20
0x4D50F1: mov     edi, eax
0x4D50F3: cmp     edi, ebx
0x4D50F5: mov     byte ptr [esp+0F4h+var_4], bl
0x4D50FC: jz      short loc_4D5107
0x4D50FE: mov     edx, [edi]
0x4D5100: mov     eax, [edx+58h]
0x4D5103: mov     ecx, edi
0x4D5105: call    eax
0x4D5107: push    14h; Size
0x4D5109: call    FormHeapAlloc
0x4D510E: mov     esi, eax
0x4D5110: add     esp, 4
0x4D5113: mov     [esp+0F4h+var_E0], esi
0x4D5117: cmp     esi, ebx
0x4D5119: mov     byte ptr [esp+0F4h+var_4], 2
0x4D5121: jz      short loc_4D5132
0x4D5123: mov     ecx, esi
0x4D5125: call    sub_8984C0
0x4D512A: mov     dword ptr [esi], offset ??_7TESWindListener@@6B@; const TESWindListener::`vftable'
0x4D5130: mov     ebx, esi
0x4D5132: test    edi, edi
0x4D5134: mov     byte ptr [esp+0F4h+var_4], 0
0x4D513C: jz      short loc_4D5153
0x4D513E: mov     edx, [edi]
0x4D5140: mov     eax, [edx+58h]
0x4D5143: mov     ecx, edi
0x4D5145: call    eax
0x4D5147: test    eax, eax
0x4D5149: jz      short loc_4D5153
0x4D514B: push    ebx
0x4D514C: mov     ecx, eax
0x4D514E: call    sub_899CA0
0x4D5153: mov     ecx, [edi+68h]
0x4D5156: lea     esi, [edi+60h]
0x4D5159: and     ecx, 3FFFFFFFh
0x4D515F: cmp     [esi+4], ecx
0x4D5162: jnz     short loc_4D516F
0x4D5164: push    4
0x4D5166: push    esi
0x4D5167: call    sub_8A6EE0
0x4D516C: add     esp, 8
0x4D516F: mov     edx, [esi+4]
0x4D5172: mov     eax, [esi]
0x4D5174: mov     [eax+edx*4], ebx
0x4D5177: add     dword ptr [esi+4], 1
0x4D517B: push    20h ; ' '; Size
0x4D517D: call    FormHeapAlloc
0x4D5182: add     esp, 4
0x4D5185: mov     [esp+0F4h+var_E0], eax
0x4D5189: test    eax, eax
0x4D518B: mov     byte ptr [esp+0F4h+var_4], 3
0x4D5193: jz      short loc_4D519E
0x4D5195: mov     ecx, eax; this
0x4D5197: call    ??0TESTrapListener@@QAE@XZ; TESTrapListener::TESTrapListener(void)
0x4D519C: jmp     short loc_4D51A0
0x4D519E: xor     eax, eax
0x4D51A0: push    eax
0x4D51A1: mov     ecx, edi
0x4D51A3: mov     byte ptr [esp+0F8h+var_4], 0
0x4D51AB: call    sub_4CD320
0x4D51B0: call    sub_537CC0
0x4D51B5: test    edi, edi
0x4D51B7: mov     ebx, eax
0x4D51B9: jz      short loc_4D51D0
0x4D51BB: mov     edx, [edi]
0x4D51BD: mov     eax, [edx+58h]
0x4D51C0: mov     ecx, edi
0x4D51C2: call    eax
0x4D51C4: test    eax, eax
0x4D51C6: jz      short loc_4D51D0
0x4D51C8: push    ebx
0x4D51C9: mov     ecx, eax
0x4D51CB: call    sub_899CA0
0x4D51D0: mov     ecx, [esi+8]
0x4D51D3: and     ecx, 3FFFFFFFh
0x4D51D9: cmp     [esi+4], ecx
0x4D51DC: jnz     short loc_4D51E9
0x4D51DE: push    4
0x4D51E0: push    esi
0x4D51E1: call    sub_8A6EE0
0x4D51E6: add     esp, 8
0x4D51E9: mov     edx, [esi+4]
0x4D51EC: mov     eax, [esi]
0x4D51EE: mov     [eax+edx*4], ebx
0x4D51F1: add     dword ptr [esi+4], 1
0x4D51F5: push    14h; Size
0x4D51F7: call    FormHeapAlloc
0x4D51FC: add     esp, 4
0x4D51FF: mov     [esp+0F4h+var_E0], eax
0x4D5203: test    eax, eax
0x4D5205: mov     byte ptr [esp+0F4h+var_4], 4
0x4D520D: jz      short loc_4D521A
0x4D520F: mov     ecx, eax
0x4D5211: call    sub_5360F0
0x4D5216: mov     ebx, eax
0x4D5218: jmp     short loc_4D521C
0x4D521A: xor     ebx, ebx
0x4D521C: test    edi, edi
0x4D521E: mov     byte ptr [esp+0F4h+var_4], 0
0x4D5226: jz      short loc_4D523D
0x4D5228: mov     edx, [edi]
0x4D522A: mov     eax, [edx+58h]
0x4D522D: mov     ecx, edi
0x4D522F: call    eax
0x4D5231: test    eax, eax
0x4D5233: jz      short loc_4D523D
0x4D5235: push    ebx
0x4D5236: mov     ecx, eax
0x4D5238: call    sub_899CA0
0x4D523D: mov     ecx, [esi+8]
0x4D5240: and     ecx, 3FFFFFFFh
0x4D5246: cmp     [esi+4], ecx
0x4D5249: jnz     short loc_4D5256
0x4D524B: push    4
0x4D524D: push    esi
0x4D524E: call    sub_8A6EE0
0x4D5253: add     esp, 8
0x4D5256: fld     dword ptr ds:0A46B2Ch
0x4D525C: mov     edx, [esi+4]
0x4D525F: mov     eax, [esi]
0x4D5261: fst     dword ptr [esp+0F4h+var_D0]
0x4D5265: fst     dword ptr [esp+0F4h+var_D0+4]
0x4D5269: mov     [eax+edx*4], ebx
0x4D526C: add     dword ptr [esi+4], 1
0x4D5270: fstp    dword ptr [esp+0F4h+var_D0+8]
0x4D5274: movaps  xmm0, [esp+0F4h+var_D0]
0x4D5279: fld     dword ptr ds:0A46B28h
0x4D527F: fst     dword ptr [esp+0F4h+var_D0]
0x4D5283: lea     ecx, [esp+0F4h+var_DC]
0x4D5287: fst     dword ptr [esp+0F4h+var_D0+4]
0x4D528B: movaps  xmmword ptr [edi+80h], xmm0
0x4D5292: push    ecx
0x4D5293: fstp    dword ptr [esp+0F8h+var_D0+8]
0x4D5297: movaps  xmm0, [esp+0F8h+var_D0]
0x4D529C: mov     ecx, edi
0x4D529E: movaps  xmmword ptr [edi+90h], xmm0
0x4D52A5: call    sub_88D260
0x4D52AA: mov     edx, [edi]
0x4D52AC: mov     eax, [edx+58h]
0x4D52AF: mov     ecx, edi
0x4D52B1: call    eax
0x4D52B3: mov     edx, [edi]
0x4D52B5: mov     eax, [edx+80h]
0x4D52BB: mov     ecx, edi
0x4D52BD: call    eax
0x4D52BF: cmp     byte ptr ds:0B33A34h, 0
0x4D52C6: push    0
0x4D52C8: setz    cl
0x4D52CB: mov     [edi+19h], cl
0x4D52CE: mov     ecx, edi
0x4D52D0: call    sub_88B680
0x4D52D5: fld1
0x4D52D7: fld     dword ptr ds:0B097C0h
0x4D52DD: fcom    st(1)
0x4D52DF: fnstsw  ax
0x4D52E1: test    ah, 5
0x4D52E4: mov     eax, edi
0x4D52E6: jp      short loc_4D52EC
0x4D52E8: fstp    st(1)
0x4D52EA: jmp     short loc_4D52EE
0x4D52EC: fstp    st
0x4D52EE: fstp    dword ptr ds:0B2E2E8h
0x4D52F4: mov     ecx, [esp+0F4h+var_C]
0x4D52FB: mov     large fs:0, ecx
0x4D5302: pop     ecx
0x4D5303: pop     edi
0x4D5304: pop     esi
0x4D5305: pop     ebx
0x4D5306: mov     ecx, [esp+0E4h+var_14]
0x4D530D: xor     ecx, esp
0x4D530F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D5314: mov     esp, ebp
0x4D5316: pop     ebp
0x4D5317: retn
