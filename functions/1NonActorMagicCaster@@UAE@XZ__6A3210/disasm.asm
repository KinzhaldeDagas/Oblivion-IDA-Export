0x6A3210: push    0FFFFFFFFh
0x6A3212: push    offset ??1NonActorMagicCaster@@UAE@XZ_SEH
0x6A3217: mov     eax, large fs:0
0x6A321D: push    eax
0x6A321E: sub     esp, 8
0x6A3221: push    esi
0x6A3222: push    edi
0x6A3223: mov     eax, ds:0B30AACh
0x6A3228: xor     eax, esp
0x6A322A: push    eax
0x6A322B: lea     eax, [esp+20h+var_C]
0x6A322F: mov     large fs:0, eax
0x6A3235: mov     esi, ecx
0x6A3237: mov     [esp+20h+var_10], esi
0x6A323B: lea     edi, [esi+0Ch]
0x6A323E: mov     dword ptr [esi], offset ??_7NonActorMagicCaster@@6BNonActorMagicCaster@@@; const NonActorMagicCaster::`vftable'{for `NonActorMagicCaster'}
0x6A3244: mov     dword ptr [edi], offset ??_7NonActorMagicCaster@@6BMagicCaster@@@; const NonActorMagicCaster::`vftable'{for `MagicCaster'}
0x6A324A: mov     eax, ds:0B33A98h
0x6A324F: mov     al, [eax+0CD4h]
0x6A3255: test    al, al
0x6A3257: mov     [esp+20h+var_4], 1
0x6A325F: jnz     short loc_6A3274
0x6A3261: mov     ecx, [esi+20h]; this
0x6A3264: test    ecx, ecx
0x6A3266: jz      short loc_6A326D
0x6A3268: call    TESOjectREFR_stuffsWithPArentCell
0x6A326D: mov     ecx, esi
0x6A326F: call    sub_6A3060
0x6A3274: mov     ecx, edi
0x6A3276: mov     byte ptr [esp+20h+var_4], 0
0x6A327B: call    MagicCaster_destr
0x6A3280: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x6A3286: mov     ecx, [esp+20h+var_C]
0x6A328A: mov     large fs:0, ecx
0x6A3291: pop     ecx
0x6A3292: pop     edi
0x6A3293: pop     esi
0x6A3294: add     esp, 14h
0x6A3297: retn
0x9C6080: mov     ecx, [ebp-10h]; this
0x9C6083: jmp     ??1BSExtraData@@UAE@XZ; BSExtraData::~BSExtraData(void)
0x9C6088: cmp     dword ptr [ebp-10h], 0
0x9C608C: jz      loc_9C60A0
0x9C6092: mov     eax, [ebp-10h]
0x9C6095: add     eax, 0Ch
0x9C6098: mov     [ebp-14h], eax
0x9C609B: jmp     loc_9C60A7
0x9C60A0: mov     dword ptr [ebp-14h], 0
0x9C60A7: mov     ecx, [ebp-14h]
0x9C60AA: jmp     MagicCaster_destr
0x9C60AF: mov     edx, [esp+arg_4]
0x9C60B3: lea     eax, [edx-10h]
0x9C60B6: mov     ecx, [edx-14h]
0x9C60B9: xor     ecx, eax
0x9C60BB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C60C0: mov     eax, offset stru_AEE6B0
0x9C60C5: jmp     ___CxxFrameHandler3
