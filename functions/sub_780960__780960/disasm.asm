0x780960: mov     edx, [esp+arg_0]
0x780964: test    edx, edx
0x780966: jz      short locret_780987
0x780968: mov     eax, [edx+58h]
0x78096B: test    eax, eax
0x78096D: jz      short locret_780987
0x78096F: mov     dword ptr [edx+58h], 0
0x780976: cmp     eax, [ecx]
0x780978: jnz     short loc_780980
0x78097A: mov     dword ptr [ecx], 0
0x780980: push    eax
0x780981: call    FormHeapFree
0x780986: pop     ecx
0x780987: retn    4
