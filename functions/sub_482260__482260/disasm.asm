0x482260: mov     eax, [ecx+0Ch]
0x482263: mov     edx, [ecx+10h]
0x482266: push    esi
0x482267: mov     esi, eax
0x482269: imul    esi, [esp+4+arg_0]
0x48226E: add     esi, [esp+4+arg_4]
0x482272: lea     esi, [edx+esi*8]
0x482275: test    esi, esi
0x482277: jz      short loc_48228B
0x482279: imul    eax, [esp+4+arg_8]
0x48227E: add     eax, [esp+4+arg_C]
0x482282: mov     ecx, [esi]
0x482284: mov     [edx+eax*8], ecx
0x482287: pop     esi
0x482288: retn    10h
0x48228B: mov     eax, [esp+4+arg_C]
0x48228F: mov     edx, [ecx]
0x482291: mov     edx, [edx+1Ch]
0x482294: push    eax
0x482295: mov     eax, [esp+8+arg_8]
0x482299: push    eax
0x48229A: call    edx
0x48229C: pop     esi
0x48229D: retn    10h
