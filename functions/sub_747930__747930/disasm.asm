0x747930: sub     esp, 408h
0x747936: mov     eax, ds:0B30AACh
0x74793B: xor     eax, esp
0x74793D: mov     [esp+408h+var_4], eax
0x747944: mov     eax, [esp+408h+FullPath]
0x74794B: test    eax, eax
0x74794D: push    esi; Src
0x74794E: mov     esi, ecx
0x747950: jz      short loc_7479C8
0x747952: cmp     byte ptr [eax], 0
0x747955: jz      short loc_7479C8
0x747957: push    eax; FullPath
0x747958: lea     ecx, [esp+410h+Dir]; Dir
0x74795C: call    sub_748760
0x747961: push    offset EmptyString; Src
0x747966: lea     eax, [esp+410h+Dst]
0x74796D: push    100h; SizeInBytes
0x747972: push    eax; Dst
0x747973: call    _strcpy_s
0x747978: push    offset EmptyString; Src
0x74797D: lea     ecx, [esp+41Ch+var_305]
0x747984: push    100h; SizeInBytes
0x747989: push    ecx; Dst
0x74798A: call    _strcpy_s
0x74798F: add     esp, 18h
0x747992: push    104h; int
0x747997: add     esi, 10Ch
0x74799D: push    esi; int
0x74799E: lea     ecx, [esp+414h+Dir]; Src
0x7479A2: call    sub_7487B0
0x7479A7: push    esi
0x7479A8: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7479AD: add     esp, 4
0x7479B0: pop     esi
0x7479B1: mov     ecx, [esp+408h+var_4]
0x7479B8: xor     ecx, esp
0x7479BA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7479BF: add     esp, 408h
0x7479C5: retn    4
0x7479C8: mov     ecx, [esp+40Ch+var_4]
0x7479CF: mov     byte ptr [esi+10Ch], 0
0x7479D6: pop     esi
0x7479D7: xor     ecx, esp
0x7479D9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7479DE: add     esp, 408h
0x7479E4: retn    4
