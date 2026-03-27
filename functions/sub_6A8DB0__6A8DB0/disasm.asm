0x6A8DB0: push    ecx
0x6A8DB1: push    esi
0x6A8DB2: mov     esi, ecx
0x6A8DB4: test    byte ptr [esi+0DCh], 2
0x6A8DBB: jz      short loc_6A8DF8
0x6A8DBD: mov     eax, [esi+70h]
0x6A8DC0: test    eax, eax
0x6A8DC2: jz      short loc_6A8DF8
0x6A8DC4: mov     ecx, [eax]
0x6A8DC6: lea     edx, [esp+8+var_4]
0x6A8DCA: push    edx
0x6A8DCB: push    offset CLSID_IMediaControl
0x6A8DD0: push    eax
0x6A8DD1: mov     eax, [ecx]
0x6A8DD3: call    eax
0x6A8DD5: test    eax, eax
0x6A8DD7: jl      short loc_6A8DF8
0x6A8DD9: mov     eax, dword ptr [esp+8+var_4]
0x6A8DDD: mov     ecx, [eax]
0x6A8DDF: mov     edx, [ecx+24h]
0x6A8DE2: push    eax
0x6A8DE3: call    edx
0x6A8DE5: mov     eax, dword ptr [esp+8+var_4]
0x6A8DE9: mov     ecx, [eax]
0x6A8DEB: mov     edx, [ecx+8]
0x6A8DEE: push    eax
0x6A8DEF: call    edx
0x6A8DF1: and     dword ptr [esi+0DCh], 0FFFFFFFCh
0x6A8DF8: pop     esi
0x6A8DF9: pop     ecx
0x6A8DFA: retn
