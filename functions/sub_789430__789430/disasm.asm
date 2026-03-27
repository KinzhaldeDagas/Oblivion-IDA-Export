0x789430: push    0FFFFFFFFh
0x789432: push    offset SEH_789430
0x789437: mov     eax, large fs:0
0x78943D: push    eax
0x78943E: sub     esp, 428h
0x789444: mov     eax, ds:0B30AACh
0x789449: xor     eax, esp
0x78944B: mov     [esp+434h+var_10], eax
0x789452: push    ebx
0x789453: push    ebp
0x789454: push    esi
0x789455: push    edi
0x789456: mov     eax, ds:0B30AACh
0x78945B: xor     eax, esp
0x78945D: push    eax
0x78945E: lea     eax, [esp+448h+var_C]
0x789465: mov     large fs:0, eax
0x78946B: mov     ebx, ecx
0x78946D: mov     edi, [esp+448h+arg_0]
0x789474: xor     ebp, ebp
0x789476: cmp     dword ptr [ebx+18h], 10h
0x78947A: mov     [esp+448h+var_430], edi
0x78947E: mov     [esp+448h+var_434], ebp
0x789482: jb      short loc_789489
0x789484: mov     ecx, [ebx+4]
0x789487: jmp     short loc_78948C
0x789489: lea     ecx, [ebx+4]
0x78948C: lea     edx, [esp+448h+Src]
0x789490: mov     al, [ecx]
0x789492: mov     [edx], al
0x789494: add     ecx, 1
0x789497: add     edx, 1
0x78949A: test    al, al
0x78949C: jnz     short loc_789490
0x78949E: mov     esi, [ebx+14h]
0x7894A1: mov     [esp+448h+var_434], esi
0x7894A5: add     esi, 0FFFFFFFFh
0x7894A8: cmp     esi, ebp
0x7894AA: jl      loc_789542
0x7894B0: cmp     esi, [ebx+14h]
0x7894B3: jbe     short loc_7894BA
0x7894B5: call    __invalid_parameter_noinfo
0x7894BA: cmp     dword ptr [ebx+18h], 10h
0x7894BE: lea     ebp, [ebx+4]
0x7894C1: jb      short loc_7894C8
0x7894C3: mov     eax, [ebp+0]
0x7894C6: jmp     short loc_7894CA
0x7894C8: mov     eax, ebp
0x7894CA: cmp     byte ptr [eax+esi], 2Fh ; '/'
0x7894CE: jz      short loc_7894F4
0x7894D0: cmp     esi, [ebx+14h]
0x7894D3: jbe     short loc_7894DA
0x7894D5: call    __invalid_parameter_noinfo
0x7894DA: cmp     dword ptr [ebx+18h], 10h
0x7894DE: jb      short loc_7894E5
0x7894E0: mov     eax, [ebp+0]
0x7894E3: jmp     short loc_7894E7
0x7894E5: mov     eax, ebp
0x7894E7: cmp     byte ptr [eax+esi], 5Ch ; '\'
0x7894EB: jz      short loc_7894F4
0x7894ED: sub     esi, 1
0x7894F0: jns     short loc_7894B0
0x7894F2: jmp     short loc_789540
0x7894F4: add     esi, 1
0x7894F7: xor     ebp, ebp
0x7894F9: cmp     esi, [esp+448h+var_434]
0x7894FD: jge     short loc_78953B
0x7894FF: mov     ebp, [esp+448h+var_434]
0x789503: lea     edi, [esp+448h+Src]
0x789507: sub     edi, esi
0x789509: sub     ebp, esi
0x78950B: jmp     short loc_789510
0x78950D: align 10h
0x789510: cmp     esi, [ebx+14h]
0x789513: jbe     short loc_78951A
0x789515: call    __invalid_parameter_noinfo
0x78951A: cmp     dword ptr [ebx+18h], 10h
0x78951E: jb      short loc_789525
0x789520: mov     eax, [ebx+4]
0x789523: jmp     short loc_789528
0x789525: lea     eax, [ebx+4]
0x789528: mov     al, [esi+eax]
0x78952B: mov     [edi+esi], al
0x78952E: add     esi, 1
0x789531: cmp     esi, [esp+448h+var_434]
0x789535: jl      short loc_789510
0x789537: mov     edi, [esp+448h+var_430]
0x78953B: mov     [esp+ebp+448h+Src], 0
0x789540: xor     ebp, ebp
0x789542: mov     esi, 0Fh
0x789547: lea     eax, [esp+448h+Src]
0x78954B: mov     [esp+448h+var_414], esi
0x78954F: mov     [esp+448h+var_418], ebp
0x789553: mov     byte ptr [esp+448h+var_428], 0
0x789558: lea     edx, [eax+1]
0x78955B: jmp     short loc_789560
0x78955D: align 10h
0x789560: mov     cl, [eax]
0x789562: add     eax, 1
0x789565: test    cl, cl
0x789567: jnz     short loc_789560
0x789569: sub     eax, edx
0x78956B: push    eax; MaxCount
0x78956C: lea     ecx, [esp+44Ch+Src]
0x789570: push    ecx; Src
0x789571: lea     ecx, [esp+450h+var_42C]
0x789575: call    sub_414500
0x78957A: push    0FFFFFFFFh
0x78957C: push    ebp
0x78957D: lea     edx, [esp+450h+var_42C]
0x789581: mov     [edi+18h], esi
0x789584: mov     [edi+14h], ebp
0x789587: push    edx
0x789588: mov     ecx, edi
0x78958A: mov     [esp+454h+var_4], ebp
0x789591: mov     byte ptr [edi+4], 0
0x789595: call    sub_414420
0x78959A: cmp     [esp+448h+var_414], 10h
0x78959F: jb      short loc_7895AE
0x7895A1: mov     eax, [esp+448h+var_428]
0x7895A5: push    eax
0x7895A6: call    FormHeapFree
0x7895AB: add     esp, 4
0x7895AE: mov     eax, edi
0x7895B0: mov     ecx, [esp+448h+var_C]
0x7895B7: mov     large fs:0, ecx
0x7895BE: pop     ecx
0x7895BF: pop     edi
0x7895C0: pop     esi
0x7895C1: pop     ebp
0x7895C2: pop     ebx
0x7895C3: mov     ecx, [esp+434h+var_10]
0x7895CA: xor     ecx, esp
0x7895CC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7895D1: add     esp, 434h
0x7895D7: retn    4
