0x6C2C60: push    0FFFFFFFFh
0x6C2C62: push    offset SEH_6CF490
0x6C2C67: mov     eax, large fs:0
0x6C2C6D: push    eax
0x6C2C6E: push    ebx
0x6C2C6F: push    ebp
0x6C2C70: push    esi
0x6C2C71: push    edi
0x6C2C72: mov     eax, ds:0B30AACh
0x6C2C77: xor     eax, esp
0x6C2C79: push    eax
0x6C2C7A: lea     eax, [esp+20h+var_C]
0x6C2C7E: mov     large fs:0, eax
0x6C2C84: mov     edi, [esp+20h+size]
0x6C2C88: xor     ecx, ecx
0x6C2C8A: mov     eax, edi
0x6C2C8C: mov     edx, 14h
0x6C2C91: mul     edx
0x6C2C93: seto    cl
0x6C2C96: neg     ecx
0x6C2C98: or      ecx, eax
0x6C2C9A: xor     eax, eax
0x6C2C9C: add     ecx, 4
0x6C2C9F: setb    al
0x6C2CA2: neg     eax
0x6C2CA4: or      eax, ecx
0x6C2CA6: push    eax; Size
0x6C2CA7: call    FormHeapAlloc
0x6C2CAC: add     esp, 4
0x6C2CAF: mov     [esp+20h+size], eax
0x6C2CB3: test    eax, eax
0x6C2CB5: mov     [esp+20h+var_4], 0
0x6C2CBD: jz      short loc_6C2CDB
0x6C2CBF: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C2CC4: push    offset sub_6C0AD0; a4
0x6C2CC9: push    edi; size
0x6C2CCA: lea     esi, [eax+4]
0x6C2CCD: push    14h; a2
0x6C2CCF: push    esi; a1
0x6C2CD0: mov     [eax], edi
0x6C2CD2: call    ArrayConstructor
0x6C2CD7: mov     ebp, esi
0x6C2CD9: jmp     short loc_6C2CDD
0x6C2CDB: xor     ebp, ebp
0x6C2CDD: test    edi, edi
0x6C2CDF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6C2CE7: jbe     short loc_6C2D00
0x6C2CE9: mov     ebx, [esp+20h+arg_0]
0x6C2CED: mov     esi, ebp
0x6C2CEF: nop
0x6C2CF0: push    ebx
0x6C2CF1: mov     ecx, esi
0x6C2CF3: call    sub_6BD510
0x6C2CF8: add     esi, 14h
0x6C2CFB: sub     edi, 1
0x6C2CFE: jnz     short loc_6C2CF0
0x6C2D00: mov     eax, ebp
0x6C2D02: mov     ecx, [esp+20h+var_C]
0x6C2D06: mov     large fs:0, ecx
0x6C2D0D: pop     ecx
0x6C2D0E: pop     edi
0x6C2D0F: pop     esi
0x6C2D10: pop     ebp
0x6C2D11: pop     ebx
0x6C2D12: add     esp, 0Ch
0x6C2D15: retn
