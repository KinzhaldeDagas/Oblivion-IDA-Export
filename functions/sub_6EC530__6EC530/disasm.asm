0x6EC530: push    0FFFFFFFFh
0x6EC532: push    offset SEH_8C8900
0x6EC537: mov     eax, large fs:0
0x6EC53D: push    eax
0x6EC53E: push    ecx
0x6EC53F: mov     eax, ds:0B30AACh
0x6EC544: xor     eax, esp
0x6EC546: push    eax
0x6EC547: lea     eax, [esp+14h+var_C]
0x6EC54B: mov     large fs:0, eax
0x6EC551: push    34h ; '4'; Size
0x6EC553: call    FormHeapAlloc
0x6EC558: add     esp, 4
0x6EC55B: mov     [esp+14h+var_10], eax
0x6EC55F: test    eax, eax
0x6EC561: mov     [esp+14h+var_4], 0
0x6EC569: jz      short loc_6EC596
0x6EC56B: mov     ecx, [esp+14h+arg_10]
0x6EC56F: fld     [esp+14h+arg_C]
0x6EC573: mov     edx, dword ptr [esp+14h+arg_4]
0x6EC577: push    ecx; int
0x6EC578: push    ecx
0x6EC579: fstp    [esp+1Ch+var_1C]; float
0x6EC57C: push    edx; char
0x6EC57D: mov     ecx, eax
0x6EC57F: call    sub_6EB460
0x6EC584: mov     ecx, [esp+14h+var_C]
0x6EC588: mov     large fs:0, ecx
0x6EC58F: pop     ecx
0x6EC590: add     esp, 10h
0x6EC593: retn    14h
0x6EC596: xor     eax, eax
0x6EC598: mov     ecx, [esp+14h+var_C]
0x6EC59C: mov     large fs:0, ecx
0x6EC5A3: pop     ecx
0x6EC5A4: add     esp, 10h
0x6EC5A7: retn    14h
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
