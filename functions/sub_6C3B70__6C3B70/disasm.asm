0x6C3B70: push    0FFFFFFFFh
0x6C3B72: push    offset SEH_6C3B70
0x6C3B77: mov     eax, large fs:0
0x6C3B7D: push    eax
0x6C3B7E: mov     eax, ds:0B30AACh
0x6C3B83: xor     eax, esp
0x6C3B85: push    eax
0x6C3B86: lea     eax, [esp+10h+var_C]
0x6C3B8A: mov     large fs:0, eax
0x6C3B90: cmp     byte ptr [esp+10h+arg_8], 0
0x6C3B95: jz      short loc_6C3BDC
0x6C3B97: push    58h ; 'X'; Size
0x6C3B99: call    FormHeapAlloc
0x6C3B9E: add     esp, 4
0x6C3BA1: mov     [esp+10h+arg_8], eax
0x6C3BA5: test    eax, eax
0x6C3BA7: mov     [esp+10h+var_4], 0
0x6C3BAF: jz      short loc_6C3C21
0x6C3BB1: mov     ecx, [esp+10h+arg_10]
0x6C3BB5: fld     [esp+10h+arg_C]
0x6C3BB9: mov     edx, [esp+10h+arg_4]
0x6C3BBD: push    ecx; int
0x6C3BBE: push    ecx
0x6C3BBF: fstp    [esp+18h+var_18]; float
0x6C3BC2: push    edx; int
0x6C3BC3: mov     ecx, eax
0x6C3BC5: call    sub_6C37D0
0x6C3BCA: mov     ecx, [esp+10h+var_C]
0x6C3BCE: mov     large fs:0, ecx
0x6C3BD5: pop     ecx
0x6C3BD6: add     esp, 0Ch
0x6C3BD9: retn    14h
0x6C3BDC: push    30h ; '0'; Size
0x6C3BDE: call    FormHeapAlloc
0x6C3BE3: add     esp, 4
0x6C3BE6: mov     [esp+10h+arg_8], eax
0x6C3BEA: test    eax, eax
0x6C3BEC: mov     [esp+10h+var_4], 1
0x6C3BF4: jz      short loc_6C3C21
0x6C3BF6: mov     ecx, [esp+10h+arg_10]
0x6C3BFA: fld     [esp+10h+arg_C]
0x6C3BFE: mov     edx, [esp+10h+arg_4]
0x6C3C02: push    ecx; int
0x6C3C03: push    ecx
0x6C3C04: fstp    [esp+18h+var_18]; float
0x6C3C07: push    edx; int
0x6C3C08: mov     ecx, eax
0x6C3C0A: call    sub_6CBC60
0x6C3C0F: mov     ecx, [esp+10h+var_C]
0x6C3C13: mov     large fs:0, ecx
0x6C3C1A: pop     ecx
0x6C3C1B: add     esp, 0Ch
0x6C3C1E: retn    14h
0x6C3C21: xor     eax, eax
0x6C3C23: mov     ecx, [esp+10h+var_C]
0x6C3C27: mov     large fs:0, ecx
0x6C3C2E: pop     ecx
0x6C3C2F: add     esp, 0Ch
0x6C3C32: retn    14h
0x9C7260: mov     eax, [ebp+0Ch]
0x9C7263: push    eax
0x9C7264: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C7269: pop     ecx
0x9C726A: retn
0x9C726B: mov     eax, [ebp+0Ch]
0x9C726E: push    eax
0x9C726F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C7274: pop     ecx
0x9C7275: retn
0x9C7276: mov     edx, [esp+arg_4]
0x9C727A: lea     eax, [edx]
0x9C727C: mov     ecx, [edx-4]
0x9C727F: xor     ecx, eax
0x9C7281: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C7286: mov     eax, offset stru_AEF6D0
0x9C728B: jmp     ___CxxFrameHandler3
