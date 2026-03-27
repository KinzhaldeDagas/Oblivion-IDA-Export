0x603160: push    ecx
0x603161: push    esi
0x603162: mov     esi, ecx
0x603164: cmp     esi, ds:0B333C4h
0x60316A: jz      loc_603311
0x603170: mov     ecx, [esi+58h]
0x603173: mov     eax, [ecx]
0x603175: mov     edx, [eax+0F0h]
0x60317B: push    ebx
0x60317C: push    ebp
0x60317D: push    edi
0x60317E: push    0
0x603180: call    edx
0x603182: mov     ecx, [esi+58h]
0x603185: mov     edi, eax
0x603187: mov     eax, [ecx]
0x603189: mov     edx, [eax+0F8h]
0x60318F: push    0
0x603191: call    edx
0x603193: mov     ecx, [esi+58h]
0x603196: mov     ebp, eax
0x603198: mov     eax, [ecx]
0x60319A: mov     edx, [eax+304h]
0x6031A0: xor     bl, bl
0x6031A2: call    edx
0x6031A4: mov     ecx, [esi+58h]
0x6031A7: mov     [esp+14h+var_1], al
0x6031AB: mov     eax, [ecx]
0x6031AD: mov     edx, [eax+0ECh]
0x6031B3: push    1
0x6031B5: call    edx
0x6031B7: test    eax, eax
0x6031B9: jz      short loc_6031D6
0x6031BB: mov     eax, [eax+8]
0x6031BE: mov     al, [eax+90h]
0x6031C4: cmp     al, 1
0x6031C6: jz      short loc_6031D4
0x6031C8: cmp     al, 2
0x6031CA: jle     short loc_6031D0
0x6031CC: cmp     al, 5
0x6031CE: jle     short loc_6031D4
0x6031D0: xor     bl, bl
0x6031D2: jmp     short loc_6031D6
0x6031D4: mov     bl, 1
0x6031D6: mov     ecx, esi
0x6031D8: call    sub_5E8B80
0x6031DD: test    al, al
0x6031DF: jz      loc_6032B4
0x6031E5: test    edi, edi
0x6031E7: jz      short loc_603240
0x6031E9: push    0
0x6031EB: mov     ecx, edi
0x6031ED: call    ContainerEntryExtraData_HasWorn
0x6031F2: test    al, al
0x6031F4: jnz     loc_60330E
0x6031FA: cmp     [esp+14h+var_1], al
0x6031FE: jz      short loc_603208
0x603200: test    bl, bl
0x603202: jnz     loc_60330E
0x603208: test    ebp, ebp
0x60320A: jz      short loc_603222
0x60320C: push    0
0x60320E: push    0
0x603210: push    0
0x603212: mov     ecx, ebp
0x603214: call    sub_4853B0
0x603219: push    0
0x60321B: mov     ecx, esi
0x60321D: call    sub_4DC8F0
0x603222: push    0
0x603224: push    0
0x603226: push    1
0x603228: mov     ecx, edi
0x60322A: call    sub_4853B0
0x60322F: mov     ecx, [edi+8]
0x603232: push    ecx
0x603233: mov     ecx, esi
0x603235: call    EquipLight
0x60323A: pop     edi
0x60323B: pop     ebp
0x60323C: pop     ebx
0x60323D: pop     esi
0x60323E: pop     ecx
0x60323F: retn
0x603240: cmp     [esp+14h+var_1], 0
0x603245: jz      short loc_60324F
0x603247: test    bl, bl
0x603249: jnz     loc_60330E
0x60324F: mov     ecx, esi
0x603251: call    sub_5E43B0
0x603256: mov     edi, eax
0x603258: test    edi, edi
0x60325A: jz      loc_60330E
0x603260: mov     ecx, [edi]
0x603262: xor     eax, eax
0x603264: test    ecx, ecx
0x603266: jz      short loc_60326A
0x603268: mov     eax, [ecx]
0x60326A: mov     edx, [edi+8]
0x60326D: push    0
0x60326F: push    1
0x603271: push    eax
0x603272: push    1
0x603274: push    edx
0x603275: mov     ecx, esi
0x603277: call    Actor_EquipItem
0x60327C: test    ebp, ebp
0x60327E: jz      short loc_603296
0x603280: push    0
0x603282: push    0
0x603284: push    0
0x603286: mov     ecx, ebp
0x603288: call    sub_4853B0
0x60328D: push    0
0x60328F: mov     ecx, esi
0x603291: call    sub_4DC8F0
0x603296: push    0
0x603298: push    0
0x60329A: push    1
0x60329C: mov     ecx, edi
0x60329E: call    sub_4853B0
0x6032A3: mov     eax, [edi+8]
0x6032A6: push    eax
0x6032A7: mov     ecx, esi
0x6032A9: call    EquipLight
0x6032AE: pop     edi
0x6032AF: pop     ebp
0x6032B0: pop     ebx
0x6032B1: pop     esi
0x6032B2: pop     ecx
0x6032B3: retn
0x6032B4: test    edi, edi
0x6032B6: jz      short loc_60330E
0x6032B8: push    0
0x6032BA: mov     ecx, edi
0x6032BC: call    ContainerEntryExtraData_HasWorn
0x6032C1: test    al, al
0x6032C3: jz      short loc_60330E
0x6032C5: push    0
0x6032C7: push    0
0x6032C9: push    0
0x6032CB: mov     ecx, edi
0x6032CD: call    sub_4853B0
0x6032D2: mov     ecx, esi
0x6032D4: call    UnequipLight
0x6032D9: test    ebp, ebp
0x6032DB: jz      short loc_6032F9
0x6032DD: test    bl, bl
0x6032DF: jnz     short loc_6032F9
0x6032E1: push    0
0x6032E3: push    0
0x6032E5: push    1
0x6032E7: mov     ecx, ebp
0x6032E9: call    sub_4853B0
0x6032EE: mov     ecx, [ebp+8]
0x6032F1: push    ecx
0x6032F2: mov     ecx, esi
0x6032F4: call    EquipShield
0x6032F9: mov     edx, [edi+8]
0x6032FC: push    0
0x6032FE: push    0
0x603300: push    0
0x603302: push    0
0x603304: push    1
0x603306: push    edx
0x603307: mov     ecx, esi
0x603309: call    Actor_UnequipItem
0x60330E: pop     edi
0x60330F: pop     ebp
0x603310: pop     ebx
0x603311: pop     esi
0x603312: pop     ecx
0x603313: retn
