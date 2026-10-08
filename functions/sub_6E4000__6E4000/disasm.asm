0x6E4000: push    0FFFFFFFFh
0x6E4002: push    offset SEH_8C8900
0x6E4007: mov     eax, large fs:0
0x6E400D: push    eax
0x6E400E: push    ecx
0x6E400F: mov     eax, ds:0B30AACh
0x6E4014: xor     eax, esp
0x6E4016: push    eax
0x6E4017: lea     eax, [esp+14h+var_C]
0x6E401B: mov     large fs:0, eax
0x6E4021: push    44h ; 'D'; Size
0x6E4023: call    FormHeapAlloc
0x6E4028: add     esp, 4
0x6E402B: mov     [esp+14h+var_10], eax
0x6E402F: test    eax, eax
0x6E4031: mov     [esp+14h+var_4], 0
0x6E4039: jz      short loc_6E4066
0x6E403B: mov     ecx, [esp+14h+arg_10]
0x6E403F: fld     [esp+14h+arg_C]
0x6E4043: mov     edx, dword ptr [esp+14h+arg_4]
0x6E4047: push    ecx; int
0x6E4048: push    ecx
0x6E4049: fstp    [esp+1Ch+var_1C]; float
0x6E404C: push    edx; char
0x6E404D: mov     ecx, eax
0x6E404F: call    sub_6EAE20
0x6E4054: mov     ecx, [esp+14h+var_C]
0x6E4058: mov     large fs:0, ecx
0x6E405F: pop     ecx
0x6E4060: add     esp, 10h
0x6E4063: retn    14h
0x6E4066: xor     eax, eax
0x6E4068: mov     ecx, [esp+14h+var_C]
0x6E406C: mov     large fs:0, ecx
0x6E4073: pop     ecx
0x6E4074: add     esp, 10h
0x6E4077: retn    14h
0x9C74D0: mov     eax, [ebp-10h]
0x9C74D3: push    eax
0x9C74D4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C74D9: pop     ecx
0x9C74DA: retn
0x9C74DB: mov     edx, [esp+arg_4]
0x9C74DF: lea     eax, [edx-4]
0x9C74E2: mov     ecx, [edx-8]
0x9C74E5: xor     ecx, eax
0x9C74E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C74EC: mov     eax, offset stru_AEF928
0x9C74F1: jmp     ___CxxFrameHandler3
