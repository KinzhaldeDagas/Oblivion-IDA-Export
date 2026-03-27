0x4EA580: push    0FFFFFFFFh
0x4EA582: push    offset SEH_71BE30
0x4EA587: mov     eax, large fs:0
0x4EA58D: push    eax
0x4EA58E: push    ebx
0x4EA58F: push    ebp
0x4EA590: push    esi
0x4EA591: push    edi
0x4EA592: mov     eax, ds:0B30AACh
0x4EA597: xor     eax, esp
0x4EA599: push    eax; ArgList
0x4EA59A: lea     eax, [esp+20h+var_C]
0x4EA59E: mov     large fs:0, eax
0x4EA5A4: mov     edi, ecx
0x4EA5A6: mov     eax, [esp+20h+arg_0]
0x4EA5AA: lea     ecx, [eax+8000h]
0x4EA5B0: cmp     ecx, 0FFFFh
0x4EA5B6: ja      loc_4EA643
0x4EA5BC: mov     ebx, [esp+20h+arg_4]
0x4EA5C0: lea     edx, [ebx+8000h]
0x4EA5C6: cmp     edx, 0FFFFh
0x4EA5CC: ja      short loc_4EA643
0x4EA5CE: movsx   eax, ax
0x4EA5D1: shl     eax, 10h
0x4EA5D4: movzx   esi, bx
0x4EA5D7: or      esi, eax
0x4EA5D9: lea     eax, [esp+20h+arg_4]
0x4EA5DD: push    eax
0x4EA5DE: push    esi
0x4EA5DF: mov     ecx, edi
0x4EA5E1: mov     [esp+28h+arg_4], 0
0x4EA5E9: call    NiTMap_GetAt
0x4EA5EE: mov     ebp, [esp+20h+arg_4]
0x4EA5F2: test    ebp, ebp
0x4EA5F4: jnz     short loc_4EA63F
0x4EA5F6: cmp     byte ptr [esp+20h+arg_8], 0
0x4EA5FB: jz      short loc_4EA63F
0x4EA5FD: push    10h; Size
0x4EA5FF: call    FormHeapAlloc
0x4EA604: add     esp, 4
0x4EA607: mov     [esp+20h+arg_8], eax
0x4EA60B: test    eax, eax
0x4EA60D: mov     [esp+20h+var_4], ebp
0x4EA611: jz      short loc_4EA61D
0x4EA613: push    edi
0x4EA614: mov     ecx, eax
0x4EA616: call    sub_4EA3A0
0x4EA61B: jmp     short loc_4EA61F
0x4EA61D: xor     eax, eax
0x4EA61F: mov     cx, word ptr [esp+20h+arg_0]
0x4EA624: mov     [eax+8], cx
0x4EA628: push    eax; a3
0x4EA629: push    esi; a2
0x4EA62A: mov     ecx, edi; this
0x4EA62C: mov     [esp+28h+var_4], 0FFFFFFFFh
0x4EA634: mov     ebp, eax
0x4EA636: mov     [eax+0Ah], bx
0x4EA63A: call    NiTMap_SetAt
0x4EA63F: mov     eax, ebp
0x4EA641: jmp     short loc_4EA652
0x4EA643: push    offset aTryingToGetLod; "Trying to get LOD for invalid world coo"...
0x4EA648: call    PrintError
0x4EA64D: add     esp, 4
0x4EA650: xor     eax, eax
0x4EA652: mov     ecx, [esp+20h+var_C]
0x4EA656: mov     large fs:0, ecx
0x4EA65D: pop     ecx
0x4EA65E: pop     edi
0x4EA65F: pop     esi
0x4EA660: pop     ebp
0x4EA661: pop     ebx
0x4EA662: add     esp, 0Ch
0x4EA665: retn    0Ch
