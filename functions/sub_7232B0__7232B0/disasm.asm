0x7232B0: push    0FFFFFFFFh
0x7232B2: push    offset SEH_7B2A00
0x7232B7: mov     eax, large fs:0
0x7232BD: push    eax
0x7232BE: push    esi
0x7232BF: push    edi
0x7232C0: mov     eax, ds:0B30AACh
0x7232C5: xor     eax, esp
0x7232C7: push    eax
0x7232C8: lea     eax, [esp+18h+var_C]
0x7232CC: mov     large fs:0, eax
0x7232D2: mov     edi, ecx
0x7232D4: mov     eax, [esp+18h+arg_0]
0x7232D8: push    eax
0x7232D9: call    sub_700160
0x7232DE: mov     esi, [edi+0BCh]
0x7232E4: test    esi, esi
0x7232E6: jz      short loc_72333B
0x7232E8: lea     ecx, [esi+4]
0x7232EB: push    ecx; lpAddend
0x7232EC: mov     [esp+1Ch+arg_0], esi
0x7232F0: call    dword ptr ds:0A28078h
0x7232F6: mov     ecx, esi
0x7232F8: mov     [esp+18h+var_4], 0
0x723300: call    TESEnchantableForm_GetCastingType
0x723305: push    eax
0x723306: mov     ecx, esi
0x723308: call    sub_452A60
0x72330D: push    eax
0x72330E: push    edi
0x72330F: call    sub_7383F0
0x723314: add     esp, 0Ch
0x723317: test    esi, esi
0x723319: mov     [esp+18h+var_4], 0FFFFFFFFh
0x723321: jz      short loc_72333B
0x723323: lea     edx, [esi+4]
0x723326: push    edx; lpAddend
0x723327: call    dword ptr ds:0A2807Ch
0x72332D: test    eax, eax
0x72332F: jnz     short loc_72333B
0x723331: mov     eax, [esi]
0x723333: mov     edx, [eax]
0x723335: push    1
0x723337: mov     ecx, esi
0x723339: call    edx
0x72333B: mov     ecx, dword ptr [esp+18h+var_C]
0x72333F: mov     large fs:0, ecx
0x723346: pop     ecx
0x723347: pop     edi
0x723348: pop     esi
0x723349: add     esp, 0Ch
0x72334C: retn    4
