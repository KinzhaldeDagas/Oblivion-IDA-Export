0x713620: sub     esp, 8
0x713623: push    esi
0x713624: mov     esi, ecx
0x713626: mov     eax, [esi+21Ch]
0x71362C: push    1
0x71362E: lea     ecx, [esp+10h+var_4]
0x713632: push    ecx
0x713633: push    4
0x713635: lea     edx, [esp+18h+var_8]
0x713639: push    edx
0x71363A: push    eax
0x71363B: mov     eax, [eax+4]
0x71363E: mov     [esp+20h+var_4], 4
0x713646: call    eax
0x713648: mov     eax, [esp+20h+var_8]
0x71364C: add     esp, 14h
0x71364F: test    eax, eax
0x713651: jle     short loc_713699
0x713653: add     eax, 1
0x713656: push    edi
0x713657: push    eax; Size
0x713658: call    FormHeapAlloc
0x71365D: mov     edi, [esp+14h+arg_0]
0x713661: push    1
0x713663: lea     edx, [esp+18h+arg_0]
0x713667: push    edx
0x713668: mov     edx, [esp+1Ch+var_8]
0x71366C: push    edx
0x71366D: mov     [edi], eax
0x71366F: mov     ecx, [esi+21Ch]
0x713675: push    eax
0x713676: mov     eax, [ecx+4]
0x713679: push    ecx
0x71367A: mov     [esp+28h+arg_0], 1
0x713682: call    eax
0x713684: mov     ecx, [edi]
0x713686: mov     edx, [esp+28h+var_8]
0x71368A: add     esp, 18h
0x71368D: pop     edi
0x71368E: mov     byte ptr [edx+ecx], 0
0x713692: pop     esi
0x713693: add     esp, 8
0x713696: retn    4
0x713699: mov     eax, [esp+0Ch+arg_0]
0x71369D: mov     dword ptr [eax], 0
0x7136A3: pop     esi
0x7136A4: add     esp, 8
0x7136A7: retn    4
