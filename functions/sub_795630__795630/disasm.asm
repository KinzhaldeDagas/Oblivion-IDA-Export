0x795630: push    0FFFFFFFFh
0x795632: push    offset SEH_7974F0
0x795637: mov     eax, large fs:0
0x79563D: push    eax
0x79563E: sub     esp, 10h
0x795641: push    esi
0x795642: push    edi
0x795643: mov     eax, ds:0B30AACh
0x795648: xor     eax, esp
0x79564A: push    eax
0x79564B: lea     eax, [esp+28h+var_C]
0x79564F: mov     large fs:0, eax
0x795655: mov     esi, ecx
0x795657: push    esi
0x795658: lea     ecx, [esp+2Ch+var_1C]
0x79565C: call    sub_795480
0x795661: mov     edi, [esp+28h+arg_0]
0x795665: push    edi
0x795666: mov     ecx, esi
0x795668: mov     [esp+2Ch+var_4], 0
0x795670: call    sub_795510
0x795675: lea     eax, [esp+28h+var_1C]
0x795679: push    eax
0x79567A: mov     ecx, edi
0x79567C: call    sub_795510
0x795681: mov     eax, [esp+28h+var_18]
0x795685: test    eax, eax
0x795687: jz      short loc_795692
0x795689: push    eax
0x79568A: call    FormHeapFree
0x79568F: add     esp, 4
0x795692: mov     ecx, [esp+28h+var_C]
0x795696: mov     large fs:0, ecx
0x79569D: pop     ecx
0x79569E: pop     edi
0x79569F: pop     esi
0x7956A0: add     esp, 1Ch
0x7956A3: retn    4
