0x608120: push    ecx
0x608121: fldz
0x608123: push    ebx
0x608124: push    ebp
0x608125: fstp    [esp+0Ch+var_4]
0x608129: push    esi
0x60812A: push    edi
0x60812B: push    1; a2
0x60812D: mov     ecx, offset ActorProcessManager_ptr; this
0x608132: xor     ebx, ebx
0x608134: call    sub_673A50
0x608139: mov     ecx, eax; this
0x60813B: call    sub_7616D0
0x608140: mov     esi, eax
0x608142: test    esi, esi
0x608144: mov     ebp, 2
0x608149: jz      short loc_6081B3
0x60814B: jmp     short loc_608150
0x60814D: align 10h
0x608150: cmp     dword ptr [esi+4], 0
0x608154: jnz     short loc_60815B
0x608156: cmp     dword ptr [esi], 0
0x608159: jz      short loc_6081B3
0x60815B: mov     edi, [esi]
0x60815D: test    edi, edi
0x60815F: jz      short loc_6081AC
0x608161: mov     eax, [edi]
0x608163: mov     edx, [eax+0E8h]
0x608169: mov     ecx, edi
0x60816B: call    edx
0x60816D: test    al, al
0x60816F: jz      short loc_6081AC
0x608171: push    0; int
0x608173: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x608178: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x60817D: push    0; int
0x60817F: push    edi; void *
0x608180: call    OblivionDynamicCast
0x608185: mov     ecx, eax
0x608187: add     esp, 14h
0x60818A: test    ecx, ecx
0x60818C: jz      short loc_6081AC
0x60818E: fld     dword ptr [ecx+68h]
0x608191: fld     [esp+14h+var_4]
0x608195: fcompp
0x608197: fnstsw  ax
0x608199: test    ah, 5
0x60819C: jp      short loc_6081AC
0x60819E: cmp     [ecx+60h], ebp
0x6081A1: jnz     short loc_6081AC
0x6081A3: fld     dword ptr [ecx+68h]
0x6081A6: mov     ebx, ecx
0x6081A8: fstp    [esp+14h+var_4]
0x6081AC: mov     esi, [esi+4]
0x6081AF: test    esi, esi
0x6081B1: jnz     short loc_608150
0x6081B3: push    0; a2
0x6081B5: mov     ecx, offset ActorProcessManager_ptr; this
0x6081BA: call    sub_673A50
0x6081BF: mov     ecx, eax; this
0x6081C1: call    sub_7616D0
0x6081C6: test    ebx, ebx
0x6081C8: mov     edi, eax
0x6081CA: jnz     short loc_60823B
0x6081CC: test    edi, edi
0x6081CE: jz      loc_608265
0x6081D4: cmp     dword ptr [edi+4], 0
0x6081D8: jnz     short loc_6081DF
0x6081DA: cmp     dword ptr [edi], 0
0x6081DD: jz      short loc_608237
0x6081DF: mov     esi, [edi]
0x6081E1: test    esi, esi
0x6081E3: jz      short loc_608230
0x6081E5: mov     eax, [esi]
0x6081E7: mov     edx, [eax+0E8h]
0x6081ED: mov     ecx, esi
0x6081EF: call    edx
0x6081F1: test    al, al
0x6081F3: jz      short loc_608230
0x6081F5: push    0; int
0x6081F7: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x6081FC: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x608201: push    0; int
0x608203: push    esi; void *
0x608204: call    OblivionDynamicCast
0x608209: mov     ecx, eax
0x60820B: add     esp, 14h
0x60820E: test    ecx, ecx
0x608210: jz      short loc_608230
0x608212: fld     dword ptr [ecx+68h]
0x608215: fld     [esp+14h+var_4]
0x608219: fcompp
0x60821B: fnstsw  ax
0x60821D: test    ah, 5
0x608220: jp      short loc_608230
0x608222: cmp     [ecx+60h], ebp
0x608225: jnz     short loc_608230
0x608227: fld     dword ptr [ecx+68h]
0x60822A: mov     ebx, ecx
0x60822C: fstp    [esp+14h+var_4]
0x608230: mov     edi, [edi+4]
0x608233: test    edi, edi
0x608235: jnz     short loc_6081D4
0x608237: test    ebx, ebx
0x608239: jz      short loc_608265
0x60823B: cmp     [esp+14h+arg_4], 0
0x608240: jz      short loc_60825E
0x608242: mov     eax, [ebx]
0x608244: mov     edx, [eax+8Ch]
0x60824A: push    1
0x60824C: mov     ecx, ebx
0x60824E: call    edx
0x608250: mov     eax, ds:0B3B7D0h
0x608255: pop     edi
0x608256: pop     esi
0x608257: pop     ebp
0x608258: add     eax, 0FFFFFFFFh
0x60825B: pop     ebx
0x60825C: pop     ecx
0x60825D: retn
0x60825E: mov     dword ptr [ebx+60h], 3
0x608265: mov     eax, ds:0B3B7D0h
0x60826A: pop     edi
0x60826B: pop     esi
0x60826C: pop     ebp
0x60826D: add     eax, 0FFFFFFFFh
0x608270: pop     ebx
0x608271: pop     ecx
0x608272: retn
