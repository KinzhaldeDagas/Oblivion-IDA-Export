0x5FF001: test    ebx, ebx
0x5FF003: jz      short loc_5FF009
0x5FF005: mov     esi, ebx
0x5FF007: jmp     short loc_5FF01C
0x5FF009: fld     [esp+arg_34]
0x5FF00D: push    ecx
0x5FF00E: fstp    [esp+4+var_4]; float
0x5FF011: push    edi; int
0x5FF012: call    GetActorWithinReach??
0x5FF017: add     esp, 8
0x5FF01A: mov     esi, eax
0x5FF01C: test    esi, esi
0x5FF01E: jz      short loc_5FF053
0x5FF020: lea     ecx, [esi+44h]
0x5FF023: call    BaseExtraList_HasGhost
0x5FF028: test    al, al
0x5FF02A: jz      short loc_5FF089
0x5FF02C: mov     ecx, [edi+58h]
0x5FF02F: test    ecx, ecx
0x5FF031: jz      loc_5FEC6B
0x5FF037: mov     edx, [ecx]
0x5FF039: mov     eax, [edx+0ECh]
0x5FF03F: push    1
0x5FF041: call    eax
0x5FF043: test    eax, eax
0x5FF045: jz      loc_5FEC6B
0x5FF04B: mov     eax, [eax+8]
0x5FF04E: jmp     loc_5FEC6D
0x5FF053: cmp     edi, ds:0B333C4h
0x5FF059: jnz     short loc_5FF06A
0x5FF05B: mov     ecx, edi
0x5FF05D: call    sub_5F9620
0x5FF062: test    al, al
0x5FF064: jnz     Actor_AttackHandling___Done
0x5FF06A: cmp     [esp+arg_20], 0
0x5FF06F: jnz     Actor_AttackHandling___Done
0x5FF075: test    ebp, ebp
0x5FF077: jz      loc_5FEC7A
0x5FF07D: movsx   eax, byte ptr [ebp+90h]
0x5FF084: jmp     loc_5FEC7D
0x5FF089: mov     edx, [esi]
0x5FF08B: mov     eax, [edx+198h]
0x5FF091: push    0
0x5FF093: mov     ecx, esi
0x5FF095: call    eax
0x5FF097: test    al, al
0x5FF099: jnz     Actor_AttackHandling___Done
0x5FF09F: cmp     [esp+arg_20], 0
0x5FF0A4: jnz     short Actor_AttackHandling___???Check
0x5FF0A6: mov     edx, [edi]
0x5FF0A8: mov     eax, [edx+330h]
0x5FF0AE: mov     ecx, edi
0x5FF0B0: call    eax
0x5FF0B2: test    eax, eax
0x5FF0B4: jz      short Actor_AttackHandling___???Check
0x5FF0B6: mov     edx, [edi]
0x5FF0B8: mov     eax, [edx+330h]
0x5FF0BE: push    esi
0x5FF0BF: mov     ecx, edi
0x5FF0C1: call    eax
0x5FF0C3: mov     ecx, eax
0x5FF0C5: call    CombatController_TransmitDisease?
