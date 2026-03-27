0x4240C0: push    0FFFFFFFFh
0x4240C2: push    offset SEH_6E3250
0x4240C7: mov     eax, large fs:0
0x4240CD: push    eax
0x4240CE: push    esi
0x4240CF: push    edi
0x4240D0: mov     eax, ___security_cookie
0x4240D5: xor     eax, esp
0x4240D7: push    eax
0x4240D8: lea     eax, [esp+18h+var_C]
0x4240DC: mov     large fs:0, eax
0x4240E2: mov     edi, ecx
0x4240E4: push    2; a2
0x4240E6: call    BaseExtraList_GetExtraData
0x4240EB: mov     esi, [esp+18h+a2]
0x4240EF: test    esi, esi
0x4240F1: jz      short loc_42415E
0x4240F3: test    eax, eax
0x4240F5: jnz     short loc_424141
0x4240F7: push    14h; Size
0x4240F9: call    FormHeapAlloc
0x4240FE: add     esp, 4
0x424101: mov     [esp+18h+a2], eax
0x424105: test    eax, eax
0x424107: mov     [esp+18h+var_4], 0
0x42410F: jz      short loc_42411B
0x424111: push    esi
0x424112: mov     ecx, eax; this
0x424114: call    ??0ExtraHavok@@QAE@XZ; ExtraHavok::ExtraHavok(void)
0x424119: jmp     short loc_42411D
0x42411B: xor     eax, eax
0x42411D: push    eax; BSExtraData *
0x42411E: mov     ecx, edi; ExtraDataList *
0x424120: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x424128: call    BaseExtraList_AddExtra
0x42412D: mov     ecx, [esp+18h+var_C]
0x424131: mov     large fs:0, ecx
0x424138: pop     ecx
0x424139: pop     edi
0x42413A: pop     esi
0x42413B: add     esp, 0Ch
0x42413E: retn    4
0x424141: push    esi; a2
0x424142: lea     ecx, [eax+0Ch]; this
0x424145: call    NiSmartPointer_Set??
0x42414A: mov     ecx, [esp+18h+var_C]
0x42414E: mov     large fs:0, ecx
0x424155: pop     ecx
0x424156: pop     edi
0x424157: pop     esi
0x424158: add     esp, 0Ch
0x42415B: retn    4
0x42415E: test    eax, eax
0x424160: jz      short loc_42416C
0x424162: push    1
0x424164: push    eax
0x424165: mov     ecx, edi
0x424167: call    BaseExtraList_RemoveExtraByPtr
0x42416C: mov     ecx, [esp+18h+var_C]
0x424170: mov     large fs:0, ecx
0x424177: pop     ecx
0x424178: pop     edi
0x424179: pop     esi
0x42417A: add     esp, 0Ch
0x42417D: retn    4
