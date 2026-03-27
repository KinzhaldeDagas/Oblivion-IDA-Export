0x5F8000: push    0FFFFFFFFh
0x5F8002: push    offset SEH_8C8970
0x5F8007: mov     eax, large fs:0
0x5F800D: push    eax
0x5F800E: push    ecx
0x5F800F: push    esi
0x5F8010: push    edi
0x5F8011: mov     eax, ds:0B30AACh
0x5F8016: xor     eax, esp
0x5F8018: push    eax
0x5F8019: lea     eax, [esp+1Ch+var_C]
0x5F801D: mov     large fs:0, eax
0x5F8023: mov     edi, ecx
0x5F8025: mov     ecx, [edi+58h]
0x5F8028: mov     eax, [ecx]
0x5F802A: mov     edx, [eax+8]
0x5F802D: call    edx
0x5F802F: cmp     eax, 2
0x5F8032: jge     loc_5F80BA
0x5F8038: push    3Ch ; '<'; Size
0x5F803A: call    FormHeapAlloc
0x5F803F: add     esp, 4
0x5F8042: mov     [esp+1Ch+var_10], eax
0x5F8046: test    eax, eax
0x5F8048: mov     [esp+1Ch+var_4], 0
0x5F8050: jz      short loc_5F805D
0x5F8052: mov     ecx, eax; this
0x5F8054: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x5F8059: mov     esi, eax
0x5F805B: jmp     short loc_5F805F
0x5F805D: xor     esi, esi
0x5F805F: push    18h
0x5F8061: mov     ecx, esi
0x5F8063: mov     [esp+20h+var_4], 0FFFFFFFFh
0x5F806B: call    TESPackage_SetType?
0x5F8070: or      dword ptr [esi+1Ch], 4
0x5F8074: mov     ecx, esi
0x5F8076: call    sub_5672A0
0x5F807B: push    1; a4
0x5F807D: push    1; a3
0x5F807F: push    esi; a2
0x5F8080: mov     ecx, edi; this
0x5F8082: call    Actor_AddPackage?
0x5F8087: mov     eax, [edi]
0x5F8089: mov     edx, [eax+170h]
0x5F808F: mov     ecx, edi
0x5F8091: call    edx
0x5F8093: cmp     byte ptr [eax+4], 24h ; '$'
0x5F8097: jnz     short loc_5F80BA
0x5F8099: mov     eax, [edi]
0x5F809B: mov     edx, [eax+170h]
0x5F80A1: mov     ecx, edi
0x5F80A3: call    edx
0x5F80A5: test    eax, eax
0x5F80A7: jz      short loc_5F80BA
0x5F80A9: cmp     byte ptr [eax+104h], 4
0x5F80B0: jnz     short loc_5F80BA
0x5F80B2: lea     ecx, [edi+44h]
0x5F80B5: call    ExtraDataList__RemoveStartLocation
0x5F80BA: mov     ecx, [esp+1Ch+var_C]
0x5F80BE: mov     large fs:0, ecx
0x5F80C5: pop     ecx
0x5F80C6: pop     edi
0x5F80C7: pop     esi
0x5F80C8: add     esp, 10h
0x5F80CB: retn
