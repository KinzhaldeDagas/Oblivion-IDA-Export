0x4158F1: mov     eax, [esp+arg_20]
0x4158F5: mov     ecx, [esp+arg_18]
0x4158F9: mov     edx, [esp+arg_1C]
0x4158FD: add     esp, 0Ch
0x415900: mov     [esi+88h], eax
0x415906: movzx   eax, word ptr [esi+6Ch]
0x41590A: test    ax, ax
0x41590D: mov     [esi+70h], edi
0x415910: pop     edi
0x415911: mov     [esi+80h], ecx
0x415917: mov     ecx, [esp-10h+arg_24]
0x41591B: mov     [esi+78h], ebp
0x41591E: pop     ebp
0x41591F: mov     [esi+7Ch], ebx
0x415922: mov     [esi+84h], edx
0x415928: mov     [esi+8Ch], ecx
0x41592E: pop     ebx
0x41592F: jz      short EffectSetting_SaveFormChunks___Done
0x415931: mov     ecx, [esi+9Ch]
0x415937: test    ecx, ecx
0x415939: jz      short EffectSetting_SaveFormChunks___Done
