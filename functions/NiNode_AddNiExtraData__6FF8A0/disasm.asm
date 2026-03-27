0x6FF8A0: sub     esp, 14h
0x6FF8A3: mov     eax, ds:0B30AACh
0x6FF8A8: xor     eax, esp
0x6FF8AA: mov     [esp+14h+var_4], eax
0x6FF8AE: push    esi
0x6FF8AF: mov     esi, [esp+18h+arg_0]
0x6FF8B3: test    esi, esi
0x6FF8B5: push    edi
0x6FF8B6: mov     edi, ecx
0x6FF8B8: mov     [esp+1Ch+var_10], edi
0x6FF8BC: mov     [esp+1Ch+var_14], esi
0x6FF8C0: jnz     short loc_6FF8D7
0x6FF8C2: pop     edi
0x6FF8C3: xor     al, al
0x6FF8C5: pop     esi
0x6FF8C6: mov     ecx, [esp+14h+var_4]
0x6FF8CA: xor     ecx, esp
0x6FF8CC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6FF8D1: add     esp, 14h
0x6FF8D4: retn    4
0x6FF8D7: mov     ecx, esi
0x6FF8D9: call    sub_452A60
0x6FF8DE: test    eax, eax
0x6FF8E0: jnz     loc_6FF997
0x6FF8E6: mov     eax, [esi]
0x6FF8E8: mov     edx, [eax+4]
0x6FF8EB: push    ebp
0x6FF8EC: mov     ecx, esi
0x6FF8EE: call    edx
0x6FF8F0: mov     ebp, [eax]
0x6FF8F2: test    ebp, ebp
0x6FF8F4: jz      loc_6FF996
0x6FF8FA: mov     eax, ebp
0x6FF8FC: lea     edx, [eax+1]
0x6FF8FF: nop
0x6FF900: mov     cl, [eax]
0x6FF902: add     eax, 1
0x6FF905: test    cl, cl
0x6FF907: jnz     short loc_6FF900
0x6FF909: sub     eax, edx
0x6FF90B: jz      loc_6FF996
0x6FF911: movzx   eax, word ptr [edi+14h]
0x6FF915: push    ebx
0x6FF916: push    eax; ArgList
0x6FF917: push    offset aEd03d; "ED%03d"
0x6FF91C: lea     ecx, [esp+2Ch+Src]
0x6FF920: push    6; SizeInBytes
0x6FF922: push    ecx; DstBuf
0x6FF923: call    sub_6C5D40
0x6FF928: push    offset aExtradata; "ExtraData"
0x6FF92D: push    ebp; Str
0x6FF92E: call    _strstr
0x6FF933: add     esp, 18h
0x6FF936: xor     ebx, ebx
0x6FF938: cmp     eax, ebp
0x6FF93A: jbe     short loc_6FF940
0x6FF93C: sub     eax, ebp
0x6FF93E: mov     ebx, eax
0x6FF940: lea     eax, [esp+24h+Src]
0x6FF944: lea     edx, [eax+1]
0x6FF947: mov     cl, [eax]
0x6FF949: add     eax, 1
0x6FF94C: test    cl, cl
0x6FF94E: jnz     short loc_6FF947
0x6FF950: sub     eax, edx
0x6FF952: lea     edi, [eax+ebx+1]
0x6FF956: push    edi; Size
0x6FF957: call    FormHeapAlloc
0x6FF95C: push    ebx; MaxCount
0x6FF95D: push    ebp; Src
0x6FF95E: mov     esi, eax
0x6FF960: push    edi; SizeInBytes
0x6FF961: push    esi; Src
0x6FF962: call    sub_6ED670
0x6FF967: lea     edx, [esp+38h+Src]
0x6FF96B: push    edx; Src
0x6FF96C: push    edi; SizeInBytes
0x6FF96D: push    esi; Dst
0x6FF96E: mov     byte ptr [esi+ebx], 0
0x6FF972: call    _strcat_s
0x6FF977: mov     ecx, [esp+44h+var_14]
0x6FF97B: add     esp, 20h
0x6FF97E: push    esi; Src
0x6FF97F: call    sub_721440
0x6FF984: push    esi
0x6FF985: call    FormHeapFree
0x6FF98A: mov     edi, [esp+28h+var_10]
0x6FF98E: mov     esi, [esp+28h+var_14]
0x6FF992: add     esp, 4
0x6FF995: pop     ebx
0x6FF996: pop     ebp
0x6FF997: push    esi
0x6FF998: mov     ecx, edi
0x6FF99A: call    sub_6FF570
0x6FF99F: mov     ecx, [esp+1Ch+var_4]
0x6FF9A3: pop     edi
0x6FF9A4: pop     esi
0x6FF9A5: xor     ecx, esp
0x6FF9A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6FF9AC: add     esp, 14h
0x6FF9AF: retn    4
