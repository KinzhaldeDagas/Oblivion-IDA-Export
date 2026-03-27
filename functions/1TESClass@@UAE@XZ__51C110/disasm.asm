0x51C110: push    0FFFFFFFFh
0x51C112: push    offset ??1TESClass@@UAE@XZ_SEH
0x51C117: mov     eax, large fs:0
0x51C11D: push    eax
0x51C11E: sub     esp, 0Ch
0x51C121: push    esi
0x51C122: push    edi
0x51C123: mov     eax, ds:0B30AACh
0x51C128: xor     eax, esp
0x51C12A: push    eax
0x51C12B: lea     eax, [esp+24h+var_C]
0x51C12F: mov     large fs:0, eax
0x51C135: mov     esi, ecx
0x51C137: mov     [esp+24h+var_10], esi
0x51C13B: lea     edi, [esi+2Ch]
0x51C13E: mov     dword ptr [esi], offset ??_7TESClass@@6BTESClass@@@; const TESClass::`vftable'{for `TESClass'}
0x51C144: mov     dword ptr [esi+18h], offset ??_7TESClass@@6BTESFullName@@@; const TESClass::`vftable'{for `TESFullName'}
0x51C14B: mov     dword ptr [esi+24h], offset ??_7TESClass@@6BTESDescription@@@; const TESClass::`vftable'{for `TESDescription'}
0x51C152: mov     dword ptr [edi], offset ??_7TESClass@@6BTESTexture@@@; const TESClass::`vftable'{for `TESTexture'}
0x51C158: mov     [esp+24h+var_4], 2
0x51C160: call    j_TESForm_ClearComponentReferences
0x51C165: mov     ecx, edi; void *
0x51C167: mov     byte ptr [esp+24h+var_4], 1
0x51C16C: call    TESTexture_destr
0x51C171: mov     eax, [esi+1Ch]
0x51C174: push    eax
0x51C175: call    FormHeapFree
0x51C17A: xor     eax, eax
0x51C17C: add     esp, 4
0x51C17F: mov     ecx, esi; this
0x51C181: mov     [esi+1Ch], eax
0x51C184: mov     [esi+22h], ax
0x51C188: mov     [esi+20h], ax
0x51C18C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x51C194: call    TESForm_destr
0x51C199: mov     ecx, [esp+24h+var_C]
0x51C19D: mov     large fs:0, ecx
0x51C1A4: pop     ecx
0x51C1A5: pop     edi
0x51C1A6: pop     esi
0x51C1A7: add     esp, 18h
0x51C1AA: retn
