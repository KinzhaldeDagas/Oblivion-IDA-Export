0x7174B0: push    0FFFFFFFFh
0x7174B2: push    offset SEH_8C62B0
0x7174B7: mov     eax, large fs:0
0x7174BD: push    eax
0x7174BE: push    ecx
0x7174BF: push    esi
0x7174C0: mov     eax, ds:0B30AACh
0x7174C5: xor     eax, esp
0x7174C7: push    eax
0x7174C8: lea     eax, [esp+18h+var_C]
0x7174CC: mov     large fs:0, eax
0x7174D2: mov     esi, ecx
0x7174D4: push    58h ; 'X'; Size
0x7174D6: call    FormHeapAlloc
0x7174DB: add     esp, 4
0x7174DE: mov     [esp+18h+var_10], eax
0x7174E2: test    eax, eax
0x7174E4: mov     [esp+18h+var_4], 0
0x7174EC: jz      short loc_717524
0x7174EE: mov     ecx, [esp+18h+arg_20]
0x7174F2: mov     edx, [esp+18h+arg_1C]
0x7174F6: push    ecx
0x7174F7: mov     ecx, [esp+1Ch+arg_18]
0x7174FB: push    edx
0x7174FC: mov     edx, [esp+20h+arg_14]
0x717500: push    ecx
0x717501: mov     ecx, [esp+24h+arg_10]
0x717505: push    edx
0x717506: mov     edx, [esp+28h+arg_C]
0x71750A: push    ecx
0x71750B: mov     ecx, [esp+2Ch+arg_8]
0x71750F: push    edx
0x717510: mov     edx, [esp+30h+arg_4]
0x717514: push    ecx
0x717515: mov     ecx, [esp+34h+arg_0]
0x717519: push    edx
0x71751A: push    ecx
0x71751B: mov     ecx, eax
0x71751D: call    sub_71FB40
0x717522: jmp     short loc_717526
0x717524: xor     eax, eax
0x717526: push    eax
0x717527: mov     ecx, esi
0x717529: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x717531: call    NiTriBasedGeom__NiTriBasedGeom
0x717536: mov     dword ptr [esi], offset ??_7NiTriShape@@6B@; const NiTriShape::`vftable'
0x71753C: mov     eax, esi
0x71753E: mov     ecx, [esp+18h+var_C]
0x717542: mov     large fs:0, ecx
0x717549: pop     ecx
0x71754A: pop     esi
0x71754B: add     esp, 10h
0x71754E: retn    24h ; '$'
