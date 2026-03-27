0x968160: fstp    st(1); jumptable 00966B67 default case
0x968162: fstp    st
0x968164: cmp     byte ptr [ebp+2Ch], 0
0x968168: jz      short loc_9681C4
0x96816A: mov     esi, [ebp+34h]
0x96816D: mov     eax, [esp+arg_178]
0x968174: mov     ecx, [esp+arg_17C]
0x96817B: mov     edx, [esp+arg_180]
0x968182: mov     [esi], eax
0x968184: mov     [esi+4], ecx
0x968187: mov     ecx, esi
0x968189: mov     [esi+8], edx
0x96818C: call    sub_43F350
0x968191: fstp    st
0x968193: fld     dword ptr [esi]
0x968195: mov     eax, [ebp+30h]
0x968198: fchs
0x96819A: fstp    [esp+arg_38]
0x96819E: mov     ecx, [esp+arg_38]
0x9681A2: fld     dword ptr [esi+4]
0x9681A5: fchs
0x9681A7: fstp    [esp+arg_3C]
0x9681AB: mov     edx, [esp+arg_3C]
0x9681AF: fld     dword ptr [esi+8]
0x9681B2: mov     [eax], ecx
0x9681B4: fchs
0x9681B6: mov     [eax+4], edx
0x9681B9: fstp    [esp+arg_40]
0x9681BD: mov     ecx, [esp+arg_40]
0x9681C1: mov     [eax+8], ecx
0x9681C4: pop     edi
0x9681C5: pop     esi
0x9681C6: mov     al, 1
0x9681C8: pop     ebx
0x9681C9: mov     esp, ebp
0x9681CB: pop     ebp
0x9681CC: retn
