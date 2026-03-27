0x8976D0: push    0FFFFFFFFh
0x8976D2: push    offset SEH_8976D0
0x8976D7: mov     eax, large fs:0
0x8976DD: push    eax
0x8976DE: push    ecx
0x8976DF: push    ebp
0x8976E0: push    esi
0x8976E1: push    edi
0x8976E2: mov     eax, ds:0B30AACh
0x8976E7: xor     eax, esp
0x8976E9: push    eax
0x8976EA: lea     eax, [esp+20h+var_C]
0x8976EE: mov     large fs:0, eax
0x8976F4: mov     esi, ecx
0x8976F6: mov     edi, [esp+20h+arg_4]
0x8976FA: mov     ebp, [esp+20h+a2]
0x8976FE: push    edi
0x8976FF: push    ebp
0x897700: call    sub_733850
0x897705: mov     ax, [esi+0Ch]
0x897709: mov     [ebp+0Ch], ax
0x89770D: mov     esi, [esi+10h]
0x897710: test    esi, esi
0x897712: mov     [esp+20h+var_10], esi
0x897716: jz      short loc_897722
0x897718: lea     ecx, [esi+4]
0x89771B: push    ecx; lpAddend
0x89771C: call    dword ptr ds:0A28078h
0x897722: test    esi, esi
0x897724: mov     [esp+20h+var_4], 0
0x89772C: jz      loc_8977D3
0x897732: mov     [esp+20h+arg_4], 0
0x89773A: mov     ecx, [edi]
0x89773C: lea     edx, [esp+20h+a2]
0x897740: push    edx
0x897741: push    esi
0x897742: mov     byte ptr [esp+28h+var_4], 1
0x897747: call    NiTMap_GetAt
0x89774C: test    al, al
0x89774E: jz      short loc_897756
0x897750: mov     eax, [esp+20h+a2]
0x897754: jmp     short loc_897760
0x897756: mov     edx, [esi]
0x897758: mov     eax, [edx+18h]
0x89775B: push    edi
0x89775C: mov     ecx, esi
0x89775E: call    eax
0x897760: push    eax; a2
0x897761: lea     ecx, [esp+24h+arg_4]; this
0x897765: call    NiSmartPointer_Set??
0x89776A: mov     edi, [esp+20h+arg_4]
0x89776E: push    edi
0x89776F: mov     ecx, ebp
0x897771: call    sub_897670
0x897776: test    edi, edi
0x897778: mov     ebp, ds:0A2807Ch
0x89777E: jz      short loc_89779A
0x897780: lea     ecx, [edi+4]
0x897783: push    ecx; lpAddend
0x897784: call    ebp ; InterlockedDecrement
0x897786: test    eax, eax
0x897788: jnz     short loc_897794
0x89778A: mov     edx, [edi]
0x89778C: mov     eax, [edx]
0x89778E: push    1
0x897790: mov     ecx, edi
0x897792: call    eax
0x897794: xor     edi, edi
0x897796: mov     [esp+20h+arg_4], edi
0x89779A: lea     ecx, [esi+4]
0x89779D: push    ecx; lpAddend
0x89779E: call    ebp ; InterlockedDecrement
0x8977A0: test    eax, eax
0x8977A2: jnz     short loc_8977AE
0x8977A4: mov     edx, [esi]
0x8977A6: mov     eax, [edx]
0x8977A8: push    1
0x8977AA: mov     ecx, esi
0x8977AC: call    eax
0x8977AE: xor     esi, esi
0x8977B0: test    edi, edi
0x8977B2: mov     [esp+20h+var_10], esi
0x8977B6: mov     byte ptr [esp+20h+var_4], 0
0x8977BB: jz      short loc_8977D9
0x8977BD: lea     ecx, [edi+4]
0x8977C0: push    ecx; lpAddend
0x8977C1: call    ebp ; InterlockedDecrement
0x8977C3: test    eax, eax
0x8977C5: jnz     short loc_8977D9
0x8977C7: mov     edx, [edi]
0x8977C9: mov     eax, [edx]
0x8977CB: push    1
0x8977CD: mov     ecx, edi
0x8977CF: call    eax
0x8977D1: jmp     short loc_8977D9
0x8977D3: mov     ebp, ds:0A2807Ch
0x8977D9: test    esi, esi
0x8977DB: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8977E3: jz      short loc_8977F9
0x8977E5: lea     ecx, [esi+4]
0x8977E8: push    ecx; lpAddend
0x8977E9: call    ebp ; InterlockedDecrement
0x8977EB: test    eax, eax
0x8977ED: jnz     short loc_8977F9
0x8977EF: mov     edx, [esi]
0x8977F1: mov     eax, [edx]
0x8977F3: push    1
0x8977F5: mov     ecx, esi
0x8977F7: call    eax
0x8977F9: mov     ecx, dword ptr [esp+20h+var_C]
0x8977FD: mov     large fs:0, ecx
0x897804: pop     ecx
0x897805: pop     edi
0x897806: pop     esi
0x897807: pop     ebp
0x897808: add     esp, 10h
0x89780B: retn    8
