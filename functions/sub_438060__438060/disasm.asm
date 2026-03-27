0x438060: push    0FFFFFFFFh
0x438062: push    offset SEH_438060
0x438067: mov     eax, large fs:0
0x43806D: push    eax
0x43806E: push    ecx
0x43806F: push    esi
0x438070: push    edi
0x438071: mov     eax, ___security_cookie
0x438076: xor     eax, esp
0x438078: push    eax
0x438079: lea     eax, [esp+1Ch+var_C]
0x43807D: mov     large fs:0, eax
0x438083: mov     edi, ecx
0x438085: mov     ecx, SaveLoad_CurrentSavegame
0x43808B: call    sub_45A500
0x438090: test    al, al
0x438092: jz      short loc_4380A7
0x438094: mov     eax, SaveLoad_CurrentSavegame
0x438099: mov     ecx, [eax+18h]
0x43809C: shr     ecx, 1
0x43809E: test    cl, 1
0x4380A1: jz      loc_4382EB
0x4380A7: mov     esi, [esp+1Ch+arg_0]
0x4380AB: mov     ecx, [esi+1Ch]
0x4380AE: test    ecx, ecx
0x4380B0: jz      short loc_4380D6
0x4380B2: mov     edx, [ecx]
0x4380B4: mov     eax, [edx+0F4h]
0x4380BA: call    eax
0x4380BC: test    al, al
0x4380BE: jz      short loc_4380D6
0x4380C0: mov     edx, [esi]
0x4380C2: mov     eax, [edx+170h]
0x4380C8: mov     ecx, esi
0x4380CA: call    eax
0x4380CC: cmp     byte ptr [eax+4], 1Ah
0x4380D0: jnz     loc_4382EB
0x4380D6: mov     edx, [esi]
0x4380D8: mov     eax, [edx+170h]
0x4380DE: mov     ecx, esi
0x4380E0: call    eax
0x4380E2: cmp     byte ptr [eax+4], 0Ah
0x4380E6: jz      loc_4382EB
0x4380EC: mov     edx, [esi]
0x4380EE: mov     eax, [edx+190h]
0x4380F4: mov     ecx, esi
0x4380F6: call    eax
0x4380F8: test    al, al
0x4380FA: jz      short loc_438121
0x4380FC: mov     edx, [esi]
0x4380FE: mov     eax, [edx+330h]
0x438104: mov     ecx, esi
0x438106: call    eax
0x438108: test    eax, eax
0x43810A: jz      short loc_438121
0x43810C: mov     edx, [esi]
0x43810E: mov     eax, [edx+330h]
0x438114: push    0Dh
0x438116: mov     ecx, esi
0x438118: call    eax
0x43811A: mov     ecx, eax
0x43811C: call    sub_612DE0
0x438121: mov     [esp+1Ch+var_10], 0
0x438129: mov     ecx, [edi+8]
0x43812C: mov     edx, [ecx]
0x43812E: mov     edx, [edx+4]
0x438131: lea     eax, [esp+1Ch+var_10]
0x438135: push    eax
0x438136: push    esi
0x438137: mov     [esp+24h+var_4], 0
0x43813F: call    edx
0x438141: test    al, al
0x438143: jz      short loc_43818E
0x438145: mov     esi, [esp+1Ch+var_10]
0x438149: mov     eax, [esi+10h]
0x43814C: mov     edx, [esi+14h]
0x43814F: mov     cl, 10h
0x438151: call    __allshr
0x438156: mov     ecx, [esp+1Ch+arg_4]
0x43815A: movzx   eax, al
0x43815D: cmp     eax, ecx
0x43815F: jz      short loc_43816F
0x438161: mov     eax, [esi]
0x438163: mov     edx, [eax+1Ch]
0x438166: push    ecx
0x438167: mov     ecx, esi
0x438169: call    edx
0x43816B: mov     esi, [esp+1Ch+var_10]
0x43816F: test    esi, esi
0x438171: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x438179: jz      loc_4382EB
0x43817F: lea     eax, [esi+8]
0x438182: push    eax; lpAddend
0x438183: call    ds:InterlockedDecrement
0x438189: jmp     loc_4382D9
0x43818E: cmp     esi, TESDataHandler_g_PlayerRef
0x438194: jnz     short loc_4381B9
0x438196: push    40h ; '@'; Size
0x438198: call    FormHeapAlloc
0x43819D: add     esp, 4
0x4381A0: test    eax, eax
0x4381A2: jz      loc_43824A
0x4381A8: mov     ecx, [esp+1Ch+arg_4]
0x4381AC: push    ecx
0x4381AD: mov     ecx, eax
0x4381AF: call    sub_438020
0x4381B4: jmp     loc_43824C
0x4381B9: mov     edx, [esi]
0x4381BB: mov     eax, [edx+170h]
0x4381C1: mov     ecx, esi
0x4381C3: call    eax
0x4381C5: movzx   eax, byte ptr [eax+4]
0x4381C9: sub     eax, 1Eh
0x4381CC: jz      short loc_43822D
0x4381CE: sub     eax, 5
0x4381D1: jz      short loc_438210
0x4381D3: sub     eax, 1
0x4381D6: push    38h ; '8'; Size
0x4381D8: jz      short loc_4381F5
0x4381DA: call    FormHeapAlloc
0x4381DF: add     esp, 4
0x4381E2: test    eax, eax
0x4381E4: jz      short loc_43824A
0x4381E6: mov     ecx, [esp+1Ch+arg_4]
0x4381EA: push    ecx
0x4381EB: push    esi
0x4381EC: mov     ecx, eax
0x4381EE: call    sub_437C30
0x4381F3: jmp     short loc_43824C
0x4381F5: call    FormHeapAlloc
0x4381FA: add     esp, 4
0x4381FD: test    eax, eax
0x4381FF: jz      short loc_43824A
0x438201: mov     edx, [esp+1Ch+arg_4]
0x438205: push    edx
0x438206: push    esi
0x438207: mov     ecx, eax
0x438209: call    sub_437FE0
0x43820E: jmp     short loc_43824C
0x438210: push    40h ; '@'; Size
0x438212: call    FormHeapAlloc
0x438217: add     esp, 4
0x43821A: test    eax, eax
0x43821C: jz      short loc_43824A
0x43821E: mov     ecx, [esp+1Ch+arg_4]
0x438222: push    ecx
0x438223: push    esi
0x438224: mov     ecx, eax
0x438226: call    sub_437F00
0x43822B: jmp     short loc_43824C
0x43822D: push    38h ; '8'; Size
0x43822F: call    FormHeapAlloc
0x438234: add     esp, 4
0x438237: test    eax, eax
0x438239: jz      short loc_43824A
0x43823B: mov     edx, [esp+1Ch+arg_4]
0x43823F: push    edx
0x438240: push    esi
0x438241: mov     ecx, eax
0x438243: call    sub_437E20
0x438248: jmp     short loc_43824C
0x43824A: xor     eax, eax
0x43824C: push    eax
0x43824D: lea     ecx, [esp+20h+var_10]
0x438251: call    sub_4BCB70
0x438256: push    0
0x438258: push    ecx
0x438259: mov     ecx, [esp+24h+var_10]
0x43825D: mov     eax, esp
0x43825F: mov     [eax], ecx
0x438261: mov     eax, [esp+24h+var_10]
0x438265: test    eax, eax
0x438267: mov     [esp+24h+arg_4], esp
0x43826B: jz      short loc_438277
0x43826D: add     eax, 8
0x438270: push    eax; lpAddend
0x438271: call    ds:InterlockedIncrement
0x438277: mov     ecx, [edi+8]
0x43827A: mov     edx, [ecx]
0x43827C: mov     eax, [edx+0Ch]
0x43827F: push    esi
0x438280: call    eax
0x438282: test    al, al
0x438284: mov     edi, ds:InterlockedDecrement
0x43828A: jz      short loc_43829D
0x43828C: mov     ecx, [esp+1Ch+var_10]
0x438290: mov     edx, [ecx]
0x438292: mov     eax, [edx+20h]
0x438295: call    eax
0x438297: mov     eax, [esp+1Ch+var_10]
0x43829B: jmp     short loc_4382C5
0x43829D: mov     eax, [esp+1Ch+var_10]
0x4382A1: test    eax, eax
0x4382A3: jz      short loc_4382C5
0x4382A5: mov     esi, eax
0x4382A7: add     eax, 8
0x4382AA: push    eax; lpAddend
0x4382AB: call    edi ; InterlockedDecrement
0x4382AD: test    eax, eax
0x4382AF: jnz     short loc_4382BF
0x4382B1: test    esi, esi
0x4382B3: jz      short loc_4382BF
0x4382B5: mov     edx, [esi]
0x4382B7: mov     eax, [edx]
0x4382B9: push    1
0x4382BB: mov     ecx, esi
0x4382BD: call    eax
0x4382BF: xor     eax, eax
0x4382C1: mov     [esp+1Ch+var_10], eax
0x4382C5: test    eax, eax
0x4382C7: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4382CF: jz      short loc_4382EB
0x4382D1: mov     esi, eax
0x4382D3: add     eax, 8
0x4382D6: push    eax; lpAddend
0x4382D7: call    edi ; InterlockedDecrement
0x4382D9: test    eax, eax
0x4382DB: jnz     short loc_4382EB
0x4382DD: test    esi, esi
0x4382DF: jz      short loc_4382EB
0x4382E1: mov     edx, [esi]
0x4382E3: mov     eax, [edx]
0x4382E5: push    1
0x4382E7: mov     ecx, esi
0x4382E9: call    eax
0x4382EB: mov     ecx, dword ptr [esp+1Ch+var_C]
0x4382EF: mov     large fs:0, ecx
0x4382F6: pop     ecx
0x4382F7: pop     edi
0x4382F8: pop     esi
0x4382F9: add     esp, 10h
0x4382FC: retn    8
