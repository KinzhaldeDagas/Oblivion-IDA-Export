0x4241E0: push    0FFFFFFFFh
0x4241E2: push    offset SEH_787830
0x4241E7: mov     eax, large fs:0
0x4241ED: push    eax
0x4241EE: push    ebx
0x4241EF: push    esi
0x4241F0: push    edi
0x4241F1: mov     eax, ___security_cookie
0x4241F6: xor     eax, esp
0x4241F8: push    eax
0x4241F9: lea     eax, [esp+1Ch+var_C]
0x4241FD: mov     large fs:0, eax
0x424203: mov     ebx, ecx
0x424205: push    8; a2
0x424207: call    BaseExtraList_GetExtraData
0x42420C: mov     edi, [esp+1Ch+arg_0]
0x424210: test    edi, edi
0x424212: mov     esi, eax
0x424214: jnz     short loc_42423D
0x424216: test    esi, esi
0x424218: jz      loc_42429E
0x42421E: push    1
0x424220: push    esi
0x424221: mov     ecx, ebx
0x424223: call    BaseExtraList_RemoveExtraByPtr
0x424228: mov     ecx, [esp+1Ch+var_C]
0x42422C: mov     large fs:0, ecx
0x424233: pop     ecx
0x424234: pop     edi
0x424235: pop     esi
0x424236: pop     ebx
0x424237: add     esp, 0Ch
0x42423A: retn    4
0x42423D: test    esi, esi
0x42423F: jnz     short loc_424288
0x424241: push    10h; Size
0x424243: call    FormHeapAlloc
0x424248: add     esp, 4
0x42424B: mov     [esp+1Ch+arg_0], eax
0x42424F: test    eax, eax
0x424251: mov     [esp+1Ch+var_4], esi
0x424255: jz      short loc_424261
0x424257: push    edi
0x424258: mov     ecx, eax
0x42425A: call    sub_41D940
0x42425F: jmp     short loc_424263
0x424261: xor     eax, eax
0x424263: push    eax; BSExtraData *
0x424264: mov     ecx, ebx; ExtraDataList *
0x424266: mov     [esp+20h+var_4], 0FFFFFFFFh
0x42426E: call    BaseExtraList_AddExtra
0x424273: mov     ecx, [esp+1Ch+var_C]
0x424277: mov     large fs:0, ecx
0x42427E: pop     ecx
0x42427F: pop     edi
0x424280: pop     esi
0x424281: pop     ebx
0x424282: add     esp, 0Ch
0x424285: retn    4
0x424288: mov     ecx, [esi+0Ch]
0x42428B: test    ecx, ecx
0x42428D: jz      short loc_42429B
0x42428F: cmp     ecx, edi
0x424291: jz      short loc_42429B
0x424293: mov     eax, [ecx]
0x424295: mov     edx, [eax]
0x424297: push    1
0x424299: call    edx
0x42429B: mov     [esi+0Ch], edi
0x42429E: mov     ecx, [esp+1Ch+var_C]
0x4242A2: mov     large fs:0, ecx
0x4242A9: pop     ecx
0x4242AA: pop     edi
0x4242AB: pop     esi
0x4242AC: pop     ebx
0x4242AD: add     esp, 0Ch
0x4242B0: retn    4
