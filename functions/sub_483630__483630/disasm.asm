0x483630: push    ebx
0x483631: mov     ebx, [esp+4+arg_4]
0x483635: push    esi
0x483636: mov     esi, ecx
0x483638: mov     eax, [esi+0Ch]
0x48363B: push    edi
0x48363C: mov     edi, [esp+0Ch+arg_0]
0x483640: imul    eax, edi
0x483643: add     eax, ebx
0x483645: shl     eax, 4
0x483648: add     eax, [esi+10h]
0x48364B: movzx   ecx, word ptr [eax+0Ch]
0x48364F: movzx   edx, word ptr [eax+8]
0x483653: push    ecx
0x483654: push    edx
0x483655: call    sub_4EF1D0
0x48365A: push    eax
0x48365B: call    sub_7B3A40
0x483660: mov     eax, [esi]
0x483662: mov     edx, [eax+1Ch]
0x483665: add     esp, 0Ch
0x483668: push    ebx
0x483669: push    edi
0x48366A: mov     ecx, esi
0x48366C: call    edx
0x48366E: pop     edi
0x48366F: pop     esi
0x483670: pop     ebx
0x483671: retn    8
