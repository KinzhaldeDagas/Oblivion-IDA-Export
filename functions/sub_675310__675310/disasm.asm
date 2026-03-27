0x675310: push    ebx
0x675311: push    ebp
0x675312: lea     ebp, [ecx+18h]
0x675315: push    edi
0x675316: mov     ecx, ebp; this
0x675318: call    sub_7616D0
0x67531D: mov     edi, eax
0x67531F: xor     ebx, ebx
0x675321: test    edi, edi
0x675323: jz      short loc_675392
0x675325: push    esi
0x675326: cmp     dword ptr [edi+4], 0
0x67532A: jnz     short loc_675331
0x67532C: cmp     dword ptr [edi], 0
0x67532F: jz      short loc_675391
0x675331: mov     ecx, [edi]
0x675333: mov     eax, [ecx]
0x675335: mov     edx, [eax+190h]
0x67533B: call    edx
0x67533D: test    al, al
0x67533F: jz      short loc_67538D
0x675341: mov     esi, [edi]
0x675343: test    esi, esi
0x675345: jz      short loc_67538D
0x675347: lea     eax, [esi+44h]
0x67534A: push    eax
0x67534B: push    esi
0x67534C: call    sub_4F9EC0
0x675351: mov     ecx, [esi+8]
0x675354: shr     ecx, 5
0x675357: add     esp, 8
0x67535A: test    cl, 1
0x67535D: jnz     short loc_675396
0x67535F: mov     edx, [esi]
0x675361: mov     eax, [edx+170h]
0x675367: mov     ecx, esi
0x675369: call    eax
0x67536B: test    eax, eax
0x67536D: jz      short loc_675396
0x67536F: mov     edx, [esi]
0x675371: mov     eax, [edx+284h]
0x675377: push    8
0x675379: mov     ecx, esi
0x67537B: call    eax
0x67537D: test    eax, eax
0x67537F: jle     short loc_675396
0x675381: mov     ecx, esi; int
0x675383: call    sub_5ED860
0x675388: mov     ebx, edi
0x67538A: mov     edi, [edi+4]
0x67538D: test    edi, edi
0x67538F: jnz     short loc_675326
0x675391: pop     esi
0x675392: pop     edi
0x675393: pop     ebp
0x675394: pop     ebx
0x675395: retn
0x675396: mov     ecx, [esi+8]
0x675399: shr     ecx, 5
0x67539C: test    cl, 1
0x67539F: jnz     short loc_6753CC
0x6753A1: mov     edx, [esi]
0x6753A3: mov     eax, [edx+170h]
0x6753A9: mov     ecx, esi
0x6753AB: call    eax
0x6753AD: test    eax, eax
0x6753AF: jz      short loc_6753CC
0x6753B1: mov     edx, [esi]
0x6753B3: mov     eax, [edx+284h]
0x6753B9: push    8
0x6753BB: mov     ecx, esi
0x6753BD: call    eax
0x6753BF: test    eax, eax
0x6753C1: jg      short loc_6753CC
0x6753C3: push    2; newDeadState
0x6753C5: mov     ecx, esi; this
0x6753C7: call    Actor_HandleDeathSTate????
0x6753CC: cmp     dword ptr [esi+58h], 0
0x6753D0: jz      short loc_675388
0x6753D2: push    ebx
0x6753D3: push    esi
0x6753D4: mov     ecx, ebp
0x6753D6: call    sub_67B320
0x6753DB: test    ebx, ebx
0x6753DD: jz      short loc_6753E4
0x6753DF: mov     edi, [ebx+4]
0x6753E2: jmp     short loc_67538D
0x6753E4: mov     ecx, ebp; this
0x6753E6: call    sub_7616D0
0x6753EB: mov     edi, eax
0x6753ED: jmp     short loc_67538D
