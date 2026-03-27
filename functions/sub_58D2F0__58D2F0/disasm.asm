0x58D2F0: push    0FFFFFFFFh
0x58D2F2: push    offset SEH_58D2F0
0x58D2F7: mov     eax, large fs:0
0x58D2FD: push    eax
0x58D2FE: sub     esp, 8
0x58D301: push    ebx
0x58D302: push    ebp
0x58D303: push    esi
0x58D304: push    edi
0x58D305: mov     eax, ds:0B30AACh
0x58D30A: xor     eax, esp
0x58D30C: push    eax; ArgList
0x58D30D: lea     eax, [esp+28h+var_C]
0x58D311: mov     large fs:0, eax
0x58D317: mov     [esp+28h+var_10], ecx
0x58D31B: cmp     byte ptr [esp+28h+arg_C], 0
0x58D320: fldz
0x58D322: mov     esi, [esp+28h+Src]
0x58D326: fstp    [esp+28h+var_14]
0x58D32A: jnz     short loc_58D34E
0x58D32C: push    esi; unsigned __int8 *
0x58D32D: call    TileStringToStringID
0x58D332: mov     [esp+2Ch+arg_C], eax
0x58D336: fild    [esp+2Ch+arg_C]
0x58D33A: add     esp, 4
0x58D33D: fstp    [esp+28h+var_14]
0x58D341: fldz
0x58D343: fcomp   [esp+28h+var_14]
0x58D347: fnstsw  ax
0x58D349: test    ah, 44h
0x58D34C: jp      short loc_58D36A
0x58D34E: cmp     byte ptr [esi], 5Fh ; '_'
0x58D351: jnz     short loc_58D36A
0x58D353: push    0FFFFFFFFh; int
0x58D355: push    esi; unsigned __int8 *
0x58D356: call    sub_58B040
0x58D35B: mov     [esp+30h+arg_C], eax
0x58D35F: fild    [esp+30h+arg_C]
0x58D363: add     esp, 8
0x58D366: fstp    [esp+28h+var_14]
0x58D36A: push    18h; Size
0x58D36C: call    FormHeapAlloc
0x58D371: mov     edi, eax
0x58D373: add     esp, 4
0x58D376: mov     [esp+28h+arg_C], edi
0x58D37A: test    edi, edi
0x58D37C: mov     [esp+28h+var_4], 0
0x58D384: jz      short loc_58D3AC
0x58D386: mov     eax, [esp+28h+arg_8]
0x58D38A: fld     [esp+28h+var_14]
0x58D38E: push    eax; int
0x58D38F: fld     st
0x58D391: call    Double_To_SInt32
0x58D396: push    eax; int
0x58D397: push    esi; int
0x58D398: push    ecx
0x58D399: mov     ecx, [esp+38h+arg_0]
0x58D39D: fstp    [esp+38h+var_38]; float
0x58D3A0: push    ecx; int
0x58D3A1: mov     ecx, edi
0x58D3A3: call    sub_589FA0
0x58D3A8: mov     ebp, eax
0x58D3AA: jmp     short loc_58D3AE
0x58D3AC: xor     ebp, ebp
0x58D3AE: mov     eax, esi
0x58D3B0: mov     [esp+28h+var_4], 0FFFFFFFFh
0x58D3B8: xor     edx, edx
0x58D3BA: lea     edi, [eax+1]
0x58D3BD: lea     ecx, [ecx+0]
0x58D3C0: mov     cl, [eax]
0x58D3C2: add     eax, 1
0x58D3C5: test    cl, cl
0x58D3C7: jnz     short loc_58D3C0
0x58D3C9: sub     eax, edi
0x58D3CB: jz      short loc_58D3FF
0x58D3CD: lea     ecx, [ecx+0]
0x58D3D0: mov     al, [edx+esi]
0x58D3D3: cmp     al, 30h ; '0'
0x58D3D5: jl      short loc_58D3DB
0x58D3D7: cmp     al, 39h ; '9'
0x58D3D9: jle     short loc_58D3E7
0x58D3DB: cmp     al, 2Dh ; '-'
0x58D3DD: jz      short loc_58D3E7
0x58D3DF: cmp     al, 2Eh ; '.'
0x58D3E1: jnz     loc_58D465
0x58D3E7: mov     eax, esi
0x58D3E9: add     edx, 1
0x58D3EC: lea     edi, [eax+1]
0x58D3EF: nop
0x58D3F0: mov     cl, [eax]
0x58D3F2: add     eax, 1
0x58D3F5: test    cl, cl
0x58D3F7: jnz     short loc_58D3F0
0x58D3F9: sub     eax, edi
0x58D3FB: cmp     edx, eax
0x58D3FD: jb      short loc_58D3D0
0x58D3FF: fld     dword ptr ds:0A30634h
0x58D405: fcomp   [esp+28h+var_14]
0x58D409: fnstsw  ax
0x58D40B: test    ah, 44h
0x58D40E: jp      short loc_58D423
0x58D410: lea     edx, [esp+28h+var_14]
0x58D414: push    edx
0x58D415: push    offset asc_A40540; "%f"
0x58D41A: push    esi; Src
0x58D41B: call    _sscanf
0x58D420: add     esp, 0Ch
0x58D423: fldz
0x58D425: fcomp   [esp+28h+var_14]
0x58D429: fnstsw  ax
0x58D42B: test    ah, 44h
0x58D42E: jp      short loc_58D443
0x58D430: lea     eax, [esp+28h+var_14]
0x58D434: push    eax
0x58D435: push    offset asc_A40540; "%f"
0x58D43A: push    esi; Src
0x58D43B: call    _sscanf
0x58D440: add     esp, 0Ch
0x58D443: push    0; a3
0x58D445: push    offset EmptyString; a2
0x58D44A: lea     ecx, [ebp+8]; this
0x58D44D: call    BSStringT_Set
0x58D452: fld     [esp+28h+var_14]
0x58D456: fstp    dword ptr [ebp+4]
0x58D459: fld     [esp+28h+var_14]
0x58D45D: call    Double_To_SInt32
0x58D462: mov     [ebp+10h], eax
0x58D465: mov     edx, [esp+28h+var_10]
0x58D469: mov     eax, [edx+14h]
0x58D46C: xor     ebx, ebx
0x58D46E: xor     esi, esi
0x58D470: xor     edi, edi
0x58D472: test    eax, eax
0x58D474: jz      short loc_58D493
0x58D476: mov     ebx, [eax+8]
0x58D479: lea     ecx, [eax+8]
0x58D47C: mov     eax, [eax+4]
0x58D47F: test    eax, eax
0x58D481: jz      short loc_58D493
0x58D483: mov     esi, [eax+8]
0x58D486: lea     ecx, [eax+8]
0x58D489: mov     eax, [eax+4]
0x58D48C: test    eax, eax
0x58D48E: jz      short loc_58D493
0x58D490: mov     edi, [eax+8]
0x58D493: mov     eax, [esp+28h+arg_0]
0x58D497: cmp     eax, 0BBAh
0x58D49C: jnz     loc_58D56D
0x58D4A2: test    ebx, ebx
0x58D4A4: jz      loc_58D632
0x58D4AA: mov     ecx, [ebx]
0x58D4AC: cmp     ecx, 0Ah
0x58D4AF: jnz     loc_58D632
0x58D4B5: fld     dword ptr [ebx+4]
0x58D4B8: fcomp   qword ptr ds:0A6ACF8h
0x58D4BE: fnstsw  ax
0x58D4C0: test    ah, 44h
0x58D4C3: jp      loc_58D5CD
0x58D4C9: mov     ecx, [edx+8]
0x58D4CC: cmp     dword ptr [ecx+0Ch], 0
0x58D4D0: jz      short loc_58D4E7
0x58D4D2: push    offset aCanTHaveNested; "Can't have nested template definitions "...
0x58D4D7: call    PrintError
0x58D4DC: mov     esi, [esp+2Ch+var_10]
0x58D4E0: add     esp, 4
0x58D4E3: xor     ebx, ebx
0x58D4E5: jmp     short loc_58D513
0x58D4E7: mov     edi, [esp+28h+Src]
0x58D4EB: push    edi
0x58D4EC: call    sub_58BC80
0x58D4F1: mov     esi, [esp+28h+var_10]
0x58D4F5: mov     ecx, [esi+8]
0x58D4F8: mov     [ecx+0Ch], eax
0x58D4FB: mov     edx, [esi+8]
0x58D4FE: xor     ebx, ebx
0x58D500: cmp     [edx+0Ch], ebx
0x58D503: jnz     short loc_58D513
0x58D505: push    edi
0x58D506: mov     ecx, edx
0x58D508: call    sub_58CE30
0x58D50D: mov     ecx, [esi+8]
0x58D510: mov     [ecx+0Ch], eax
0x58D513: mov     eax, [esi+14h]
0x58D516: mov     ecx, [eax+4]
0x58D519: add     esi, 0Ch
0x58D51C: cmp     ecx, ebx
0x58D51E: mov     [esi+8], ecx
0x58D521: jz      short loc_58D527
0x58D523: mov     [ecx], ebx
0x58D525: jmp     short loc_58D52A
0x58D527: mov     [esi+4], ebx
0x58D52A: mov     edx, [esi]
0x58D52C: mov     edi, [eax+8]
0x58D52F: push    eax
0x58D530: mov     eax, [edx+8]
0x58D533: mov     ecx, esi
0x58D535: call    eax
0x58D537: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x58D53B: cmp     edi, ebx
0x58D53D: jz      short loc_58D55C
0x58D53F: mov     ecx, [edi+8]
0x58D542: push    ecx
0x58D543: call    FormHeapFree
0x58D548: push    edi
0x58D549: mov     [edi+8], ebx
0x58D54C: mov     [edi+0Eh], bx
0x58D550: mov     [edi+0Ch], bx
0x58D554: call    FormHeapFree
0x58D559: add     esp, 8
0x58D55C: cmp     ebp, ebx
0x58D55E: jz      loc_58D943
0x58D564: mov     edx, [ebp+8]
0x58D567: push    edx
0x58D568: jmp     loc_58D85F
0x58D56D: cmp     eax, 0Fh
0x58D570: jnz     loc_58D87F
0x58D576: fld     [esp+28h+var_14]
0x58D57A: fcom    qword ptr ds:0A6ACF8h
0x58D580: fnstsw  ax
0x58D582: test    ah, 44h
0x58D585: jp      loc_58D66F
0x58D58B: mov     eax, [edx+8]
0x58D58E: cmp     dword ptr [eax+0Ch], 0
0x58D592: jz      loc_58D66F
0x58D598: test    ebp, ebp
0x58D59A: fstp    st
0x58D59C: mov     dword ptr [eax+0Ch], 0
0x58D5A3: jz      loc_58D943
0x58D5A9: mov     eax, [ebp+8]
0x58D5AC: push    eax
0x58D5AD: call    FormHeapFree
0x58D5B2: xor     eax, eax
0x58D5B4: push    ebp
0x58D5B5: mov     [ebp+8], eax
0x58D5B8: mov     [ebp+0Eh], ax
0x58D5BC: mov     [ebp+0Ch], ax
0x58D5C0: call    FormHeapFree
0x58D5C5: add     esp, 8
0x58D5C8: jmp     loc_58D943
0x58D5CD: cmp     ecx, 0Ah
0x58D5D0: jnz     short loc_58D632
0x58D5D2: fld     dword ptr [ebx+4]
0x58D5D5: fcomp   qword ptr ds:0A6ACB8h
0x58D5DB: fnstsw  ax
0x58D5DD: test    ah, 1
0x58D5E0: jnz     short loc_58D632
0x58D5E2: fld     dword ptr [ebx+4]
0x58D5E5: fcomp   qword ptr ds:0A6ACB0h
0x58D5EB: fnstsw  ax
0x58D5ED: test    ah, 41h
0x58D5F0: jp      short loc_58D632
0x58D5F2: mov     ecx, [esp+28h+Src]
0x58D5F6: xor     esi, esi
0x58D5F8: push    esi; a3
0x58D5F9: push    ecx; a2
0x58D5FA: lea     ecx, [ebx+8]; this
0x58D5FD: mov     dword ptr [ebx], 28h ; '('
0x58D603: call    BSStringT_Set
0x58D608: cmp     ebp, esi
0x58D60A: jz      loc_58D943
0x58D610: mov     edx, [ebp+8]
0x58D613: push    edx
0x58D614: call    FormHeapFree
0x58D619: push    ebp
0x58D61A: mov     [ebp+8], esi
0x58D61D: mov     [ebp+0Eh], si
0x58D621: mov     [ebp+0Ch], si
0x58D625: call    FormHeapFree
0x58D62A: add     esp, 8
0x58D62D: jmp     loc_58D943
0x58D632: mov     esi, edx
0x58D634: add     esi, 0Ch
0x58D637: mov     dword ptr [ebp+0], 32h ; '2'
0x58D63E: mov     dword ptr [ebp+10h], 0BBAh
0x58D645: mov     eax, [esi]
0x58D647: mov     edx, [eax+4]
0x58D64A: mov     ecx, esi
0x58D64C: call    edx
0x58D64E: mov     [eax+8], ebp
0x58D651: mov     dword ptr [eax], 0
0x58D657: mov     ecx, [esi+8]
0x58D65A: mov     [eax+4], ecx
0x58D65D: mov     ecx, [esi+8]
0x58D660: test    ecx, ecx
0x58D662: jz      loc_58D939
0x58D668: mov     [ecx], eax
0x58D66A: jmp     loc_58D93C
0x58D66F: test    ebx, ebx
0x58D671: jz      loc_58D87D
0x58D677: mov     ecx, [ebx]
0x58D679: cmp     ecx, 0BB9h
0x58D67F: jnz     loc_58D78E
0x58D685: test    esi, esi
0x58D687: jz      loc_58D78E
0x58D68D: mov     eax, [esi]
0x58D68F: cmp     eax, 1Eh
0x58D692: jz      short loc_58D69D
0x58D694: cmp     eax, 14h
0x58D697: jnz     loc_58D78E
0x58D69D: fld     dword ptr [esi+4]
0x58D6A0: fld     st(1)
0x58D6A2: fucompp
0x58D6A4: fnstsw  ax
0x58D6A6: test    ah, 44h
0x58D6A9: jp      loc_58D78E
0x58D6AF: fstp    st
0x58D6B1: fld     dword ptr [ebp+4]
0x58D6B4: fcomp   qword ptr ds:0A6ACA8h
0x58D6BA: fnstsw  ax
0x58D6BC: test    ah, 1
0x58D6BF: jnz     short loc_58D6D1
0x58D6C1: fld     dword ptr ds:0A6ACA0h
0x58D6C7: fcomp   dword ptr [ebp+4]
0x58D6CA: fnstsw  ax
0x58D6CC: test    ah, 1
0x58D6CF: jz      short loc_58D6DA
0x58D6D1: cmp     dword ptr [ebp+10h], 2710h
0x58D6D8: jl      short loc_58D6E2
0x58D6DA: mov     dword ptr [esi], 32h ; '2'
0x58D6E0: jmp     short loc_58D71D
0x58D6E2: fld     dword ptr [ebp+4]
0x58D6E5: fcomp   qword ptr ds:0A6AC98h
0x58D6EB: fnstsw  ax
0x58D6ED: test    ah, 1
0x58D6F0: jnz     short loc_58D70A
0x58D6F2: fld     dword ptr [ebp+4]
0x58D6F5: fcomp   qword ptr ds:0A6AC90h
0x58D6FB: fnstsw  ax
0x58D6FD: test    ah, 41h
0x58D700: jp      short loc_58D70A
0x58D702: mov     dword ptr [esi], 37h ; '7'
0x58D708: jmp     short loc_58D71D
0x58D70A: push    offset aBadTraitAction; "Bad trait/action type in XML"
0x58D70F: mov     dword ptr [esi], 0FFFFFFFFh
0x58D715: call    PrintError
0x58D71A: add     esp, 4
0x58D71D: fld     dword ptr [esi+4]
0x58D720: call    Double_To_SInt32
0x58D725: mov     [esi+10h], eax
0x58D728: fld     dword ptr [ebx+4]
0x58D72B: fstp    dword ptr [esi+4]
0x58D72E: mov     edx, [ebx+8]
0x58D731: xor     edi, edi
0x58D733: push    edi; a3
0x58D734: push    edx; a2
0x58D735: lea     ecx, [esi+8]; this
0x58D738: call    BSStringT_Set
0x58D73D: mov     ecx, [esp+28h+var_10]
0x58D741: add     ecx, 0Ch
0x58D744: call    sub_5889B0
0x58D749: mov     esi, eax
0x58D74B: cmp     esi, edi
0x58D74D: jz      short loc_58D76C
0x58D74F: mov     eax, [esi+8]
0x58D752: push    eax
0x58D753: call    FormHeapFree
0x58D758: push    esi
0x58D759: mov     [esi+8], edi
0x58D75C: mov     [esi+0Eh], di
0x58D760: mov     [esi+0Ch], di
0x58D764: call    FormHeapFree
0x58D769: add     esp, 8
0x58D76C: mov     ecx, [ebp+8]
0x58D76F: push    ecx
0x58D770: call    FormHeapFree
0x58D775: push    ebp
0x58D776: mov     [ebp+8], edi
0x58D779: mov     [ebp+0Eh], di
0x58D77D: mov     [ebp+0Ch], di
0x58D781: call    FormHeapFree
0x58D786: add     esp, 8
0x58D789: jmp     loc_58D943
0x58D78E: cmp     ecx, 0BBCh
0x58D794: jnz     loc_58D87D
0x58D79A: test    esi, esi
0x58D79C: jz      loc_58D87D
0x58D7A2: cmp     dword ptr [esi], 0BBBh
0x58D7A8: jnz     loc_58D87D
0x58D7AE: test    edi, edi
0x58D7B0: jz      loc_58D87D
0x58D7B6: cmp     dword ptr [edi], 14h
0x58D7B9: jnz     loc_58D87D
0x58D7BF: fld     dword ptr [edi+4]
0x58D7C2: fucompp
0x58D7C4: fnstsw  ax
0x58D7C6: test    ah, 44h
0x58D7C9: jp      loc_58D87F
0x58D7CF: fld     dword ptr [edi+4]
0x58D7D2: mov     dword ptr [edi], 3Ch ; '<'
0x58D7D8: call    Double_To_SInt32
0x58D7DD: mov     [edi+10h], eax
0x58D7E0: fld     dword ptr [ebx+4]
0x58D7E3: add     esi, 8
0x58D7E6: fstp    dword ptr [edi+4]
0x58D7E9: push    esi
0x58D7EA: lea     ecx, [edi+8]
0x58D7ED: call    sub_4FB4C0
0x58D7F2: mov     edi, [esp+28h+var_10]
0x58D7F6: add     edi, 0Ch
0x58D7F9: mov     ecx, edi
0x58D7FB: call    sub_5889B0
0x58D800: mov     esi, eax
0x58D802: test    esi, esi
0x58D804: jz      short loc_58D827
0x58D806: mov     edx, [esi+8]
0x58D809: push    edx
0x58D80A: call    FormHeapFree
0x58D80F: xor     ebx, ebx
0x58D811: push    esi
0x58D812: mov     [esi+8], ebx
0x58D815: mov     [esi+0Eh], bx
0x58D819: mov     [esi+0Ch], bx
0x58D81D: call    FormHeapFree
0x58D822: add     esp, 8
0x58D825: jmp     short loc_58D829
0x58D827: xor     ebx, ebx
0x58D829: mov     ecx, edi
0x58D82B: call    sub_5889B0
0x58D830: mov     esi, eax
0x58D832: cmp     esi, ebx
0x58D834: jz      short loc_58D853
0x58D836: mov     eax, [esi+8]
0x58D839: push    eax
0x58D83A: call    FormHeapFree
0x58D83F: push    esi
0x58D840: mov     [esi+8], ebx
0x58D843: mov     [esi+0Eh], bx
0x58D847: mov     [esi+0Ch], bx
0x58D84B: call    FormHeapFree
0x58D850: add     esp, 8
0x58D853: cmp     ebp, ebx
0x58D855: jz      loc_58D943
0x58D85B: mov     ecx, [ebp+8]
0x58D85E: push    ecx
0x58D85F: call    FormHeapFree
0x58D864: mov     [ebp+8], ebx
0x58D867: mov     [ebp+0Eh], bx
0x58D86B: push    ebp
0x58D86C: mov     [ebp+0Ch], bx
0x58D870: call    FormHeapFree
0x58D875: add     esp, 8
0x58D878: jmp     loc_58D943
0x58D87D: fstp    st
0x58D87F: mov     eax, [ebp+10h]
0x58D882: cmp     eax, 0FA1h
0x58D887: jl      short loc_58D890
0x58D889: cmp     eax, 1001h
0x58D88E: jle     short loc_58D897
0x58D890: cmp     eax, 2710h
0x58D895: jl      short loc_58D8B6
0x58D897: mov     eax, [ebp+0]
0x58D89A: cmp     eax, 0Ah
0x58D89D: jnz     short loc_58D8A8
0x58D89F: mov     dword ptr [ebp+0], 1Eh
0x58D8A6: jmp     short loc_58D910
0x58D8A8: cmp     eax, 0Fh
0x58D8AB: jnz     short loc_58D910
0x58D8AD: mov     dword ptr [ebp+0], 23h ; '#'
0x58D8B4: jmp     short loc_58D910
0x58D8B6: cmp     eax, 7D1h
0x58D8BB: jl      short loc_58D8E3
0x58D8BD: cmp     eax, 7EBh
0x58D8C2: jg      short loc_58D8E3
0x58D8C4: mov     eax, [ebp+0]
0x58D8C7: cmp     eax, 0Ah
0x58D8CA: jnz     short loc_58D8D5
0x58D8CC: mov     dword ptr [ebp+0], 14h
0x58D8D3: jmp     short loc_58D910
0x58D8D5: cmp     eax, 0Fh
0x58D8D8: jnz     short loc_58D910
0x58D8DA: mov     dword ptr [ebp+0], 19h
0x58D8E1: jmp     short loc_58D910
0x58D8E3: cmp     dword ptr [ebp+0], 0Fh
0x58D8E7: jnz     short loc_58D910
0x58D8E9: fld     dword ptr [ebp+4]
0x58D8EC: fcomp   qword ptr ds:0A6ACB8h
0x58D8F2: fnstsw  ax
0x58D8F4: test    ah, 1
0x58D8F7: jnz     short loc_58D910
0x58D8F9: fld     dword ptr [ebp+4]
0x58D8FC: fcomp   qword ptr ds:0A6ACB0h
0x58D902: fnstsw  ax
0x58D904: test    ah, 41h
0x58D907: jp      short loc_58D910
0x58D909: mov     dword ptr [ebp+0], 2Dh ; '-'
0x58D910: mov     esi, edx
0x58D912: mov     edx, [esi+0Ch]
0x58D915: mov     eax, [edx+4]
0x58D918: add     esi, 0Ch
0x58D91B: mov     ecx, esi
0x58D91D: call    eax
0x58D91F: mov     [eax+8], ebp
0x58D922: mov     dword ptr [eax], 0
0x58D928: mov     ecx, [esi+8]
0x58D92B: mov     [eax+4], ecx
0x58D92E: mov     ecx, [esi+8]
0x58D931: test    ecx, ecx
0x58D933: jz      short loc_58D939
0x58D935: mov     [ecx], eax
0x58D937: jmp     short loc_58D93C
0x58D939: mov     [esi+4], eax
0x58D93C: add     dword ptr [esi+0Ch], 1
0x58D940: mov     [esi+8], eax
0x58D943: mov     ecx, [esp+28h+var_C]
0x58D947: mov     large fs:0, ecx
0x58D94E: pop     ecx
0x58D94F: pop     edi
0x58D950: pop     esi
0x58D951: pop     ebp
0x58D952: pop     ebx
0x58D953: add     esp, 14h
0x58D956: retn    10h
