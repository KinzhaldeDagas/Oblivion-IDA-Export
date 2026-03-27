0x8C0650: push    0FFFFFFFFh
0x8C0652: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8C0657: mov     eax, large fs:0
0x8C065D: push    eax
0x8C065E: push    ecx
0x8C065F: push    ebp
0x8C0660: push    esi
0x8C0661: push    edi
0x8C0662: mov     eax, ds:0B30AACh
0x8C0667: xor     eax, esp
0x8C0669: push    eax
0x8C066A: lea     eax, [esp+20h+var_C]
0x8C066E: mov     large fs:0, eax
0x8C0674: mov     edi, ecx
0x8C0676: push    offset stru_BA7C80; lpCriticalSection
0x8C067B: call    dword ptr ds:0A2806Ch
0x8C0681: call    dword ptr ds:0A2808Ch
0x8C0687: mov     ebp, 1
0x8C068C: add     ds:0BA7CFCh, ebp
0x8C0692: push    10h; Size
0x8C0694: mov     ds:0BA7CF8h, eax
0x8C0699: call    FormHeapAlloc
0x8C069E: mov     esi, eax
0x8C06A0: add     esp, 4
0x8C06A3: mov     [esp+20h+var_10], esi
0x8C06A7: test    esi, esi
0x8C06A9: mov     [esp+20h+var_4], 0
0x8C06B1: jz      short loc_8C06DB
0x8C06B3: mov     ecx, esi; this
0x8C06B5: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C06BA: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C06C0: mov     dword ptr [esi+0Ch], 0
0x8C06C7: add     ds:0BA7D4Ch, ebp
0x8C06CD: mov     dword ptr [esi], offset ??_7bhkStiffSpringConstraint@@6B@; const bhkStiffSpringConstraint::`vftable'
0x8C06D3: add     ds:0BA80ACh, ebp
0x8C06D9: jmp     short loc_8C06DD
0x8C06DB: xor     esi, esi
0x8C06DD: mov     eax, [esp+20h+arg_0]
0x8C06E1: push    eax
0x8C06E2: push    esi
0x8C06E3: mov     ecx, edi
0x8C06E5: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8C06ED: call    sub_8A0860
0x8C06F2: sub     ds:0BA7CFCh, ebp
0x8C06F8: jnz     short loc_8C0704
0x8C06FA: mov     dword ptr ds:0BA7CF8h, 0
0x8C0704: push    offset stru_BA7C80; lpCriticalSection
0x8C0709: call    dword ptr ds:0A28074h
0x8C070F: mov     eax, esi
0x8C0711: mov     ecx, [esp+20h+var_C]
0x8C0715: mov     large fs:0, ecx
0x8C071C: pop     ecx
0x8C071D: pop     edi
0x8C071E: pop     esi
0x8C071F: pop     ebp
0x8C0720: add     esp, 10h
0x8C0723: retn    4
