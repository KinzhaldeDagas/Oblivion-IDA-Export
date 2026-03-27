0x74C250: push    ebx
0x74C251: push    ebp
0x74C252: push    esi
0x74C253: mov     esi, [esp+0Ch+arg_0]
0x74C257: push    edi
0x74C258: push    esi
0x74C259: mov     ebp, ecx
0x74C25B: call    sub_74F4F0
0x74C260: mov     eax, ds:0B408C8h
0x74C265: push    eax; ArgList
0x74C266: call    TESOutput_PrintString
0x74C26B: movzx   edi, word ptr [esi+0Ah]
0x74C26F: movzx   ecx, word ptr [esi+8]
0x74C273: add     esp, 4
0x74C276: cmp     edi, ecx
0x74C278: mov     [esp+10h+arg_0], eax
0x74C27C: jb      short loc_74C28C
0x74C27E: movzx   edx, word ptr [esi+0Eh]
0x74C282: add     edx, edi
0x74C284: push    edx
0x74C285: mov     ecx, esi
0x74C287: call    NiTArray_SetSize
0x74C28C: lea     eax, [esp+10h+arg_0]
0x74C290: push    eax
0x74C291: push    edi
0x74C292: mov     ecx, esi
0x74C294: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74C299: movzx   eax, word ptr [ebp+5Ch]
0x74C29D: xor     ebx, ebx
0x74C29F: test    eax, eax
0x74C2A1: jbe     short loc_74C2F8
0x74C2A3: cmp     ebx, eax
0x74C2A5: jnb     short loc_74C2ED
0x74C2A7: mov     ecx, [ebp+54h]
0x74C2AA: mov     eax, [ecx+ebx*4]
0x74C2AD: test    eax, eax
0x74C2AF: jz      short loc_74C2ED
0x74C2B1: mov     eax, [eax+8]
0x74C2B4: push    eax; int
0x74C2B5: push    offset aEmitterObject; "Emitter Object"
0x74C2BA: call    TESOutput_PrintLabeledString
0x74C2BF: movzx   edi, word ptr [esi+0Ah]
0x74C2C3: movzx   edx, word ptr [esi+8]
0x74C2C7: add     esp, 8
0x74C2CA: cmp     edi, edx
0x74C2CC: mov     [esp+10h+arg_0], eax
0x74C2D0: jb      short loc_74C2E0
0x74C2D2: movzx   eax, word ptr [esi+0Eh]
0x74C2D6: add     eax, edi
0x74C2D8: push    eax
0x74C2D9: mov     ecx, esi
0x74C2DB: call    NiTArray_SetSize
0x74C2E0: lea     ecx, [esp+10h+arg_0]
0x74C2E4: push    ecx
0x74C2E5: push    edi
0x74C2E6: mov     ecx, esi
0x74C2E8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74C2ED: movzx   eax, word ptr [ebp+5Ch]
0x74C2F1: add     ebx, 1
0x74C2F4: cmp     ebx, eax
0x74C2F6: jb      short loc_74C2A7
0x74C2F8: mov     eax, [ebp+74h]
0x74C2FB: cmp     eax, 4; switch 5 cases
0x74C2FE: ja      short def_74C300
0x74C300: jmp     ds:jpt_74C300[eax*4]; switch jump
0x74C307: push    offset aNi_emit_from_v; jumptable 0074C300 case 0
0x74C30C: push    offset aM_eemissiontyp; "m_eEmissionType"
0x74C311: call    TESOutput_PrintLabeledString
0x74C316: movzx   edx, word ptr [esi+8]
0x74C31A: movzx   edi, word ptr [esi+0Ah]
0x74C31E: add     esp, 8
0x74C321: cmp     edi, edx
0x74C323: mov     [esp+10h+arg_0], eax
0x74C327: jb      short loc_74C337
0x74C329: movzx   eax, word ptr [esi+0Eh]
0x74C32D: add     eax, edi
0x74C32F: push    eax
0x74C330: mov     ecx, esi
0x74C332: call    NiTArray_SetSize
0x74C337: lea     ecx, [esp+10h+arg_0]
0x74C33B: push    ecx
0x74C33C: push    edi
0x74C33D: mov     ecx, esi
0x74C33F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74C344: jmp     loc_74C3D6
0x74C349: push    offset aNi_emit_from_f; jumptable 0074C300 case 1
0x74C34E: jmp     short loc_74C30C
0x74C350: push    offset aNi_emit_from_e; jumptable 0074C300 case 2
0x74C355: jmp     short loc_74C30C
0x74C357: push    offset aNi_emit_from_0; jumptable 0074C300 case 3
0x74C35C: jmp     short loc_74C30C
0x74C35E: push    offset aNi_emit_from_1; jumptable 0074C300 case 4
0x74C363: jmp     short loc_74C30C
