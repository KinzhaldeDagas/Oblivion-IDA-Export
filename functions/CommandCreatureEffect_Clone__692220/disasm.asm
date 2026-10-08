0x692220: push    0FFFFFFFFh
0x692222: push    offset SEH_8C8970
0x692227: mov     eax, large fs:0
0x69222D: push    eax
0x69222E: push    ecx
0x69222F: push    esi
0x692230: push    edi
0x692231: mov     eax, ds:0B30AACh
0x692236: xor     eax, esp
0x692238: push    eax
0x692239: lea     eax, [esp+1Ch+var_C]
0x69223D: mov     large fs:0, eax
0x692243: mov     esi, ecx
0x692245: push    38h ; '8'; Size
0x692247: call    FormHeapAlloc
0x69224C: mov     edi, eax
0x69224E: add     esp, 4
0x692251: mov     [esp+1Ch+var_10], edi
0x692255: test    edi, edi
0x692257: mov     [esp+1Ch+var_4], 0
0x69225F: jz      short loc_69227C
0x692261: mov     eax, [esi+0Ch]
0x692264: mov     ecx, [esi+8]
0x692267: mov     edx, [esi+24h]
0x69226A: push    eax; int
0x69226B: push    ecx; int
0x69226C: push    edx; int
0x69226D: mov     ecx, edi; this
0x69226F: call    CommandEffect_constr
0x692274: mov     dword ptr [edi], offset ??_7CommandCreatureEffect@@6B@; const CommandCreatureEffect::`vftable'
0x69227A: jmp     short loc_69227E
0x69227C: xor     edi, edi
0x69227E: mov     eax, [esi]
0x692280: mov     edx, [eax+2Ch]
0x692283: push    edi
0x692284: mov     ecx, esi
0x692286: mov     [esp+20h+var_4], 0FFFFFFFFh
0x69228E: call    edx
0x692290: mov     eax, edi
0x692292: mov     ecx, dword ptr [esp+1Ch+var_C]
0x692296: mov     large fs:0, ecx
0x69229D: pop     ecx
0x69229E: pop     edi
0x69229F: pop     esi
0x6922A0: add     esp, 10h
0x6922A3: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
