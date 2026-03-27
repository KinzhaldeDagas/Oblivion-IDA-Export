0x5AD780: push    0FFFFFFFFh
0x5AD782: push    offset SEH_5AD780
0x5AD787: mov     eax, large fs:0
0x5AD78D: push    eax
0x5AD78E: sub     esp, 214h
0x5AD794: mov     eax, ds:0B30AACh
0x5AD799: xor     eax, esp
0x5AD79B: mov     [esp+220h+var_10], eax
0x5AD7A2: push    ebx
0x5AD7A3: push    ebp
0x5AD7A4: push    esi
0x5AD7A5: push    edi
0x5AD7A6: mov     eax, ds:0B30AACh
0x5AD7AB: xor     eax, esp
0x5AD7AD: push    eax
0x5AD7AE: lea     eax, [esp+234h+var_C]
0x5AD7B5: mov     large fs:0, eax
0x5AD7BB: mov     eax, [esp+234h+arg_0]
0x5AD7C2: mov     edi, ecx
0x5AD7C4: mov     ecx, [edi+4]
0x5AD7C7: push    0FAEh
0x5AD7CC: mov     [esp+238h+var_214], edi
0x5AD7D0: mov     [esp+238h+var_220], eax
0x5AD7D4: call    Tile_GetFloat
0x5AD7D9: call    Double_To_SInt32
0x5AD7DE: lea     ecx, [edi+4Ch]
0x5AD7E1: xor     ebx, ebx
0x5AD7E3: cmp     ecx, ebx
0x5AD7E5: jz      loc_5AD947
0x5AD7EB: jmp     short loc_5AD7F0
0x5AD7ED: align 10h
0x5AD7F0: mov     edx, [ecx+4]
0x5AD7F3: cmp     edx, ebx
0x5AD7F5: jnz     short loc_5AD7FB
0x5AD7F7: cmp     [ecx], ebx
0x5AD7F9: jz      short loc_5AD80F
0x5AD7FB: mov     esi, eax
0x5AD7FD: sub     eax, 1
0x5AD800: test    esi, esi
0x5AD802: jle     short loc_5AD80F
0x5AD804: mov     ecx, edx
0x5AD806: cmp     ecx, ebx
0x5AD808: jnz     short loc_5AD7F0
0x5AD80A: jmp     loc_5AD947
0x5AD80F: cmp     edx, ebx
0x5AD811: jnz     short loc_5AD81B
0x5AD813: cmp     [ecx], ebx
0x5AD815: jz      loc_5AD947
0x5AD81B: mov     esi, [ecx]
0x5AD81D: mov     eax, [esi+1Ch]
0x5AD820: cmp     eax, ebx
0x5AD822: jnz     short loc_5AD829
0x5AD824: mov     eax, offset EmptyString
0x5AD829: push    ebx; a3
0x5AD82A: push    eax; a2
0x5AD82B: lea     ecx, [esp+23Ch+Str]; this
0x5AD82F: mov     [esp+23Ch+Str], ebx
0x5AD833: mov     [esp+23Ch+var_218], bx
0x5AD838: mov     [esp+23Ch+var_216], bx
0x5AD83D: call    BSStringT_Set
0x5AD842: mov     ebp, [esp+234h+Str]
0x5AD846: push    offset aMenusLoading; "Menus\\Loading"
0x5AD84B: push    ebp; Str
0x5AD84C: mov     [esp+23Ch+var_4], ebx
0x5AD853: call    _strstr
0x5AD858: add     esp, 8
0x5AD85B: test    eax, eax
0x5AD85D: jnz     short loc_5AD88A
0x5AD85F: mov     eax, [esi+1Ch]
0x5AD862: cmp     eax, ebx
0x5AD864: jnz     short loc_5AD86B
0x5AD866: mov     eax, offset EmptyString
0x5AD86B: push    eax
0x5AD86C: mov     ecx, esi
0x5AD86E: call    sub_4F96F0
0x5AD873: push    eax; ArgList
0x5AD874: lea     ecx, [esp+23Ch+Str]
0x5AD878: push    offset aSS_0; "%s%s"
0x5AD87D: push    ecx; int
0x5AD87E: call    BSStringT_Static_Format
0x5AD883: mov     ebp, [esp+244h+Str]
0x5AD887: add     esp, 10h
0x5AD88A: mov     ecx, [edi+4]
0x5AD88D: push    ebp
0x5AD88E: push    0FAFh
0x5AD893: call    Tile_SetString
0x5AD898: mov     edx, [esi+24h]
0x5AD89B: mov     eax, [edx+10h]
0x5AD89E: add     esi, 24h ; '$'
0x5AD8A1: push    43534544h
0x5AD8A6: push    ebx
0x5AD8A7: mov     ecx, esi
0x5AD8A9: call    eax
0x5AD8AB: lea     ecx, [eax+1]
0x5AD8AE: mov     edi, edi
0x5AD8B0: mov     dl, [eax]
0x5AD8B2: add     eax, 1
0x5AD8B5: cmp     dl, bl
0x5AD8B7: jnz     short loc_5AD8B0
0x5AD8B9: mov     edx, [esi]
0x5AD8BB: sub     eax, ecx
0x5AD8BD: push    43534544h; a3
0x5AD8C2: mov     edi, eax
0x5AD8C4: mov     eax, [edx+10h]
0x5AD8C7: push    ebx
0x5AD8C8: mov     ecx, esi
0x5AD8CA: call    eax
0x5AD8CC: lea     edx, [esp+234h+var_210]
0x5AD8D0: mov     cl, [eax]
0x5AD8D2: mov     [edx], cl
0x5AD8D4: add     eax, 1
0x5AD8D7: add     edx, 1
0x5AD8DA: cmp     cl, bl
0x5AD8DC: jnz     short loc_5AD8D0
0x5AD8DE: lea     eax, [esp+edi+234h+var_214+3]
0x5AD8E2: mov     cl, 0Ah
0x5AD8E4: cmp     [eax], cl
0x5AD8E6: jnz     short loc_5AD8EA
0x5AD8E8: mov     [eax], bl
0x5AD8EA: cmp     [eax-1], cl
0x5AD8ED: jnz     short loc_5AD8F2
0x5AD8EF: mov     [eax-1], bl
0x5AD8F2: cmp     [eax-2], cl
0x5AD8F5: jnz     short loc_5AD8FA
0x5AD8F7: mov     [eax-2], bl
0x5AD8FA: mov     ecx, [esp+234h+var_214]
0x5AD8FE: mov     ecx, [ecx+4]
0x5AD901: lea     edx, [esp+234h+var_210]
0x5AD905: push    edx
0x5AD906: push    0FB0h
0x5AD90B: call    Tile_SetString
0x5AD910: mov     esi, [esp+234h+var_220]
0x5AD914: push    0FAEh
0x5AD919: mov     ecx, esi
0x5AD91B: call    Tile_GetFloat
0x5AD920: fadd    qword ptr ds:0A2F928h
0x5AD926: push    ecx
0x5AD927: mov     ecx, esi; this
0x5AD929: fstp    [esp+238h+var_220]
0x5AD92D: fld     [esp+238h+var_220]
0x5AD931: fstp    [esp+238h+a3]; a3
0x5AD934: push    0FAEh; a2
0x5AD939: call    Tile_SetFloat
0x5AD93E: push    ebp
0x5AD93F: call    FormHeapFree
0x5AD944: add     esp, 4
0x5AD947: mov     ecx, dword ptr [esp+234h+var_C]
0x5AD94E: mov     large fs:0, ecx
0x5AD955: pop     ecx
0x5AD956: pop     edi
0x5AD957: pop     esi
0x5AD958: pop     ebp
0x5AD959: pop     ebx
0x5AD95A: mov     ecx, [esp+220h+var_10]
0x5AD961: xor     ecx, esp
0x5AD963: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5AD968: add     esp, 220h
0x5AD96E: retn    4
