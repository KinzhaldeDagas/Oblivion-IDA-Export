0x482200: push    ebx
0x482201: mov     ebx, [esp+4+arg_4]
0x482205: push    esi
0x482206: mov     esi, ecx
0x482208: mov     eax, [esi+0Ch]
0x48220B: mov     ecx, [esi+10h]
0x48220E: push    edi
0x48220F: mov     edi, [esp+0Ch+arg_0]
0x482213: imul    eax, edi
0x482216: add     eax, ebx
0x482218: lea     eax, [ecx+eax*8]
0x48221B: mov     ecx, [eax]
0x48221D: test    ecx, ecx
0x48221F: jz      short loc_482231
0x482221: call    sub_4D6450
0x482226: mov     edx, [esi]
0x482228: mov     eax, [edx+1Ch]
0x48222B: push    ebx
0x48222C: push    edi
0x48222D: mov     ecx, esi
0x48222F: call    eax
0x482231: pop     edi
0x482232: pop     esi
0x482233: pop     ebx
0x482234: retn    8
