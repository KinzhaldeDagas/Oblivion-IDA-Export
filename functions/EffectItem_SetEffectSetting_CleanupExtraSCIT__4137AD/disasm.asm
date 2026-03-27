0x4137AD: mov     edi, [esi+18h]
0x4137B0: cmp     edi, ebx
0x4137B2: jz      short EffectItem_SetEffectSetting___InitEffectItemData
0x4137B4: cmp     dword ptr [ebp+98h], 46464553h
0x4137BE: jz      short EffectItem_SetEffectSetting___InitEffectItemData
0x4137C0: mov     edx, [edi+8]
0x4137C3: push    edx
0x4137C4: call    FormHeapFree
0x4137C9: push    edi
0x4137CA: mov     [edi+8], ebx
0x4137CD: mov     [edi+0Eh], bx
0x4137D1: mov     [edi+0Ch], bx
0x4137D5: call    FormHeapFree
0x4137DA: add     esp, 8
0x4137DD: mov     [esi+18h], ebx
