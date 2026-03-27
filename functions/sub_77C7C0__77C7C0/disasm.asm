0x77C7C0: sub     esp, 28h
0x77C7C3: mov     eax, ds:0B30AACh
0x77C7C8: xor     eax, esp
0x77C7CA: mov     [esp+28h+var_4], eax
0x77C7CE: mov     eax, [esp+28h+arg_0]
0x77C7D2: push    ebx
0x77C7D3: push    ebp
0x77C7D4: push    esi
0x77C7D5: mov     esi, [esp+34h+arg_4]
0x77C7D9: push    edi
0x77C7DA: mov     edi, ecx
0x77C7DC: mov     ecx, esi
0x77C7DE: mov     [esp+38h+var_28], eax
0x77C7E2: call    sub_452A60
0x77C7E7: mov     ebx, eax
0x77C7E9: test    ebx, ebx
0x77C7EB: jnz     short loc_77C826
0x77C7ED: mov     eax, ds:0B42894h
0x77C7F2: mov     ecx, eax
0x77C7F4: push    ecx; ArgList
0x77C7F5: push    offset aNid3dshaderD; "NiD3DShader%d"
0x77C7FA: lea     ecx, [esp+40h+DstBuf]
0x77C7FE: add     eax, 1
0x77C801: push    20h ; ' '; SizeInBytes
0x77C803: push    ecx; DstBuf
0x77C804: mov     ds:0B42894h, eax
0x77C809: call    sub_6C5D40
0x77C80E: add     esp, 10h
0x77C811: lea     edx, [esp+38h+DstBuf]
0x77C815: push    edx; Src
0x77C816: mov     ecx, esi
0x77C818: call    sub_738630
0x77C81D: mov     ecx, esi
0x77C81F: call    sub_452A60
0x77C824: mov     ebx, eax
0x77C826: mov     ecx, esi
0x77C828: call    TESEnchantableForm_GetCastingType
0x77C82D: mov     ebp, eax
0x77C82F: mov     eax, [edi]
0x77C831: mov     edx, [eax+4]
0x77C834: push    0
0x77C836: push    ebp
0x77C837: push    ebx
0x77C838: mov     ecx, edi
0x77C83A: call    edx
0x77C83C: test    eax, eax
0x77C83E: jz      short loc_77C85B
0x77C840: cmp     eax, esi
0x77C842: jz      short loc_77C87F
0x77C844: pop     edi
0x77C845: pop     esi
0x77C846: pop     ebp
0x77C847: xor     al, al
0x77C849: pop     ebx
0x77C84A: mov     ecx, [esp+28h+var_4]
0x77C84E: xor     ecx, esp
0x77C850: call    @__security_check_cookie@4; __security_check_cookie(x)
0x77C855: add     esp, 28h
0x77C858: retn    8
0x77C85B: mov     ecx, [edi+14h]
0x77C85E: push    esi
0x77C85F: call    sub_769B10
0x77C864: mov     eax, [esi]
0x77C866: mov     edx, [eax+78h]
0x77C869: mov     ecx, esi
0x77C86B: call    edx
0x77C86D: test    al, al
0x77C86F: jz      short loc_77C874
0x77C871: or      ebp, 0FFFFFFFFh
0x77C874: mov     eax, [edi]
0x77C876: mov     edx, [eax+18h]
0x77C879: push    ebp
0x77C87A: push    esi
0x77C87B: mov     ecx, edi
0x77C87D: call    edx
0x77C87F: mov     eax, [esp+38h+var_28]
0x77C883: push    esi
0x77C884: push    eax
0x77C885: mov     ecx, edi
0x77C887: call    sub_77C2A0
0x77C88C: mov     ecx, [esp+38h+var_4]
0x77C890: pop     edi
0x77C891: pop     esi
0x77C892: pop     ebp
0x77C893: pop     ebx
0x77C894: xor     ecx, esp
0x77C896: call    @__security_check_cookie@4; __security_check_cookie(x)
0x77C89B: add     esp, 28h
0x77C89E: retn    8
