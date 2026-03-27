0x720B40: push    0FFFFFFFFh
0x720B42: push    offset SEH_720B40
0x720B47: mov     eax, large fs:0
0x720B4D: push    eax
0x720B4E: sub     esp, 148h
0x720B54: mov     eax, ds:0B30AACh
0x720B59: xor     eax, esp
0x720B5B: mov     [esp+154h+var_10], eax
0x720B62: push    ebx
0x720B63: push    ebp
0x720B64: push    esi
0x720B65: push    edi
0x720B66: mov     eax, ds:0B30AACh
0x720B6B: xor     eax, esp
0x720B6D: push    eax
0x720B6E: lea     eax, [esp+168h+var_C]
0x720B75: mov     large fs:0, eax
0x720B7B: mov     eax, [esp+168h+arg_C]
0x720B82: mov     edx, [esp+168h+arg_14]
0x720B89: mov     edi, [esp+168h+arg_0]
0x720B90: mov     ebx, [esp+168h+arg_4]
0x720B97: mov     ebp, [esp+168h+arg_8]
0x720B9E: mov     esi, [esp+168h+arg_18]
0x720BA5: push    offset sub_7016A0; a5
0x720BAA: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x720BAF: push    6; size
0x720BB1: mov     [esp+174h+var_154], eax
0x720BB5: mov     [esp+174h+var_148], ecx
0x720BB9: mov     ecx, [esp+174h+arg_10]
0x720BC0: push    4; a2
0x720BC2: lea     eax, [esp+178h+a1]
0x720BC6: push    eax; a1
0x720BC7: mov     [esp+17Ch+var_150], ecx
0x720BCB: mov     [esp+17Ch+var_14C], edx
0x720BCF: call    ArrayConstructor
0x720BD4: mov     ecx, [esp+168h+var_154]
0x720BD8: mov     edx, [esp+168h+var_150]
0x720BDC: mov     eax, [esp+168h+var_14C]
0x720BE0: mov     [esp+168h+var_4], 0
0x720BEB: mov     [esp+168h+Src], edi
0x720BEF: mov     [esp+168h+var_128], ebx
0x720BF3: mov     [esp+168h+var_124], ebp
0x720BF7: mov     [esp+168h+var_120], ecx
0x720BFB: mov     [esp+168h+var_11C], edx
0x720BFF: mov     [esp+168h+var_118], eax
0x720C03: call    sub_71B280
0x720C08: mov     [esp+168h+var_14C], eax
0x720C0C: mov     [esp+168h+var_154], 0
0x720C14: mov     ecx, [esp+168h+var_154]
0x720C18: mov     ebp, [esp+ecx+168h+Src]
0x720C1C: mov     eax, ebp
0x720C1E: lea     edx, [eax+1]
0x720C21: mov     cl, [eax]
0x720C23: add     eax, 1
0x720C26: test    cl, cl
0x720C28: jnz     short loc_720C21
0x720C2A: sub     eax, edx
0x720C2C: lea     edi, [eax+1]
0x720C2F: push    edi; Size
0x720C30: call    FormHeapAlloc
0x720C35: push    ebp; Src
0x720C36: mov     ebx, eax
0x720C38: push    edi; SizeInBytes
0x720C39: push    ebx; Dst
0x720C3A: call    _strcpy_s
0x720C3F: push    ebx
0x720C40: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x720C45: push    ebx; Src
0x720C46: call    sub_71B090
0x720C4B: add     esp, 18h
0x720C4E: push    eax; Src
0x720C4F: mov     ecx, esi
0x720C51: mov     [esp+16Ch+var_150], eax
0x720C55: call    sub_7478F0
0x720C5A: mov     edx, [esi]
0x720C5C: mov     eax, [edx+4]
0x720C5F: mov     ecx, esi
0x720C61: call    eax
0x720C63: mov     edx, [esi]
0x720C65: mov     edx, [edx+8]
0x720C68: push    104h
0x720C6D: lea     eax, [esp+16Ch+var_114]
0x720C71: push    eax
0x720C72: mov     ecx, esi
0x720C74: call    edx
0x720C76: test    al, al
0x720C78: jz      loc_720D15
0x720C7E: mov     edi, edi
0x720C80: lea     eax, [esp+168h+var_114]
0x720C84: push    0
0x720C86: push    eax
0x720C87: call    NiFile_CanOpenFileWithMode_Indirect
0x720C8C: add     esp, 8
0x720C8F: test    al, al
0x720C91: jnz     short loc_720CAC
0x720C93: mov     edx, [esi]
0x720C95: mov     edx, [edx+8]
0x720C98: push    104h
0x720C9D: lea     eax, [esp+16Ch+var_114]
0x720CA1: push    eax
0x720CA2: mov     ecx, esi
0x720CA4: call    edx
0x720CA6: test    al, al
0x720CA8: jnz     short loc_720C80
0x720CAA: jmp     short loc_720D15
0x720CAC: mov     ecx, [esp+168h+var_14C]
0x720CB0: mov     eax, [ecx]
0x720CB2: mov     eax, [eax+8]
0x720CB5: push    0
0x720CB7: lea     edx, [esp+16Ch+var_114]
0x720CBB: push    edx
0x720CBC: call    eax
0x720CBE: mov     ecx, [esp+168h+var_154]
0x720CC2: mov     edi, [esp+ecx+168h+a1]
0x720CC6: mov     ebp, eax
0x720CC8: cmp     edi, ebp
0x720CCA: jz      short loc_720D02
0x720CCC: test    edi, edi
0x720CCE: jz      short loc_720CEC
0x720CD0: lea     edx, [edi+4]
0x720CD3: push    edx; lpAddend
0x720CD4: call    dword ptr ds:0A2807Ch
0x720CDA: test    eax, eax
0x720CDC: jnz     short loc_720CEC
0x720CDE: test    edi, edi
0x720CE0: jz      short loc_720CEC
0x720CE2: mov     eax, [edi]
0x720CE4: mov     edx, [eax]
0x720CE6: push    1
0x720CE8: mov     ecx, edi
0x720CEA: call    edx
0x720CEC: test    ebp, ebp
0x720CEE: mov     eax, [esp+168h+var_154]
0x720CF2: mov     [esp+eax+168h+a1], ebp
0x720CF6: jz      short loc_720D02
0x720CF8: add     ebp, 4
0x720CFB: push    ebp; lpAddend
0x720CFC: call    dword ptr ds:0A28078h
0x720D02: mov     ecx, [esp+168h+var_150]
0x720D06: push    ecx
0x720D07: call    FormHeapFree
0x720D0C: push    ebx
0x720D0D: call    FormHeapFree
0x720D12: add     esp, 8
0x720D15: mov     eax, [esp+168h+var_154]
0x720D19: cmp     [esp+eax+168h+a1], 0
0x720D1E: jz      short loc_720D9F
0x720D20: add     eax, 4
0x720D23: cmp     eax, 18h
0x720D26: mov     [esp+168h+var_154], eax
0x720D2A: jb      loc_720C14
0x720D30: mov     eax, [esp+168h+var_130]
0x720D34: mov     ecx, [esp+168h+var_134]
0x720D38: mov     edx, [esp+168h+var_138]
0x720D3C: push    eax
0x720D3D: mov     eax, [esp+16Ch+var_13C]
0x720D41: push    ecx
0x720D42: mov     ecx, [esp+170h+var_140]
0x720D46: push    edx
0x720D47: mov     edx, [esp+174h+a1]
0x720D4B: push    eax
0x720D4C: push    ecx
0x720D4D: mov     ecx, [esp+17Ch+var_148]
0x720D51: push    edx
0x720D52: call    sub_7205A0
0x720D57: push    offset sub_7016A0; void (__thiscall *)(void *)
0x720D5C: push    6; int
0x720D5E: push    4; unsigned int
0x720D60: lea     eax, [esp+174h+a1]
0x720D64: push    eax; void *
0x720D65: mov     [esp+178h+var_4], 0FFFFFFFFh
0x720D70: call    $LN21
0x720D75: mov     ecx, dword ptr [esp+168h+var_C]
0x720D7C: mov     large fs:0, ecx
0x720D83: pop     ecx
0x720D84: pop     edi
0x720D85: pop     esi
0x720D86: pop     ebp
0x720D87: pop     ebx
0x720D88: mov     ecx, [esp+154h+var_10]
0x720D8F: xor     ecx, esp
0x720D91: call    @__security_check_cookie@4; __security_check_cookie(x)
0x720D96: add     esp, 154h
0x720D9C: retn    1Ch
0x720D9F: push    offset sub_7016A0
0x720DA4: push    6
0x720DA6: push    4
0x720DA8: lea     edx, [esp+174h+a1]
0x720DAC: push    edx
0x720DAD: jmp     short loc_720D65
