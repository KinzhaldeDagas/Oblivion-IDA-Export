0x5A9320: push    0FFFFFFFFh
0x5A9322: push    offset ??0MainMenu@@QAE@XZ_SEH
0x5A9327: mov     eax, large fs:0
0x5A932D: push    eax
0x5A932E: push    ecx
0x5A932F: push    ebx
0x5A9330: push    esi
0x5A9331: push    edi
0x5A9332: mov     eax, ds:0B30AACh
0x5A9337: xor     eax, esp
0x5A9339: push    eax
0x5A933A: lea     eax, [esp+20h+var_C]
0x5A933E: mov     large fs:0, eax
0x5A9344: mov     ebx, ecx
0x5A9346: mov     [esp+20h+var_10], ebx
0x5A934A: mov     dword ptr [ebx], offset ??_7HUDSubtitleMenu@@6B@; const HUDSubtitleMenu::`vftable'
0x5A9350: mov     [esp+20h+var_4], 0
0x5A9358: lea     edi, [ebx+2Ch]
0x5A935B: jmp     short loc_5A9360
0x5A935D: align 10h
0x5A9360: cmp     dword ptr [edi+4], 0
0x5A9364: jnz     short loc_5A936B
0x5A9366: cmp     dword ptr [edi], 0
0x5A9369: jz      short loc_5A938B
0x5A936B: mov     esi, [edi]
0x5A936D: push    esi
0x5A936E: mov     ecx, edi
0x5A9370: call    BSSimpleList_Remove
0x5A9375: test    esi, esi
0x5A9377: jz      short loc_5A9360
0x5A9379: mov     ecx, esi
0x5A937B: call    sub_5A9060
0x5A9380: push    esi
0x5A9381: call    FormHeapFree
0x5A9386: add     esp, 4
0x5A9389: jmp     short loc_5A9360
0x5A938B: mov     ecx, ebx; this
0x5A938D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x5A9395: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5A939A: mov     ecx, [esp+20h+var_C]
0x5A939E: mov     large fs:0, ecx
0x5A93A5: pop     ecx
0x5A93A6: pop     edi
0x5A93A7: pop     esi
0x5A93A8: pop     ebx
0x5A93A9: add     esp, 10h
0x5A93AC: retn
