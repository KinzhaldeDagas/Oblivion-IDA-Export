0x5661E0: push    0FFFFFFFFh
0x5661E2: push    offset TESPackage_SetType?_SEH
0x5661E7: mov     eax, large fs:0
0x5661ED: push    eax
0x5661EE: push    ebx
0x5661EF: push    esi
0x5661F0: push    edi
0x5661F1: mov     eax, ds:0B30AACh
0x5661F6: xor     eax, esp
0x5661F8: push    eax
0x5661F9: lea     eax, [esp+1Ch+var_C]
0x5661FD: mov     large fs:0, eax
0x566203: mov     esi, ecx
0x566205: movsx   eax, byte ptr [esi+20h]
0x566209: mov     ebx, [esp+1Ch+arg_0]
0x56620D: cmp     ebx, eax
0x56620F: jz      TESPackage_SetType?___Done
0x566215: cmp     ebx, 3
0x566218: jl      short loc_566262
0x56621A: cmp     ebx, 6
0x56621D: jle     short loc_566244
0x56621F: cmp     ebx, 7
0x566222: jnz     short loc_566262
0x566224: mov     edi, [esi+24h]
0x566227: test    edi, edi
0x566229: jz      short loc_56623B
0x56622B: mov     ecx, edi
0x56622D: call    TESPackage_LocationData_destr
0x566232: push    edi
0x566233: call    FormHeapFree
0x566238: add     esp, 4
0x56623B: mov     dword ptr [esi+24h], 0
0x566242: jmp     short loc_56626B
0x566244: mov     edi, [esi+28h]
0x566247: test    edi, edi
0x566249: jz      short loc_56625B
0x56624B: mov     ecx, edi; void *
0x56624D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x566252: push    edi
0x566253: call    FormHeapFree
0x566258: add     esp, 4
0x56625B: mov     dword ptr [esi+28h], 0
0x566262: cmp     ebx, 9; switch 10 cases
0x566265: ja      TESPackage_SetType?___def_566272; jumptable 00566272 default case, cases 3,4
0x56626B: movzx   ecx, ds:byte_566368[ebx]
0x566272: jmp     ds:jpt_566272[ecx*4]; switch jump
0x566279: mov     eax, [esi+28h]; jumptable 00566272 case 2
0x56627C: test    eax, eax
0x56627E: jnz     short loc_5662B0
0x566280: push    0Ch; Size
0x566282: call    FormHeapAlloc
0x566287: add     esp, 4
0x56628A: mov     [esp+1Ch+arg_0], eax
0x56628E: test    eax, eax
0x566290: mov     [esp+1Ch+var_4], 2
0x566298: jz      short loc_5662A3
0x56629A: mov     ecx, eax
0x56629C: call    TESPackage_TargetData_constr
0x5662A1: jmp     short loc_5662A5
0x5662A3: xor     eax, eax
0x5662A5: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5662AD: mov     [esi+28h], eax
0x5662B0: cmp     dword ptr [esi+24h], 0
0x5662B4: jnz     TESPackage_SetType?___def_566272; jumptable 00566272 default case, cases 3,4
0x5662BA: push    0Ch; Size
0x5662BC: call    FormHeapAlloc
0x5662C1: add     esp, 4
0x5662C4: mov     [esp+1Ch+arg_0], eax
0x5662C8: test    eax, eax
0x5662CA: mov     [esp+1Ch+var_4], 3
0x5662D2: jz      short loc_566339
0x5662D4: mov     ecx, eax
0x5662D6: call    TESPackage_LocationData_constr
0x5662DB: jmp     short loc_56633B
0x5662DD: cmp     dword ptr [esi+28h], 0; jumptable 00566272 cases 0,1,7-9
0x5662E1: jnz     short TESPackage_SetType?___def_566272; jumptable 00566272 default case, cases 3,4
0x5662E3: push    0Ch; Size
0x5662E5: call    FormHeapAlloc
0x5662EA: add     esp, 4
0x5662ED: mov     [esp+1Ch+arg_0], eax
0x5662F1: test    eax, eax
0x5662F3: mov     [esp+1Ch+var_4], 4
0x5662FB: jz      short loc_566309
0x5662FD: mov     ecx, eax
0x5662FF: call    TESPackage_TargetData_constr
0x566304: mov     [esi+28h], eax
0x566307: jmp     short TESPackage_SetType?___def_566272; jumptable 00566272 default case, cases 3,4
0x566309: xor     eax, eax
0x56630B: mov     [esi+28h], eax
0x56630E: jmp     short TESPackage_SetType?___def_566272; jumptable 00566272 default case, cases 3,4
0x566310: cmp     dword ptr [esi+24h], 0; jumptable 00566272 cases 5,6
0x566314: jnz     short TESPackage_SetType?___def_566272; jumptable 00566272 default case, cases 3,4
0x566316: push    0Ch; Size
0x566318: call    FormHeapAlloc
0x56631D: add     esp, 4
0x566320: mov     [esp+1Ch+arg_0], eax
0x566324: test    eax, eax
0x566326: mov     [esp+1Ch+var_4], 5
0x56632E: jz      short loc_566339
0x566330: mov     ecx, eax
0x566332: call    TESPackage_LocationData_constr
0x566337: jmp     short loc_56633B
0x566339: xor     eax, eax
0x56633B: mov     [esi+24h], eax
0x56633E: mov     [esi+20h], bl; jumptable 00566272 default case, cases 3,4
