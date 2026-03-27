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
0x5AE475: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
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
0x5AE4AE: call    FormHeapFree
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
