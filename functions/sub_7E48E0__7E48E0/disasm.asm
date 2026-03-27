0x7E48E0: push    ecx
0x7E48E1: mov     eax, ds:0B46044h
0x7E48E6: test    eax, eax
0x7E48E8: jnz     short loc_7E4958
0x7E48EA: push    esi
0x7E48EB: call    sub_7E2D60
0x7E48F0: mov     esi, eax
0x7E48F2: xor     ecx, ecx
0x7E48F4: lea     eax, ds:0[esi*4]
0x7E48FB: mov     edx, 4
0x7E4900: mul     edx
0x7E4902: seto    cl
0x7E4905: neg     ecx
0x7E4907: or      ecx, eax
0x7E4909: push    ecx; Size
0x7E490A: call    FormHeapAlloc
0x7E490F: add     esp, 4
0x7E4912: xor     ecx, ecx
0x7E4914: test    esi, esi
0x7E4916: mov     ds:0B46044h, eax
0x7E491B: jbe     short loc_7E4957
0x7E491D: add     eax, 8
0x7E4920: mov     edx, ecx
0x7E4922: test    edx, edx
0x7E4924: mov     [esp+8+var_4], edx
0x7E4928: fild    [esp+8+var_4]
0x7E492C: jge     short loc_7E4934
0x7E492E: fadd    dword ptr ds:0A2FC78h
0x7E4934: fstp    [esp+8+var_4]
0x7E4938: add     ecx, 1
0x7E493B: fld     [esp+8+var_4]
0x7E493F: add     eax, 10h
0x7E4942: cmp     ecx, esi
0x7E4944: fst     dword ptr [eax-18h]
0x7E4947: fst     dword ptr [eax-14h]
0x7E494A: fst     dword ptr [eax-10h]
0x7E494D: fstp    dword ptr [eax-0Ch]
0x7E4950: jb      short loc_7E4920
0x7E4952: mov     eax, ds:0B46044h
0x7E4957: pop     esi
0x7E4958: pop     ecx
0x7E4959: retn
