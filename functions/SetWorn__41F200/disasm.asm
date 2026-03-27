0x41F200: push    0FFFFFFFFh
0x41F202: push    offset SetWorn_SEH
0x41F207: mov     eax, large fs:0
0x41F20D: push    eax
0x41F20E: push    esi
0x41F20F: mov     eax, ___security_cookie
0x41F214: xor     eax, esp
0x41F216: push    eax
0x41F217: lea     eax, [esp+14h+var_C]
0x41F21B: mov     large fs:0, eax
0x41F221: mov     esi, ecx
0x41F223: movzx   ecx, byte ptr [esi+0Bh]
0x41F227: xor     al, al
0x41F229: cmp     byte ptr [esp+14h+arg_4], al
0x41F22D: jz      short loc_41F270
0x41F22F: test    cl, 10h
0x41F232: jz      short loc_41F236
0x41F234: mov     al, 1
0x41F236: cmp     byte ptr [esp+14h+arg_0], 0
0x41F23B: jz      short loc_41F268
0x41F23D: test    al, al
0x41F23F: jnz     loc_41F2D7
0x41F245: push    0Ch; Size
0x41F247: call    FormHeapAlloc
0x41F24C: add     esp, 4
0x41F24F: mov     [esp+14h+arg_0], eax
0x41F253: test    eax, eax
0x41F255: mov     [esp+14h+var_4], 0
0x41F25D: jz      short loc_41F2A5
0x41F25F: mov     ecx, eax
0x41F261: call    sub_42A030
0x41F266: jmp     short loc_41F2A7
0x41F268: test    al, al
0x41F26A: jz      short loc_41F2D7
0x41F26C: push    1Ch
0x41F26E: jmp     short loc_41F2D0
0x41F270: test    cl, 8
0x41F273: jz      short loc_41F277
0x41F275: mov     al, 1
0x41F277: cmp     byte ptr [esp+14h+arg_0], 0
0x41F27C: jz      short loc_41F2CA
0x41F27E: test    al, al
0x41F280: jnz     short loc_41F2D7
0x41F282: push    0Ch; Size
0x41F284: call    FormHeapAlloc
0x41F289: add     esp, 4
0x41F28C: mov     [esp+14h+arg_0], eax
0x41F290: test    eax, eax
0x41F292: mov     [esp+14h+var_4], 1
0x41F29A: jz      short loc_41F2A5
0x41F29C: mov     ecx, eax
0x41F29E: call    sub_429FF0
0x41F2A3: jmp     short loc_41F2A7
0x41F2A5: xor     eax, eax
0x41F2A7: push    eax; BSExtraData *
0x41F2A8: mov     ecx, esi; ExtraDataList *
0x41F2AA: mov     [esp+18h+var_4], 0FFFFFFFFh
0x41F2B2: call    BaseExtraList_AddExtra
0x41F2B7: mov     ecx, [esp+14h+var_C]
0x41F2BB: mov     large fs:0, ecx
0x41F2C2: pop     ecx
0x41F2C3: pop     esi
0x41F2C4: add     esp, 0Ch
0x41F2C7: retn    8
0x41F2CA: test    al, al
0x41F2CC: jz      short loc_41F2D7
0x41F2CE: push    1Bh
0x41F2D0: mov     ecx, esi
0x41F2D2: call    BaseExtraList_RemoveExtraByType
0x41F2D7: mov     ecx, [esp+14h+var_C]
0x41F2DB: mov     large fs:0, ecx
0x41F2E2: pop     ecx
0x41F2E3: pop     esi
0x41F2E4: add     esp, 0Ch
0x41F2E7: retn    8
