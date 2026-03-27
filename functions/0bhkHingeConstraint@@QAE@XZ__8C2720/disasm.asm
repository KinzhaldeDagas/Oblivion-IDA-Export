0x8C2720: push    0FFFFFFFFh
0x8C2722: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8C2727: mov     eax, large fs:0
0x8C272D: push    eax
0x8C272E: push    ecx
0x8C272F: push    ebp
0x8C2730: push    esi
0x8C2731: push    edi
0x8C2732: mov     eax, ds:0B30AACh
0x8C2737: xor     eax, esp
0x8C2739: push    eax
0x8C273A: lea     eax, [esp+20h+var_C]
0x8C273E: mov     large fs:0, eax
0x8C2744: mov     edi, ecx
0x8C2746: push    offset stru_BA7C80; lpCriticalSection
0x8C274B: call    dword ptr ds:0A2806Ch
0x8C2751: call    dword ptr ds:0A2808Ch
0x8C2757: mov     ebp, 1
0x8C275C: add     ds:0BA7CFCh, ebp
0x8C2762: push    10h; Size
0x8C2764: mov     ds:0BA7CF8h, eax
0x8C2769: call    FormHeapAlloc
0x8C276E: mov     esi, eax
0x8C2770: add     esp, 4
0x8C2773: mov     [esp+20h+var_10], esi
0x8C2777: test    esi, esi
0x8C2779: mov     [esp+20h+var_4], 0
0x8C2781: jz      short loc_8C27AB
0x8C2783: mov     ecx, esi; this
0x8C2785: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C278A: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C2790: mov     dword ptr [esi+0Ch], 0
0x8C2797: add     ds:0BA7D4Ch, ebp
0x8C279D: mov     dword ptr [esi], offset ??_7bhkHingeConstraint@@6B@; const bhkHingeConstraint::`vftable'
0x8C27A3: add     ds:0BA80DCh, ebp
0x8C27A9: jmp     short loc_8C27AD
0x8C27AB: xor     esi, esi
0x8C27AD: mov     eax, [esp+20h+arg_0]
0x8C27B1: push    eax
0x8C27B2: push    esi
0x8C27B3: mov     ecx, edi
0x8C27B5: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8C27BD: call    sub_8A0860
0x8C27C2: sub     ds:0BA7CFCh, ebp
0x8C27C8: jnz     short loc_8C27D4
0x8C27CA: mov     dword ptr ds:0BA7CF8h, 0
0x8C27D4: push    offset stru_BA7C80; lpCriticalSection
0x8C27D9: call    dword ptr ds:0A28074h
0x8C27DF: mov     eax, esi
0x8C27E1: mov     ecx, [esp+20h+var_C]
0x8C27E5: mov     large fs:0, ecx
0x8C27EC: pop     ecx
0x8C27ED: pop     edi
0x8C27EE: pop     esi
0x8C27EF: pop     ebp
0x8C27F0: add     esp, 10h
0x8C27F3: retn    4
