0x5AE450: push    0FFFFFFFFh
0x5AE452: push    offset ??0LoadgameMenu@@QAE@XZ_SEH
0x5AE457: mov     eax, large fs:0
0x5AE45D: push    eax
0x5AE45E: push    ecx
0x5AE45F: push    ebx
0x5AE460: push    esi
0x5AE461: mov     eax, ds:0B30AACh
0x5AE466: xor     eax, esp
0x5AE468: push    eax
0x5AE469: lea     eax, [esp+1Ch+var_C]
0x5AE46D: mov     large fs:0, eax
0x5AE473: mov     esi, ecx
0x5AE475: call    ??0Menu@@QAE@XZ; Verified constructor sets ownsTemplates byte+0x1C=1, template list+8/+0xC empty, templateContextTile+0x10=NULL, fadeState+0x24=4. Other fields retain prior names when semantics not established.
0x5AE47A: xor     ebx, ebx
0x5AE47C: mov     dword ptr [esi], offset ??_7LoadgameMenu@@6B@; const LoadgameMenu::`vftable'
0x5AE482: mov     [esi+5Ch], ebx
0x5AE485: mov     [esi+60h], bx
0x5AE489: mov     [esi+62h], bx
0x5AE48D: fldz
0x5AE48F: fstp    dword ptr [esi+50h]
0x5AE492: mov     [esi+28h], ebx
0x5AE495: mov     [esi+34h], ebx
0x5AE498: mov     [esi+38h], ebx
0x5AE49B: mov     [esi+30h], ebx
0x5AE49E: mov     [esi+2Ch], ebx
0x5AE4A1: mov     [esi+54h], ebx
0x5AE4A4: mov     [esi+4Ch], ebx
0x5AE4A7: mov     [esi+58h], ebx
0x5AE4AA: mov     eax, [esi+5Ch]
0x5AE4AD: push    eax
0x5AE4AE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5AE4B3: mov     [esi+5Ch], ebx
0x5AE4B6: mov     [esi+62h], bx
0x5AE4BA: mov     [esi+60h], bx
0x5AE4BE: add     esp, 4
0x5AE4C1: mov     [esi+64h], bl
0x5AE4C4: mov     eax, esi
0x5AE4C6: mov     ecx, [esp+1Ch+var_C]
0x5AE4CA: mov     large fs:0, ecx
0x5AE4D1: pop     ecx
0x5AE4D2: pop     esi
0x5AE4D3: pop     ebx
0x5AE4D4: add     esp, 10h
0x5AE4D7: retn
0x9C0800: mov     ecx, [ebp-10h]; this
0x9C0803: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C0808: mov     ecx, [ebp-10h]
0x9C080B: add     ecx, 5Ch ; '\'; void *
0x9C080E: jmp     BSStringT_Clear
0x9C0813: mov     edx, [esp+arg_4]
0x9C0817: lea     eax, [edx-0Ch]
0x9C081A: mov     ecx, [edx-10h]
0x9C081D: xor     ecx, eax
0x9C081F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0824: mov     eax, offset stru_AE9A68
0x9C0829: jmp     ___CxxFrameHandler3
