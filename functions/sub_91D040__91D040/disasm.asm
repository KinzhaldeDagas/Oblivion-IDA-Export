0x91D040: sub     esp, 23Ch
0x91D046: mov     eax, ds:0B30AACh
0x91D04B: push    ebx
0x91D04C: push    ebp
0x91D04D: mov     ebp, [esp+244h+arg_0]
0x91D054: push    esi
0x91D055: mov     esi, [ebp+14h]
0x91D058: push    edi
0x91D059: mov     edi, ecx
0x91D05B: lea     ebx, [ebp+14h]
0x91D05E: mov     [esp+24Ch+var_4], eax
0x91D065: mov     eax, [ebp+0]
0x91D068: mov     ecx, ebp
0x91D06A: mov     [esp+24Ch+var_230], edi
0x91D06E: mov     [esp+24Ch+var_228], esi
0x91D072: call    dword ptr [eax+10h]
0x91D075: xor     ecx, ecx
0x91D077: cmp     eax, 1
0x91D07A: mov     edx, 80000000h
0x91D07F: mov     [esp+24Ch+var_23C], ecx
0x91D083: mov     [esp+24Ch+var_238], ecx
0x91D087: mov     [esp+24Ch+var_234], edx
0x91D08B: jz      short loc_91D0C7
0x91D08D: cmp     eax, 2
0x91D090: jz      short loc_91D0C7
0x91D092: mov     esi, ds:0BA8450h
0x91D098: mov     edi, [esi+0Ch]
0x91D09B: test    edi, edi
0x91D09D: jle     short loc_91D0AE
0x91D09F: mov     esi, [esi+8]
0x91D0A2: cmp     [esi], eax
0x91D0A4: jz      short loc_91D0B1
0x91D0A6: inc     ecx
0x91D0A7: add     esi, 4
0x91D0AA: cmp     ecx, edi
0x91D0AC: jl      short loc_91D0A2
0x91D0AE: or      ecx, 0FFFFFFFFh
0x91D0B1: cmp     ecx, 0FFFFFFFFh
0x91D0B4: setnz   al
0x91D0B7: test    al, al
0x91D0B9: jz      loc_91D1FE
0x91D0BF: mov     esi, [esp+24Ch+var_228]
0x91D0C3: mov     edi, [esp+24Ch+var_230]
0x91D0C7: test    esi, esi
0x91D0C9: jz      loc_91D1FE
0x91D0CF: lea     ecx, [esp+24Ch+var_230]
0x91D0D3: call    sub_94A520
0x91D0D8: lea     ecx, [esp+24Ch+var_230]
0x91D0DC: push    ecx
0x91D0DD: lea     ecx, [esp+250h+var_218]
0x91D0E1: call    sub_94A530
0x91D0E6: lea     edx, [esp+24Ch+var_23C]
0x91D0EA: push    edx
0x91D0EB: push    esi
0x91D0EC: lea     ecx, [esp+254h+var_218]
0x91D0F0: call    sub_94B7E0
0x91D0F5: mov     esi, [esp+24Ch+var_238]
0x91D0F9: dec     esi
0x91D0FA: js      short loc_91D178
0x91D0FC: lea     esp, [esp+0]
0x91D100: mov     eax, [esp+24Ch+var_23C]
0x91D104: mov     eax, [eax+esi*4]
0x91D107: cmp     dword ptr [eax+54h], 6
0x91D10B: jnz     short loc_91D175
0x91D10D: mov     ecx, [eax+50h]
0x91D110: test    ecx, ecx
0x91D112: jnz     short loc_91D175
0x91D114: push    ecx
0x91D115: mov     eax, esp
0x91D117: push    200h
0x91D11C: lea     ecx, [esp+254h+var_204]
0x91D120: push    ecx
0x91D121: lea     ecx, [esp+258h+var_224]
0x91D125: mov     byte ptr [eax], 1
0x91D128: call    sub_8BBFB0
0x91D12D: push    offset aUnableToBuildD; "Unable to build display geometry from h"...
0x91D132: lea     ecx, [esp+250h+var_224]
0x91D136: call    sub_8BBDB0
0x91D13B: mov     ecx, ds:0BA7FB0h
0x91D141: mov     edx, [ecx]
0x91D143: push    92h ; '’'
0x91D148: push    offset a_Visualdebug_2; ".\\visualdebugger\\viewer\\hkPhantomDis"...
0x91D14D: lea     eax, [esp+254h+var_204]
0x91D151: push    eax
0x91D152: push    0FFFFFFFFh
0x91D154: push    0
0x91D156: call    dword ptr [edx+8]
0x91D159: lea     ecx, [esp+24Ch+var_224]
0x91D15D: call    sub_8BC000
0x91D162: mov     eax, [esp+24Ch+var_238]
0x91D166: mov     ecx, [esp+24Ch+var_23C]
0x91D16A: dec     eax
0x91D16B: mov     [esp+24Ch+var_238], eax
0x91D16F: mov     edx, [ecx+eax*4]
0x91D172: mov     [ecx+esi*4], edx
0x91D175: dec     esi
0x91D176: jns     short loc_91D100
0x91D178: mov     eax, [edi+10h]
0x91D17B: mov     ecx, [edi+0Ch]
0x91D17E: lea     esi, [edi+8]
0x91D181: and     eax, 3FFFFFFFh
0x91D186: cmp     ecx, eax
0x91D188: jnz     short loc_91D195
0x91D18A: push    4
0x91D18C: push    esi
0x91D18D: call    sub_8A6EE0
0x91D192: add     esp, 8
0x91D195: mov     ecx, [esi+4]
0x91D198: mov     edx, [esi]
0x91D19A: mov     [edx+ecx*4], ebp
0x91D19D: inc     dword ptr [esi+4]
0x91D1A0: mov     edx, ds:0BA8448h
0x91D1A6: mov     ecx, [edi-10h]
0x91D1A9: mov     eax, [ecx]
0x91D1AB: push    edx
0x91D1AC: mov     edx, [ebx+8]
0x91D1AF: push    ebx
0x91D1B0: push    edx
0x91D1B1: lea     edx, [esp+258h+var_23C]
0x91D1B5: push    edx
0x91D1B6: call    dword ptr [eax+4]
0x91D1B9: mov     edx, ds:0BA8448h
0x91D1BF: mov     ecx, [edi-10h]
0x91D1C2: mov     eax, [ecx]
0x91D1C4: push    edx
0x91D1C5: mov     edx, ds:0BA844Ch
0x91D1CB: push    ebx
0x91D1CC: push    edx
0x91D1CD: call    dword ptr [eax+8]
0x91D1D0: mov     eax, [esp+24Ch+var_238]
0x91D1D4: xor     esi, esi
0x91D1D6: test    eax, eax
0x91D1D8: jle     short loc_91D1FA
0x91D1DA: lea     ebx, [ebx+0]
0x91D1E0: mov     eax, [esp+24Ch+var_23C]
0x91D1E4: mov     ecx, [eax+esi*4]
0x91D1E7: test    ecx, ecx
0x91D1E9: jz      short loc_91D1F1
0x91D1EB: mov     edx, [ecx]
0x91D1ED: push    1
0x91D1EF: call    dword ptr [edx]
0x91D1F1: mov     eax, [esp+24Ch+var_238]
0x91D1F5: inc     esi
0x91D1F6: cmp     esi, eax
0x91D1F8: jl      short loc_91D1E0
0x91D1FA: mov     edx, [esp+24Ch+var_234]
0x91D1FE: test    edx, edx
0x91D200: js      short loc_91D237
0x91D202: mov     ecx, large fs:2Ch
0x91D209: mov     eax, ds:0BA9DE4h
0x91D20E: mov     eax, [ecx+eax*4]
0x91D211: mov     ecx, [eax+19Ch]
0x91D217: test    ecx, ecx
0x91D219: jnz     short loc_91D221
0x91D21B: mov     ecx, ds:0BA7D9Ch
0x91D221: and     edx, 3FFFFFFFh
0x91D227: push    14h
0x91D229: shl     edx, 2
0x91D22C: push    edx
0x91D22D: mov     edx, [esp+254h+var_23C]
0x91D231: push    edx
0x91D232: call    sub_8A75D0
0x91D237: mov     ecx, [esp+24Ch+var_4]
0x91D23E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x91D243: pop     edi
0x91D244: pop     esi
0x91D245: pop     ebp
0x91D246: pop     ebx
0x91D247: add     esp, 23Ch
0x91D24D: retn    4
