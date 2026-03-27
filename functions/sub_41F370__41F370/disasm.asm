0x41F370: push    0FFFFFFFFh
0x41F372: push    offset SEH_6F8920
0x41F377: mov     eax, large fs:0
0x41F37D: push    eax
0x41F37E: push    esi
0x41F37F: mov     eax, ___security_cookie
0x41F384: xor     eax, esp
0x41F386: push    eax
0x41F387: lea     eax, [esp+14h+var_C]
0x41F38B: mov     large fs:0, eax
0x41F391: mov     esi, ecx
0x41F393: movzx   ecx, byte ptr [esi+10h]
0x41F397: xor     al, al
0x41F399: test    cl, cl
0x41F39B: jns     short loc_41F39F
0x41F39D: mov     al, 1
0x41F39F: cmp     byte ptr [esp+14h+arg_0], 0
0x41F3A4: jz      short loc_41F3F2
0x41F3A6: test    al, al
0x41F3A8: jnz     short loc_41F3FF
0x41F3AA: push    0Ch; Size
0x41F3AC: call    FormHeapAlloc
0x41F3B1: add     esp, 4
0x41F3B4: mov     [esp+14h+arg_0], eax
0x41F3B8: test    eax, eax
0x41F3BA: mov     [esp+14h+var_4], 0
0x41F3C2: jz      short loc_41F3CD
0x41F3C4: mov     ecx, eax
0x41F3C6: call    sub_42A050
0x41F3CB: jmp     short loc_41F3CF
0x41F3CD: xor     eax, eax
0x41F3CF: push    eax; BSExtraData *
0x41F3D0: mov     ecx, esi; ExtraDataList *
0x41F3D2: mov     [esp+18h+var_4], 0FFFFFFFFh
0x41F3DA: call    BaseExtraList_AddExtra
0x41F3DF: mov     ecx, [esp+14h+var_C]
0x41F3E3: mov     large fs:0, ecx
0x41F3EA: pop     ecx
0x41F3EB: pop     esi
0x41F3EC: add     esp, 0Ch
0x41F3EF: retn    4
0x41F3F2: test    al, al
0x41F3F4: jz      short loc_41F3FF
0x41F3F6: push    47h ; 'G'
0x41F3F8: mov     ecx, esi
0x41F3FA: call    BaseExtraList_RemoveExtraByType
0x41F3FF: mov     ecx, [esp+14h+var_C]
0x41F403: mov     large fs:0, ecx
0x41F40A: pop     ecx
0x41F40B: pop     esi
0x41F40C: add     esp, 0Ch
0x41F40F: retn    4
