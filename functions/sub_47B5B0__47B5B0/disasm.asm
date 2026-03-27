0x47B5B0: push    0FFFFFFFFh
0x47B5B2: push    offset SEH_47B5B0
0x47B5B7: mov     eax, large fs:0
0x47B5BD: push    eax
0x47B5BE: sub     esp, 10h
0x47B5C1: push    ebx
0x47B5C2: push    ebp
0x47B5C3: push    esi
0x47B5C4: push    edi
0x47B5C5: mov     eax, ds:0B30AACh
0x47B5CA: xor     eax, esp
0x47B5CC: push    eax
0x47B5CD: lea     eax, [esp+30h+var_C]
0x47B5D1: mov     large fs:0, eax
0x47B5D7: mov     edi, ecx
0x47B5D9: mov     [esp+30h+var_18], edi
0x47B5DD: mov     esi, [esp+30h+arg_0]
0x47B5E1: xor     ebx, ebx
0x47B5E3: cmp     esi, ebx
0x47B5E5: jnz     short loc_47B5EB
0x47B5E7: xor     ebp, ebp
0x47B5E9: jmp     short loc_47B610
0x47B5EB: mov     eax, [esi]
0x47B5ED: mov     edx, [eax+4]
0x47B5F0: mov     ecx, esi
0x47B5F2: call    edx
0x47B5F4: cmp     eax, ebx
0x47B5F6: jz      short loc_47B606
0x47B5F8: cmp     eax, offset unk_B35408
0x47B5FD: jz      short loc_47B623
0x47B5FF: mov     eax, [eax+4]
0x47B602: cmp     eax, ebx
0x47B604: jnz     short loc_47B5F8
0x47B606: xor     al, al
0x47B608: neg     al
0x47B60A: sbb     eax, eax
0x47B60C: and     eax, esi
0x47B60E: mov     ebp, eax
0x47B610: mov     [esp+30h+var_14], ebx
0x47B614: cmp     esi, ebx
0x47B616: mov     [esp+30h+var_4], ebx
0x47B61A: jnz     short loc_47B627
0x47B61C: xor     eax, eax
0x47B61E: jmp     loc_47B7AB
0x47B623: mov     al, 1
0x47B625: jmp     short loc_47B608
0x47B627: push    esi
0x47B628: call    sub_471B80
0x47B62D: mov     ecx, [esp+34h+arg_4]
0x47B631: shl     ecx, 4
0x47B634: add     esp, 4
0x47B637: mov     [ecx+edi+58h], al
0x47B63B: cmp     [edi], ebx
0x47B63D: jnz     short loc_47B646
0x47B63F: mov     eax, esi
0x47B641: jmp     loc_47B7AB
0x47B646: test    al, al
0x47B648: jz      loc_47B7A3
0x47B64E: mov     [esp+30h+var_1C], ebx
0x47B652: cmp     ebp, ebx
0x47B654: mov     byte ptr [esp+30h+var_4], 1
0x47B659: jz      short loc_47B65E
0x47B65B: push    ebp
0x47B65C: jmp     short loc_47B68A
0x47B65E: push    0DCh ; 'Ü'; Size
0x47B663: call    FormHeapAlloc
0x47B668: add     esp, 4
0x47B66B: mov     [esp+30h+var_10], eax
0x47B66F: cmp     eax, ebx
0x47B671: mov     byte ptr [esp+30h+var_4], 2
0x47B676: jz      short loc_47B682
0x47B678: push    ebx
0x47B679: mov     ecx, eax; this
0x47B67B: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x47B680: jmp     short loc_47B684
0x47B682: xor     eax, eax
0x47B684: mov     byte ptr [esp+30h+var_4], 1
0x47B689: push    eax; a2
0x47B68A: lea     ecx, [esp+34h+var_1C]; this
0x47B68E: call    NiSmartPointer_Set??
0x47B693: mov     edx, ds:0B3F9A8h
0x47B699: mov     ebx, [esp+30h+var_1C]
0x47B69D: mov     [ebx+54h], edx
0x47B6A0: mov     eax, ds:0B3F9ACh
0x47B6A5: mov     [ebx+58h], eax
0x47B6A8: mov     ecx, ds:0B3F9B0h
0x47B6AE: mov     [ebx+5Ch], ecx
0x47B6B1: lea     edi, [ebx+30h]
0x47B6B4: mov     ecx, 9
0x47B6B9: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x47B6BE: rep movsd
0x47B6C0: mov     edi, [esp+30h+var_18]
0x47B6C4: mov     edx, [edi]
0x47B6C6: push    offset aSkinattachment; "SkinAttachment"
0x47B6CB: push    edx; a1
0x47B6CC: call    NiObjectNET_LookupObjectByName
0x47B6D1: add     esp, 8
0x47B6D4: test    eax, eax
0x47B6D6: push    1
0x47B6D8: push    ebx
0x47B6D9: jz      short loc_47B6E1
0x47B6DB: mov     edx, [eax]
0x47B6DD: mov     ecx, eax
0x47B6DF: jmp     short loc_47B6E8
0x47B6E1: mov     ecx, [edi]
0x47B6E3: mov     ecx, [ecx+1Ch]
0x47B6E6: mov     edx, [ecx]
0x47B6E8: mov     eax, [edx+84h]
0x47B6EE: call    eax
0x47B6F0: test    ebp, ebp
0x47B6F2: jz      loc_47B785
0x47B6F8: movzx   eax, word ptr [ebp+0B6h]
0x47B6FF: xor     esi, esi
0x47B701: test    eax, eax
0x47B703: jbe     short loc_47B73D
0x47B705: cmp     eax, esi
0x47B707: ja      short loc_47B70D
0x47B709: xor     eax, eax
0x47B70B: jmp     short loc_47B716
0x47B70D: mov     ecx, [ebp+0B0h]
0x47B713: mov     eax, [ecx+esi*4]
0x47B716: mov     edx, [esp+30h+arg_C]
0x47B71A: mov     ecx, [esp+30h+arg_8]
0x47B71E: push    edx
0x47B71F: mov     edx, [esp+34h+arg_4]
0x47B723: push    ecx
0x47B724: push    edx
0x47B725: push    0
0x47B727: push    eax
0x47B728: mov     ecx, edi
0x47B72A: call    sub_47B090
0x47B72F: movzx   eax, word ptr [ebp+0B6h]
0x47B736: add     esi, 1
0x47B739: cmp     eax, esi
0x47B73B: ja      short loc_47B70D
0x47B73D: mov     esi, [esp+30h+arg_0]
0x47B741: cmp     ebx, esi
0x47B743: mov     ebp, ds:0A2807Ch
0x47B749: mov     [esp+30h+arg_0], ebx
0x47B74D: jz      short loc_47B76A
0x47B74F: lea     edi, [esi+4]
0x47B752: push    edi; lpAddend
0x47B753: call    dword ptr ds:0A28078h
0x47B759: push    edi; lpAddend
0x47B75A: call    ebp ; InterlockedDecrement
0x47B75C: test    eax, eax
0x47B75E: jnz     short loc_47B76A
0x47B760: mov     eax, [esi]
0x47B762: mov     edx, [eax]
0x47B764: push    1
0x47B766: mov     ecx, esi
0x47B768: call    edx
0x47B76A: lea     eax, [ebx+4]
0x47B76D: push    eax; lpAddend
0x47B76E: mov     byte ptr [esp+34h+var_4], 0
0x47B773: call    ebp ; InterlockedDecrement
0x47B775: test    eax, eax
0x47B777: jnz     short loc_47B7A7
0x47B779: mov     edx, [ebx]
0x47B77B: mov     eax, [edx]
0x47B77D: push    1
0x47B77F: mov     ecx, ebx
0x47B781: call    eax
0x47B783: jmp     short loc_47B7A7
0x47B785: mov     eax, [esp+30h+arg_C]
0x47B789: mov     ecx, [esp+30h+arg_8]
0x47B78D: mov     edx, [esp+30h+arg_4]
0x47B791: mov     esi, [esp+30h+arg_0]
0x47B795: push    eax
0x47B796: push    ecx
0x47B797: push    edx
0x47B798: push    ebx
0x47B799: push    esi
0x47B79A: mov     ecx, edi
0x47B79C: call    sub_47B090
0x47B7A1: jmp     short loc_47B741
0x47B7A3: mov     [esp+30h+arg_0], ebx
0x47B7A7: mov     eax, [esp+30h+arg_0]
0x47B7AB: mov     ecx, [esp+30h+var_C]
0x47B7AF: mov     large fs:0, ecx
0x47B7B6: pop     ecx
0x47B7B7: pop     edi
0x47B7B8: pop     esi
0x47B7B9: pop     ebp
0x47B7BA: pop     ebx
0x47B7BB: add     esp, 1Ch
0x47B7BE: retn    10h
