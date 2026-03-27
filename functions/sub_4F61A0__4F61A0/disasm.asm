0x4F61A0: fldz
0x4F61A2: push    ebx
0x4F61A3: push    ebp
0x4F61A4: mov     ebp, [esp+8+arg_C]
0x4F61A8: push    edi
0x4F61A9: fstp    qword ptr [ebp+0]
0x4F61AC: mov     edi, [esp+0Ch+arg_0]
0x4F61B0: test    edi, edi
0x4F61B2: jz      loc_4F6293
0x4F61B8: mov     eax, [edi]
0x4F61BA: mov     edx, [eax+190h]
0x4F61C0: mov     ecx, edi
0x4F61C2: call    edx
0x4F61C4: test    al, al
0x4F61C6: jz      loc_4F6293
0x4F61CC: mov     ebx, [esp+0Ch+arg_4]
0x4F61D0: test    ebx, ebx
0x4F61D2: jz      loc_4F6293
0x4F61D8: push    esi
0x4F61D9: push    1; a2
0x4F61DB: mov     ecx, edi; this
0x4F61DD: call    Actor_GetActorBaseForm
0x4F61E2: mov     esi, eax
0x4F61E4: cmp     dword ptr [esi+40h], 0
0x4F61E8: jnz     short loc_4F61FB
0x4F61EA: cmp     dword ptr [esi+3Ch], 0
0x4F61EE: jnz     short loc_4F61FB
0x4F61F0: push    0; a2
0x4F61F2: mov     ecx, edi; this
0x4F61F4: call    Actor_GetActorBaseForm
0x4F61F9: mov     esi, eax
0x4F61FB: push    1; a2
0x4F61FD: mov     ecx, ebx; this
0x4F61FF: call    Actor_GetActorBaseForm
0x4F6204: mov     edi, eax
0x4F6206: cmp     dword ptr [edi+40h], 0
0x4F620A: jnz     short loc_4F621D
0x4F620C: cmp     dword ptr [edi+3Ch], 0
0x4F6210: jnz     short loc_4F621D
0x4F6212: push    0; a2
0x4F6214: mov     ecx, ebx; this
0x4F6216: call    Actor_GetActorBaseForm
0x4F621B: mov     edi, eax
0x4F621D: test    esi, esi
0x4F621F: jz      short loc_4F6273
0x4F6221: test    edi, edi
0x4F6223: jz      short loc_4F6273
0x4F6225: add     esi, 3Ch ; '<'
0x4F6228: jz      short loc_4F6273
0x4F622A: lea     ebx, [ebx+0]
0x4F6230: cmp     dword ptr [esi+4], 0
0x4F6234: jnz     short loc_4F623B
0x4F6236: cmp     dword ptr [esi], 0
0x4F6239: jz      short loc_4F6273
0x4F623B: fld1
0x4F623D: fcomp   qword ptr [ebp+0]
0x4F6240: fnstsw  ax
0x4F6242: test    ah, 44h
0x4F6245: jnp     short loc_4F6273
0x4F6247: mov     eax, [esi]
0x4F6249: mov     eax, [eax]
0x4F624B: test    eax, eax
0x4F624D: jz      short loc_4F626C
0x4F624F: cmp     ebx, ds:0B333C4h
0x4F6255: setz    cl
0x4F6258: push    ecx
0x4F6259: push    eax
0x4F625A: lea     ecx, [edi+24h]
0x4F625D: call    TESActorBaseData_GetFactionRank
0x4F6262: cmp     eax, 0FFFFFFFFh
0x4F6265: jz      short loc_4F626C
0x4F6267: fld1
0x4F6269: fstp    qword ptr [ebp+0]
0x4F626C: mov     esi, [esi+4]
0x4F626F: test    esi, esi
0x4F6271: jnz     short loc_4F6230
0x4F6273: cmp     byte ptr ds:0B361ACh, 0
0x4F627A: pop     esi
0x4F627B: jz      short loc_4F6293
0x4F627D: fld     qword ptr [ebp+0]
0x4F6280: sub     esp, 8
0x4F6283: fstp    [esp+14h+var_14]
0x4F6286: push    offset aSamefaction0_2; "SameFaction >> %0.2f"
0x4F628B: call    Interface_ConsolePrint
0x4F6290: add     esp, 0Ch
0x4F6293: pop     edi
0x4F6294: pop     ebp
0x4F6295: mov     al, 1
0x4F6297: pop     ebx
0x4F6298: retn
