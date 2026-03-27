0x483B90: mov     eax, [esp+arg_C]
0x483B94: push    esi
0x483B95: mov     esi, [ecx+0Ch]
0x483B98: imul    esi, [esp+4+arg_0]
0x483B9D: add     esi, [esp+4+arg_4]
0x483BA1: mov     edx, [esp+4+arg_8]
0x483BA5: push    edi
0x483BA6: shl     esi, 4
0x483BA9: add     esi, [ecx+10h]
0x483BAC: push    esi
0x483BAD: push    eax
0x483BAE: push    edx
0x483BAF: call    sub_483870
0x483BB4: mov     edi, [esi+4]
0x483BB7: test    edi, edi
0x483BB9: jz      short loc_483BDE
0x483BBB: lea     eax, [edi+4]
0x483BBE: push    eax; lpAddend
0x483BBF: call    dword ptr ds:0A2807Ch
0x483BC5: test    eax, eax
0x483BC7: jnz     short loc_483BD7
0x483BC9: test    edi, edi
0x483BCB: jz      short loc_483BD7
0x483BCD: mov     edx, [edi]
0x483BCF: mov     eax, [edx]
0x483BD1: push    1
0x483BD3: mov     ecx, edi
0x483BD5: call    eax
0x483BD7: mov     dword ptr [esi+4], 0
0x483BDE: pop     edi
0x483BDF: pop     esi
0x483BE0: retn    10h
