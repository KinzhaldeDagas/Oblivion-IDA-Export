0x65B5C0: sub     esp, 10h
0x65B5C3: push    ebx
0x65B5C4: push    ebp
0x65B5C5: push    edi
0x65B5C6: mov     ebp, ecx
0x65B5C8: call    MobileObject_GetCharProxy
0x65B5CD: mov     edi, eax
0x65B5CF: xor     ebx, ebx
0x65B5D1: cmp     edi, ebx
0x65B5D3: jz      loc_65B747
0x65B5D9: mov     eax, [ebp+0]
0x65B5DC: mov     edx, [eax+190h]
0x65B5E2: mov     ecx, ebp
0x65B5E4: call    edx
0x65B5E6: neg     al
0x65B5E8: sbb     eax, eax
0x65B5EA: and     eax, ebp
0x65B5EC: mov     ecx, eax; this
0x65B5EE: jz      short loc_65B5FF
0x65B5F0: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x65B5F5: cmp     eax, 2
0x65B5F8: mov     [esp+1Ch+var_D], 1
0x65B5FD: jz      short loc_65B603
0x65B5FF: mov     [esp+1Ch+var_D], bl
0x65B603: push    esi
0x65B604: mov     ecx, ebp; this
0x65B606: call    TESObjectREFR_GetParentCell
0x65B60B: mov     esi, eax
0x65B60D: cmp     esi, ebx
0x65B60F: jz      short loc_65B635
0x65B611: mov     ecx, esi; this
0x65B613: call    TESObjectCELL_IsInterior
0x65B618: test    al, al
0x65B61A: jz      short loc_65B62A
0x65B61C: lea     ecx, [esi+28h]
0x65B61F: call    sub_424180
0x65B624: mov     [esp+20h+var_C], eax
0x65B628: jmp     short loc_65B639
0x65B62A: mov     eax, ds:0B35C24h
0x65B62F: mov     [esp+20h+var_C], eax
0x65B633: jmp     short loc_65B639
0x65B635: mov     [esp+20h+var_C], ebx
0x65B639: mov     ecx, [edi+8]
0x65B63C: cmp     ecx, ebx
0x65B63E: jz      short loc_65B647
0x65B640: call    sub_8AC0C0
0x65B645: jmp     short loc_65B649
0x65B647: xor     eax, eax
0x65B649: mov     eax, [eax+8]
0x65B64C: cmp     eax, ebx
0x65B64E: jz      short loc_65B65C
0x65B650: mov     ecx, [eax+2B0h]
0x65B656: mov     [esp+20h+var_8], ecx
0x65B65A: jmp     short loc_65B660
0x65B65C: mov     [esp+20h+var_8], ebx
0x65B660: mov     edx, [esp+20h+var_8]
0x65B664: cmp     [esp+20h+var_C], edx
0x65B668: jz      short loc_65B6B0
0x65B66A: cmp     esi, ebx
0x65B66C: mov     [edi+2A0h], ebx
0x65B672: jz      short loc_65B67D
0x65B674: mov     ecx, esi
0x65B676: call    TESObjectCELL_GetWaterHeight
0x65B67B: jmp     short loc_65B67F
0x65B67D: fldz
0x65B67F: cmp     [esp+20h+var_D], bl
0x65B683: fstp    [esp+20h+var_4]
0x65B687: fld     [esp+20h+var_4]
0x65B68B: fmul    qword ptr ds:0A39088h
0x65B691: fstp    dword ptr [edi+318h]
0x65B697: jnz     short loc_65B6A5
0x65B699: mov     eax, [esp+20h+var_C]
0x65B69D: push    eax
0x65B69E: mov     ecx, edi
0x65B6A0: call    sub_895060
0x65B6A5: lea     ecx, [ebp+2Ch]
0x65B6A8: push    ecx; a2
0x65B6A9: mov     ecx, edi; this
0x65B6AB: call    sub_452A10
0x65B6B0: mov     ecx, [edi+364h]
0x65B6B6: xor     bl, bl
0x65B6B8: test    ecx, ecx
0x65B6BA: jz      short loc_65B6C5
0x65B6BC: push    0
0x65B6BE: call    sub_89F6B0
0x65B6C3: jmp     short loc_65B6C7
0x65B6C5: xor     eax, eax
0x65B6C7: mov     esi, [ebp+3Ch]
0x65B6CA: cmp     eax, esi
0x65B6CC: jz      short loc_65B6E0
0x65B6CE: mov     ecx, [edi+364h]
0x65B6D4: test    ecx, ecx
0x65B6D6: jz      short loc_65B6E0
0x65B6D8: push    0
0x65B6DA: push    esi
0x65B6DB: call    sub_89F650
0x65B6E0: mov     ebp, [esp+20h+var_C]
0x65B6E4: mov     eax, [esp+20h+var_8]
0x65B6E8: cmp     eax, ebp
0x65B6EA: jz      short loc_65B6FF
0x65B6EC: test    eax, eax
0x65B6EE: jz      short loc_65B6FD
0x65B6F0: push    0
0x65B6F2: push    1
0x65B6F4: push    esi
0x65B6F5: call    sub_88CD50
0x65B6FA: add     esp, 0Ch
0x65B6FD: mov     bl, 1
0x65B6FF: test    ebp, ebp
0x65B701: jz      short loc_65B746
0x65B703: test    bl, bl
0x65B705: jz      short loc_65B739
0x65B707: lea     edx, [esp+20h+var_4]
0x65B70B: push    edx
0x65B70C: mov     ecx, edi
0x65B70E: call    sub_57E270
0x65B713: mov     ecx, [esp+20h+var_4]
0x65B717: mov     eax, [ebp+0]
0x65B71A: mov     edx, [eax+90h]
0x65B720: push    0
0x65B722: shr     ecx, 10h
0x65B725: push    ecx
0x65B726: push    0
0x65B728: push    1
0x65B72A: push    esi
0x65B72B: mov     ecx, ebp
0x65B72D: call    edx
0x65B72F: pop     esi
0x65B730: pop     edi
0x65B731: pop     ebp
0x65B732: pop     ebx
0x65B733: add     esp, 10h
0x65B736: retn    4
0x65B739: push    0
0x65B73B: push    1
0x65B73D: push    esi
0x65B73E: call    sub_88CDC0
0x65B743: add     esp, 0Ch
0x65B746: pop     esi
0x65B747: pop     edi
0x65B748: pop     ebp
0x65B749: pop     ebx
0x65B74A: add     esp, 10h
0x65B74D: retn    4
