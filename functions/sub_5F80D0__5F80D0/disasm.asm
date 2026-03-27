0x5F80D0: push    0FFFFFFFFh
0x5F80D2: push    offset SEH_8C8970
0x5F80D7: mov     eax, large fs:0
0x5F80DD: push    eax
0x5F80DE: push    ecx
0x5F80DF: push    esi
0x5F80E0: push    edi
0x5F80E1: mov     eax, ds:0B30AACh
0x5F80E6: xor     eax, esp
0x5F80E8: push    eax
0x5F80E9: lea     eax, [esp+1Ch+var_C]
0x5F80ED: mov     large fs:0, eax
0x5F80F3: mov     edi, ecx
0x5F80F5: mov     ecx, [edi+58h]
0x5F80F8: mov     eax, [ecx]
0x5F80FA: mov     edx, [eax+8]
0x5F80FD: call    edx
0x5F80FF: cmp     eax, 2
0x5F8102: jge     short loc_5F815A
0x5F8104: push    3Ch ; '<'; Size
0x5F8106: call    FormHeapAlloc
0x5F810B: add     esp, 4
0x5F810E: mov     [esp+1Ch+var_10], eax
0x5F8112: xor     esi, esi
0x5F8114: cmp     eax, esi
0x5F8116: mov     [esp+1Ch+var_4], esi
0x5F811A: jz      short loc_5F8125
0x5F811C: mov     ecx, eax; this
0x5F811E: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x5F8123: mov     esi, eax
0x5F8125: push    1Eh
0x5F8127: mov     ecx, esi
0x5F8129: mov     [esp+20h+var_4], 0FFFFFFFFh
0x5F8131: call    TESPackage_SetType?
0x5F8136: or      dword ptr [esi+1Ch], 4
0x5F813A: mov     ecx, esi
0x5F813C: call    sub_5672A0
0x5F8141: push    1; a4
0x5F8143: push    1; a3
0x5F8145: push    esi; a2
0x5F8146: mov     ecx, edi; this
0x5F8148: call    Actor_AddPackage?
0x5F814D: mov     ecx, [edi+58h]
0x5F8150: mov     eax, [ecx]
0x5F8152: mov     edx, [eax+314h]
0x5F8158: call    edx
0x5F815A: mov     ecx, [esp+1Ch+var_C]
0x5F815E: mov     large fs:0, ecx
0x5F8165: pop     ecx
0x5F8166: pop     edi
0x5F8167: pop     esi
0x5F8168: add     esp, 10h
0x5F816B: retn
