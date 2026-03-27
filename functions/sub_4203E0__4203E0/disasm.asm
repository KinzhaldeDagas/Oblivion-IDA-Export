0x4203E0: push    0FFFFFFFFh
0x4203E2: push    offset SEH_787830
0x4203E7: mov     eax, large fs:0
0x4203ED: push    eax
0x4203EE: push    ebx
0x4203EF: push    esi
0x4203F0: push    edi
0x4203F1: mov     eax, ___security_cookie
0x4203F6: xor     eax, esp
0x4203F8: push    eax
0x4203F9: lea     eax, [esp+1Ch+var_C]
0x4203FD: mov     large fs:0, eax
0x420403: mov     edi, ecx
0x420405: mov     ebx, [esp+1Ch+arg_0]
0x420409: test    ebx, ebx
0x42040B: push    41h ; 'A'; a2
0x42040D: jz      short loc_420465
0x42040F: call    BaseExtraList_GetExtraData
0x420414: mov     esi, eax
0x420416: test    esi, esi
0x420418: jnz     short loc_42044D
0x42041A: push    10h; Size
0x42041C: call    FormHeapAlloc
0x420421: add     esp, 4
0x420424: mov     [esp+1Ch+arg_0], eax
0x420428: test    eax, eax
0x42042A: mov     [esp+1Ch+var_4], esi
0x42042E: jz      short loc_420439
0x420430: mov     ecx, eax
0x420432: call    sub_42A840
0x420437: jmp     short loc_42043B
0x420439: xor     eax, eax
0x42043B: push    eax; BSExtraData *
0x42043C: mov     ecx, edi; ExtraDataList *
0x42043E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x420446: mov     esi, eax
0x420448: call    BaseExtraList_AddExtra
0x42044D: mov     [esi+0Ch], ebx
0x420450: mov     ecx, [esp+1Ch+var_C]
0x420454: mov     large fs:0, ecx
0x42045B: pop     ecx
0x42045C: pop     edi
0x42045D: pop     esi
0x42045E: pop     ebx
0x42045F: add     esp, 0Ch
0x420462: retn    4
0x420465: call    BaseExtraList_RemoveExtraByType
0x42046A: mov     ecx, [esp+1Ch+var_C]
0x42046E: mov     large fs:0, ecx
0x420475: pop     ecx
0x420476: pop     edi
0x420477: pop     esi
0x420478: pop     ebx
0x420479: add     esp, 0Ch
0x42047C: retn    4
