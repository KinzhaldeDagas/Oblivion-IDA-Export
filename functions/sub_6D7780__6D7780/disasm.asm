0x6D7780: push    0FFFFFFFFh; Loads base NiExtraData, reads a 32-bit key count, allocates count header-backed 0x08-byte records, then loads each float time and owned string.
0x6D7782: push    offset SEH_6D7780
0x6D7787: mov     eax, large fs:0
0x6D778D: push    eax
0x6D778E: sub     esp, 8
0x6D7791: push    ebx
0x6D7792: push    ebp
0x6D7793: push    esi
0x6D7794: push    edi
0x6D7795: mov     eax, ds:0B30AACh
0x6D779A: xor     eax, esp
0x6D779C: push    eax
0x6D779D: lea     eax, [esp+28h+var_C]
0x6D77A1: mov     large fs:0, eax
0x6D77A7: mov     ebx, ecx
0x6D77A9: mov     ebp, [esp+28h+Size]
0x6D77AD: push    ebp; Size
0x6D77AE: call    sub_721610
0x6D77B3: mov     eax, [ebp+21Ch]
0x6D77B9: push    1
0x6D77BB: lea     ecx, [esp+2Ch+var_10]
0x6D77BF: push    ecx
0x6D77C0: push    4
0x6D77C2: lea     edx, [esp+34h+Size]
0x6D77C6: push    edx
0x6D77C7: push    eax
0x6D77C8: mov     eax, [eax+4]
0x6D77CB: mov     [esp+3Ch+var_10], 4
0x6D77D3: call    eax
0x6D77D5: mov     eax, [esp+3Ch+Size]
0x6D77D9: add     esp, 14h
0x6D77DC: test    eax, eax
0x6D77DE: jbe     loc_6D7871
0x6D77E4: mov     esi, eax
0x6D77E6: xor     ecx, ecx
0x6D77E8: mov     edx, 8
0x6D77ED: mul     edx
0x6D77EF: seto    cl
0x6D77F2: neg     ecx
0x6D77F4: or      ecx, eax
0x6D77F6: xor     eax, eax
0x6D77F8: add     ecx, 4
0x6D77FB: setb    al
0x6D77FE: neg     eax
0x6D7800: or      eax, ecx
0x6D7802: push    eax; Size
0x6D7803: call    FormHeapAlloc
0x6D7808: add     esp, 4
0x6D780B: mov     [esp+28h+var_14], eax
0x6D780F: xor     ecx, ecx
0x6D7811: cmp     eax, ecx
0x6D7813: mov     [esp+28h+var_4], ecx
0x6D7817: jz      short loc_6D7837
0x6D7819: push    offset NiTextKey_Destroy; a5
0x6D781E: push    offset NiTextKey_Construct; a4
0x6D7823: push    esi; size
0x6D7824: lea     edi, [eax+4]
0x6D7827: push    8; a2
0x6D7829: push    edi; a1
0x6D782A: mov     [eax], esi
0x6D782C: call    ArrayConstructor
0x6D7831: mov     [esp+28h+var_14], edi
0x6D7835: jmp     short loc_6D783B
0x6D7837: mov     [esp+28h+var_14], ecx
0x6D783B: mov     eax, [esp+28h+Size]
0x6D783F: xor     esi, esi
0x6D7841: test    eax, eax
0x6D7843: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6D784B: jbe     short loc_6D7867
0x6D784D: mov     edi, [esp+28h+var_14]
0x6D7851: push    ebp
0x6D7852: mov     ecx, edi
0x6D7854: call    NiTextKey_LoadBinary; Loads one NiTextKey: reads float time at +0x00 and allocates/loads the string at +0x04.
0x6D7859: mov     eax, [esp+28h+Size]
0x6D785D: add     esi, 1
0x6D7860: add     edi, 8
0x6D7863: cmp     esi, eax
0x6D7865: jb      short loc_6D7851
0x6D7867: mov     ecx, [esp+28h+var_14]
0x6D786B: mov     [ebx+0Ch], eax
0x6D786E: mov     [ebx+10h], ecx
0x6D7871: mov     ecx, [esp+28h+var_C]
0x6D7875: mov     large fs:0, ecx
0x6D787C: pop     ecx
0x6D787D: pop     edi
0x6D787E: pop     esi
0x6D787F: pop     ebp
0x6D7880: pop     ebx
0x6D7881: add     esp, 14h
0x6D7884: retn    4
0x9B5200: mov     eax, [ebp-14h]
0x9B5203: push    eax
0x9B5204: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B5209: pop     ecx
0x9B520A: retn
0x9B520B: mov     edx, [esp+arg_4]
0x9B520F: lea     eax, [edx-18h]
0x9B5212: mov     ecx, [edx-1Ch]
0x9B5215: xor     ecx, eax
0x9B5217: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B521C: mov     eax, offset stru_AE03C0
0x9B5221: jmp     ___CxxFrameHandler3
