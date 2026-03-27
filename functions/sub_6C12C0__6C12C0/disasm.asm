0x6C12C0: push    0FFFFFFFFh
0x6C12C2: push    offset SEH_6CF490
0x6C12C7: mov     eax, large fs:0
0x6C12CD: push    eax
0x6C12CE: push    ebx
0x6C12CF: push    ebp
0x6C12D0: push    esi
0x6C12D1: push    edi
0x6C12D2: mov     eax, ds:0B30AACh
0x6C12D7: xor     eax, esp
0x6C12D9: push    eax
0x6C12DA: lea     eax, [esp+20h+var_C]
0x6C12DE: mov     large fs:0, eax
0x6C12E4: mov     edi, [esp+20h+size]
0x6C12E8: xor     ecx, ecx
0x6C12EA: mov     eax, edi
0x6C12EC: mov     edx, 40h ; '@'
0x6C12F1: mul     edx
0x6C12F3: seto    cl
0x6C12F6: neg     ecx
0x6C12F8: or      ecx, eax
0x6C12FA: xor     eax, eax
0x6C12FC: add     ecx, 4
0x6C12FF: setb    al
0x6C1302: neg     eax
0x6C1304: or      eax, ecx
0x6C1306: push    eax; Size
0x6C1307: call    FormHeapAlloc
0x6C130C: add     esp, 4
0x6C130F: mov     [esp+20h+size], eax
0x6C1313: test    eax, eax
0x6C1315: mov     [esp+20h+var_4], 0
0x6C131D: jz      short loc_6C133B
0x6C131F: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C1324: push    offset sub_6C0AD0; a4
0x6C1329: push    edi; size
0x6C132A: lea     esi, [eax+4]
0x6C132D: push    40h ; '@'; a2
0x6C132F: push    esi; a1
0x6C1330: mov     [eax], edi
0x6C1332: call    ArrayConstructor
0x6C1337: mov     ebp, esi
0x6C1339: jmp     short loc_6C133D
0x6C133B: xor     ebp, ebp
0x6C133D: test    edi, edi
0x6C133F: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6C1347: jbe     short loc_6C1360
0x6C1349: mov     ebx, [esp+20h+arg_0]
0x6C134D: mov     esi, ebp
0x6C134F: nop
0x6C1350: push    ebx
0x6C1351: mov     ecx, esi
0x6C1353: call    sub_6C11C0
0x6C1358: add     esi, 40h ; '@'
0x6C135B: sub     edi, 1
0x6C135E: jnz     short loc_6C1350
0x6C1360: mov     eax, ebp
0x6C1362: mov     ecx, [esp+20h+var_C]
0x6C1366: mov     large fs:0, ecx
0x6C136D: pop     ecx
0x6C136E: pop     edi
0x6C136F: pop     esi
0x6C1370: pop     ebp
0x6C1371: pop     ebx
0x6C1372: add     esp, 0Ch
0x6C1375: retn
