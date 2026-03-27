0x78B820: push    ebp
0x78B821: mov     ebp, esp
0x78B823: push    0FFFFFFFFh
0x78B825: push    offset SEH_78B820
0x78B82A: mov     eax, large fs:0
0x78B830: push    eax
0x78B831: sub     esp, 40h
0x78B834: push    ebx
0x78B835: push    esi
0x78B836: push    edi
0x78B837: mov     eax, ds:0B30AACh
0x78B83C: xor     eax, ebp
0x78B83E: push    eax
0x78B83F: lea     eax, [ebp+var_C]
0x78B842: mov     large fs:0, eax
0x78B848: mov     [ebp+var_10], esp
0x78B84B: cmp     byte ptr [ecx+45h], 0
0x78B84F: mov     [ebp+var_4], 0
0x78B856: jnz     short loc_78B881
0x78B858: mov     eax, [ebp+arg_0]
0x78B85B: mov     edx, [ecx+10h]
0x78B85E: mov     [edx+10h], eax
0x78B861: mov     ecx, [ecx+8]
0x78B864: cmp     eax, 2
0x78B867: setnz   al
0x78B86A: mov     [ecx+1], al
0x78B86D: mov     ecx, [ebp+var_C]
0x78B870: mov     large fs:0, ecx
0x78B877: pop     ecx
0x78B878: pop     edi
0x78B879: pop     esi
0x78B87A: pop     ebx
0x78B87B: mov     esp, ebp
0x78B87D: pop     ebp
0x78B87E: retn    4
0x78B881: push    41h ; 'A'; MaxCount
0x78B883: push    offset aSetleafwindmet; "SetLeafWindMethod() has no effect after"...
0x78B888: mov     ecx, offset dword_B2B614
0x78B88D: call    sub_414500
0x78B892: mov     ecx, [ebp+var_C]
0x78B895: mov     large fs:0, ecx
0x78B89C: pop     ecx
0x78B89D: pop     edi
0x78B89E: pop     esi
0x78B89F: pop     ebx
0x78B8A0: mov     esp, ebp
0x78B8A2: pop     ebp
0x78B8A3: retn    4
0x78B8A6: mov     ecx, [ebp+var_14]
0x78B8A9: mov     edx, [ecx]
0x78B8AB: mov     eax, [edx+4]
0x78B8AE: call    eax
0x78B8B0: push    eax
0x78B8B1: push    offset aCspeedtreert_5; "CSpeedTreeRT::SetLeafWindMethod"
0x78B8B6: push    offset aSFailedS; "%s - failed [%s]"
0x78B8BB: lea     esi, [ebp+var_30]
0x78B8BE: call    sub_7A54A0
0x78B8C3: add     esp, 0Ch
0x78B8C6: cmp     dword ptr [eax+18h], 10h
0x78B8CA: mov     byte ptr [ebp+var_4], 2
0x78B8CE: jb      short loc_78B8D5
0x78B8D0: mov     eax, [eax+4]
0x78B8D3: jmp     short loc_78B8D8
0x78B8D5: add     eax, 4
0x78B8D8: push    eax; Src
0x78B8D9: call    sub_7895E0
0x78B8DE: add     esp, 4
0x78B8E1: lea     ecx, [ebp+var_30]
0x78B8E4: call    sub_79AB00
0x78B8E9: mov     eax, offset loc_78B8EF
0x78B8EE: retn
0x78B8EF: mov     ecx, [ebp+var_C]
0x78B8F2: mov     large fs:0, ecx
0x78B8F9: pop     ecx
0x78B8FA: pop     edi
0x78B8FB: pop     esi
0x78B8FC: pop     ebx
0x78B8FD: mov     esp, ebp
0x78B8FF: pop     ebp
0x78B900: retn    4
0x78B903: push    offset aCspeedtreert_5; "CSpeedTreeRT::SetLeafWindMethod"
0x78B908: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78B90D: lea     esi, [ebp+var_4C]
0x78B910: call    sub_7A54A0
0x78B915: add     esp, 8
0x78B918: cmp     dword ptr [eax+18h], 10h
0x78B91C: mov     byte ptr [ebp+var_4], 3
0x78B920: jb      short loc_78B927
0x78B922: mov     eax, [eax+4]
0x78B925: jmp     short loc_78B92A
0x78B927: add     eax, 4
0x78B92A: push    eax; Src
0x78B92B: call    sub_7895E0
0x78B930: add     esp, 4
0x78B933: lea     ecx, [ebp+var_4C]
0x78B936: call    sub_79AB00
0x78B93B: mov     eax, offset loc_78B86D
0x78B940: retn
