0x4B52F0: push    ebx
0x4B52F1: mov     ebx, [esp+4+arg_0]
0x4B52F5: push    esi
0x4B52F6: push    ebx
0x4B52F7: mov     esi, ecx
0x4B52F9: call    TESForm_ModifiedFormSize
0x4B52FE: movzx   eax, ax
0x4B5301: push    ebx
0x4B5302: lea     ecx, [esi+70h]
0x4B5305: mov     [esp+0Ch+arg_0], eax
0x4B5309: call    TESValueForm_ModifiedSize
0x4B530E: add     word ptr [esp+8+arg_0], ax
0x4B5313: pop     esi
0x4B5314: test    bl, 4
0x4B5317: pop     ebx
0x4B5318: jz      short loc_4B531F
0x4B531A: add     [esp+arg_0], 1
0x4B531F: mov     ax, word ptr [esp+arg_0]
0x4B5324: retn    4
