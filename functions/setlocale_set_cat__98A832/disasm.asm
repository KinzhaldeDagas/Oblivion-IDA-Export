0x98A832: push    ebp
0x98A833: lea     ebp, [esp-74h]
0x98A837: sub     esp, 1C4h
0x98A83D: mov     eax, ___security_cookie
0x98A842: xor     eax, ebp
0x98A844: mov     [ebp+74h+var_4], eax
0x98A847: push    ebx
0x98A848: push    edi
0x98A849: mov     ebx, ecx
0x98A84B: call    __getptd
0x98A850: push    [ebp+74h+arg_0]; int
0x98A853: mov     edi, eax
0x98A855: lea     eax, [ebp+74h+var_198]
0x98A85B: push    eax; int
0x98A85C: lea     eax, [ebp+74h+Src]
0x98A862: push    eax; int
0x98A863: push    83h ; 'ƒ'; SizeInBytes
0x98A868: lea     eax, [ebp+74h+Str1]
0x98A86B: push    eax; int
0x98A86C: push    ebx; Str
0x98A86D: add     edi, 1D0h
0x98A873: call    __expandlocale
0x98A878: add     esp, 18h
0x98A87B: test    eax, eax
0x98A87D: jnz     short loc_98A886
0x98A87F: xor     eax, eax
0x98A881: jmp     loc_98AB17
0x98A886: mov     eax, [ebp+74h+arg_0]
0x98A889: shl     eax, 4
0x98A88C: lea     ebx, [eax+esi]
0x98A88F: push    dword ptr [ebx+48h]; Str2
0x98A892: lea     eax, [ebp+74h+Str1]
0x98A895: push    eax; Str1
0x98A896: call    _strcmp
0x98A89B: test    eax, eax
0x98A89D: pop     ecx
0x98A89E: pop     ecx
0x98A89F: jz      loc_98AB14
0x98A8A5: lea     eax, [ebp+74h+Str1]
0x98A8A8: push    eax; Str
0x98A8A9: call    _strlen
0x98A8AE: add     eax, 5
0x98A8B1: push    eax
0x98A8B2: mov     [ebp+74h+var_18C], eax
0x98A8B8: call    unknown_libname_72
0x98A8BD: test    eax, eax
0x98A8BF: pop     ecx
0x98A8C0: pop     ecx
0x98A8C1: mov     [ebp+74h+Memory], eax
0x98A8C7: jz      short loc_98A87F
0x98A8C9: mov     eax, [ebx+48h]
0x98A8CC: mov     ecx, [ebp+74h+arg_0]
0x98A8CF: mov     [ebp+74h+var_1A4], eax
0x98A8D5: lea     eax, [esi+ecx*4+0Ch]
0x98A8D9: add     ecx, 6
0x98A8DC: imul    ecx, 6
0x98A8DF: mov     [ebp+74h+var_194], eax
0x98A8E5: mov     eax, [eax]
0x98A8E7: mov     [ebp+74h+var_1A8], eax
0x98A8ED: lea     eax, [ecx+esi]
0x98A8F0: push    6; Size
0x98A8F2: push    eax; Src
0x98A8F3: mov     [ebp+74h+var_19C], eax
0x98A8F9: lea     eax, [ebp+74h+Dst]
0x98A8FF: push    eax; Dst
0x98A900: call    _memcpy
0x98A905: mov     eax, [esi+4]
0x98A908: lea     ecx, [ebp+74h+Str1]
0x98A90B: push    ecx; Src
0x98A90C: mov     ecx, [ebp+74h+var_18C]
0x98A912: mov     [ebp+74h+var_1B4], eax
0x98A918: mov     eax, [ebp+74h+Memory]
0x98A91E: add     ecx, 0FFFFFFFCh
0x98A921: add     eax, 4
0x98A924: push    ecx; SizeInBytes
0x98A925: push    eax; Dst
0x98A926: call    _strcpy_s
0x98A92B: add     esp, 18h
0x98A92E: test    eax, eax
0x98A930: jz      short loc_98A941
0x98A932: xor     eax, eax
0x98A934: push    eax
0x98A935: push    eax
0x98A936: push    eax
0x98A937: push    eax
0x98A938: push    eax
0x98A939: call    __invoke_watson
0x98A93E: add     esp, 14h
0x98A941: mov     eax, [ebp+74h+Memory]
0x98A947: mov     ecx, [ebp+74h+var_194]
0x98A94D: add     eax, 4
0x98A950: mov     [ebx+48h], eax
0x98A953: movzx   eax, [ebp+74h+Src]
0x98A95A: mov     [ecx], eax
0x98A95C: push    6; Size
0x98A95E: lea     eax, [ebp+74h+Src]
0x98A964: push    eax; Src
0x98A965: push    [ebp+74h+var_19C]; Dst
0x98A96B: call    _memcpy
0x98A970: add     esp, 0Ch
0x98A973: cmp     [ebp+74h+arg_0], 2
0x98A977: jnz     loc_98AA71
0x98A97D: mov     eax, [ebp+74h+var_198]
0x98A983: and     [ebp+74h+var_18C], 0
0x98A98A: mov     [esi+4], eax
0x98A98D: mov     eax, [edi+24h]
0x98A990: mov     ecx, [edi+20h]
0x98A993: mov     [ebp+74h+var_19C], eax
0x98A999: mov     eax, edi
0x98A99B: mov     edx, [esi+4]
0x98A99E: cmp     edx, [eax]
0x98A9A0: jz      short loc_98A9D8
0x98A9A2: mov     edx, [eax]
0x98A9A4: inc     [ebp+74h+var_18C]
0x98A9AA: mov     [eax], ecx
0x98A9AC: mov     ecx, [ebp+74h+var_19C]
0x98A9B2: mov     [ebp+74h+var_1BC], edx
0x98A9B8: mov     edx, [eax+4]
0x98A9BB: mov     [eax+4], ecx
0x98A9BE: mov     ecx, [ebp+74h+var_1BC]
0x98A9C4: add     eax, 8
0x98A9C7: cmp     [ebp+74h+var_18C], 5
0x98A9CE: mov     [ebp+74h+var_19C], edx
0x98A9D4: jl      short loc_98A99B
0x98A9D6: jmp     short loc_98A9FA
0x98A9D8: mov     eax, [ebp+74h+var_18C]
0x98A9DE: test    eax, eax
0x98A9E0: jz      short loc_98A9FA
0x98A9E2: lea     eax, [edi+eax*8]
0x98A9E5: mov     edx, [eax]
0x98A9E7: mov     [edi], edx
0x98A9E9: mov     edx, [eax+4]
0x98A9EC: mov     [edi+4], edx
0x98A9EF: mov     [eax], ecx
0x98A9F1: mov     ecx, [ebp+74h+var_19C]
0x98A9F7: mov     [eax+4], ecx
0x98A9FA: cmp     [ebp+74h+var_18C], 5
0x98AA01: jnz     short loc_98AA68
0x98AA03: push    1; int
0x98AA05: push    dword ptr [esi+14h]; Locale
0x98AA08: lea     eax, [ebp+74h+Buf1]
0x98AA0E: push    dword ptr [esi+4]; CodePage
0x98AA11: push    eax; lpCharType
0x98AA12: push    7Fh; cbMultiByte
0x98AA14: push    offset MultiByteStr; lpMultiByteStr
0x98AA19: push    1; dwInfoType
0x98AA1B: push    0; struct localeinfo_struct *
0x98AA1D: call    ___crtGetStringTypeA
0x98AA22: add     esp, 20h
0x98AA25: test    eax, eax
0x98AA27: jz      short loc_98AA5F
0x98AA29: xor     eax, eax
0x98AA2B: and     [ebp+eax*2+74h+Buf1], 1FFh
0x98AA35: inc     eax
0x98AA36: cmp     eax, 7Fh
0x98AA39: jb      short loc_98AA2B
0x98AA3B: push    0FEh ; 'þ'; Size
0x98AA40: push    Buf2; Buf2
0x98AA46: lea     eax, [ebp+74h+Buf1]
0x98AA4C: push    eax; Buf1
0x98AA4D: call    _memcmp
0x98AA52: add     esp, 0Ch
0x98AA55: neg     eax
0x98AA57: sbb     eax, eax
0x98AA59: inc     eax
0x98AA5A: mov     [edi+4], eax
0x98AA5D: jmp     short loc_98AA63
0x98AA5F: and     dword ptr [edi+4], 0
0x98AA63: mov     eax, [esi+4]
0x98AA66: mov     [edi], eax
0x98AA68: mov     eax, [edi+4]
0x98AA6B: mov     [esi+0A8h], eax
0x98AA71: cmp     [ebp+74h+arg_0], 1
0x98AA75: jnz     short loc_98AA80
0x98AA77: mov     eax, [ebp+74h+var_198]
0x98AA7D: mov     [esi+8], eax
0x98AA80: mov     eax, [ebp+74h+arg_0]
0x98AA83: imul    eax, 0Ch
0x98AA86: push    esi
0x98AA87: call    ds:off_AA4868[eax]
0x98AA8D: test    eax, eax
0x98AA8F: pop     ecx
0x98AA90: jz      short loc_98AAC3
0x98AA92: mov     eax, [ebp+74h+var_1A4]
0x98AA98: push    [ebp+74h+Memory]; Memory
0x98AA9E: mov     [ebx+48h], eax
0x98AAA1: call    _free
0x98AAA6: mov     eax, [ebp+74h+var_1A8]
0x98AAAC: pop     ecx
0x98AAAD: mov     ecx, [ebp+74h+var_194]
0x98AAB3: mov     [ecx], eax
0x98AAB5: mov     eax, [ebp+74h+var_1B4]
0x98AABB: mov     [esi+4], eax
0x98AABE: jmp     loc_98A87F
0x98AAC3: cmp     [ebp+74h+var_1A4], offset aC_1
0x98AACD: jz      short loc_98AAFC
0x98AACF: mov     eax, [ebp+74h+arg_0]
0x98AAD2: add     eax, 5
0x98AAD5: shl     eax, 4
0x98AAD8: lea     edi, [eax+esi]
0x98AADB: push    dword ptr [edi]; lpAddend
0x98AADD: call    ds:InterlockedDecrement
0x98AAE3: test    eax, eax
0x98AAE5: jnz     short loc_98AAFC
0x98AAE7: push    dword ptr [edi]; Memory
0x98AAE9: call    _free
0x98AAEE: push    dword ptr [ebx+54h]; Memory
0x98AAF1: call    _free
0x98AAF6: and     dword ptr [ebx+4Ch], 0
0x98AAFA: pop     ecx
0x98AAFB: pop     ecx
0x98AAFC: mov     ecx, [ebp+74h+arg_0]
0x98AAFF: mov     eax, [ebp+74h+Memory]
0x98AB05: add     ecx, 5
0x98AB08: shl     ecx, 4
0x98AB0B: mov     dword ptr [eax], 1
0x98AB11: mov     [ecx+esi], eax
0x98AB14: mov     eax, [ebx+48h]
0x98AB17: mov     ecx, [ebp+74h+var_4]
0x98AB1A: pop     edi
0x98AB1B: xor     ecx, ebp
0x98AB1D: pop     ebx
0x98AB1E: call    @__security_check_cookie@4
0x98AB23: add     ebp, 74h ; 't'
0x98AB26: leave
0x98AB27: retn
