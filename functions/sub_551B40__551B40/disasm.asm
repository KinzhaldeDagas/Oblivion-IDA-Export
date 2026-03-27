0x551B40: push    0FFFFFFFFh
0x551B42: push    offset SEH_551B40
0x551B47: mov     eax, large fs:0
0x551B4D: push    eax
0x551B4E: sub     esp, 214h
0x551B54: mov     eax, ds:0B30AACh
0x551B59: xor     eax, esp
0x551B5B: mov     [esp+220h+var_10], eax
0x551B62: push    ebx
0x551B63: push    esi
0x551B64: push    edi
0x551B65: mov     eax, ds:0B30AACh
0x551B6A: xor     eax, esp
0x551B6C: push    eax
0x551B6D: lea     eax, [esp+230h+var_C]
0x551B74: mov     large fs:0, eax
0x551B7A: mov     esi, [esp+230h+arg_0]
0x551B81: xor     ebx, ebx
0x551B83: mov     [esp+230h+var_220], ebx
0x551B87: mov     [esp+230h+var_21C], bx
0x551B8C: mov     [esp+230h+var_21A], bx
0x551B91: mov     edi, [esp+230h+arg_4]
0x551B98: cmp     edi, ebx
0x551B9A: mov     [esp+230h+var_4], ebx
0x551BA1: jnz     short loc_551BB3
0x551BA3: push    ebx
0x551BA4: call    FormHeapFree
0x551BA9: add     esp, 4
0x551BAC: xor     eax, eax
0x551BAE: jmp     loc_551C85
0x551BB3: lea     edx, [esp+230h+Str]
0x551BB7: mov     eax, edi
0x551BB9: sub     edx, edi
0x551BBB: jmp     short loc_551BC0
0x551BBD: align 10h
0x551BC0: mov     cl, [eax]
0x551BC2: mov     [edx+eax], cl
0x551BC5: add     eax, 1
0x551BC8: cmp     cl, bl
0x551BCA: jnz     short loc_551BC0
0x551BCC: lea     eax, [esp+230h+Str]
0x551BD0: push    5Fh ; '_'; Val
0x551BD2: push    eax; Str
0x551BD3: call    _strchr
0x551BD8: add     esp, 8
0x551BDB: cmp     eax, ebx
0x551BDD: jz      short loc_551BF9
0x551BDF: push    ebx; a3
0x551BE0: lea     ecx, [esp+234h+Str]
0x551BE4: push    ecx; a2
0x551BE5: mov     ecx, esi; this
0x551BE7: call    BSStringT_Set
0x551BEC: push    ebx
0x551BED: call    FormHeapFree
0x551BF2: mov     eax, edi
0x551BF4: jmp     loc_551C82
0x551BF9: lea     edx, [esp+230h+Str]
0x551BFD: push    2Eh ; '.'; Ch
0x551BFF: push    edx; Str
0x551C00: call    _strrchr
0x551C05: add     esp, 8
0x551C08: cmp     eax, ebx
0x551C0A: jz      short loc_551BEC
0x551C0C: mov     [eax], bl
0x551C0E: lea     eax, [esp+230h+Str]
0x551C12: push    eax
0x551C13: lea     ecx, [esp+234h+a2]
0x551C1A: push    offset aS_50_nif; "%s_50.NIF"
0x551C1F: push    ecx
0x551C20: call    __sprintf
0x551C25: add     esp, 0Ch
0x551C28: push    ebx; a3
0x551C29: lea     edx, [esp+234h+a2]
0x551C30: push    edx; a2
0x551C31: mov     ecx, esi; this
0x551C33: call    BSStringT_Set
0x551C38: mov     eax, [esi]
0x551C3A: push    eax; ArgList
0x551C3B: lea     eax, [esp+234h+var_220]
0x551C3F: push    offset aMeshesS; "Meshes\\%s"
0x551C44: push    eax; int
0x551C45: call    BSStringT_Static_Format
0x551C4A: mov     ecx, ds:0B33A04h
0x551C50: mov     edi, [esp+23Ch+var_220]
0x551C54: add     esp, 0Ch
0x551C57: cmp     ecx, ebx
0x551C59: jz      short loc_551C6B
0x551C5B: mov     edx, [ecx]
0x551C5D: mov     eax, [edx+4]
0x551C60: push    0FFFFFFFFh
0x551C62: push    ebx
0x551C63: push    ebx
0x551C64: push    edi
0x551C65: call    eax
0x551C67: cmp     eax, ebx
0x551C69: jnz     short loc_551C78
0x551C6B: push    edi
0x551C6C: call    FormHeapFree
0x551C71: add     esp, 4
0x551C74: xor     eax, eax
0x551C76: jmp     short loc_551C85
0x551C78: mov     esi, [esi]
0x551C7A: push    edi
0x551C7B: call    FormHeapFree
0x551C80: mov     eax, esi
0x551C82: add     esp, 4
0x551C85: mov     ecx, dword ptr [esp+230h+var_C]
0x551C8C: mov     large fs:0, ecx
0x551C93: pop     ecx
0x551C94: pop     edi
0x551C95: pop     esi
0x551C96: pop     ebx
0x551C97: mov     ecx, [esp+220h+var_10]
0x551C9E: xor     ecx, esp
0x551CA0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x551CA5: add     esp, 220h
0x551CAB: retn
