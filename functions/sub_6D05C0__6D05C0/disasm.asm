0x6D05C0: push    ebx
0x6D05C1: push    esi
0x6D05C2: mov     esi, dword ptr [esp+8+arg_0]
0x6D05C6: push    edi
0x6D05C7: push    esi
0x6D05C8: mov     ebx, ecx
0x6D05CA: call    sub_716140
0x6D05CF: mov     eax, ds:0B3CDF8h
0x6D05D4: push    eax; ArgList
0x6D05D5: call    TESOutput_PrintString
0x6D05DA: movzx   edi, word ptr [esi+0Ah]
0x6D05DE: movzx   ecx, word ptr [esi+8]
0x6D05E2: add     esp, 4
0x6D05E5: cmp     edi, ecx
0x6D05E7: mov     dword ptr [esp+0Ch+arg_0], eax
0x6D05EB: jb      short loc_6D05FB
0x6D05ED: movzx   edx, word ptr [esi+0Eh]
0x6D05F1: add     edx, edi
0x6D05F3: push    edx
0x6D05F4: mov     ecx, esi
0x6D05F6: call    NiTArray_SetSize
0x6D05FB: lea     eax, [esp+0Ch+arg_0]
0x6D05FF: push    eax
0x6D0600: push    edi
0x6D0601: mov     ecx, esi
0x6D0603: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D0608: mov     cl, [ebx+8]
0x6D060B: shr     cl, 5
0x6D060E: and     cl, 1
0x6D0611: mov     [esp+0Ch+arg_0], cl
0x6D0615: mov     edx, dword ptr [esp+0Ch+arg_0]
0x6D0619: push    edx; char
0x6D061A: push    offset aIsmanagercontr; "IsManagerControlled"
0x6D061F: call    TESOutput_PrintLabeledBool
0x6D0624: movzx   edi, word ptr [esi+0Ah]
0x6D0628: mov     dword ptr [esp+14h+arg_0], eax
0x6D062C: movzx   eax, word ptr [esi+8]
0x6D0630: add     esp, 8
0x6D0633: cmp     edi, eax
0x6D0635: jb      short loc_6D0645
0x6D0637: movzx   ecx, word ptr [esi+0Eh]
0x6D063B: add     ecx, edi
0x6D063D: push    ecx
0x6D063E: mov     ecx, esi
0x6D0640: call    NiTArray_SetSize
0x6D0645: lea     edx, [esp+0Ch+arg_0]
0x6D0649: push    edx
0x6D064A: push    edi
0x6D064B: mov     ecx, esi
0x6D064D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D0652: pop     edi
0x6D0653: pop     esi
0x6D0654: pop     ebx
0x6D0655: retn    4
