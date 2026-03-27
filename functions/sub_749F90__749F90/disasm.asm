0x749F90: push    esi
0x749F91: push    edi
0x749F92: push    0F0h ; 'ð'; Size
0x749F97: mov     edi, ecx
0x749F99: call    FormHeapAlloc
0x749F9E: add     esp, 4
0x749FA1: test    eax, eax
0x749FA3: jz      short loc_749FC2
0x749FA5: mov     ecx, eax
0x749FA7: call    sub_749EE0
0x749FAC: mov     esi, eax
0x749FAE: mov     eax, [esp+8+arg_0]
0x749FB2: push    eax
0x749FB3: push    esi
0x749FB4: mov     ecx, edi
0x749FB6: call    sub_749A70
0x749FBB: pop     edi
0x749FBC: mov     eax, esi
0x749FBE: pop     esi
0x749FBF: retn    4
0x749FC2: mov     eax, [esp+8+arg_0]
0x749FC6: push    eax
0x749FC7: xor     esi, esi
0x749FC9: push    esi
0x749FCA: mov     ecx, edi
0x749FCC: call    sub_749A70
0x749FD1: pop     edi
0x749FD2: mov     eax, esi
0x749FD4: pop     esi
0x749FD5: retn    4
