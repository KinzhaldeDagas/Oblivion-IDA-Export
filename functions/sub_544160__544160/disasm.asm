0x544160: push    0FFFFFFFFh
0x544162: push    offset SEH_544160
0x544167: mov     eax, large fs:0
0x54416D: push    eax
0x54416E: sub     esp, 10Ch
0x544174: mov     eax, ds:0B30AACh
0x544179: xor     eax, esp
0x54417B: mov     [esp+118h+var_10], eax
0x544182: push    ebx
0x544183: push    esi
0x544184: push    edi
0x544185: mov     eax, ds:0B30AACh
0x54418A: xor     eax, esp
0x54418C: push    eax
0x54418D: lea     eax, [esp+128h+var_C]
0x544194: mov     large fs:0, eax
0x54419A: mov     eax, [esp+128h+Str1]
0x5441A1: mov     edi, [esp+128h+arg_0]
0x5441A8: mov     ebx, [esp+128h+arg_8]
0x5441AF: xor     esi, esi
0x5441B1: test    eax, eax
0x5441B3: jz      short loc_5441C7
0x5441B5: lea     ecx, [esp+128h+var_114]
0x5441B9: push    ecx; int
0x5441BA: push    eax; Str1
0x5441BB: call    sub_47D8F0
0x5441C0: add     esp, 8
0x5441C3: lea     esi, [esp+128h+var_114]
0x5441C7: push    38h ; '8'; Size
0x5441C9: call    FormHeapAlloc
0x5441CE: add     esp, 4
0x5441D1: mov     [esp+128h+var_118], eax
0x5441D5: test    eax, eax
0x5441D7: mov     [esp+128h+var_4], 0
0x5441E2: jz      short loc_5441F8
0x5441E4: mov     edx, [esp+128h+arg_C]
0x5441EB: push    edx
0x5441EC: push    ebx
0x5441ED: push    esi
0x5441EE: push    edi
0x5441EF: mov     ecx, eax
0x5441F1: call    IOTask__CreateSkyTask
0x5441F6: jmp     short loc_5441FA
0x5441F8: xor     eax, eax
0x5441FA: mov     ecx, ds:0B33A10h
0x544200: mov     edx, [ecx]
0x544202: push    eax
0x544203: mov     eax, [edx+3Ch]
0x544206: mov     [esp+12Ch+var_4], 0FFFFFFFFh
0x544211: call    eax
0x544213: mov     ecx, dword ptr [esp+128h+var_C]
0x54421A: mov     large fs:0, ecx
0x544221: pop     ecx
0x544222: pop     edi
0x544223: pop     esi
0x544224: pop     ebx
0x544225: mov     ecx, [esp+118h+var_10]
0x54422C: xor     ecx, esp
0x54422E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x544233: add     esp, 118h
0x544239: retn    10h
