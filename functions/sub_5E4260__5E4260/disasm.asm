0x5E4260: push    ecx
0x5E4261: push    ebx
0x5E4262: mov     ebx, [esp+8+arg_0]
0x5E4266: test    ebx, ebx
0x5E4268: push    esi
0x5E4269: mov     esi, ecx
0x5E426B: jnz     short loc_5E4275
0x5E426D: pop     esi
0x5E426E: mov     al, 1
0x5E4270: pop     ebx
0x5E4271: pop     ecx
0x5E4272: retn    14h
0x5E4275: push    ebp
0x5E4276: push    edi
0x5E4277: lea     edi, [esi+44h]
0x5E427A: mov     ecx, edi; this
0x5E427C: mov     byte ptr [esp+14h+arg_0], 0
0x5E4281: mov     [esp+14h+var_1], 1
0x5E4286: call    ExtraDataList_GetContainerChanges
0x5E428B: mov     ebp, eax
0x5E428D: test    ebp, ebp
0x5E428F: jz      short loc_5E42DF
0x5E4291: mov     ecx, ds:0B33B00h
0x5E4297: call    sub_45A500
0x5E429C: test    al, al
0x5E429E: jnz     short loc_5E42B9
0x5E42A0: mov     eax, [esp+14h+arg_8]
0x5E42A4: push    8
0x5E42A6: push    eax
0x5E42A7: push    esi
0x5E42A8: call    Script_AddEventToExtraScript
0x5E42AD: push    8
0x5E42AF: push    edi
0x5E42B0: push    ebx
0x5E42B1: call    Script_AddEventToExtraScript
0x5E42B6: add     esp, 18h
0x5E42B9: mov     ecx, [esp+14h+arg_10]
0x5E42BD: mov     edx, [esp+14h+arg_C]
0x5E42C1: mov     eax, [esp+14h+arg_8]
0x5E42C5: push    ecx
0x5E42C6: mov     ecx, [esp+18h+arg_4]
0x5E42CA: push    edx
0x5E42CB: push    eax
0x5E42CC: push    esi
0x5E42CD: push    ecx
0x5E42CE: push    ebx
0x5E42CF: lea     edx, [esp+2Ch+var_1]
0x5E42D3: push    edx
0x5E42D4: mov     ecx, ebp
0x5E42D6: call    ContainerExtraData_UnequipItem
0x5E42DB: mov     byte ptr [esp+14h+arg_0], al
0x5E42DF: push    0; int
0x5E42E1: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5E42E6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5E42EB: push    0; int
0x5E42ED: push    ebx; void *
0x5E42EE: call    OblivionDynamicCast
0x5E42F3: add     esp, 14h
0x5E42F6: test    eax, eax
0x5E42F8: pop     edi
0x5E42F9: pop     ebp
0x5E42FA: jz      short loc_5E4301
0x5E42FC: mov     eax, [eax+4]
0x5E42FF: jmp     short loc_5E4303
0x5E4301: xor     eax, eax
0x5E4303: test    eax, eax
0x5E4305: jz      short loc_5E4320
0x5E4307: push    1
0x5E4309: lea     ecx, [eax+18h]
0x5E430C: call    sub_419F10
0x5E4311: mov     ecx, ds:0B333C4h
0x5E4317: cmp     esi, ecx
0x5E4319: jnz     short loc_5E4320
0x5E431B: call    sub_662DA0
0x5E4320: mov     al, byte ptr [esp+0Ch+arg_0]
0x5E4324: pop     esi
0x5E4325: pop     ebx
0x5E4326: pop     ecx
0x5E4327: retn    14h
