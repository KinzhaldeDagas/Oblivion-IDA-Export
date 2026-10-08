0x700900: push    0FFFFFFFFh; Clones a loaded NiObject with a temporary pointer map and runs clone post-processing; the returned scene object is distinct from its source.
0x700902: push    offset SEH_700900
0x700907: mov     eax, large fs:0
0x70090D: push    eax
0x70090E: sub     esp, 10h
0x700911: push    esi
0x700912: push    edi
0x700913: mov     eax, ds:0B30AACh
0x700918: xor     eax, esp
0x70091A: push    eax
0x70091B: lea     eax, [esp+28h+var_C]
0x70091F: mov     large fs:0, eax
0x700925: mov     esi, ecx
0x700927: lea     ecx, [esp+28h+var_1C]; this
0x70092B: call    OB_NiCloningProcess_ctor
0x700930: mov     eax, [esi]
0x700932: mov     edx, [eax+18h]
0x700935: lea     ecx, [esp+28h+var_1C]
0x700939: push    ecx
0x70093A: mov     ecx, esi
0x70093C: mov     [esp+2Ch+var_4], 0
0x700944: call    edx
0x700946: mov     edi, eax
0x700948: mov     eax, [esi]
0x70094A: mov     edx, [eax+38h]
0x70094D: lea     ecx, [esp+28h+var_1C]
0x700951: push    ecx
0x700952: mov     ecx, esi
0x700954: call    edx
0x700956: mov     ecx, [esp+28h+var_1C]
0x70095A: test    ecx, ecx
0x70095C: mov     [esp+28h+var_4], 0FFFFFFFFh
0x700964: jz      short loc_70096E
0x700966: mov     eax, [ecx]
0x700968: mov     edx, [eax]
0x70096A: push    1
0x70096C: call    edx
0x70096E: mov     ecx, [esp+28h+var_18]
0x700972: test    ecx, ecx
0x700974: jz      short loc_70097E
0x700976: mov     eax, [ecx]
0x700978: mov     edx, [eax]
0x70097A: push    1
0x70097C: call    edx
0x70097E: mov     eax, edi
0x700980: mov     ecx, [esp+28h+var_C]
0x700984: mov     large fs:0, ecx
0x70098B: pop     ecx
0x70098C: pop     edi
0x70098D: pop     esi
0x70098E: add     esp, 1Ch
0x700991: retn
0x9C93E0: lea     ecx, [ebp-1Ch]
0x9C93E3: jmp     sub_4781A0
0x9C93E8: mov     edx, [esp+arg_4]
0x9C93EC: lea     eax, [edx-18h]
0x9C93EF: mov     ecx, [edx-1Ch]
0x9C93F2: xor     ecx, eax
0x9C93F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C93F9: mov     eax, offset stru_AF1CBC
0x9C93FE: jmp     ___CxxFrameHandler3
